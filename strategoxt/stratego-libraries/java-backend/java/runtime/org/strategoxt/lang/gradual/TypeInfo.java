package org.strategoxt.lang.gradual;

import java.util.AbstractMap;
import java.util.Collection;
import java.util.Deque;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.Set;

import io.usethesource.capsule.BinaryRelation;
import io.usethesource.capsule.BinaryRelation.Immutable;

public class TypeInfo {
    private BinaryRelation.Transient<Type, Type> injections = BinaryRelation.Transient.of();
    private final Map<TypedConstructor, Type> consSorts = new HashMap<>();

    public boolean typeIsA(Type currentType, Type type) {
        // TODO: Handle `type instanceof SortVar`, pass an bindings state object
        if(type == DynT.INSTANCE) {
            // TODO: what relation is this? Is currentType == DynT.INSTANCE also ok?
            return true;
        }
        if(injections.containsEntry(currentType, type)) {
            return true;
        }
        if(currentType instanceof Sort && type instanceof Sort) {
            final Sort currentSort = (Sort) currentType;
            final Sort sort = (Sort) type;
            if(currentSort.sort.equals(sort.sort)) {
                return typeIsA(currentSort.types, sort.types);
            }
        }
        return false;
    }

    public boolean typeIsA(Collection<Type> currentTypes, Collection<Type> types) {
        if(currentTypes.size() == types.size()) {
            for(Iterator<Type> ctIter = currentTypes.iterator(), tIter = types.iterator(); ctIter.hasNext();) {
                if(!typeIsA(ctIter.next(), tIter.next())) {
                    return false;
                }
            }
            return true;
        }
        return false;
    }

    public Type leastUpperBound(List<Type> subTermTypes) {
        // TODO: how does this interact with IllFormedTermT?
        // TODO: And SortVar? Pass around the environment everywhere? Need bounds instead of binding
        if(subTermTypes.isEmpty()) {
            throw new IllegalArgumentException("least upper bound of empty list is undefined");
        }
        final Iterator<Type> it = subTermTypes.iterator();
        Type lub = it.next();
        while(it.hasNext()) {
            final Type next = it.next();
            if(typeIsA(lub, next)) {
                lub = next;
            } else if(typeIsA(next, lub)) {
                // next <: lub is fine
            } else {
                final Set<Type> upperBounds = new HashSet<>();
                upperBounds.addAll(injections.get(lub));
                upperBounds.retainAll(injections.get(next));
                if(upperBounds.isEmpty()) {
                    lub = DynT.INSTANCE;
                    // lub = new Alternative(lub, next); // Breaks assumptions. should be `new Alternatives(...);` constructed at the end.
                } else {
                    lub = lowestType(upperBounds);
                }
                // TODO: cache found LUB?
            }
        }
       return lub;
    }

    private Type lowestType(Collection<Type> relatedTypes) {
        assert relatedTypes.size() > 1;
        final Iterator<Type> it = relatedTypes.iterator();
        Type lowestType = it.next();
        while(it.hasNext()) {
            final Type next = it.next();
            if(!typeIsA(lowestType, next)) {
                lowestType = next;
            }
        }
        return lowestType;
    }

    public Type typeOf(String constructorName, List<Type> subTermTypes) {
        final /* @Nullable */ Type type =
            consSorts.get(new TypedConstructor(constructorName, subTermTypes));
        if(type != null) {
            return type;
        }
        return new IllFormedTermT(constructorName, subTermTypes);
    }

    public void registerConstructor(Type sort, String name, List<Type> subTermTypes) {
        consSorts.put(new TypedConstructor(name, subTermTypes), sort);
    }

    public void registerInjection(Type from, Type to) {
        injections.__insert(from, to);
    }

    public void finishRegistration() {
        injections = reflexiveTransitiveClosure(injections.freeze());
    }

    private static BinaryRelation.Transient<Type, Type> reflexiveTransitiveClosure(Immutable<Type, Type> rel) {
        final Deque<Map.Entry<Type, Type>> worklist =
            new LinkedList<>(rel.entrySet());
        final BinaryRelation.Transient<Type, Type> result = rel.asTransient();
        while(!worklist.isEmpty()) {
            final Map.Entry<Type, Type> e = worklist.pop();
            for(Type post : rel.get(e.getValue())) {
                if(!result.containsEntry(e.getKey(), post)) {
                    result.__insert(e.getKey(), post);
                    worklist.add(new AbstractMap.SimpleImmutableEntry<>(e.getKey(), post));
                }
            }
        }
        for(Map.Entry<Type, Type> e : rel.entrySet()) {
            final Type key = e.getKey();
            final Type value = e.getValue();
            result.__insert(key, key);
            result.__insert(value, value);
        }
        return result;
    }

    public void clear() {
        injections = BinaryRelation.Transient.of();
        consSorts.clear();
    }
}
