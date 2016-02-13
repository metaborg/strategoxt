/**
 * 
 */
package org.strategoxt.lang.compat;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
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

		IStrategoTerm ct = env.current();
		ITermFactory factory = env.getFactory();

		try {
			return svars[0].evaluate(env);
		} catch (StrategoErrorExit e) {
			for(String s : env.getStackTracer().getTrace()) {
				System.err.println(s);
			}
			IStrategoTerm nt = null;
			if(e.getTrace() != null)
				nt = factory.makeTuple(new IStrategoTerm[]{ct, e.getTrace()}, factory.makeList());
			else
				nt = factory.makeTuple(new IStrategoTerm[]{ct, factory.makeList()}, factory.makeList());
			env.setCurrent(nt);
			boolean s2 = svars[1].evaluate(env);
			if (!s2) {
				env.setCurrent(ct);
			}
			return s2;
		}
	}

}
