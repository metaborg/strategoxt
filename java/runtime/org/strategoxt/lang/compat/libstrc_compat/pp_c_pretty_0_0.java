package org.strategoxt.lang.compat.libstrc_compat;

import org.spoofax.NotImplementedException;
import org.spoofax.interpreter.library.AbstractStrategoOperatorRegistry;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;
import org.strategoxt.lang.compat.StringValuePrimitive;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class pp_c_pretty_0_0 extends Strategy {
	public static pp_c_pretty_0_0 instance = new pp_c_pretty_0_0();
	
	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current) {
		throw new NotImplementedException(); // TODO: pp_c_pretty_0_0
	}
}
