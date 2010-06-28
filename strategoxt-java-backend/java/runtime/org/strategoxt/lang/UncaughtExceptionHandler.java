package org.strategoxt.lang;

import java.lang.management.ManagementFactory;
import java.lang.ref.WeakReference;

import org.spoofax.interpreter.core.StackTracer;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class UncaughtExceptionHandler  {
	
	private final WeakReference<StackTracer> stackTracer;
	
	private final ActualHandler handler = new ActualHandler();
	
	// We keep the original handler (may be used by someone else) intact
	private static final ThreadLocal<Thread.UncaughtExceptionHandler> originalHandler =
		new ThreadLocal<Thread.UncaughtExceptionHandler>();
	
	private boolean enabled;
	
	private boolean dumpedError;
	
	public UncaughtExceptionHandler(StackTracer stackTracer) {
		this.stackTracer = new WeakReference<StackTracer>(stackTracer);
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
			if (!(Thread.currentThread().getUncaughtExceptionHandler() instanceof UncaughtExceptionHandler))
				originalHandler.set(Thread.currentThread().getUncaughtExceptionHandler());
			Thread.currentThread().setUncaughtExceptionHandler(handler);
			Runtime.getRuntime().addShutdownHook(handler);
		}
	}
	
	private void disable() {
		if (enabled) {
			enabled = false;
			try {
				Thread.currentThread().setUncaughtExceptionHandler(originalHandler.get());
				Runtime.getRuntime().removeShutdownHook(handler);
			} catch (IllegalStateException e) {
				// Ignore (perhaps already shutting down)
			}
		}
	}
    
    protected synchronized boolean dumpError(String startMessage) {
    	if (dumpedError) return true;

    	StackTracer tracer = stackTracer.get();
    	if (tracer != null && tracer.getTraceDepth(true) > 0) {
    		if (startMessage != null) System.err.println(startMessage);
	    	try {
	    		tracer.printStackTrace(true);
	    	} catch (RuntimeException e) {
	    		// gracefully accept exceptions in case of a race codition
	    	}
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
			if (e instanceof StackOverflowError && dumpError("Fatal error at")) {
				if (isStackTuned()) {
					System.err.println("Stack overflow.");
				} else {
					System.err.println("Stack overflow (use java -ss4m to increase the stack size)");
				}
			} else {
				dumpError("Fatal error at");
			}
			UncaughtExceptionHandler handler = originalHandler.get();
			if (handler != null)
				handler.uncaughtException(t, e);
		}

		private boolean isStackTuned() {
			for (String arg : ManagementFactory.getRuntimeMXBean().getInputArguments()) {
				if (arg.startsWith("-Xss") || arg.startsWith("-ss")) return true;
			}
			return false;
		}
		
		@Override
		public void run() {
			dumpError("Aborted at");
		}
	}
    
    static class Finalizer {
    	final WeakReference<UncaughtExceptionHandler> handler;
    	
    	public Finalizer(UncaughtExceptionHandler handler) {
			this.handler = new WeakReference<UncaughtExceptionHandler>(handler);
		}
    	
    	@Override
    	protected void finalize() throws Throwable {
    		UncaughtExceptionHandler handler = this.handler.get();
    		if (handler != null)
    			handler.setEnabled(false);
    	}
    }

}
