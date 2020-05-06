package org.strategoxt.lang.gradual;

public class ListT implements Type {
    public final Type contentType;

    public ListT(Type contentType) {
        this.contentType = contentType;
    }

    @Override public int hashCode() {
        return contentType.hashCode();
    }

    @Override public boolean equals(Object obj) {
        if(this == obj)
            return true;
        if(obj == null)
            return false;
        if(getClass() != obj.getClass())
            return false;
        ListT other = (ListT) obj;
        if(!contentType.equals(other.contentType))
            return false;
        return true;
    }
}
