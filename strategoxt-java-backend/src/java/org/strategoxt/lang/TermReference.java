package org.strategoxt.lang;

import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class TermReference {
	private IStrategoTerm term;
	
	public void set(IStrategoTerm term) {
		this.term = term;
	}
	
	public IStrategoTerm get() {
		return term;
	}
	
	@Override
	public String toString() {
		return "->" + term;
	}
}
