package org.strategoxt.lang;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
import org.spoofax.terms.TermFactory;

public class Term {
	
	public static final Strategy[] NO_STRATEGIES = {};
	
	public static final IStrategoTerm[] NO_TERMS = TermFactory.EMPTY;
	
	private Term() {}
	
	public static IStrategoList checkListTail(IStrategoTerm t) {
		if(t.getTermType() != IStrategoTerm.LIST) {
			System.err.println("Warning: trying to build list with illegal tail: " + t.toString());
			    return null;
		}
		return (IStrategoList)t;
	}

	public static IStrategoList checkListAnnos(ITermFactory factory, IStrategoTerm annos) {
		return annos.getTermType() != IStrategoTerm.LIST
			? factory.makeList(annos)
			: (IStrategoList) annos;
	}
}