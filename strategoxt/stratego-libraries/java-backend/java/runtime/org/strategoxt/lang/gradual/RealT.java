package org.strategoxt.lang.gradual;

public class RealT implements Type {
    public static final RealT INSTANCE = new RealT();

    private RealT() {}

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
        return "real";
    }
}
