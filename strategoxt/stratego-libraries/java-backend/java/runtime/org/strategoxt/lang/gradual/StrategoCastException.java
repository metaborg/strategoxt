package org.strategoxt.lang.gradual;

import org.strategoxt.lang.StrategoException;
import org.spoofax.interpreter.terms.IStrategoTerm;

public class StrategoCastException extends StrategoException {
    public final Type currentType;
    public final Type type;
    public final IStrategoTerm term;

    public StrategoCastException(Type currentType, Type type) {
        super("Cannot cast from " + currentType + " to " + type + " (found while composing casts in proxies).");
        this.currentType = currentType;
        this.type = type;
        this.term = null;
    }

    public StrategoCastException(Type currentType, Type type, IStrategoTerm term) {
        super("Cannot cast the following term from " + currentType + " to " + type + ":\n" + term);
        this.currentType = currentType;
        this.type = type;
        this.term = term;
    }
}
