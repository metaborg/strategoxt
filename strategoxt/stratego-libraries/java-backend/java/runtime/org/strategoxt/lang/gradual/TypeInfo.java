package org.strategoxt.lang.gradual;

import java.util.AbstractMap;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Deque;
import java.util.HashSet;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;

import io.usethesource.capsule.BinaryRelation;
import io.usethesource.capsule.BinaryRelation.Immutable;
import io.usethesource.capsule.Set;

public class TypeInfo {
    private BinaryRelation.Transient<Type, Type> injections = BinaryRelation.Transient.of();
    private BinaryRelation.Transient<ConstructorArity, TypedConstructor> consSorts = BinaryRelation.Transient.of();

    public void internalCopyFrom(TypeInfo toCopy) {
        for(Map.Entry<Type, Type> e : toCopy.injections.entrySet()) {
            this.injections.__insert(e.getKey(), e.getValue());
        }
        for(Map.Entry<ConstructorArity, TypedConstructor> e : toCopy.consSorts.entrySet()) {
            this.consSorts.__insert(e.getKey(), e.getValue());
        }
    }

    public boolean typeIsA(Type currentType, Type type, Map<SortVar, Type> env) {
        if(currentType == type || currentType.equals(type)) {
            return true;
        }
        if(currentType == BottomT.INSTANCE) {
            return true;
        }
        if(type instanceof SortVar) {
            final SortVar sortvar = (SortVar) type;
            final Type typeOfVar = env.get(sortvar);
            if(typeOfVar != null) {
                final Type lub = leastUpperBound(Arrays.asList(currentType, typeOfVar), env);
                env.put(sortvar, lub);
            } else {
                env.put(sortvar, currentType);
            }
            return true;
        }
        if(type == DynT.INSTANCE) {
            return true;
        }
        if(injections.containsEntry(currentType, type)) {
            return true;
        }
        if(currentType instanceof OneOf) {
            boolean result = false;
            for(Type ct : ((OneOf) currentType).types) {
                final Map<SortVar, Type> speculativeEnv = new HashMap<>(env);
                if(typeIsA(ct, type, speculativeEnv)) {
                    env.putAll(speculativeEnv);
                    result = true;
                } else {
                    return false;
                }
            }
            return result;
        }
        if(type instanceof OneOf) {
            for(Type t : ((OneOf) type).types) {
                final Map<SortVar, Type> speculativeEnv = new HashMap<>(env);
                if(typeIsA(currentType, t, speculativeEnv)) {
                    env.putAll(speculativeEnv);
                    return true;
                }
            }
            return false;
        }
        if(currentType instanceof AllOf) {
            for(Type ct : ((AllOf) currentType).types) {
                final Map<SortVar, Type> speculativeEnv = new HashMap<>(env);
                if(typeIsA(ct, type, speculativeEnv)) {
                    env.putAll(speculativeEnv);
                    return true;
                }
            }
            return false;
        }
        if(type instanceof AllOf) {
            boolean result = false;
            for(Type t : ((AllOf) type).types) {
                final Map<SortVar, Type> speculativeEnv = new HashMap<>(env);
                if(typeIsA(currentType, t, speculativeEnv)) {
                    env.putAll(speculativeEnv);
                    result = true;
                } else {
                    return false;
                }
            }
            return result;
        }
        if(currentType instanceof Sort && type instanceof Sort) {
            final Sort currentSort = (Sort) currentType;
            final Sort sort = (Sort) type;
            if(currentSort.sort.equals(sort.sort)) {
                return typeIsA(currentSort.types, sort.types, env);
            } else {
                final java.util.Set<Type> injectIntoType = new HashSet<>(injections.inverse().get(type));
                // remove the type itself and any cycles
                injectIntoType.removeIf(t -> injections.containsEntry(type, t));
                switch(injectIntoType.size()) {
                    case 0:
                        return false;
                    case 1:
                        return typeIsA(currentType, injectIntoType.iterator().next(), env);
                    default:
                        return typeIsA(currentType, new OneOf(injectIntoType), env);
                }
            }
        }
        if(((currentType instanceof IntT) || (currentType instanceof RealT) || (currentType instanceof StringT) || (currentType instanceof BlobT)) && currentType.equals(type)) {
          return true;
        }
        return false;
    }

    public boolean typeIsA(Collection<Type> currentTypes, Collection<Type> types, Map<SortVar, Type> env) {
        if(currentTypes.size() == types.size()) {
            for(Iterator<Type> ctIter = currentTypes.iterator(), tIter = types.iterator(); ctIter.hasNext();) {
                if(!typeIsA(ctIter.next(), tIter.next(), env)) {
                    return false;
                }
            }
            return true;
        }
        return false;
    }

