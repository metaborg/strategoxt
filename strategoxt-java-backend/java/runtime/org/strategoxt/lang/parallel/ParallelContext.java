package org.strategoxt.lang.parallel;

import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicReference;

import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.IStrategy;
import static org.strategoxt.lang.parallel.libstratego_parallel.*;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class ParallelContext extends Context {
	
	private final ParallelJobExecutor executor;
	
	private final ParallelJob job;
	
	private final AtomicBoolean isAborted;
	
	private final boolean allowUnordered;
	
	private final boolean allowGrayListed;
	
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
	 * @param allowGrayListed
	 *            Allows all threads to use white-listed and gray-listed
	 *            operations in parallel, without locks. Using other
	 *            operations will break the program.
	 */
	public ParallelContext(Context context, ParallelJobExecutor executor, ParallelJob job, AtomicBoolean aborted, boolean allowUnordered, boolean allowGrayListed) {
		super(context.getFactory(), context.getOperatorRegistryMap(), context.getOperatorRegistries());
		this.executor = executor;
		this.job = job;
		this.isAborted = aborted;
		this.allowUnordered = allowUnordered;
		this.allowGrayListed = allowGrayListed;
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
	public void postInit(String componentName) {
		// Do nothing
	}
	
	@Override
	protected void finalize() throws Throwable {
		// Do nothing
	}
	
	@Override
	public IStrategoTerm invokePrimitive(AbstractPrimitive primitive, IStrategoTerm term, IStrategy[] args, IStrategoTerm[] targs) {
		if (isAborted.get() && !job.isFocusJob())
			throw new ParallelJobAbortedException();
		
		String name = primitive.getName();
		
		if (!DIAGNOSE_SYNCHRONOUS_OPERATIONS && job.isFocusJob())
			return super.invokePrimitive(primitive, term, args, targs);
		
		if (PureOperatorSet.isWhiteListed(name))
			return super.invokePrimitive(primitive, term, args, targs);
		
		if (DIAGNOSE_SYNCHRONOUS_OPERATIONS) {
			if (lastSynchronousOperation.get() == null && !PureOperatorSet.isGrayListed(name))
				lastSynchronousOperation.set(name);
		}
		
		if (allowUnordered) {
			synchronized (executor) {
				return super.invokePrimitive(primitive, term, args, targs);
			}
		}
		
		if (allowGrayListed) {
			if (PureOperatorSet.isGrayListed(name))
				return super.invokePrimitive(primitive, term, args, targs);
			else
				throw new IllegalStateException("Uses non-graylisted operation: " + name);
		}
		
		// If all else fails, perform any "black-listed" operations in an ordered fashion
		waitForFocus();
		
		return super.invokePrimitive(primitive, term, args, targs);
	}
	
	public ParallelJob getJob() {
		return job;
	}
	
	private void waitForFocus() {
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
