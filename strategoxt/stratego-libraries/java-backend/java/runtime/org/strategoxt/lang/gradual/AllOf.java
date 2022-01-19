package org.strategoxt.lang.gradual;

import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

/**
 * Unnamed intersection of types. Useful for typing terms that could have multiple types.
 * When deriving the type of an existing term, multiple sorts might apply, especially lower in the
 * tree, when the signatures of multiple languages are loaded. I mean, which language doesn't have
 * an `Int("1")` right?
 */
public class AllOf implements Type {
    public final Set<Type> types;

    public AllOf(Set<Type> types) {
        if(types.isEmpty()) {
            throw new IllegalArgumentException("Types in AllOf may not be empty");
        }
        this.types = new HashSet<>();
        for(Type type : types) {
            if(type instanceof AllOf) {
                this.types.addAll(((AllOf) type).types);
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
        AllOf other = (AllOf) obj;
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
        return "allOf(" + typesStringBuilder + ")";
    }
}
