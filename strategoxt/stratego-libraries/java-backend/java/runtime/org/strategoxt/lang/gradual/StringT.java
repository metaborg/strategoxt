package org.strategoxt.lang.gradual;

public class StringT implements Type {
    public static final StringT INSTANCE = new StringT();

    private StringT() {}

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
        return "string";
    }

    private Object readResolve() {
        return INSTANCE;
    }
}
