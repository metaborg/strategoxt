package org.strategoxt.lang.gradual;

import java.util.List;

public class Sort implements Type {
    public final String sort;
    public final List<Type> types;

    public Sort(String sort, List<Type> types) {
        this.sort = sort;
        this.types = types;
    }

    @Override public int hashCode() {
        final int prime = 31;
        int result = 1;
        result = prime * result + sort.hashCode();
        result = prime * result + types.hashCode();
        return result;
    }

    @Override public boolean equals(Object obj) {
        if(this == obj)
            return true;
        if(obj == null)
            return false;
        if(getClass() != obj.getClass())
            return false;
        Sort other = (Sort) obj;
        if(!sort.equals(other.sort))
            return false;
        if(!types.equals(other.types))
            return false;
        return true;
    }
}
