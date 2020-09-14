package org.strategoxt.lang.gradual;

public class IllFormedTerms implements Type {
    public static final IllFormedTerms INSTANCE = new IllFormedTerms();

    private IllFormedTerms() {
    }

    @Override
    public String toString() {
        return "IllFormedTerms";
    }

    @Override
    public boolean equals(Object other) {
        return this == other;
    }

    @Override
    public int hashCode() {
        return System.identityHashCode(this);
    }
}
