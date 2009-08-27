package org.strategoxt.lang.compat.libstratego_rtg_compat;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class strrtg_repeat_1_0 extends Strategy {
	public static strrtg_repeat_1_0 instance = new strrtg_repeat_1_0();
	
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