package org.strategoxt.lang.gradual;

public class IntT implements Type {
    public static final IntT INSTANCE = new IntT();

    private IntT() {}

    @Override
    public boolean equals(Object other) {
        return other == INSTANCE;
    }

    @Override
    public int hashCode() {
        return System.identityHashCode(INSTANCE);
    }

    @Override
    public String toString() {
        return "int";
    }

    private Object readResolve() {
        return INSTANCE;
    }
}
