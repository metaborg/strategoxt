package org.strategoxt.lang.gradual;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

import org.strategoxt.lang.Context;

public class FunTCoercion {
    public static final FunTCoercion ID = new FunTCoercion(Collections.emptyList(), Collections.emptyList(), IdCoercion.INSTANCE, IdCoercion.INSTANCE);

    public final List<FunTCoercion> sargCoercions;
    public final List<Coercion> targCoercions;
    public final Coercion inputCoercion;
    public final Coercion outputCoercion;

    public FunTCoercion(List<FunTCoercion> sargCoercions, List<Coercion> targCoercions, Coercion inputCoercion,
        Coercion outputCoercion) {
        this.sargCoercions = sargCoercions;
        this.targCoercions = targCoercions;
        this.inputCoercion = inputCoercion;
        this.outputCoercion = outputCoercion;
    }

    public FunTCoercion wrapWith(Context context, FunTCoercion coercion) throws StrategoSCastException {
        if(sargCoercions.size() != coercion.sargCoercions.size() || targCoercions.size() != coercion.targCoercions.size()) {
            throw new StrategoSCastException(this, coercion);
        }

        final TypeInfo typeInfo = context.typeInfo;
        final List<FunTCoercion> newSargCoercions = new ArrayList<>(sargCoercions.size());
        for(int i = 0; i < sargCoercions.size(); i++) {
            newSargCoercions.add(sargCoercions.get(i).wrapWith(context, coercion.sargCoercions.get(i)));
        }
        final List<Coercion> newTargCoercions = new ArrayList<>(targCoercions.size());
        for(int i = 0; i < targCoercions.size(); i++) {
            newTargCoercions.add(targCoercions.get(i).preCompose(typeInfo, coercion.targCoercions.get(i)));
        }
        final Coercion newInputCoercion = inputCoercion.preCompose(typeInfo, coercion.inputCoercion);
        final Coercion newOutputCoercion = coercion.outputCoercion.preCompose(typeInfo, outputCoercion);
        return new FunTCoercion(newSargCoercions, newTargCoercions, newInputCoercion, newOutputCoercion);
    }
}
