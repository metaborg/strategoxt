package org.strategoxt.lang.gradual;

import java.io.Serializable;

public interface Type extends Serializable {
    boolean equals(Object o);
    int hashCode();
    public String toString();
}
