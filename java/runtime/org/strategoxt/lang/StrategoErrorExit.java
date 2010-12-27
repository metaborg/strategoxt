package org.strategoxt.lang;

import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * Exception thrown when the application exits with an fatal error message.
 * 
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class StrategoErrorExit extends StrategoExit {

	private static final long serialVersionUID = 1718563644820693442L;
	
	private final IStrategoTerm term;
	
	public StrategoErrorExit(String message, IStrategoTerm term, Throwable cause) {
		super(1, message, cause);
		this.term = term;
	}

	public StrategoErrorExit(String message, IStrategoTerm term) {
		this(message, term, null);
	}
	
	public StrategoErrorExit(String message) {
		this(message, null, null);
	}
	
	public IStrategoTerm getTerm() {
		return term;
	}
	
	@Override
	public String getLocalizedMessage() { // used for toString() and stacktraces
		return getMessage() + (getTerm() == null ? "" : "\n\t" + getTerm());
	}
}
