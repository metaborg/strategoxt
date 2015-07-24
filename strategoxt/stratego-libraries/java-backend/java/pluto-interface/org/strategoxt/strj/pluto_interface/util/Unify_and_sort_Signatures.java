package org.strategoxt.strj.pluto_interface.util;

import java.util.Comparator;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.Term;

public class Unify_and_sort_Signatures extends Abstract_Unify_and_sort {

	public Unify_and_sort_Signatures() {
		super("Unify_and_sort_Signatures");
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
				int numSVars1 = ((IStrategoList)Term.termAt(o1, 1)).size();
				int numSVars2 = ((IStrategoList)Term.termAt(o2, 1)).size();
				int svarsComp = Integer.compare(numSVars1, numSVars2);
				if (svarsComp != 0) {
					return svarsComp;
				}
				int numTVars1 = ((IStrategoList)Term.termAt(o1, 2)).size();
				int numTVars2 = ((IStrategoList)Term.termAt(o2, 2)).size();
				return Integer.compare(numTVars1, numTVars2);
			}
		};
	}

}
