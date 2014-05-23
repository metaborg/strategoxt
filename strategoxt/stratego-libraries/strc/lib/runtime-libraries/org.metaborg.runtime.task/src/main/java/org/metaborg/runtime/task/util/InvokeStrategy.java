package org.metaborg.runtime.task.util;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.stratego.CallT;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;

public final class InvokeStrategy {
	public static IStrategoTerm invoke(IContext context, Strategy s, IStrategoTerm current, Strategy[] sp,
		IStrategoTerm... tp) {
		boolean success = false;
		context.setCurrent(current);
		try {
			success = ((CallT) s).evaluateWithArgs(context, sp, tp);
		} catch(InterpreterException e) {
			throw new RuntimeException("Failed to evaluate strategy " + s, e);
		}
		return success ? context.current() : null;
	}

	public static IStrategoTerm invoke(IContext context, Strategy s, IStrategoTerm current, Strategy... sp) {
		return invoke(context, s, current, sp, new IStrategoTerm[0]);
	}

	public static IStrategoTerm invoke(IContext context, Strategy s, IStrategoTerm current, IStrategoTerm... tp) {
		return invoke(context, s, current, new Strategy[0], tp);
	}

	public static IStrategoTerm invoke(IContext context, Strategy s, IStrategoTerm current) {
		context.setCurrent(current);
		return invoke(context, s, current, new Strategy[0], new IStrategoTerm[0]);
	}
}
