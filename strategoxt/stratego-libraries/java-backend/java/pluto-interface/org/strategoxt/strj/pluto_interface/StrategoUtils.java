package org.strategoxt.strj.pluto_interface;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;

public class StrategoUtils {
	

	public static IStrategoTerm invoke(NamedSingleton caller, Strategy strategy, IStrategoTerm arg) {
		IContext context = caller.getContext();
		context.setCurrent(arg);
		try {
			boolean success = strategy.evaluate(context);
			if (!success) {
				String[] trace =context.getStackTracer().getTrace();
				String traceFormatted = "";
				for (String s : trace)
					traceFormatted += s + "\n";
				throw new InterpreterException(
						caller.getName() + ": Could not evaluate " + strategy + " successfully. Current " + context.current() + "\n" + traceFormatted );
			}
			IStrategoTerm result = context.current();
			return result;
		} catch (InterpreterException e) {
			throw new RuntimeException(e);
		}
	}


}
