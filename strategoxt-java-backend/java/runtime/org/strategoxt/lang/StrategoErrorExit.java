package org.strategoxt.lang;

import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class StrategoErrorExit extends StrategoExit {

	private static final long serialVersionUID = 1718563644820693442L;
	
	private final IStrategoTerm term;

	public StrategoErrorExit(String message, IStrategoTerm term) {
		super(1, message);
		this.term = term;
	}
	
	public StrategoErrorExit(String message) {
		this(message, null);
	}
	
	public IStrategoTerm getTerm() {
		return term;
	}
}
