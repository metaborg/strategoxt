/**
 * 
 */
package org.strategoxt.lang.compat;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * 
 * Primitive for applying a Strategy captured using {@link SSL_EXT_to_sref_1_0}.
 * 
 * @author Vlad Vergu <v.a.vergu add tudelft.nl>
 * 
 */
public class SSL_EXT_apply_sref_0_1 extends AbstractPrimitive {

	public SSL_EXT_apply_sref_0_1() {
		super("SSL_EXT_apply_sref", 0, 1);
	}

	@Override
	public boolean call(IContext env, Strategy[] svars, IStrategoTerm[] tvars)
			throws InterpreterException {
		if (svars.length != 0) {
			throw new InterpreterException(
					"Incorrect number of strategy arguments, expected 0 but got " + svars.length);
		}

		if (tvars.length != 1) {
			throw new InterpreterException(
					"Incorrect number of strategy arguments, expected 1 but got " + tvars.length);
		}
		StrategoStrategyRef sref = asSRef(tvars[0]);

		return sref.getTargetStrategy().evaluate(env);
	}

	private static StrategoStrategyRef asSRef(IStrategoTerm term) throws InterpreterException {
		try {
			return (StrategoStrategyRef) term;
		} catch (ClassCastException cex) {
			throw new InterpreterException("Term argument is not a captured strategy", cex);
		}
	}

}
