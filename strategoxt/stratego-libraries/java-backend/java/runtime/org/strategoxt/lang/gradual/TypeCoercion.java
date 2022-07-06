package org.strategoxt.lang.gradual;

import java.util.Objects;
import java.util.HashMap;

public class TypeCoercion implements Coercion {
    public final Type type;

    public TypeCoercion(Type type) {
        this.type = type;
    }

    @Override public boolean equals(Object obj) {
        if(this == obj) {
            return true;
        }
        if(obj == null) {
            return false;
        }
        if(!(obj instanceof TypeCoercion)) {
            return false;
        }
        TypeCoercion other = (TypeCoercion) obj;
        return Objects.equals(type, other.type);
    }

    @Override public int hashCode() {
        return type.hashCode();
    }

    @Override public boolean test(TypeInfo typeInfo, Type toCoerce) {
        return typeInfo.typeIsA(toCoerce, type, new HashMap<>());
    }

    @Override public Coercion preCompose(TypeInfo typeInfo, Coercion coercion)
        throws StrategoCastException {
        if(coercion instanceof IdCoercion) {
            return this;
        }
        if(coercion instanceof TypeCoercion) {
            TypeCoercion typeCoercion = (TypeCoercion) coercion;
            if(type == DynT.INSTANCE) {
                return typeCoercion;
            }
            if(typeInfo.typeIsA(type, typeCoercion.type, new HashMap<>())) {
                return this;
            } else {
                throw new StrategoCastException(type, typeCoercion.type);
            }
        }
        throw new RuntimeException("Unknown subclass of Coercion");
    }

    @Override public String toString() {
        return "(" + type.toString() + ")";
    }
}
