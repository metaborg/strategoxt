package org.strategoxt.lang.gradual;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import java.util.HashMap;

public class Cast {
    public static void check(Context context, IStrategoTerm current, Type type) {
        final Type currentType = TypeAttachment.getOrComputeType(context.typeInfo, current);
        if(context.typeInfo.typeIsA(currentType, type, new HashMap<>())) {
            return;
        }
        throw new StrategoCastException(currentType, type);
    }

    public static boolean test(Context context, IStrategoTerm current, Type type) {
        final Type currentType = TypeAttachment.getOrComputeType(context.typeInfo, current);
        return context.typeInfo.typeIsA(currentType, type, new HashMap<>());
    }
}
