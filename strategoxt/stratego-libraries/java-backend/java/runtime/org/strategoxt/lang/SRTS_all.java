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

	private static IStrategoList map(Context context, IStrategoList list, Strategy s) {
		if(list.isEmpty()) {
			return list;
		}
		
		return mapMaintainAnnos(context, list, s, noAnnosTail(list));
	}

	private static IStrategoList mapIgnoreAnnos(Context context, IStrategoList list, Strategy s) {
		IStrategoTerm[] inputs = list.getAllSubterms();
		IStrategoTerm[] results = null;

		for(int i = 0; i < inputs.length; i++) {
			IStrategoTerm arg = inputs[i];
			IStrategoTerm arg2 = s.invoke(context, arg);
			if(arg2 != arg) {
				if(arg2 == null)
					return null;
				if(results == null)
					results = inputs.clone();
				results[i] = arg2;
			}
		}

		return results == null ? list : context.getFactory().replaceList(results, list);
	}

	private static IStrategoList mapMaintainAnnos(Context context, IStrategoList list, Strategy s,
		IStrategoList noAnnosTail) {
		if(noAnnosTail == list) {
			return mapIgnoreAnnos(context, list, s);
		}
		IStrategoTerm head = list.head();
		IStrategoTerm head2 = s.invoke(context, head);
		IStrategoList result;

		if(head2 == null) {
			return null;
		}
		if(head2 == head || head2.match(head)) {
			head2 = head;
		}

		IStrategoList tail = list.tail();
		IStrategoList tail2 = mapMaintainAnnos(context, tail, s, noAnnosTail);

		if(tail2 == null) {
			return null;
		}
		if(head2 == head && tail2 == tail) { // (tail2.match(tail) not necessary because of recursion)
			return list;
		}

		result = context.getFactory().makeListCons(head2, tail2, list.getAnnotations());
		context.getFactory().replaceTerm(result, list); // set origin

		return result;
	}

	public static IStrategoList noAnnosTail(IStrategoList list) {
		IStrategoList result = list;
		IStrategoList cursor = list;
		for(int i = 0; i < list.size(); i++) {
			IStrategoList annos = cursor.getAnnotations();
			if(!(annos == null || annos.isEmpty())) {
				result = cursor;
			}
			cursor = cursor.tail();
		}
		{
			IStrategoList annos = cursor.getAnnotations();
			if(!(annos == null || annos.isEmpty())) {
				result = cursor;
			}
		}
		if(result.isEmpty()) {
			IStrategoList annos = result.getAnnotations();
			if(annos == null || annos.isEmpty()) {
				return null;
			}
		}
		return result;
	}
}
