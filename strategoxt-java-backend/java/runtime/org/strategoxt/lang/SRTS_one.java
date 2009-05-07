package org.strategoxt.lang;

import static org.spoofax.interpreter.terms.IStrategoTerm.*;

import java.util.Arrays;

import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class SRTS_one extends Strategy {
	public static SRTS_one instance = new SRTS_one();

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s) {
		IStrategoTerm[] results = null;
		IStrategoTerm[] inputs = current.getAllSubterms();

		for (int i = 0; i < inputs.length; i++) {
			IStrategoTerm arg = inputs[i];
			IStrategoTerm arg2 = s.invoke(context, arg);
			if (arg2 != null) {
				if (arg2 == arg) {
					results = inputs;
				} else {
					results = inputs.clone();
					results[i] = arg2;
					System.out.println("Did some replacing: " + arg2 + " in " + Arrays.toString(results));
				}
				break;
			}
		}
		
		if (results == null) return null;
		
		switch (current.getTermType()) {
			case APPL:
    			return context.getFactory().replaceAppl(((IStrategoAppl) current).getConstructor(), results, (IStrategoAppl) current);
    		case LIST:
    			return context.getFactory().replaceList(results, (IStrategoList) current);
    		case TUPLE:
    			return context.getFactory().replaceTuple(results, (IStrategoTuple) current);
    		default:
    			throw new IllegalStateException();
		}
	}
}
