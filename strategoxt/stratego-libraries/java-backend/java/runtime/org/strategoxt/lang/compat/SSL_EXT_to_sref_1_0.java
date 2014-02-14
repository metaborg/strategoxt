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

/**
 * 
 * Primitive for capturing a reference to a Strategy.
 * 
 * @author Vlad Vergu <v.a.vergu add tudelft.nl>
 * 
 */
public class SSL_EXT_to_sref_1_0 extends AbstractPrimitive {

	public SSL_EXT_to_sref_1_0() {
		super("SSL_EXT_to_sref", 1, 0);
	}

	@Override
	public boolean call(IContext env, Strategy[] svars, IStrategoTerm[] tvars)
			throws InterpreterException {
		if (svars.length != 1) {
			throw new InterpreterException(
					"Incorrect number of strategy arguments, expected 1 but got " + svars.length);
		}

		if (tvars.length != 0) {
			throw new InterpreterException(
					"Incorrect number of strategy arguments, expected 0 but got " + tvars.length);
		}

		ITermFactory factory = env.getFactory();

		IStrategoTerm sref = new StrategoStrategyRef(svars[0], factory);
		env.setCurrent(sref);
		return true;
	}

}
