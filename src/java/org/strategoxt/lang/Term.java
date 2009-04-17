package org.strategoxt.lang;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

public class Term {
	
	public static final Strategy[] EMPTY_STRATEGY_LIST = new Strategy[0];
	
	public static final IStrategoTerm[] EMPTY_TERM_LIST = new IStrategoTerm[0];
	
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