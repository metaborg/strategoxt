package org.strategoxt.lang;

import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public interface ITermReference {
	
	void set(IStrategoTerm term);
	
	IStrategoTerm get();
}
