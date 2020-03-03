package org.strategoxt.lang;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.util.TermUtils;

/**
 * An implementation of filter(s), optimized for stack behavior
 * and performance, while still providing the same list annotation
 * handling as the default implementation.
 * 
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class SRTS_EXT_filter_1_0 extends Strategy {
	public static SRTS_EXT_filter_1_0 instance = new SRTS_EXT_filter_1_0();
	
	private static final int LARGE_LIST_SIZE = 10;
	
	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s) {
		if (!TermUtils.isList(current))
			return null;
		
		IStrategoList list = (IStrategoList) current;
		int size = list.size(); // (assumed to be O(1))
		
		if (size > LARGE_LIST_SIZE) {
			IStrategoTerm[] items = new IStrategoTerm[size];
			IStrategoList cons = list;
			for (int i = 0; i < size; i++, cons = cons.tail()) {
				if (!cons.getAnnotations().isEmpty())
					return filterMaintainTailAnnos(context, items, cons, i, s);
				items[i] = cons.head();
			}
			return filterIgnoreAnnos(context, items, s);
		}
		
		return filterMaintainAnnos(context, (IStrategoList) current, s);
	}

	private IStrategoTerm filterMaintainTailAnnos(Context context, 
			IStrategoTerm[] prefix, IStrategoList tail, int tailStart,
			Strategy s) {
		// Filter prefix, disregarding annotations
		for (int j = 0; j < tailStart; j++) {
			prefix[j] = s.invoke(context, prefix[j]);
		}
		
		// Filter the remainder of the list, maintaining all annotations
		IStrategoList result = filterMaintainAnnos(context, tail, s);
		
		// Concatenate the two
		for (int j = tailStart - 1; j >= 0; j--) {
			IStrategoTerm head = prefix[j];
			if (head != null)
				result = context.getFactory().makeListCons(head, result);
		}
		return result;
	}

	private IStrategoList filterMaintainAnnos(Context context, IStrategoList list, Strategy s) {
		if (list.isEmpty())
			return list;
		
		IStrategoTerm head = list.head();
		IStrategoTerm head2 = s.invoke(context, head);
		
		if (head2 == null) {
			return filterMaintainAnnos(context, list.tail(), s);
		} else {
			IStrategoList tail = list.tail();
			IStrategoList tail2 = filterMaintainAnnos(context, tail, s);
			if (tail2 == tail // (match() not necessary because of recursion)
					&& (head2 == head || head2.match(head))) {
				return list;
			} else {
				return context.getFactory().makeListCons(head2, tail2);
			}
		}
	}
	
	private IStrategoList filterIgnoreAnnos(Context context, IStrategoTerm[] list, Strategy s) {
		for (int i = 0; i < list.length; i++) {
			list[i] = s.invoke(context, list[i]);
		}
		
		IStrategoList result = context.getFactory().makeList(Term.NO_TERMS);
		for (int i = list.length - 1; i >= 0; i--) {
			IStrategoTerm head = list[i];
			if (head != null)
				result = context.getFactory().makeListCons(head, result); 
		}
		return result;
	}
}
