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
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s) {
		int termType = current.getTermType();
		
		if (termType == LIST) {
			return map(context, (IStrategoList) current, s);
		} else {
			IStrategoTerm[] inputs = current.getAllSubterms();
			IStrategoTerm[] results = null;

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

			if (results == null)
				return current;

			switch (termType) {
				case APPL:
					return context.getFactory().replaceAppl(
							((IStrategoAppl) current).getConstructor(), results,
							(IStrategoAppl) current);
				case TUPLE:
					return context.getFactory().replaceTuple(results,
							(IStrategoTuple) current);
				default:
					throw new IllegalStateException();
			}
		}
	}

	private static IStrategoTerm map(Context context, IStrategoList list, Strategy s) {
		if (list.getSubtermCount() == 0)
			return list;

		IStrategoTerm head = list.head();
		IStrategoTerm head2 = s.invoke(context, head);
		if (head2 == null) {
			return null;
		} else if (head2 == head || head2.match(head)) {
			// Head remained the same; must do anno-preserving map
			IStrategoList tail = list.tail();
			IStrategoList tail2 = mapMaintainAnnos(context, tail, s);
			if (tail2 == null) {
				return null;
			} else if (tail2 == tail) { // (match() not necessary because of recursion)
				return list;
			} else {
				// TODO: head/tail variation of replaceList?
				return context.getFactory().makeListCons(head, tail2);
			}
		} else {
			return mapIgnoreAnnos(context, head2, list, s);
		}
	}

	private static IStrategoList mapIgnoreAnnos(Context context, IStrategoList list, Strategy s) {
		IStrategoTerm[] inputs = list.getAllSubterms();
		IStrategoTerm[] results = null;

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
		
		return results == null ? list : context.getFactory().replaceList(results, list);
	}

	private static IStrategoList mapIgnoreAnnos(Context context, IStrategoTerm head2, IStrategoList list, Strategy s) {
		IStrategoTerm[] items = list.getAllSubterms();
		assert (items[0] = null) == null && list.head() != null && list.getSubterm(0) != null : "List implementation must not expose internal array";
		items[0] = head2;
		for (int i = 1; i < items.length; i++) {
			IStrategoTerm item = items[i];
			IStrategoTerm item2 = s.invoke(context, item);
			if (item != item2) {
				if (item2 == null)
					return null;
				items[i] = item2;
			}
		}
		return context.getFactory().replaceList(items, list);
	}

	private static IStrategoList mapMaintainAnnos(Context context, IStrategoList list, Strategy s) {
		if (list.isEmpty())
			return list;
		
		IStrategoTerm head = list.head();
		IStrategoTerm head2 = s.invoke(context, head);
		if (head2 == null) {
			return null;
		} else if (head2 != head) {
			return mapIgnoreAnnos(context, head2, list, s);
		} else {
			IStrategoList tail = list.tail();
			IStrategoList tail2 = mapIgnoreAnnos(context, tail, s);
			if (tail2 == null) {
				return null;
			} else if (tail2 != tail) { // (match() not necessary because of recursion)
				// TODO: head/tail variation of replaceList?
				return context.getFactory().makeListCons(head, tail2);
			} else {
				return list;
			}
		}
	}
}
