package org.strategoxt.lang;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;
import org.spoofax.interpreter.terms.ITermFactory;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class SRTS_EXT_crush_3_0 extends Strategy {
	public static SRTS_EXT_crush_3_0 instance = new SRTS_EXT_crush_3_0();

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current,
			IStrategy nul, IStrategy sum, IStrategy s) {
		
		ITermFactory factory = context.getFactory();
		IStrategoTerm result = nul.invoke(context, current);
		
		for (IStrategoTerm subterm : current.getAllSubterms()) {
			subterm = s.invoke(context, subterm);
			IStrategoTuple input = factory.makeTuple(subterm, result);
			result = sum.invoke(context, input);
		}
		
		return result;
	}
}
