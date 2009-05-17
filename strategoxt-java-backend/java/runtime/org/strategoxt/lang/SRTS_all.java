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
	public IStrategoTerm invoke(Context context, IStrategoTerm current,
			IStrategy s) {
		int termType = current.getTermType();

		// TODO: Optimize SRTS_all, SRTS_one, SRTS_some for head/nil traversal
		// of lists?
		// The tricky part is constructing the resulting list...

		if (termType == LIST) {
			return map(context, current, s);
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

	private static IStrategoTerm map(Context context, IStrategoTerm current, IStrategy s) {
		if (current.getSubtermCount() == 0)
			return current;
		final IStrategoList list = (IStrategoList) current;

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
			} else if (tail2 == tail || tail2.match(tail)) {
				return current;
			} else {
				return context.getFactory().makeList(head2, tail2);
			}
		} else {
			return mapNoAnnos(context, head2, list, s);
		}
	}

	private static IStrategoList mapNoAnnos(Context context, IStrategoTerm head2, IStrategoList list, IStrategy s) {
		IStrategoTerm[] items = list.getAllSubterms();
		items[0] = head2;
		assert list.head() != head2;
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

	private static IStrategoList mapMaintainAnnos(Context context, IStrategoList list, IStrategy s) {
		if (list.isEmpty()) {
			return list;
		} else {
			IStrategoTerm head = list.head();
			IStrategoTerm head2 = s.invoke(context, head);
			if (head2 == null) {
				return null;
			} else if (head2 != head && !head2.match(head)) {
				return mapNoAnnos(context, head2, list, s);
			} else {
				IStrategoList tail = list.tail();
				IStrategoList tail2 = mapMaintainAnnos(context, tail, s);
				if (tail2 == null) {
					return null;
				} else if (tail2 != tail && !tail2.match(tail)) {
					// TODO: head/tail variation of replaceList
					return context.getFactory().makeList(head2, tail2);
				} else {
					return list;
				}
			}
		}
	}
}
