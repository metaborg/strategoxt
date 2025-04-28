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
		return callStatic(context, current, s);
	}

	public static IStrategoTerm callStatic(Context context, IStrategoTerm current, Strategy s) {
		int termType = current.getTermType();
		
		if (termType == LIST) {
			final IStrategoList list = (IStrategoList) current;
			return map1MaintainAnnos(context, list, s, false, SRTS_all.noAnnosTail(list));
		}
		
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
	
	private static IStrategoList map1MaintainAnnos(Context context, IStrategoList list, Strategy s, boolean foundSome, IStrategoList noAnnosTail) {
		if (list.isEmpty()) {
			return foundSome ? list : null;
		} else {
			if(noAnnosTail == list) {
				return mapTryIgnoreAnnos(context, list, s, foundSome);
			}
			IStrategoTerm head = list.head();
			IStrategoTerm head2 = s.invoke(context, head);
			if (head2 == null) {
				IStrategoList tail = list.tail();
				IStrategoList tail2 = map1MaintainAnnos(context, tail, s, foundSome, noAnnosTail);
				if (tail2 == null) {
					return null;
				} else if (tail2 == tail) {
					return list;
				} else {
					return context.getFactory().replaceListCons(head, tail2, head, tail);
				}
			} else {
				IStrategoList tail = list.tail();
				IStrategoList tail2 = map1MaintainAnnos(context, tail, s, true, noAnnosTail);
				if (tail2 == null) {
					return null;
				} else if ((head2 == head || head2.match(head)) && tail2 == tail) {
					return list;
				} else {
					return context.getFactory().replaceListCons(head2, tail2, head, tail);
				}
			}
		}
	}
	
   private static IStrategoList mapTryIgnoreAnnos(Context context, IStrategoList list, Strategy s, boolean foundSome) {
		IStrategoTerm[] items = list.getAllSubterms();
		for (int i = 0; i < items.length; i++) {
			IStrategoTerm item = items[i];
			IStrategoTerm item2 = s.invoke(context, item);
			if (item2 != null) {
				items[i] = item2;
				foundSome = true;
			} else {
                items[i] = item;
			}
		}
		if(!foundSome) {
			return null;
		}
		return context.getFactory().replaceList(items, list);
   }
}
