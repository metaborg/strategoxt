package org.strategoxt.lang;

import org.spoofax.interpreter.core.StackTracer;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class UncaughtExceptionHandler  {
	
	private final StackTracer stackTracer;
	
	private final ActualHandler handler = new ActualHandler();
	
	private Thread.UncaughtExceptionHandler originalHandler;
	
	private boolean enabled;
	
	private boolean dumpedError;
	
	public UncaughtExceptionHandler(StackTracer stackTracer) {
		this.stackTracer = stackTracer;
	}
	
	public boolean isEnabled() {
		return enabled;
	}
	
	public void setEnabled(boolean value) {
		if (value) enable();
		else disable();
	}
	
	private void enable() {
		if (!enabled) {
			enabled = true;
			originalHandler = Thread.currentThread().getUncaughtExceptionHandler();
			Thread.currentThread().setUncaughtExceptionHandler(handler);
			Runtime.getRuntime().addShutdownHook(handler);
		}
	}
	
	public void disable() {
		if (enabled) {
			enabled = false;
			Thread.currentThread().setUncaughtExceptionHandler(originalHandler);
			Runtime.getRuntime().removeShutdownHook(handler);
		}
	}
    
    protected synchronized boolean dumpError(boolean skipMessage) {
    	if (dumpedError) return true;
    	
    	try {
    		stackTracer.printStackTrace();
    	} catch (RuntimeException e) {
    		// gracefully accept exceptions in case of a race codition
    	}
    	if (stackTracer.getTraceDepth() > 0) {
    		if (!skipMessage) System.err.println("Aborted.");
    		dumpedError = true;
    	} else {
    		dumpedError = false;
    	}
    	
    	return dumpedError;
    }
	
	/**
	 * Class that handles shutdown and unhandled exception events.
	 */
    private class ActualHandler extends Thread implements Thread.UncaughtExceptionHandler {
		public void uncaughtException(Thread t, Throwable e) {
			if (e instanceof StackOverflowError && dumpError(true)) {
				System.err.println("Stack overflow.");
			} else {
				originalHandler.uncaughtException(t, e);
			}
		}
		
		@Override
		public void run() {
			dumpError(false);
		}
	}

}
