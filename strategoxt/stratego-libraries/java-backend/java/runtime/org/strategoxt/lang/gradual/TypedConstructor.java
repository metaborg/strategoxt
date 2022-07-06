package org.strategoxt.lang.gradual;

import java.util.List;
import java.util.StringJoiner;

public class TypedConstructor {
    public final String constructorName;
    public final List<Type> subTermTypes;
    public final Type type;

    public TypedConstructor(String constructorName, List<Type> subTermTypes, Type type) {
        this.constructorName = constructorName;
        this.subTermTypes = subTermTypes;
        this.type = type;
    }

    @Override public int hashCode() {
        final int prime = 31;
        int result = 1;
        result = prime * result + constructorName.hashCode();
        result = prime * result + subTermTypes.hashCode();
        result = prime * result + type.hashCode();
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
        if(!type.equals(other.type))
            return false;
        return true;
    }

    @Override public String toString() {
        final StringJoiner subTerms = new StringJoiner(" * ");
        for(Type type : subTermTypes) {
            subTerms.add(type.toString());
        }
        return constructorName + " : " + subTerms.toString() + " -> " + type;
    }
}
