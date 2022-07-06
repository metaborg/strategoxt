package org.strategoxt.lang.gradual;

import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

/**
 * Unnamed union of types. Useful inside the type calculation / checking.
 */
public class OneOf implements Type {
    public final Set<Type> types;

    public OneOf(Set<Type> types) {
        if(types.isEmpty()) {
            throw new IllegalArgumentException("Types in OneOf may not be empty");
        }
        this.types = new HashSet<>();
        for(Type type : types) {
            if(type instanceof OneOf) {
                this.types.addAll(((OneOf) type).types);
            } else {
                this.types.add(type);
            }
        }
    }

    @Override public int hashCode() {
        final int prime = 31;
        int result = 1;
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
        OneOf other = (OneOf) obj;
        return types.equals(other.types);
    }

    @Override
    public String toString() {
        final StringBuilder typesStringBuilder = new StringBuilder();
        for(Iterator<Type> iterator = types.iterator();;) {
            typesStringBuilder.append(iterator.next().toString());
            if(iterator.hasNext()) {
                typesStringBuilder.append(", ");
            } else {
                break;
            }
        }
        return "oneOf(" + typesStringBuilder + ")";
    }
}
