package org.strategoxt.lang.gradual;

public class BottomT implements Type {
    public static final BottomT INSTANCE = new BottomT();

    private BottomT() {}

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
        return "_|_";
    }
}
