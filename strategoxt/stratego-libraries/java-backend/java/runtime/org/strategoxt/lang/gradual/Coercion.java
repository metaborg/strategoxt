package org.strategoxt.lang.gradual;

public interface Coercion {
    boolean test(TypeInfo typeInfo, Type toCoerce);

    Coercion preCompose(TypeInfo typeInfo, Coercion coercion);
}
