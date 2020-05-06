package org.strategoxt.lang.gradual;

import java.util.List;

public class TupleT implements Type {
    public final List<Type> childTypes;

    public TupleT(List<Type> childTypes) {
        this.childTypes = childTypes;
    }

    @Override public int hashCode() {
        return childTypes.hashCode();
    }

    @Override public boolean equals(Object obj) {
        if(this == obj)
            return true;
        if(obj == null)
            return false;
        if(getClass() != obj.getClass())
            return false;
        TupleT other = (TupleT) obj;
        if(!childTypes.equals(other.childTypes))
            return false;
        return true;
    }
}
