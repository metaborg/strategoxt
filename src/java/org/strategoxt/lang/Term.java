package org.strategoxt.lang;

import org.strategoxt.lang.terms.IStrategoAppl;
import org.strategoxt.lang.terms.IStrategoConstructor;
import org.strategoxt.lang.terms.IStrategoList;
import org.strategoxt.lang.terms.IStrategoTerm;

public class Term {
	
	public static boolean nonNull(IStrategoTerm t) { return t != null; }
	public static boolean matchConstructor(IStrategoTerm t, IStrategoConstructor c) {
		if(t.getTermType() == IStrategoTerm.APPL)
			return ((IStrategoAppl)t).getConstructor().equals(c);
		if(t.getTermType() == IStrategoTerm.LIST)
			return c.getName().equals("[]");
		if(t.getTermType() == IStrategoTerm.TUPLE)
			return c.getName().equals("") && t.getSubtermCount() == c.getArity();
		return false;
	}
	public static IStrategoList checkTermList(IStrategoTerm t) {
		if(t.getTermType() != IStrategoTerm.LIST) {
			System.err.println("Warning: trying to build list with illegal tail: " + t.toString());
			    return null;
		}
		return (IStrategoList)t;
	}

}