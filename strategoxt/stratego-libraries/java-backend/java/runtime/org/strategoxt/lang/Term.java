package org.strategoxt.lang;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
import org.spoofax.interpreter.terms.TermType;
import org.spoofax.terms.TermFactory;

public class Term {
	
	public static final Strategy[] NO_STRATEGIES = {};
	
	public static final IStrategoTerm[] NO_TERMS = TermFactory.EMPTY;
	
	private Term() {}
	
	public static IStrategoList checkListTail(IStrategoTerm t) {
		if(t.getType() != TermType.LIST) {
			System.err.println("Warning: trying to build list with illegal tail: " + t.toString());
			    return null;
		}
		return (IStrategoList)t;
	}

	public static IStrategoList checkListAnnos(ITermFactory factory, IStrategoTerm annos) {
		return annos.getType() != TermType.LIST
			? factory.makeList(annos)
			: (IStrategoList) annos;
	}
}