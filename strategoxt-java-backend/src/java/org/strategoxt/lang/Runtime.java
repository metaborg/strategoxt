package org.strategoxt.lang;

import org.strategoxt.lang.terms.IStrategoTermBuilder;
import org.strategoxt.lang.terms.IStrategoList;

import org.strategoxt.lang.terms.aterms.WrappedATermFactory;

public class Runtime {
	public static IStrategoTermBuilder termFactory = new WrappedATermFactory(); 
	
	public static IStrategoList prepareCLIArgs(String[] args) { return termFactory.makeList(); }
}