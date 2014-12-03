package org.strategoxt.lang.compat;

import static org.spoofax.interpreter.core.Tools.*;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.StrategoErrorExit;
import org.strategoxt.lang.StrategoExit;
import org.strategoxt.lang.Strategy;
import org.strategoxt.lang.RegisteringStrategy;
import org.strategoxt.lang.StrategyCollector;

/**
 * Overrides report-failure(s) to throw a proper StrategoErrorExit exception
 * (used for with clause failures). 
 * 
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class report_failure_compat_1_0 extends RegisteringStrategy {
	
	
	private final LogIntercept logIntercept = new LogIntercept();
	
	private Strategy proceed;
	private Strategy log_0_2_Executor;
	
	public static final report_failure_compat_1_0 instance = new report_failure_compat_1_0();
	private final LogIntercept logInstance = new LogIntercept();
	
    public void registerImplementators(StrategyCollector collector)
    { 
      collector.registerStrategyImplementator("report_failure_compat_1_0", instance);
	  collector.registerSpecialStrategyImplementator("log_0_2", logInstance, "overriden");
    }
	
    public void bindExecutors(StrategyCollector collector)
    { 
      proceed = collector.getNonSpecialStrategyExecutor("report_failure_1_0");
	  logInstance.proceed = collector.getNonSpecialStrategyExecutor("log_0_2");
    }
	
	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s) {
		synchronized (this) {
			String[] trace = context.getTrace();
			try {
				logIntercept.enabled = true;
				logIntercept.lastMessage.set(null);
				logIntercept.lastTerm.set(null);
				
				return proceed.invoke(context, current, s);
			} catch (StrategoErrorExit e) {
			    throw new StrategoErrorExit(e.getMessage(), e.getTerm(), e);
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
				logIntercept.enabled = false;
			}
		}
	}
	
	/**
	 * Intercepts logging messages.
	 */
	private class LogIntercept extends RegisteringStrategy {
		
		Strategy proceed; //For log_0_2
		
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







