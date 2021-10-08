package org.strategoxt.lang.gradual;

public class BlobT implements Type {
    public static final BlobT INSTANCE = new BlobT();

    private BlobT() {}

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
        return "blob";
    }

    private Object readResolve() {
        return INSTANCE;
    }
}
