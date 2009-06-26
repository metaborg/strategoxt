package org.strategoxt.lang.parallel;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.SRTS_all;
import org.strategoxt.lang.Strategy;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class libstratego_parallel {
	
	protected static final boolean ENABLED = true;
	
	protected static final boolean VERBOSE = true;
	
	protected static final boolean DIAGNOSE_SYNCHRONOUS_OPERATIONS = false;
	
	protected static final int DEFAULT_ACTIVE_THREADS = 4;
	
	protected static final int DEFAULT_MAX_THREADS = 4;
	
	protected static final int DEFAULT_TERM_SIZE_THRESHOLD = 3200;
	
	protected static final int DEFAULT_SUBTERM_COUNT_THRESHOLD = 6;
	
	protected static final double DEFAULT_JOB_LENGTH_MULTIPLIER = .5;
	
	protected static final boolean ALLOW_NESTED_JOBS = false;
	
	protected static final boolean ADJUST_FOCUS_THREAD_PRIORITY = true;
	
	private static boolean isInitialized; 
	
	public static void init(Context context) {
		if (isInitialized) return;
		isInitialized = true;
		
		ParallelAll.instance = new ParallelAll();
		SRTS_all.instance = ParallelAll.instance;
	}
	
	public static class parallel_unordered_0_0 extends Strategy {
		public static parallel_unordered_0_0 instance = new parallel_unordered_0_0();
		
		@Override
		public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s) {
			ParallelAll.instance.setAllowUnorderedOnce(true);
			try {
				return s.invoke(context, current, s);
			} finally {
				ParallelAll.instance.setAllowUnorderedOnce(false);
			}
		}
	}
}
