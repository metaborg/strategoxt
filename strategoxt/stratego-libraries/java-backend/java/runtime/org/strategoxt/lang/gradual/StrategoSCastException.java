package org.strategoxt.lang.gradual;

import org.strategoxt.lang.StrategoException;

public class StrategoSCastException extends StrategoException {
    public final FunTCoercion funTCoercion;
    public final FunTCoercion coercion;

    public StrategoSCastException(FunTCoercion funTCoercion, FunTCoercion coercion) {
        this.funTCoercion = funTCoercion;
        this.coercion = coercion;
    }
}
