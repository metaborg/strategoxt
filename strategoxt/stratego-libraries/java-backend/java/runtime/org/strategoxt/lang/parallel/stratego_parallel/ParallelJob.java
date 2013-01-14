package org.strategoxt.lang.parallel.stratego_parallel;

import static java.lang.Math.*;
import static org.strategoxt.lang.parallel.stratego_parallel.stratego_parallel.*;

import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.concurrent.atomic.AtomicReference;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class ParallelJob implements Runnable, Comparable<ParallelJob> {
	
	public static final int COMPLETED_FOCUS_INDEX = Integer.MAX_VALUE;
	
	private final Context parentContext;
	
	private final Strategy strategy;
	
	private final IStrategoTerm[] inputs;
	
	private final IStrategoTerm[] outputs;
	
	private final AtomicInteger focusIndex;
	
	private final AtomicBoolean isAborted;
	
	private final AtomicReference<String> lastSynchronousOperation;
	
	private final AtomicReference<Throwable> lastException;
	
	private final boolean allowUnordered;
	
	private final int startIndex;
	
	private final int jobLength;
	
	private final int parallelismLevel;
	
	private final AtomicInteger jobsCompleted;
	
	private boolean isFocusJob;
	
	/**
	 * Constructs a new parallel job.
	 * 
	 * @param inputs		The inputs for this job.
	 * @param outputs		The outputs for this job.
	 * @param startIndex	The starting index in <code>inputs</code> to process.
	 * @param jobLength		The number of entries in <code>inputs</code> to process.
	 * @param focusIndex	The index of the focus job.
	 */
	public ParallelJob(Context parentContext, Strategy strategy, IStrategoTerm[] inputs,
			IStrategoTerm[] outputs, AtomicInteger focusIndex,
			AtomicBoolean isAborted,
			AtomicReference<String> lastSynchronousOperation,
			AtomicReference<Throwable> lastException, boolean allowUnordered,
			int startIndex, int jobLength, int parallelismLevel, AtomicInteger jobsCompleted) {
		
		// TODO: put fields shared accross jobs in a separate configuration object?
		this.parentContext = parentContext;
		this.strategy = strategy;
		this.inputs = inputs;
		this.outputs = outputs;
		this.focusIndex = focusIndex;
		this.isAborted = isAborted;
		this.lastSynchronousOperation = lastSynchronousOperation;
		this.lastException = lastException;
		this.allowUnordered = allowUnordered;
		
		this.startIndex = startIndex;
		this.jobLength = jobLength;
		this.parallelismLevel = parallelismLevel;
		this.jobsCompleted = jobsCompleted;
	}

	public final void run() {
		if (VERBOSE) System.out.print('.');
		int end = min(inputs.length, startIndex + jobLength);
		
		ParallelContext context = new ParallelContext(parentContext, this, isAborted, allowUnordered);
			
		for (int i = startIndex; i < end; i++) {
			IStrategoTerm result = execute(context, inputs[i]);
			if (result == null) break;
			outputs[i] = result;
		}
		
		if (VERBOSE && !isFocusJob)
			System.out.print('!');
		
		updateFocusIndex();
		
		synchronized(jobsCompleted) {
			jobsCompleted.incrementAndGet();
			jobsCompleted.notifyAll();
		}
		
		if (ADJUST_FOCUS_THREAD_PRIORITY) {
			Thread thread = Thread.currentThread();
			if (thread.getPriority() != Thread.NORM_PRIORITY)
				thread.setPriority(Thread.NORM_PRIORITY);
		}
	}
	
	public final AtomicInteger getFocusIndex() {
		return focusIndex;
	}
	
	/**
	 * Gets the object used to dispatch wait/notify events about the focus index.
	 */
	protected final Object getFocusIndexMonitor() {
		return focusIndex;
	}
	
	public final int getStartIndex() {
		return startIndex;
	}

	/**
	 * Updates the focus index to that of the youngest, non-completed job,
	 */
	private void updateFocusIndex() {
		if (focusIndex.get() == COMPLETED_FOCUS_INDEX) return;
		
		/*
		// HACK: removed synchronized here for now, using CaS instead
		// synchronized here ensures ordered writes to 'outputs'
		//synchronized (getFocusIndexMonitor()) {
			int oldFocusIndex = focusIndex.get();
			if (oldFocusIndex == COMPLETED_FOCUS_INDEX) return;
			int currentFocusIndex = oldFocusIndex;
			int newFocusIndex = oldFocusIndex;
			
			while (newFocusIndex < outputs.length) {
				int lastJob = min(newFocusIndex + jobLength, outputs.length) - 1;
				if (newFocusIndex > oldFocusIndex) {
					// focusIndex.set(newFocusIndex); // HACK
					while (!focusIndex.compareAndSet(currentFocusIndex, newFocusIndex)) {
						if (focusIndex.get() > newFocusIndex)
							return;
					}
					currentFocusIndex = newFocusIndex;
				}
				if (outputs[lastJob] == null) {
					if (newFocusIndex > oldFocusIndex) {
						synchronized (getFocusIndexMonitor()) { // HACK
						getFocusIndexMonitor().notifyAll();
						}
					}
					return;
				}
				newFocusIndex += jobLength;
			}
			
			focusIndex.set(COMPLETED_FOCUS_INDEX);
			synchronized (getFocusIndexMonitor()) { // HACK
				getFocusIndexMonitor().notifyAll();
			}
		//}
		 */
		focusIndex.set(COMPLETED_FOCUS_INDEX);
		if (VERBOSE) System.out.print(">");
	}
	
	public IStrategoTerm execute(ParallelContext context, IStrategoTerm input) {
		if (isAborted.get()) return null;

		IStrategoTerm result = null;
		try {
			if (DIAGNOSE_SYNCHRONOUS_OPERATIONS)
				context.setLastSynchronousOperation(lastSynchronousOperation);
			result = strategy.invoke(context, input);
			
		} catch (ParallelJobAbortedException e) {
			// Fine here
		} catch (RuntimeException e) {
			lastException.set(e);
		} catch (Error e) {
			lastException.set(e);
		}
		
		if (result == null) {
			isAborted.set(true);
			getFocusIndex().set(COMPLETED_FOCUS_INDEX);
			if (ALLOW_NESTED_JOBS) {
				// TODO: ALLOW_NESTED_JOBS: Not sure what to do in this case
			} else {
				ParallelAll.instance.getExecutor().getQueue().clear();
			}
			if (VERBOSE) System.out.print("@>");
			synchronized (getFocusIndexMonitor()) {
				getFocusIndexMonitor().notifyAll();
			}
		}
		
		return result;
	}
	
	/**
	 * Checks if the current job is executed in the focus thread.
	 * 
	 * @return <code>true</code> if the job is executed in the focus thread.
	 */
	public boolean isFocusJob() {
		return isFocusJob || focusIndex.get() == startIndex;
	}
	
	/**
	 * Waits until the current thread is the focus thread.
	 * Must be called form the thread that owns this job.
	 */
	public void waitForFocus() throws InterruptedException {
		if (!isFocusJob) {
			waitForFocusIndexAndComplain();
			if (ADJUST_FOCUS_THREAD_PRIORITY)
				Thread.currentThread().setPriority(Thread.MAX_PRIORITY);
			isFocusJob = true;
		}
	}

	private void waitForFocusIndexAndComplain() throws InterruptedException {
		System.out.print("$?");
		if (focusIndex.get() < startIndex) {
			Object monitor = getFocusIndexMonitor();
			synchronized (monitor) {
				updateFocusIndex();
				while (focusIndex.get() < startIndex) {
					if (VERBOSE) System.out.print('$');
					monitor.wait();
				}
			}
		}
	}

	protected void waitForCompletedFocusIndex() throws InterruptedException {
		int SPINWAIT_CYCLES = 1000;
		for (int i = 0; i < SPINWAIT_CYCLES; i++) {
			if (focusIndex.get() == COMPLETED_FOCUS_INDEX) return;
		}
		System.out.print("$??");
		Object monitor = getFocusIndexMonitor();
		synchronized (monitor) {
			while (focusIndex.get() != COMPLETED_FOCUS_INDEX) {
				monitor.wait();
			}
		}
	}
	
	public int compareTo(ParallelJob o) {
		if (parallelismLevel > o.parallelismLevel) {
			return -1;
		} else if (parallelismLevel == o.parallelismLevel) {
			return startIndex < o.startIndex
					? -1
					: startIndex == o.startIndex ? 0 : 1;
		} else {
			return 1;
		}
	}
}
