package org.strategoxt.lang.gradual;

import java.util.List;

public class IllFormedTermT implements Type {
    public final String constructorName;
    public final List<Type> subTermTypes;

    public IllFormedTermT(String constructorName, List<Type> subTermTypes) {
        super();
        this.constructorName = constructorName;
        this.subTermTypes = subTermTypes;
    }

    @Override public int hashCode() {
        final int prime = 31;
        int result = 1;
        result = prime * result + constructorName.hashCode();
        result = prime * result + subTermTypes.hashCode();
        return result;
    }

    @Override public boolean equals(Object obj) {
        if(this == obj)
            return true;
        if(obj == null)
            return false;
        if(getClass() != obj.getClass())
            return false;
        TypedConstructor other = (TypedConstructor) obj;
        if(!constructorName.equals(other.constructorName))
            return false;
        if(!subTermTypes.equals(other.subTermTypes))
            return false;
        return true;
    }

    @Override
    public String toString() {
        return constructorName + "#(" + subTermTypes + ")";
    }
}
