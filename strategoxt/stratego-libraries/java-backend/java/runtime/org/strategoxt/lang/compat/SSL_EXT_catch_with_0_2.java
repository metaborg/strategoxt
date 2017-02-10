/**
 * 
 */
package org.strategoxt.lang.compat;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.core.StackTracer.TryState;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
import org.strategoxt.lang.StrategoErrorExit;

/**
 * 
 * Primitive for catching a with-failure.
 * 
 * @author Vlad Vergu <v.a.vergu add tudelft.nl>
 * 
 */
public class SSL_EXT_catch_with_0_2 extends AbstractPrimitive {

	public SSL_EXT_catch_with_0_2() {
		super("SSL_EXT_catch_with", 2, 0);
	}

	@Override
	public boolean call(IContext env, Strategy[] svars, IStrategoTerm[] tvars)
			throws InterpreterException {
		if (svars.length != 2) {
			throw new InterpreterException(
					"Incorrect number of strategy arguments, expected 2 but got "
							+ svars.length);
		}

		final IStrategoTerm current = env.current();
		final ITermFactory factory = env.getFactory();
		final TryState tryState = env.getStackTracer().pushTry();
	
		try {
			return svars[0].evaluate(env);
		} catch (StrategoErrorExit e) {
		    tryState.caught();
		    final IStrategoString message = factory.makeString(e.getMessage() != null ? e.getMessage() : "");
		    final IStrategoList trace = e.getTrace() != null ? e.getTrace() : factory.makeList();
		    final IStrategoTerm exception = factory.makeTuple(new IStrategoTerm[]{ message, current, trace }, factory.makeList());
			env.setCurrent(exception);
			boolean success = svars[1].evaluate(env);
			if (!success) {
				env.setCurrent(current);
			}
			return success;
		}
	}

}
