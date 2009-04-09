package org.strategoxt.lang;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;

public class Term {
	
	private Term() {}
	
	public static IStrategoList checkTermList(IStrategoTerm t) {
		if(t.getTermType() != IStrategoTerm.LIST) {
			System.err.println("Warning: trying to build list with illegal tail: " + t.toString());
			    return null;
		}
		return (IStrategoList)t;
	}

}