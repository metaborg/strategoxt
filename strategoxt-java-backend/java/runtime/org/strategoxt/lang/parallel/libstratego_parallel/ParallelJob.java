package org.strategoxt.lang.parallel.libstratego_parallel;

import static java.lang.Math.*;
import static org.strategoxt.lang.parallel.libstratego_parallel.libstratego_parallel.*;

import java.util.concurrent.atomic.AtomicInteger;

import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public abstract class ParallelJob implements Runnable, Comparable<ParallelJob> {
	
	public static final int COMPLETED_FOCUS_INDEX = Integer.MAX_VALUE;
	
	private final IStrategoTerm[] inputs;
	
	private final IStrategoTerm[] outputs;
	
	private final int startIndex;
	
	private final int jobLength;
	
	private final int parallelismLevel;
	
	private final AtomicInteger focusIndex;
	
	private final Object notifier;
	
	private boolean isFocusJob;
	
	/**
	 * Constructs a new parallel job.
	 * 
	 * @param inputs		The inputs for this job.
	 * @param outputs		The outputs for this job.
	 * @param startIndex	The starting index in <code>inputs</code> to process.
	 * @param jobLength		The number of entries in <code>inputs</code> to process.
	 * @param focusIndex	The index of the focus job.
	 * @param notifier		An object used for synchronization and event notification.
	 */
	public ParallelJob(IStrategoTerm[] inputs, IStrategoTerm[] outputs,
			int startIndex, int jobLength, int parallelismLevel, AtomicInteger focusIndex, Object notifier) {
		
		this.inputs = inputs;
		this.outputs = outputs;
		this.startIndex = startIndex;
		this.jobLength = jobLength;
		this.parallelismLevel = parallelismLevel;
		this.focusIndex = focusIndex;
		this.notifier = notifier;
	}

	public final void run() {
		if (VERBOSE) System.out.print('.');
		int end = min(inputs.length, startIndex + jobLength);
			
		for (int i = startIndex; i < end; i++) {
			IStrategoTerm result = execute(inputs[i]);
			if (result == null) break;
			outputs[i] = result;
		}
		
		if (VERBOSE && !isFocusJob)
			System.out.print('!');
		
		updateFocusIndex();
		
		if (ADJUST_FOCUS_THREAD_PRIORITY) {
			Thread thread = Thread.currentThread();
			if (thread.getPriority() != Thread.NORM_PRIORITY)
				thread.setPriority(Thread.NORM_PRIORITY);
		}
	}
	
	public AtomicInteger getFocusIndex() {
		return focusIndex;
	}

	private void updateFocusIndex() {
		if (focusIndex.get() == COMPLETED_FOCUS_INDEX) return;
		
		// synchronized here ensures ordered writes to 'outputs'
		synchronized (notifier) {
			int oldFocusIndex = focusIndex.get();
			if (oldFocusIndex == COMPLETED_FOCUS_INDEX) return;
			int newFocusIndex = oldFocusIndex;
			
			while (newFocusIndex < outputs.length) {
				int lastJob = min(newFocusIndex + jobLength, outputs.length) - 1;
				if (newFocusIndex > oldFocusIndex) {
					focusIndex.set(newFocusIndex);
				}
				if (outputs[lastJob] == null) {
					if (newFocusIndex > oldFocusIndex) {
						notifier.notifyAll();
					}
					return;
				}
				newFocusIndex += jobLength;
			}
			
			focusIndex.set(COMPLETED_FOCUS_INDEX);
			if (VERBOSE) System.out.print(">");
			notifier.notifyAll();
		}
	}
	
	public abstract IStrategoTerm execute(IStrategoTerm input);
	
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
			waitForFocusIndexEagerly();
			if (ADJUST_FOCUS_THREAD_PRIORITY)
				Thread.currentThread().setPriority(Thread.MAX_PRIORITY);
			isFocusJob = true;
		}
	}

	private void waitForFocusIndexEagerly() throws InterruptedException {
		if (focusIndex.get() < startIndex) {
			synchronized (notifier) {
				updateFocusIndex();
				while (focusIndex.get() < startIndex) {
					if (VERBOSE) System.out.print('$');
					notifier.wait();
				}
			}
		}
	}

	protected static void waitForFocusIndex(AtomicInteger focusIndex, int index, Object notifier) throws InterruptedException {
		if (focusIndex.get() < index) {
			synchronized (notifier) {
				while (focusIndex.get() < index) {
					notifier.wait();
				}
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
