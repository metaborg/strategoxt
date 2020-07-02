package org.strategoxt.lang;

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

    public StrategoErrorExit(String message) {
        this(message, null, null, null);
    }

    public StrategoErrorExit(String message, IStrategoTerm term) {
        this(message, term, null, null);
    }

    public StrategoErrorExit(String message, IStrategoTerm term, Throwable cause) {
        this(message, term, null, cause);
    }

    public StrategoErrorExit(String message, IStrategoTerm term, IStrategoList trace) {
        this(message, term, trace, null);
    }

    public StrategoErrorExit(String message, IStrategoTerm term, IStrategoList trace, Throwable cause) {
        super(1, message, cause);
        this.term = term;
        this.trace = trace;
    }

    public IStrategoTerm getTerm() {
        return term;
    }

    @Override
    public String getLocalizedMessage() { // used for toString() and stacktraces
        final StringBuilder sb = new StringBuilder(super.getMessage());
        final IStrategoTerm term = getTerm();
        if (term != null) {
            sb.append("\n\t" + term);
        }
        if (trace != null) {
            final int depth = trace.getSubtermCount();
            for(int i = 0; i < depth; i++) {
                final IStrategoTerm t = trace.getSubterm(depth - i - 1);
                sb.append("\n\t");
                sb.append(t.getTermType() == IStrategoTerm.STRING ? Tools.asJavaString(t) : t);
            }
        }
        return sb.toString();
    }

    public IStrategoList getTrace() {
        return trace;
    }
}
