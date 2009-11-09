package org.strategoxt.lang;

import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class SRTS_EXT_repeat_1_0 extends Strategy {
	public static SRTS_EXT_repeat_1_0 instance = new SRTS_EXT_repeat_1_0();
	
	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s) {
		IStrategoTerm result = current;
		IStrategoTerm next = s.invoke(context, result);
		
		while (next != null) {
			result = next;
			next = s.invoke(context, result);
		}

		return result;
	}
}