package org.strategoxt.lang.parallel.stratego_parallel;

import org.strategoxt.lang.Context;
import org.strategoxt.lang.SRTS_all;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class stratego_parallel {
	
	protected static final boolean ENABLED = true;
	
	protected static final boolean VERBOSE = false;
	
	protected static final boolean DIAGNOSE_SYNCHRONOUS_OPERATIONS = false;
	
	protected static final int DEFAULT_MAX_THREADS = 8;
	
	protected static final int DEFAULT_ACTIVE_THREADS = DEFAULT_MAX_THREADS;
	
	protected static final int DEFAULT_TERM_SIZE_THRESHOLD = 3200;
	
	protected static final int DEFAULT_SUBTERM_COUNT_THRESHOLD = 12;
	
	protected static final double DEFAULT_JOB_LENGTH_MULTIPLIER = 1; // .5;
	
	protected static final boolean ALLOW_NESTED_JOBS = false;
	
	protected static final boolean ADJUST_FOCUS_THREAD_PRIORITY = false;
	
	private static boolean isInitialized;
	
	private static volatile boolean isActive;
	
	public static void init(Context context) {
		if (isInitialized || !ENABLED) return;
		isInitialized = true;
		
		// TODO: Override (not supplement) the context with the ParallelCollectionLibrary
		
		ParallelAll.instance = new ParallelAll();
		
		// TODO: print intro message only for --verbose 2
		System.err.println("[ libstratego-parallel ] using "
				+ DEFAULT_ACTIVE_THREADS
				+ (DEFAULT_MAX_THREADS != DEFAULT_ACTIVE_THREADS ? "/" + DEFAULT_MAX_THREADS : "")
				+ " threads,"
				+ " jobsize " + DEFAULT_JOB_LENGTH_MULTIPLIER
				+ (ADJUST_FOCUS_THREAD_PRIORITY ? " (priority focus thread)" : "")
				+ (DIAGNOSE_SYNCHRONOUS_OPERATIONS ? " (diagnose sync. ops)" : "")
				);
	}
	
	public static boolean isActive() {
		return isActive;
	}
	
	protected static void setActive(boolean value) {
		isActive = value;
	}
}
