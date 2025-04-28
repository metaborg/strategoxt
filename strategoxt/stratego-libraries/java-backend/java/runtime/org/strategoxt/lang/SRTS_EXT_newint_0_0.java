package org.strategoxt.lang;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.UniqueValueTerm;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class SRTS_EXT_newint_0_0 extends Strategy {
	public static SRTS_EXT_newint_0_0 instance = new SRTS_EXT_newint_0_0();
	
	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current) {
		return callStatic(context, current);
	}

	public static IStrategoTerm callStatic(Context context, IStrategoTerm current) {
		return new UniqueValueTerm();
	}
}
