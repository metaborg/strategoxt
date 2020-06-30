package org.strategoxt.lang;

import static org.spoofax.interpreter.terms.IStrategoTerm.*;
import static org.strategoxt.lang.Term.*;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
import org.spoofax.interpreter.terms.TermType;

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
		// context.push("at_end_1_0"); // DEBUG
		
		// DEBUG
		//if (StackSaver.isNeededFor(context))
		//	new StackSaver(this).invokeStackFriendly(context, current, new Strategy[] { s }, NO_TERMS);
		
		if (current.getType() != TermType.LIST)
			return null;
		
		IStrategoList list = (IStrategoList) current;
		IStrategoTerm[] listItems = new IStrategoTerm[list.size()];
		
		for (int i = 0; i < listItems.length; i++) {
			if (!list.getAnnotations().isEmpty()) {
				IStrategoList tail = atEndMaintainAnnos(context, list, s);
				return tail == null ? null : concat(context, listItems, i, tail);
			}
			listItems[i] = list.head();
			list = list.tail();
		}
		
		IStrategoTerm tail = context.getFactory().makeList();
		tail = s.invoke(context, tail);
		if (tail == null || checkListTail(tail) == null) {
			//context.popOnFailure(); // DEBUG
			return null;
		}
		//context.popOnSuccess(); // DEBUG
		return concat(context, listItems, listItems.length, (IStrategoList) tail);
	}
	
	private static IStrategoList concat(Context context, IStrategoTerm[] prefix, int prefixEnd, IStrategoList tail) {
		ITermFactory factory = context.getFactory();
		IStrategoList result = tail;
		for (int i = prefixEnd - 1; i >= 0; i--) {
			result = factory.makeListCons(prefix[i], result);
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
			IStrategoTerm result = context.getFactory().makeListCons(list.head(), tail);
			return (IStrategoList) context.getFactory().annotateTerm(result, list.getAnnotations());
		}
	}
}
