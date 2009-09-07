package org.strategoxt.lang.parallel.libstratego_parallel;

import static org.strategoxt.lang.parallel.libstratego_parallel.libstratego_parallel.*;

import java.util.concurrent.PriorityBlockingQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

import org.spoofax.jsglr.NotImplementedException;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class ParallelJobExecutor extends ThreadPoolExecutor {
	
	private final int asyncMaxPoolSize;
	
	private final boolean isConstantPoolSize;
	
	private int asyncPoolSize;

	public ParallelJobExecutor() {
		this(DEFAULT_ACTIVE_THREADS, DEFAULT_MAX_THREADS);
	}
	
	public ParallelJobExecutor(int activeThreads, int maxThreads) {
		super(activeThreads - 1, maxThreads - 1, 60L, TimeUnit.SECONDS, new PriorityBlockingQueue<Runnable>());
		isConstantPoolSize = activeThreads == maxThreads;
		this.asyncPoolSize = activeThreads;
		this.asyncMaxPoolSize = maxThreads;
	}
	
	@Override
	public synchronized int getCorePoolSize() {
		return super.getCorePoolSize();
	}
	
	@Override
	public synchronized int getMaximumPoolSize() {
		return super.getMaximumPoolSize();
	}
	
	@Override
	public void setCorePoolSize(int corePoolSize) {
		throw new NotImplementedException();
	}
	
	@Override
	public void setMaximumPoolSize(int maximumPoolSize) {
		throw new NotImplementedException();
	}
	
	/**
	 * Indicates that a thread is going into an inactive state.
	 * Must be executed from a worker thread, and balanced
	 * with {@link #asyncEndSleep()};
	 */
	public synchronized void asyncBeginSleep() {
		if (!isConstantPoolSize) {
			asyncPoolSize++;
			if (asyncPoolSize <= asyncMaxPoolSize)
				super.setCorePoolSize(asyncPoolSize);
		}
	}
	
	/**
	 * Indicates that a thread resumes from an inactive state.
	 * Must be executed from a worker thread, and balanced
	 * with {@link #asyncBeginSleep()};
	 */
	public synchronized void asyncEndSleep() {
		if (!isConstantPoolSize) {
			asyncPoolSize--;
			if (asyncPoolSize <= asyncMaxPoolSize)
				super.setCorePoolSize(asyncPoolSize);
		}
	}
}
