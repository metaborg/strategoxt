package org.strategoxt.lang;

import static org.spoofax.interpreter.terms.IStrategoTerm.*;

import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class SRTS_some extends RegisteringStrategy {
	private static SRTS_some instance = new SRTS_some();

	@Override
	public void registerImplementators(StrategyCollector collector) {
		collector.registerStrategyImplementator("SRTS_some", instance);
	}
	
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
				} else if (tail2 == tail) {
					return list;
				} else {
					return context.getFactory().replaceListCons(head, tail2, head, tail);
				}
			} else if (head2 == head) {
				IStrategoList tail = list.tail();
				IStrategoList tail2 = map1MaintainAnnos(context, tail, s, true);
				if (tail2 == null) {
					return null;
				} else if (tail2 == tail) {
					return list;
				} else {
					return context.getFactory().replaceListCons(head2, tail2, head, tail);
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
