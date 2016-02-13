package org.strategoxt.lang;

import java.util.Iterator;

import org.spoofax.interpreter.core.Tools;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * Exception thrown when the application exits with an fatal error message.
 * 
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class StrategoErrorExit extends StrategoExit {

	private static final long serialVersionUID = 1718563644820693442L;

	private final IStrategoTerm term;
	private final IStrategoList trace;

	public StrategoErrorExit(String message, IStrategoTerm term, Throwable cause) {
		super(1, message, cause);
		this.term = term;
		this.trace = null;
	}

	public StrategoErrorExit(String message, IStrategoTerm term,
			IStrategoList trace) {
		super(1, message, null);
		this.term = term;
		this.trace = trace;
	}

	public StrategoErrorExit(String message, IStrategoTerm term) {
		this(message, term, (IStrategoList) null);
	}

	public StrategoErrorExit(String message) {
		this(message, null, (IStrategoList) null);
	}

	public IStrategoTerm getTerm() {
		return term;
	}

	@Override
	public String getLocalizedMessage() { // used for toString() and stacktraces
		StringBuilder sb = new StringBuilder(getMessage());
		IStrategoTerm term = getTerm();
		if (term != null) {
			sb.append("\n\t" + term);
		}
		if (trace != null && !trace.isEmpty()) {
			IStrategoList tail = trace;
			while(!tail.isEmpty()) {
				IStrategoTerm t = tail.head();
				sb.append("\n\t" + (t.getTermType() == IStrategoTerm.STRING ? Tools.asJavaString(t) : t));
				tail = tail.tail();
			}
		}
		return sb.toString();
	}

	public IStrategoList getTrace() {
		return trace;
	}
}
