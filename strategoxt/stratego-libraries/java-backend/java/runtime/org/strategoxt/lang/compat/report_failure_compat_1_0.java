package org.strategoxt.lang.compat;

import static org.spoofax.interpreter.core.Tools.asJavaString;
import static org.spoofax.interpreter.core.Tools.isTermString;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.StrategoErrorExit;
import org.strategoxt.lang.StrategoExit;
import org.strategoxt.lang.Strategy;
import org.strategoxt.stratego_lib.log_0_2;
import org.strategoxt.stratego_lib.report_failure_1_0;

/**
 * Overrides report-failure(s) to throw a proper StrategoErrorExit exception
 * (used for with clause failures). 
 * 
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class report_failure_compat_1_0 extends report_failure_1_0 {
	
	private static volatile boolean isInited;
	
	private final report_failure_1_0 proceed = instance;
	
	private final LogIntercept logIntercept = new LogIntercept();

	public static void init() {
		if (!isInited) {
			report_failure_1_0.instance = new report_failure_compat_1_0();
			isInited = true;
		}
	}
	
	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s) {
		synchronized (this) {
			String[] trace = context.getTrace();
			try {
				logIntercept.proceed = log_0_2.instance;
				logIntercept.enabled = true;
				logIntercept.lastMessage.set(null);
				logIntercept.lastTerm.set(null);
				log_0_2.instance = logIntercept;
	
				return proceed.invoke(context, current, s);
			} catch (StrategoErrorExit e) {
			    throw new StrategoErrorExit(e.getMessage(), e.getTerm(), e.getTrace(), e.getCause());
			} catch (StrategoExit e) {
				IStrategoTerm message = logIntercept.lastMessage.get();
				IStrategoTerm term = logIntercept.lastTerm.get();
				context.setTrace(trace);
				if (message != null && isTermString(message)) {
					throw new StrategoErrorExit(asJavaString(message), term);
				} else {
					throw new StrategoExit(e);
				}
			} finally {
				log_0_2.instance = logIntercept.proceed;
				logIntercept.enabled = false;
			}
		}
	}
	
	/**
	 * Intercepts logging messages.
	 */
	private class LogIntercept extends log_0_2 {
		
		log_0_2 proceed;
		
		ThreadLocal<IStrategoTerm> lastTerm = new ThreadLocal<IStrategoTerm>();
		
		ThreadLocal<IStrategoTerm> lastMessage = new ThreadLocal<IStrategoTerm>();
		
		boolean enabled;
		
		@Override
		public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm level, IStrategoTerm message) {
			if (enabled) {
				synchronized (report_failure_compat_1_0.this) {
					if (enabled) {
						lastTerm.set(current);
						lastMessage.set(message);
					}
				}
			}
			return proceed.invoke(context, current, level, message);
		}
	}
}







