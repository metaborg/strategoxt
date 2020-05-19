package org.strategoxt.lang.gradual;

/**
 * Type parameter for parametric polymorphism. Probably used incorrectly in legacy constructor
 * signatures.
 */
public class SortVar implements Type {
    public final String name;

    public SortVar(String name) {
        this.name = name;
    }

    @Override public int hashCode() {
        return name.hashCode();
    }

    @Override public boolean equals(Object obj) {
        if(this == obj)
            return true;
        if(obj == null)
            return false;
        if(getClass() != obj.getClass())
            return false;
        SortVar other = (SortVar) obj;
        if(!name.equals(other.name))
            return false;
        return true;
    }

    @Override
    public String toString() {
        return name;
    }
}
