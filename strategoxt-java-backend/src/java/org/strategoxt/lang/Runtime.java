package org.strategoxt.lang;

import org.strategoxt.lang.terms.ITermFactory;
import org.strategoxt.lang.terms.IStrategoTerm;

import org.strategoxt.lang.terms.aterms.WrappedATermFactory;

public class Runtime {
	public static ITermFactory termFactory = new WrappedATermFactory(); 
	
	// FIXME should parse args and stuff in list
	public static IStrategoTerm prepareCLIArgs(String[] args) { try { return termFactory.parseFromStream(System.in); } catch(Exception e) { return null; } }
}