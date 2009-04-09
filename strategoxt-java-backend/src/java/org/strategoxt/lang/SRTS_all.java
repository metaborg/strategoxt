package org.strategoxt.lang;

import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class SRTS_all extends Strategy {
	public static SRTS_all instance = new SRTS_all();

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s) {
		IStrategoTerm result = SRTS_some.instance.invoke(context, current, s);
		return result == null ? current : result;
	}
}
