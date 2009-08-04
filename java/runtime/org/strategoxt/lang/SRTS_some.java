package org.strategoxt.lang;

import static org.spoofax.interpreter.terms.IStrategoTerm.*;

import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class SRTS_some extends Strategy {
	public static SRTS_some instance = new SRTS_some();

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s) {
		int termType = current.getTermType();
		
		if (termType == LIST)
			return map1MaintainAnnos(context, (IStrategoList) current, s, false);
		
		boolean success = false;
		IStrategoTerm[] results = null;
		IStrategoTerm[] inputs = current.getAllSubterms();
		
		for (int i = 0; i < inputs.length; i++) {
			IStrategoTerm arg = inputs[i];
			IStrategoTerm arg2 = s.invoke(context, arg);
			if (arg2 != null) {
				success = true;
				if (arg2 != arg) {
					if (results == null)
						results = inputs.clone();
					results[i] = arg2;
				}
			}
		}
		
		if (results == null)
			return success ? current : null;
		
		switch (termType) {
			case APPL:
    			return context.getFactory().replaceAppl(((IStrategoAppl) current).getConstructor(), results, (IStrategoAppl) current);
    		case TUPLE:
    			return context.getFactory().replaceTuple(results, (IStrategoTuple) current);
    		default:
    			throw new IllegalStateException();
		}
	}
	
	private static IStrategoList map1MaintainAnnos(Context context, IStrategoList list, Strategy s, boolean foundSome) {
		if (list.isEmpty()) {
			return foundSome ? list : null;
		} else {
			IStrategoTerm head = list.head();
			IStrategoTerm head2 = s.invoke(context, head);
			if (head2 == null) {
				IStrategoList tail = list.tail();
				IStrategoList tail2 = map1MaintainAnnos(context, tail, s, foundSome);
				if (tail2 == null) {
					return null;
				} else if (tail2 == tail || tail2.match(tail)) {
					return list;
				} else {
					// TODO: head/tail variation of replaceList
					return context.getFactory().makeList(head, tail2);
				}
			} else if (head2 == head || head2.match(head)) {
				IStrategoList tail = list.tail();
				IStrategoList tail2 = map1MaintainAnnos(context, tail, s, true);
				if (tail2 == null) {
					return null;
				} else if (tail2 == tail || tail2.match(tail)) {
					return list;
				} else {
					// TODO: head/tail variation of replaceList
					return context.getFactory().makeList(head2, tail2);
				}
			} else {
				return mapTryIgnoreAnnos(context, head2, list, s);
			}
		}
	}

	private static IStrategoList mapTryIgnoreAnnos(Context context, IStrategoTerm head2, IStrategoList list, Strategy s) {
		IStrategoTerm[] items = list.getAllSubterms();
		items[0] = head2;
		assert list.head() != head2;
		for (int i = 1; i < items.length; i++) {
			IStrategoTerm item = items[i];
			IStrategoTerm item2 = s.invoke(context, item);
			if (item != item2 && item2 != null) {
				items[i] = item2;
			}
		}
		return context.getFactory().replaceList(items, list);
	}
}
