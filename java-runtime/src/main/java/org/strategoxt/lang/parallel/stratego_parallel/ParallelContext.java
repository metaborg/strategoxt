package org.strategoxt.lang.parallel.stratego_parallel;

import static org.strategoxt.lang.parallel.stratego_parallel.stratego_parallel.DIAGNOSE_SYNCHRONOUS_OPERATIONS;

import java.util.HashMap;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicReference;

import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.library.IOperatorRegistry;
import org.spoofax.interpreter.library.ssl.SSLLibrary;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class ParallelContext extends Context {
	
	private final Context innerContext;
	
	private final ParallelJob job;
	
	private final AtomicBoolean isAborted;
	
	private final boolean allowUnordered;
	
	private AtomicReference<String> lastSynchronousOperation;

	/**
	 * Constructs a new parallelism-aware context.
	 * 
	 * @param context
	 * @param job
	 * @param aborted
	 * @param allowUnordered
	 *            Allows all threads to use any operation, using locks for
	 *            non-whitelisted ones.
	 */
	public ParallelContext(Context context, ParallelJob job, AtomicBoolean aborted, boolean allowUnordered) {
		super(context.getFactory(), new HashMap<String, IOperatorRegistry>(context.getOperatorRegistries()), true);
		this.innerContext = context;
		this.job = job;
		this.isAborted = aborted;
		this.allowUnordered = allowUnordered;
		
		SSLLibrary lib = new SSLLibrary();
		lib.setIOAgent(context.getIOAgent());
		addOperatorRegistry(lib);
	}
	
	void setLastSynchronousOperation(AtomicReference<String> value) {
		this.lastSynchronousOperation = value;
	}
	
	public Context getInnerContext() {
		return innerContext;
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
			synchronized(ParallelContext.class) {
				return super.invokePrimitive(primitive, term, args, targs);
			}
		}

		// If all else fails, perform any "black-listed" operations in an ordered fashion
		waitForFocus();
		
		synchronized (ParallelAll.instance.getExecutor()) {
			return super.invokePrimitive(primitive, term, args, targs);
		}
	}
	
	public final ParallelJob getJob() {
		return job;
	}
	
	/**
	 * Puts the current thread into an idle state until it becomes the focus thread.
	 * 
	 * @see ParallelJob#isFocusJob()
	 */
	public void waitForFocus() {
		// HACK: no waiting for focus if allowUnordered true
		if (allowUnordered || job.isFocusJob())
			return;
		
		ParallelJobExecutor executor = ParallelAll.instance.getExecutor();
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
