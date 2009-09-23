package org.strategoxt.lang.parallel.stratego_parallel;

import static org.strategoxt.lang.parallel.stratego_parallel.stratego_parallel.*;

import java.util.concurrent.ArrayBlockingQueue;
import java.util.concurrent.BlockingQueue;
import java.util.concurrent.PriorityBlockingQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

import org.spoofax.jsglr.NotImplementedException;

/**
 * Executes jobs, in parallel.
 * 
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
		super(activeThreads - 1, maxThreads - 1, 60L, TimeUnit.SECONDS, createQueue());
		isConstantPoolSize = activeThreads == maxThreads;
		this.asyncPoolSize = activeThreads;
		this.asyncMaxPoolSize = maxThreads;
	}

	private static BlockingQueue<Runnable> createQueue() {
		final int capacity = 2 * (int) (DEFAULT_MAX_THREADS / DEFAULT_JOB_LENGTH_MULTIPLIER);
		return ALLOW_NESTED_JOBS
			? new PriorityBlockingQueue<Runnable>()
			: // TODO: job queue size should depend on actual max. jobs
			  new ArrayBlockingQueue<Runnable>(capacity, true);
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
	 * Joins the thread pool of this executor,
	 * executing jobs until the queue is empty.
	 */
	public void join() {
		Runnable job;
		BlockingQueue<Runnable> queue = getQueue();
		while ((job = queue.poll()) != null) {
			job.run();
		}
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
