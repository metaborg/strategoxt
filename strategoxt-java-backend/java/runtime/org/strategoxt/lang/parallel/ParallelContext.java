package org.strategoxt.lang.parallel;

import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicReference;

import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

import static org.strategoxt.lang.parallel.libstratego_parallel.*;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class ParallelContext extends Context {
	
	private final ParallelJobExecutor executor;
	
	private final ParallelJob job;
	
	private final AtomicBoolean isAborted;
	
	private final boolean allowUnordered;
	
	private AtomicReference<String> lastSynchronousOperation;

	/**
	 * Constructs a new parallelism-aware context.
	 * 
	 * @param context
	 * @param executor
	 * @param job
	 * @param aborted
	 * @param allowUnordered
	 *            Allows all threads to use any operation, using locks for
	 *            non-whitelisted ones.
	 */
	public ParallelContext(Context context, ParallelJobExecutor executor, ParallelJob job, AtomicBoolean aborted, boolean allowUnordered) {
		super(context.getFactory(), context.getIOAgent(), context.getOperatorRegistryMap(), context.getOperatorRegistries());
		this.executor = executor;
		this.job = job;
		this.isAborted = aborted;
		this.allowUnordered = allowUnordered;
	}
	
	void setLastSynchronousOperation(AtomicReference<String> value) {
		this.lastSynchronousOperation = value;
	}
	
	/* UNDONE: expensive according to profiler
	@Override
	public void popOnFailure() {
		if (isAborted.get() && !job.isFocusJob())
			throw new ParallelJobAbortedException();
		super.popOnFailure();
	}
	*/
	
	@Override
	protected void finalize() throws Throwable {
		// Do nothing
	}
	
	@Override
	public IStrategoTerm invokePrimitive(AbstractPrimitive primitive, IStrategoTerm term, Strategy[] args, IStrategoTerm[] targs) {
		if (isAborted.get() && !job.isFocusJob())
			throw new ParallelJobAbortedException();
		
		String name = primitive.getName();
		
		if (!DIAGNOSE_SYNCHRONOUS_OPERATIONS && job.isFocusJob())
			return super.invokePrimitive(primitive, term, args, targs);
		
		if (PureOperatorSet.isWhiteListed(name))
			return super.invokePrimitive(primitive, term, args, targs);
		
		if (DIAGNOSE_SYNCHRONOUS_OPERATIONS) {
			if (lastSynchronousOperation.get() == null)
				lastSynchronousOperation.set(name);
		}
		
		if (allowUnordered) {
			synchronized (executor) {
				return super.invokePrimitive(primitive, term, args, targs);
			}
		}
		
		// If all else fails, perform any "black-listed" operations in an ordered fashion
		waitForFocus();
		
		return super.invokePrimitive(primitive, term, args, targs);
	}
	
	public ParallelJob getJob() {
		return job;
	}
	
	/**
	 * Puts the current thread into an idle state until it becomes the focus thread.
	 */
	public void waitForFocus() {
		executor.asyncBeginSleep();
		try {
			job.waitForFocus();
			if (isAborted.get() && !job.isFocusJob())
				throw new ParallelJobAbortedException();
		} catch (InterruptedException e) {
			throw new RuntimeException(e);
		} finally {
			executor.asyncEndSleep();
		}
	}
}
