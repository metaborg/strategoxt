package org.strategoxt.lang.parallel.stratego_parallel;

import static org.spoofax.interpreter.terms.IStrategoTerm.*;
import static org.strategoxt.lang.parallel.stratego_parallel.stratego_parallel.*;

import java.util.WeakHashMap;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.concurrent.atomic.AtomicReference;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.RegisteringStrategy;
import org.strategoxt.lang.SRTS_all;
import org.strategoxt.lang.StrategoException;
import org.strategoxt.lang.StrategoExit;
import org.strategoxt.lang.Strategy;
import org.strategoxt.lang.StrategyCollector;
import org.strategoxt.lang.linking.OverridingStrategy;


/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
@OverridingStrategy
public class ParallelAll extends RegisteringStrategy {

	/**
	 * Gets the active ParallelAll instance, or null.
	 * Is set by {@link stratego_parallel#init(Context)}.
	 */
	protected static ParallelAll instance = new ParallelAll();
	
	private static final WeakHashMap<IStrategoTerm, Integer> termSizes =
		new WeakHashMap<IStrategoTerm, Integer>();
	
	private final ParallelJobExecutor executor = new ParallelJobExecutor();
	
	private int termSizeThreshold = DEFAULT_TERM_SIZE_THRESHOLD;

	private int subtermCountThreshold = DEFAULT_SUBTERM_COUNT_THRESHOLD;
	
	private double jobLengthMultiplier = DEFAULT_JOB_LENGTH_MULTIPLIER;

	private AtomicInteger parallelismLevel = new AtomicInteger(0);
	
	// TODO: ALLOW_NESTED_JOBS: isForcedParallel would have to apply to the current teer
	private boolean isForcedParallel;
	
	private volatile boolean allowUnordered;
	
	private Strategy proceed;
	
	@Override
	public void registerImplementators(StrategyCollector collector) {
		collector.registerStrategyImplementator("SRTS_all", instance);
	}
	
	@Override
	public void bindExecutors(StrategyCollector collectors) {
		proceed = collectors.getStrategyExecutor("SRTS_all", this);
	}
	
	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s) {
		// TODO: The focus thread could actually start more jobs, given a priority job queue
		// TODO: Only trigger invokeParallel if synchronous execution takes longer than a certain threshold
		if (ENABLED && (ALLOW_NESTED_JOBS || !stratego_parallel.isActive())
				&& (isForcedParallel /*|| isCandidateTerm(context, current)*/)) {
			
			isForcedParallel = false;
			context.push("<parallel>");
			IStrategoTerm result = invokeParallel(context, current, s);
			
			if (result == null) context.popOnFailure();
			else context.popOnSuccess();
			
			return result;
		} else {
			// TODO: add array copying overhead for testing
			current.getAllSubterms();
			return proceed.invoke(context, current, s);
		}
	}
	
	public void setForcedParallel(boolean isForcedParallel) {
		this.isForcedParallel = isForcedParallel;
	}
	
	public boolean isForcedParallel() {
		return isForcedParallel;
	}
	
	public ParallelJobExecutor getExecutor() {
		return executor;
	}

	public IStrategoTerm invokeParallel(final Context context, final IStrategoTerm current, final Strategy s) {
		final IStrategoTerm[] inputs = current.getAllSubterms();
		if(inputs.length == 0)
			return context.getFactory().makeList();
		final IStrategoTerm[] outputs = new IStrategoTerm[inputs.length];
		final AtomicInteger focusIndex = new AtomicInteger(0); // index of the job with side effects
		final AtomicInteger jobsCompleted = new AtomicInteger(0);
		final AtomicBoolean isAborted = new AtomicBoolean(false);
		final AtomicReference<String> lastSynchronousOperation = DIAGNOSE_SYNCHRONOUS_OPERATIONS ? new AtomicReference<String>() : null;
		final AtomicReference<Throwable> lastException = new AtomicReference<Throwable>();
		final boolean allowUnordered;
		
		ParallelJob firstJob = null;
		
		if (ALLOW_NESTED_JOBS) {
			int level = parallelismLevel.incrementAndGet();
			// We can only do this if there are no other parallel jobs active,
			// otherwise we'd get confused about the place unordered is allowed
			allowUnordered = level == 1 && this.allowUnordered;
			this.allowUnordered = false;
		} else {
			stratego_parallel.setActive(true);
			allowUnordered = this.allowUnordered;
		}
		
		try {
			double jobLengthPrecise = (double) inputs.length / (executor.getMaximumPoolSize() + 1) * jobLengthMultiplier;
			int jobLength = 1 + (int) jobLengthPrecise;
			int numJobs = (int)Math.ceil((double)inputs.length / (double)jobLength);
			
			if (VERBOSE)
				System.out.print("<" + numJobs);
			
			// Initialize job queue
			for (int i = 0; i < inputs.length; i += jobLength) {
				final int index = i;
				ParallelJob job = new ParallelJob(context, s, inputs, outputs, focusIndex, isAborted, 
						lastSynchronousOperation, lastException, allowUnordered, index, jobLength, 
						parallelismLevel.get(), jobsCompleted);

				if (DEFAULT_MAX_THREADS == 1) {
					job.run();
				} else if (firstJob == null) {
					firstJob = job;
				} else {
					executor.execute(job);
				}
			}
			
			if (DEFAULT_MAX_THREADS != 1) {
				firstJob.run();
				executor.join();
				firstJob.waitForCompletedFocusIndex();
				
				synchronized(jobsCompleted) {
					while(jobsCompleted.get() != numJobs)
						jobsCompleted.wait();
				}
			}
		} catch (InterruptedException e) {
			throw new RuntimeException(e);
		} finally {
			if (ALLOW_NESTED_JOBS) parallelismLevel.decrementAndGet();
			else stratego_parallel.setActive(false);
		}
		
		if (DIAGNOSE_SYNCHRONOUS_OPERATIONS) {
			System.out.print("(" + s.getName() + (lastSynchronousOperation.get() == null ? "+" : "-" + lastSynchronousOperation) + ")");
		}
		
		if (isAborted.get()) {
			if (lastException.get() != null) {
				if (lastException.get() instanceof StrategoExit) {
					throw new StrategoExit((StrategoExit) lastException.get());
				} else {
					throw new StrategoException("Exception in asynchronous job", lastException.get());
				}
			}
			return null;
		}
		
		assert current.getTermType() == LIST;
		// TODO: return context.getFactory().replaceList(outputs, (IStrategoList) current);
		return context.getFactory().makeList(outputs);
	}
	
	public void setAllowUnordered(boolean allowUnorderedOnce) {
		this.allowUnordered = allowUnorderedOnce;
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
