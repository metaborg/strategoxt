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

    @Override public boolean equals(Object o) {
        if(this == o)
            return true;
        if(o == null || getClass() != o.getClass())
            return false;

        IllFormedTermT that = (IllFormedTermT)o;

        if(!constructorName.equals(that.constructorName))
            return false;
        return subTermTypes.equals(that.subTermTypes);
    }

    @Override
    public String toString() {
        return constructorName + "#(" + subTermTypes + ")";
    }
}
