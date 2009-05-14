package org.strategoxt.lang;

import static org.spoofax.interpreter.terms.IStrategoTerm.*;

import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class SRTS_all extends Strategy {
	public static SRTS_all instance = new SRTS_all();

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s) {
		IStrategoTerm[] results = null;
		String name = s.getName();
		IStrategoTerm[] inputs = current.getAllSubterms();
		
		
		// TODO: Optimize SRTS_all, SRTS_one, SRTS_some for head/nil traversal of lists?
		//       The tricky part is constructing the resulting list...
		
		for (int i = 0; i < inputs.length; i++) {
			IStrategoTerm arg = inputs[i];
			IStrategoTerm arg2 = s.invoke(context, arg);
			if (arg2 != arg) {
				if (arg2 == null)
					return null;
				if (results == null)
					results = inputs.clone();
				results[i] = arg2;
			}
		}
		
		if (results == null) return current;
		
		switch (current.getTermType()) {
			case APPL:
    			return context.getFactory().replaceAppl(((IStrategoAppl) current).getConstructor(), results, (IStrategoAppl) current);
    		case LIST:
    			return context.getFactory().replaceList(results, (IStrategoList) current);
    		case TUPLE:
    			return context.getFactory().replaceTuple(results, (IStrategoTuple) current);
    		default:
    			return current;
		}
	}
}
