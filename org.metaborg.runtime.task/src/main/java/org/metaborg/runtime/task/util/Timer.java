package org.metaborg.runtime.task.util;

import java.lang.management.ManagementFactory;
import java.lang.management.ThreadMXBean;

public class Timer {
	/** ThreadMXBean for measuring CPU time. **/
	private final ThreadMXBean mxBean = ManagementFactory.getThreadMXBean();

	/** If precise CPU time measurements are available. **/
	private final boolean canLogCPUTime;

	/** Last starting time since start was called. **/
	private long startTime;

	public Timer() {
		canLogCPUTime = mxBean.isThreadCpuTimeSupported();
		if(canLogCPUTime)
			mxBean.setThreadCpuTimeEnabled(true);
	}

	public void start() {
		startTime = time();
	}

	public long stop() {
		return time() - startTime;
	}

	public void reset() {
		startTime = 0;
	}

	private long time() {
		if(canLogCPUTime)
			return mxBean.getCurrentThreadCpuTime();
		else
			return System.nanoTime();
	}
}
