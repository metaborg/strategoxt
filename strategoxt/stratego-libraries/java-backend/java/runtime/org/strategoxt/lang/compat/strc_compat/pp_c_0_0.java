package org.strategoxt.lang.compat.strc_compat;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.util.NotImplementedException;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
@SuppressWarnings("all")
public class pp_c_0_0 extends Strategy {
	public static pp_c_0_0 instance = new pp_c_0_0();
	
	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current) {
		throw new NotImplementedException("pp-c"); // TODO: pp_c_0_0
	}
}