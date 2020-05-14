package org.strategoxt.lang.gradual;

public class DynT implements Type {
    public static final DynT INSTANCE = new DynT();

    private DynT() {}

    @Override
    public boolean equals(Object other) {
        return other == INSTANCE;
    }

    @Override
    public int hashCode() {
        return System.identityHashCode(INSTANCE);
    }
}
