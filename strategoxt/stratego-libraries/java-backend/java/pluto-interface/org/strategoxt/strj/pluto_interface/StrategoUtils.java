package org.strategoxt.strj.pluto_interface;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.StrategoException;

import build.pluto.builder.BuildCycleException;

public class StrategoUtils {
	
	
	public static IStrategoTerm invoke(NamedSingleton caller, String strategyName, Strategy strategy, IStrategoTerm arg) {
		return invoke(caller, strategyName, strategy, PlutoIContextManager.currentContext(), arg);
	}

	public static IStrategoTerm invoke(NamedSingleton caller, String strategyName, Strategy strategy, IContext context, IStrategoTerm arg) {
		context.setCurrent(arg);
		try {
			context.setCurrent(arg);
			context.setCurrent(arg);
			context.setCurrent(arg);
			boolean success = strategy.evaluate(context);
			if (!success) {
				String[] trace =context.getStackTracer().getTrace();
				String traceFormatted = "";
				for (String s : trace)
					traceFormatted += s + "\n";
				throw new InterpreterException(
						caller.getName() + ": Could not evaluate " + strategyName + " successfully. Current " + context.current() + "\n" + traceFormatted );
			}
			IStrategoTerm result = context.current();
			return result;
		} catch (StrategoException e) {
			if (e.getCause() instanceof BuildCycleException) {
				throw (BuildCycleException) e.getCause();
			}
			throw e;
		} catch (InterpreterException e) {
			throw new RuntimeException(e);
		}
	}


}
