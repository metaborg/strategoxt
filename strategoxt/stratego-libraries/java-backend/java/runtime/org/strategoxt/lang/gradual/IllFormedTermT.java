package org.strategoxt.lang.gradual;

import java.util.List;

public class IllFormedTermT extends TypedConstructor implements Type {
    public IllFormedTermT(String constructorName, List<Type> subTermTypes) {
        super(constructorName, subTermTypes);
    }
}
