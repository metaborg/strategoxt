package org.strategoxt.lang;

import org.strategoxt.lang.terms.IStrategoTerm;
import org.strategoxt.lang.terms.IStrategoList;

public class Term {
	
	public static boolean nonNull(IStrategoTerm t) { return t != null; }
	public static IStrategoList checkTermList(IStrategoList ls) { return ls; }
}