package org.strategoxt.strj.util;

import java.util.Comparator;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.Term;

public class Unify_and_sort_Overlays extends Abstract_Unify_and_sort {

	public Unify_and_sort_Overlays() {
		super("Unify_and_sort_Overlays");
	}

	@Override
	protected Comparator<IStrategoTerm> getComparator() {
		return new Comparator<IStrategoTerm>() {

			@Override
			public int compare(IStrategoTerm o1, IStrategoTerm o2) {
				String name1 = Term.asJavaString(Term.termAt(o1, 0));
				String name2 = Term.asJavaString(Term.termAt(o2, 0));
				
				int nameComp = name1.compareTo(name2);
				if (nameComp != 0) {
					return nameComp;
				}
				int numArgs1 = ((IStrategoList)Term.termAt(o1, 1)).size();
				int numArgs2 = ((IStrategoList)Term.termAt(o2, 1)).size();
				int argsComp = Integer.compare(numArgs1, numArgs2);
				return argsComp;
			}
		};
	}

}
