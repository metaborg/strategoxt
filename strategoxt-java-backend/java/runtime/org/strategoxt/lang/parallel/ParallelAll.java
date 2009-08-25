package org.strategoxt.lang.parallel;

import static java.lang.Math.*;
import static org.spoofax.interpreter.terms.IStrategoTerm.*;
import static org.strategoxt.lang.parallel.ParallelJob.*;

import java.util.WeakHashMap;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.concurrent.atomic.AtomicReference;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.SRTS_all;
import org.strategoxt.lang.StrategoException;
import org.strategoxt.lang.StrategoExit;
import org.strategoxt.lang.Strategy;

import static org.strategoxt.lang.parallel.libstratego_parallel.*;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class ParallelAll extends SRTS_all {

	/**
	 * Gets the active ParallelAll instance, or null.
	 * Is set by {@link libstratego_parallel#init(Context)}.
	 */
	public static ParallelAll instance;
	
	private static final WeakHashMap<IStrategoTerm, Integer> termSizes =
		new WeakHashMap<IStrategoTerm, Integer>();
	
	private final ParallelJobExecutor executor = new ParallelJobExecutor();
	
	private int termSizeThreshold = DEFAULT_TERM_SIZE_THRESHOLD;

	private int subtermCountThreshold = DEFAULT_SUBTERM_COUNT_THRESHOLD;
	
	private double jobLengthMultiplier = DEFAULT_JOB_LENGTH_MULTIPLIER;

	private AtomicInteger parallelismLevel = new AtomicInteger(0);
	
	private volatile boolean allowUnorderedOnce;
	
	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s) {
		// TODO: The focus thread could actually start more jobs, given a priority job queue
		// TODO: Only trigger invokeParallel if synchronous execution takes longer than a certain threshold
		if (ENABLED && (ALLOW_NESTED_JOBS || !libstratego_parallel.isActive()) && isCandidateTerm(context, current)) {
			context.push("<parallel>");
			IStrategoTerm result = invokeParallel(context, current, s);
			
			if (result == null) context.popOnFailure();
			else context.popOnSuccess();
			
			return result;
		} else {
			return super.invoke(context, current, s);
		}
	}

	public IStrategoTerm invokeParallel(final Context context, final IStrategoTerm current, final Strategy s) {
		// TODO: Cleanup - method got too long!!
		final IStrategoTerm[] inputs = current.getAllSubterms();
		final IStrategoTerm[] outputs = new IStrategoTerm[inputs.length];
		final AtomicInteger focusIndex = new AtomicInteger(0); // index of the job with side effects
		final AtomicBoolean isAborted = new AtomicBoolean(false);
		final AtomicReference<String> lastSynchronousOperation = DIAGNOSE_SYNCHRONOUS_OPERATIONS ? new AtomicReference<String>() : null;
		final AtomicReference<Throwable> exception = new AtomicReference<Throwable>();
		final Object notifier = new Object();
		final boolean allowUnordered;
		
		ParallelJob firstJob = null;
		
		if (ALLOW_NESTED_JOBS) {
			int level = parallelismLevel.incrementAndGet();
			// We can only do this if there are no other parallel jobs active,
			// otherwise we'd get confused about the place unordered is allowed
			allowUnordered = level == 1 && allowUnorderedOnce;
			allowUnorderedOnce = false;
		} else {
			libstratego_parallel.setActive(true);
			allowUnordered = allowUnorderedOnce;
			allowUnorderedOnce = false;
		}
		
		try {
			double jobLengthPrecise = (double) inputs.length / (executor.getMaximumPoolSize() + 1) * jobLengthMultiplier;
			int jobLength = max(1, (int) jobLengthPrecise);
			
			if (VERBOSE)
				System.out.print("<" + inputs.length / jobLength);
			
			// Populate thread pool
			for (int i = 0; i < inputs.length; i += jobLength) {
				final int index = i;
				ParallelJob job = new ParallelJob(inputs, outputs, index, jobLength, parallelismLevel.get(), focusIndex, notifier) {
					@Override
					public IStrategoTerm execute(IStrategoTerm input) {
						if (isAborted.get()) return null;

						IStrategoTerm result = null;
						try {
							ParallelContext parallelContext = new ParallelContext(context, executor, this, isAborted, allowUnordered);
							if (DIAGNOSE_SYNCHRONOUS_OPERATIONS)
								parallelContext.setLastSynchronousOperation(lastSynchronousOperation);
							result = s.invoke(parallelContext, input);
							
						} catch (ParallelJobAbortedException e) {
							// Fine here
						} catch (RuntimeException e) {
							exception.set(e);
						} catch (Error e) {
							exception.set(e);
						}
						
						if (result == null) {
							isAborted.set(true);
							getFocusIndex().set(COMPLETED_FOCUS_INDEX);
							executor.getQueue().clear();
							synchronized (notifier) {
								if (VERBOSE) System.out.print("!>");
								notifier.notifyAll();
							}
						}
						
						return result;
					}
				};
				
				if (firstJob == null) {
					firstJob = job;
				} else {
					executor.execute(job);
				}
			}
			
			assert firstJob != null;
			firstJob.run();

			joinExecutor(focusIndex, notifier);
		} catch (InterruptedException e) {
			throw new RuntimeException(e);
		} finally {
			if (ALLOW_NESTED_JOBS) parallelismLevel.decrementAndGet();
			else libstratego_parallel.setActive(false);
		}
		
		if (DIAGNOSE_SYNCHRONOUS_OPERATIONS) {
			System.out.print("(" + s.getName() + (lastSynchronousOperation.get() == null ? "+" : "-" + lastSynchronousOperation) + ")");
		}
		
		if (isAborted.get()) {
			if (exception.get() != null) {
				if (exception.get() instanceof StrategoExit) {
					throw new StrategoExit((StrategoExit) exception.get());
				} else {
					throw new StrategoException("Exception in asynchronous job", exception.get());
				}
			}
			return null;
		}
		
		assert current.getTermType() == LIST;
		return context.getFactory().replaceList(outputs, (IStrategoList) current);
	}
	
	public void setAllowUnorderedOnce(boolean allowUnorderedOnce) {
		this.allowUnorderedOnce = allowUnorderedOnce;
	}

	private void joinExecutor(AtomicInteger focusIndex, Object notifier) throws InterruptedException {
		// Help the thread pool
		Runnable job;
		while ((job = executor.getQueue().poll()) != null) {
			job.run();
		}
		
		// Wait for other threads
		ParallelJob.waitForFocusIndex(focusIndex, COMPLETED_FOCUS_INDEX, notifier);
	}
	
	protected boolean isCandidateTerm(Context context, IStrategoTerm term) {
		if (term.getTermType() == LIST
				&& term.getStorageType() != MUTABLE
				&& term.getSubtermCount() >= subtermCountThreshold
				&& getTermSize(term, 1) >= termSizeThreshold) {

			if (parallelismLevel.get() > 2) {
				return false;
			}

			if (parallelismLevel.get() > 1 && !((ParallelContext) context).getJob().isFocusJob()) {
				return false;
			}
			
			for (IStrategoList cons = (IStrategoList) term; !cons.isEmpty(); cons = cons.tail()) {
				if (!cons.getAnnotations().isEmpty())
					return false;
			}
			return true;
		} else {
			return false;
		}
	}
	
	/**
	 * Gets the size of a term (using a cache).
	 * Stops counting if {@link #termSizeThreshold} is reached.
	 */
	protected int getTermSize(IStrategoTerm term, int initialSize) {
		int subtermCount = term.getSubtermCount();
		if (subtermCount == 0) return initialSize;

		Integer cached = termSizes.get(term);
		if (cached != null) return initialSize + cached;

		int size = initialSize + subtermCount;
		
		if (term.getTermType() == LIST) {
			for (IStrategoList cons = (IStrategoList) term; !cons.isEmpty(); cons = cons.tail()) {
				IStrategoTerm subterm = cons.head();
				size = getTermSize(subterm, size);
				if (size >= termSizeThreshold) {
					termSizes.put(term, size);
					return size;
				}
			}
		} else {
			for (int i = 0; i < subtermCount; i++) {
				IStrategoTerm subterm = term.getSubterm(i);
				size = getTermSize(subterm, size);
				if (size >= termSizeThreshold) {
					termSizes.put(term, size);
					return size;
				}
			}
		}
		
		termSizes.put(term, size);
		return size;
	} 
}
