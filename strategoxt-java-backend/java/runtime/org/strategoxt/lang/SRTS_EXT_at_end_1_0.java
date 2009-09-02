package org.strategoxt.lang;

import static org.spoofax.interpreter.terms.IStrategoTerm.*;
import static org.strategoxt.lang.Term.*;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

/**
 * A stack-efficient version of the at-end strategy,
 * which is often used to concatenate large lists.
 * 
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class SRTS_EXT_at_end_1_0 extends Strategy {
	
	public static SRTS_EXT_at_end_1_0 instance = new SRTS_EXT_at_end_1_0();
	
	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s) {
		if (current.getTermType() != LIST)
			return null;
		
		IStrategoList list = (IStrategoList) current;
		IStrategoTerm[] listItems = new IStrategoTerm[list.size()];
		IStrategoList cons = list;
		
		for (int i = 0; i < listItems.length; i++) {
			if (!cons.getAnnotations().isEmpty()) {
				IStrategoList tail = atEndMaintainAnnos(context, cons, s);
				return tail == null ? null : concat(context, listItems, i, tail);
			}
			listItems[i] = cons.head();
			cons = cons.tail();
		}
		
		IStrategoTerm tail = context.getFactory().makeList();
		tail = s.invoke(context, tail);
		if (tail == null || checkListTail(tail) == null)
			return null;
		return concat(context, listItems, listItems.length, (IStrategoList) tail);
	}
	
	private static IStrategoList concat(Context context, IStrategoTerm[] prefix, int prefixEnd, IStrategoList tail) {
		ITermFactory factory = context.getFactory();
		IStrategoList result = tail;
		for (int i = prefixEnd - 1; i >= 0; i--) {
			result = factory.makeList(prefix[i], result);
		}
		return result;
	}
	
	private static IStrategoList atEndMaintainAnnos(Context context, IStrategoList list, Strategy s) {
		if (list.isEmpty()) {
			IStrategoTerm tail = s.invoke(context, list);
			return tail != null && checkListTail(tail) != null ? (IStrategoList) tail : null;
		} else {
			IStrategoList tail = atEndMaintainAnnos(context, list.tail(), s);
			if (tail == null) return null;
			IStrategoTerm result = context.getFactory().makeList(list.head(), tail);
			return (IStrategoList) context.getFactory().annotateTerm(result, list.getAnnotations());
		}
	}
}
