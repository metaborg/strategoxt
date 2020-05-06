package org.strategoxt.lang.gradual;

import java.util.List;

public class TypedConstructor {
    public final String name;
    public final List<Type> subTermTypes;

    public TypedConstructor(String name, List<Type> subTermTypes) {
        this.name = name;
        this.subTermTypes = subTermTypes;
    }

    @Override public int hashCode() {
        final int prime = 31;
        int result = 1;
        result = prime * result + name.hashCode();
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
        if(!name.equals(other.name))
            return false;
        if(!subTermTypes.equals(other.subTermTypes))
            return false;
        return true;
    }
}
