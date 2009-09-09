package org.strategoxt.lang;

import static org.spoofax.interpreter.terms.IStrategoTerm.*;

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
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s) {
		int termType = current.getTermType();
		
		if (termType == LIST)
			return fetchMaintainAnnos(context, (IStrategoList) current, s);
		
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
				}
				break;
			}
		}
		
		if (results == null) return null;
		
		switch (termType) {
			case APPL:
    			return context.getFactory().replaceAppl(((IStrategoAppl) current).getConstructor(), results, (IStrategoAppl) current);
    		case TUPLE:
    			return context.getFactory().replaceTuple(results, (IStrategoTuple) current);
    		default:
    			throw new IllegalStateException();
		}
	}
	
	private static IStrategoList fetchMaintainAnnos(Context context, IStrategoList current, Strategy s) {
		if (current.isEmpty()) {
			return null;
		} else {
			IStrategoTerm head = current.head();
			IStrategoTerm head2 = s.invoke(context, head);
			if (head2 == null) {
				IStrategoList tail = current.tail();
				IStrategoList tail2 = fetchMaintainAnnos(context, tail, s);
				if (tail2 == null) {
					return null;
				} else if (tail2 == tail || tail2.match(tail)) {
					return current;
				} else {
					// TODO: head/tail variation of replaceList?
					return context.getFactory().makeListCons(head, tail2);
				}
			} else if (head2 == head || head2.match(head)) {
				return current;
			} else {
				// TODO: head/tail variation of replaceList?
				return context.getFactory().makeListCons(head2, current.tail());
			}
		}
	}
}
