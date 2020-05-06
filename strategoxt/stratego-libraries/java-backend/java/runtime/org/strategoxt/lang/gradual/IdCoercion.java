package org.strategoxt.lang.gradual;

public class IdCoercion implements Coercion {
    public static final IdCoercion INSTANCE = new IdCoercion();

    private IdCoercion() {
    }

    @Override public boolean test(TypeInfo typeInfo, Type toCoerce) {
        return true;
    }

    @Override public boolean equals(Object other) {
        return other == INSTANCE;
    }

    @Override public int hashCode() {
        return System.identityHashCode(INSTANCE);
    }

    @Override public Coercion preCompose(TypeInfo typeInfo, Coercion coercion) {
        return coercion;
    }
}