    public Type leastUpperBound(List<Type> subTermTypes, Map<SortVar, Type> env) {
        // TODO: how does this interact with SortVar? Pass around the environment everywhere? Need bounds instead of binding
        if(subTermTypes.isEmpty()) {
            throw new IllegalArgumentException("least upper bound of empty list is undefined");
        }
        final Iterator<Type> it = subTermTypes.iterator();
        Type lub = it.next();
        while(it.hasNext()) {
            final Type next = it.next();
            if(typeIsA(lub, next, new HashMap<>(env))) {
                lub = next;
            } else if(typeIsA(next, lub, new HashMap<>(env))) {
                // next <: lub is fine
            } else if(sharedPrefix(next, lub)) {
                // e.g. List(A) v List(B) == List(A v B)
                final Sort nextSort = (Sort) next;
                final Sort lubSort = (Sort) lub;
                final List<Type> argumentTypes = new ArrayList<>(nextSort.types.size());
                for(Iterator<Type> nextIter = nextSort.types.iterator(), lubIter = lubSort.types.iterator(); nextIter.hasNext();) {
                    final Type nextArgType = nextIter.next();
                    final Type lubArgType = lubIter.next();
                    argumentTypes.add(leastUpperBound(Arrays.asList(nextArgType, lubArgType), env));
                }
                lub = new Sort(((Sort) next).sort, argumentTypes);
            } else {
                final java.util.Set<Type> upperBounds = new HashSet<>();
                upperBounds.addAll(injections.get(lub));
                upperBounds.retainAll(injections.get(next));
                if(upperBounds.isEmpty()) {
                    return new OneOf(new HashSet<>(subTermTypes));
                } else {
                    lub = lowestType(upperBounds, env);
                }
                // TODO: cache found LUB?
            }
        }
        return lub;
    }

    private boolean sharedPrefix(Type next, Type lub) {
        if(next instanceof Sort && lub instanceof Sort) {
            final Sort nextSort = (Sort) next;
            final Sort lubSort = (Sort) lub;
            return nextSort.sort.equals(lubSort.sort) && nextSort.types.size() == lubSort.types.size();
        }
        return false;
    }

    private Type lowestType(Collection<Type> relatedTypes, Map<SortVar, Type> env) {
        assert relatedTypes.size() > 1;
        final java.util.Set<Type> types = new HashSet<>();
        lowerType:
        for(Type candidateLowestType : relatedTypes) {
            for(Type testType : relatedTypes) {
                if(candidateLowestType == testType) {
                    continue;
                }
                if(typeIsA(testType, candidateLowestType, new HashMap<>(env))) {
                    continue lowerType;
                }
            }
            types.add(candidateLowestType);
        }
        if(types.size() == 1) {
            return types.iterator().next();
        } else {
            return new AllOf(types);
        }
    }

    public Type typeOf(String constructorName, List<Type> subTermTypes) {
        final java.util.Set<Type> types = new HashSet<>();
        final Set.Immutable<TypedConstructor> typedConstructors =
            consSorts.get(new ConstructorArity(constructorName, subTermTypes.size()));
        for(TypedConstructor tc : typedConstructors) {
            final Map<SortVar, Type> env = new HashMap<>();
            if(tc.type instanceof Sort) {
                for(Type ta : ((Sort) tc.type).types) {
                    if(ta instanceof SortVar) {
                        env.put((SortVar) ta, null);
                    }
                }
            }
            if(typeIsA(subTermTypes, tc.subTermTypes, env)) {
                if(tc.type instanceof Sort) {
                    final Sort sort = (Sort) tc.type;
                    final List<Type> typeArgs = new ArrayList<>(sort.types.size());
                    for(Type ta : sort.types) {
                        if(ta instanceof SortVar) {
                            Type lookupResult = env.get((SortVar) ta);
                            if(lookupResult != null) {
                                typeArgs.add(lookupResult);
                            } else {
                                typeArgs.add(BottomT.INSTANCE);
                            }
                        } else {
                            typeArgs.add(ta);
                        }
                    }
                    types.add(new Sort(sort.sort, typeArgs));
                } else {
                    types.add(tc.type);
                }
            }
        }
        switch(types.size()) {
            case 0:
                return new IllFormedTermT(constructorName, subTermTypes);
            case 1:
                return types.iterator().next();
            default:
                return new AllOf(types);
        }
    }

    public void registerConstructor(Type sort, String name, List<Type> subTermTypes) {
        consSorts.__insert(new ConstructorArity(name, subTermTypes.size()),
            new TypedConstructor(name, subTermTypes, sort));
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
        consSorts = BinaryRelation.Transient.of();
    }
}
