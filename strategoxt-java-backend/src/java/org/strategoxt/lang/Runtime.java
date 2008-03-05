package org.strategoxt.lang;

import org.strategoxt.lang.terms.IStrategoTermBuilder;
import org.strategoxt.lang.terms.IStrategoList;

public class Runtime {
	public static IStrategoTermBuilder termFactory = null; 
	
	public static IStrategoList prepareCLIArgs(String[] args) { return termFactory.makeList(); }
}