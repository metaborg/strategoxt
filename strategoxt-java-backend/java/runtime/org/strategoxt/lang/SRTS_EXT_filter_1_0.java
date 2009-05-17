package org.strategoxt.lang;

import java.util.List;
import java.util.ArrayList;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class SRTS_EXT_filter_1_0 extends Strategy {
	public static SRTS_EXT_filter_1_0 instance = new SRTS_EXT_filter_1_0();
	
	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s) {
		if (current.getTermType() != IStrategoTerm.LIST)
			return null;
		
		return filterMaintainAnnos(context, (IStrategoList) current, s);
	}

	private IStrategoList filterMaintainAnnos(Context context, IStrategoList list, IStrategy s) {
		if (list.isEmpty())
			return list;
		
		IStrategoTerm head = list.head();
		IStrategoTerm head2 = s.invoke(context, head);
		
		if (head2 == null) {
			return filterMaintainAnnos(context, list.tail(), s);
		} else if (head2 == head || head2.match(head)) {
			IStrategoList tail = list.tail();
			IStrategoList tail2 = filterMaintainAnnos(context, tail, s);
			if (tail2 == tail || tail2.match(tail)) {
				return list;
			} else {
				return context.getFactory().makeList(head, tail2);
			}
		} else {
			return context.getFactory().makeList(head2, filterNoAnnos(context, list.tail(), s));
		}
	}
	
	private IStrategoList filterNoAnnos(Context context, IStrategoList list, IStrategy s) {
		List<IStrategoTerm> results = new ArrayList<IStrategoTerm>(list.size());
		
		for (IStrategoTerm term : list.getAllSubterms()) {
			IStrategoTerm result = s.invoke(context, term);
			if (result != null) results.add(result);
		}
		
		return context.getFactory().makeList(results);
	}
}
