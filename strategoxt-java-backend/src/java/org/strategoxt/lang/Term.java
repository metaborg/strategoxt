package org.strategoxt.lang;

import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoConstructor;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;

public class Term {
	
	private Term() {}
	
	public static boolean nonNull(IStrategoTerm t) { return t != null; }
	
	public static boolean matchAppl(IStrategoTerm t, IStrategoConstructor c) {
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