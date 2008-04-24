package org.strategoxt.lang;

import org.strategoxt.NotImplementedException;
import org.strategoxt.lang.terms.IStrategoAppl;
import org.strategoxt.lang.terms.IStrategoConstructor;
import org.strategoxt.lang.terms.IStrategoTerm;
import org.strategoxt.lang.terms.IStrategoList;

public class Term {
	
	public static boolean nonNull(IStrategoTerm t) { return t != null; }
	public static boolean matchConstructor(IStrategoTerm t, IStrategoConstructor c) {
		if(t.getTermType() == IStrategoTerm.APPL) {
			return ((IStrategoAppl)t).getConstructor().equals(c);
		}
		throw new NotImplementedException();
	}
	public static IStrategoList checkTermList(IStrategoList ls) { return ls; }
}