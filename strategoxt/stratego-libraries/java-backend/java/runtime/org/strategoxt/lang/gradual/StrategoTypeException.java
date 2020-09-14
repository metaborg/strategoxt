package org.strategoxt.lang.gradual;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.StrategoException;

public class StrategoTypeException extends StrategoException {
    public final IStrategoTerm current;

    public StrategoTypeException(IStrategoTerm current) {
        this.current = current;
    }

}
