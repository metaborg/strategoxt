package org.strategoxt.lang.gradual;

import java.util.Iterator;
import java.util.Set;

/**
 * When deriving the type of an existing term, multiple sorts might apply, especially lower in the
 * tree, when the signatures of multiple languages are loaded. I mean, which language doesn't have
 * an `Int("1")` right? 
 */
public class OneOf implements Type {
    public final Set<Type> types;

    public OneOf(Set<Type> types) {
        this.types = types;
        assert !types.isEmpty();
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
        if(!types.equals(other.types))
            return false;
        return true;
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
        return "oneOf(" + typesStringBuilder.toString() + ")";
    }
}
