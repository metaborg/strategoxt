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
			Strategy nul, Strategy sum, Strategy s) {
		
		// TODO: Is getAllSubterms() a good idea for crush/foldr of lists? 
		
		ITermFactory factory = context.getFactory();
		IStrategoTerm[] subterms = current.getAllSubterms();
		
		IStrategoTerm result = factory.makeList(Term.NO_TERMS);
		result = nul.invoke(context, result);
		if (result == null) return null;
		
		for (int i = subterms.length - 1; i >= 0; i--) {
			IStrategoTerm subterm = subterms[i];
			subterm = s.invoke(context, subterm);
			if (subterm == null) return null;
			IStrategoTuple input = factory.makeTuple(subterm, result);
			result = sum.invoke(context, input);
			if (result == null) return null;
		}
		
		return result;
	}
}
