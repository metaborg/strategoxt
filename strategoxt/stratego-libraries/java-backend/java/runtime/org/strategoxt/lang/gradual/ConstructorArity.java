package org.strategoxt.lang.gradual;

public class ConstructorArity {
    public final String constructorName;
    public final int arity;

    public ConstructorArity(String constructorName, int arity) {
        super();
        this.constructorName = constructorName;
        this.arity = arity;
    }

    @Override public int hashCode() {
        final int prime = 31;
        int result = 1;
        result = prime * result + arity;
        result = prime * result + constructorName.hashCode();
        return result;
    }

    @Override public boolean equals(Object obj) {
        if(this == obj)
            return true;
        if(obj == null)
            return false;
        if(getClass() != obj.getClass())
            return false;
        ConstructorArity other = (ConstructorArity) obj;
        if(arity != other.arity)
            return false;
        if(!constructorName.equals(other.constructorName))
            return false;
        return true;
    }

    @Override public String toString() {
        return "ConstructorArity(" + constructorName + ", " + arity + ")";
    }
}
