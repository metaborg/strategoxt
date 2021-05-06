package org.strategoxt.lang.gradual;

import java.util.List;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

public class Proxy extends Strategy {
    public final FunTCoercion coercion;
    public final Strategy wrappedStrategy;

    public Proxy(Context context, FunTCoercion coercion, Strategy wrappedStrategy) {
        if(wrappedStrategy instanceof Proxy) {
            final Proxy proxy = (Proxy) wrappedStrategy;
            this.coercion = proxy.coercion.wrapWith(context, coercion);
            this.wrappedStrategy = proxy.wrappedStrategy;
        } else {
            this.coercion = coercion;
            this.wrappedStrategy = wrappedStrategy;
        }
    }

    public IStrategoTerm invokeDynamic(Context context, IStrategoTerm current,
            Strategy[] s, IStrategoTerm[] t) {
        if(s.length != coercion.sargCoercions.size() || t.length != coercion.targCoercions.size()) {
            throw new IllegalArgumentException("Illegal arguments for " + getName()
            + ", expected " + coercion.sargCoercions.size() + " strategy arguments and "
            + coercion.targCoercions.size() + " term arguments, but got " + s.length + " and " + t.length + " respectively.");
        }
        final Type currentType = TypeAttachment.getOrComputeType(context.typeInfo, current);
        if(!coercion.inputCoercion.test(context.typeInfo, currentType)) {
            assert coercion.inputCoercion instanceof TypeCoercion;
            throw new StrategoCastException(currentType, ((TypeCoercion) coercion.inputCoercion).type);
        }
        final Strategy[] proxies = new Strategy[s.length];
        final List<FunTCoercion> sargCoercions = coercion.sargCoercions;
        for(int i = 0; i < sargCoercions.size(); i++) {
            final FunTCoercion coercion = sargCoercions.get(i);
            proxies[i] = new Proxy(context, coercion, s[i]);
        }
        final IStrategoTerm result = wrappedStrategy.invokeDynamic(context, current, proxies, t);
        final Type resultType = TypeAttachment.getOrComputeType(context.typeInfo, result);
        if(!coercion.outputCoercion.test(context.typeInfo, resultType)) {
            assert coercion.outputCoercion instanceof TypeCoercion;
            throw new StrategoCastException(resultType, ((TypeCoercion) coercion.outputCoercion).type);
        }
        return result;
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current) {
        return invokeDynamic(context, current, new Strategy[] {}, new IStrategoTerm[] {});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1) {
        return invokeDynamic(context, current, new Strategy[] {}, new IStrategoTerm[] {t1});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1, IStrategoTerm t2) {
        return invokeDynamic(context, current, new Strategy[] {}, new IStrategoTerm[] {t1, t2});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3) {
        return invokeDynamic(context, current, new Strategy[] {}, new IStrategoTerm[] {t1, t2, t3});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4) {
        return invokeDynamic(context, current, new Strategy[] {}, new IStrategoTerm[] {t1, t2, t3, t4});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
        return invokeDynamic(context, current, new Strategy[] {}, new IStrategoTerm[] {t1, t2, t3, t4, t5});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1) {
        return invokeDynamic(context, current, new Strategy[] {s1}, new IStrategoTerm[] {});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, IStrategoTerm t1) {
        return invokeDynamic(context, current, new Strategy[] {s1}, new IStrategoTerm[] { t1});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, IStrategoTerm t1, IStrategoTerm t2) {
        return invokeDynamic(context, current, new Strategy[] {s1}, new IStrategoTerm[] { t1, t2});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3) {
        return invokeDynamic(context, current, new Strategy[] {s1}, new IStrategoTerm[] { t1, t2, t3});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4) {
        return invokeDynamic(context, current, new Strategy[] {s1}, new IStrategoTerm[] { t1, t2, t3, t4});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
        return invokeDynamic(context, current, new Strategy[] {s1}, new IStrategoTerm[] { t1, t2, t3, t4, t5});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2) {
        return invokeDynamic(context, current, new Strategy[] {s1, s2}, new IStrategoTerm[] {});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, IStrategoTerm t1) {
        return invokeDynamic(context, current, new Strategy[] {s1, s2}, new IStrategoTerm[] { t1});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, IStrategoTerm t1, IStrategoTerm t2) {
        return invokeDynamic(context, current, new Strategy[] {s1, s2}, new IStrategoTerm[] { t1, t2});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3) {
        return invokeDynamic(context, current, new Strategy[] {s1, s2}, new IStrategoTerm[] { t1, t2, t3});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4) {
        return invokeDynamic(context, current, new Strategy[] {s1, s2}, new IStrategoTerm[] { t1, t2, t3, t4});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
        return invokeDynamic(context, current, new Strategy[] {s1, s2}, new IStrategoTerm[] { t1, t2, t3, t4, t5});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3) {
        return invokeDynamic(context, current, new Strategy[] {s1, s2, s3}, new IStrategoTerm[] {});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, IStrategoTerm t1) {
        return invokeDynamic(context, current, new Strategy[] {s1, s2, s3}, new IStrategoTerm[] { t1});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, IStrategoTerm t1, IStrategoTerm t2) {
        return invokeDynamic(context, current, new Strategy[] {s1, s2, s3}, new IStrategoTerm[] { t1, t2});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3) {
        return invokeDynamic(context, current, new Strategy[] {s1, s2, s3}, new IStrategoTerm[] { t1, t2, t3});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4) {
        return invokeDynamic(context, current, new Strategy[] {s1, s2, s3}, new IStrategoTerm[] { t1, t2, t3, t4});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
        return invokeDynamic(context, current, new Strategy[] {s1, s2, s3}, new IStrategoTerm[] { t1, t2, t3, t4, t5});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4) {
        return invokeDynamic(context, current, new Strategy[] {s1, s2, s3, s4}, new IStrategoTerm[] {});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, IStrategoTerm t1) {
        return invokeDynamic(context, current, new Strategy[] {s1, s2, s3, s4}, new IStrategoTerm[] { t1});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, IStrategoTerm t1, IStrategoTerm t2) {
        return invokeDynamic(context, current, new Strategy[] {s1, s2, s3, s4}, new IStrategoTerm[] { t1, t2});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3) {
        return invokeDynamic(context, current, new Strategy[] {s1, s2, s3, s4}, new IStrategoTerm[] { t1, t2, t3});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4) {
        return invokeDynamic(context, current, new Strategy[] {s1, s2, s3, s4}, new IStrategoTerm[] { t1, t2, t3, t4});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
        return invokeDynamic(context, current, new Strategy[] {s1, s2, s3, s4}, new IStrategoTerm[] { t1, t2, t3, t4, t5});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, Strategy s5) {
        return invokeDynamic(context, current, new Strategy[] {s1, s2, s3, s4, s5}, new IStrategoTerm[] {});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, Strategy s5, IStrategoTerm t1) {
        return invokeDynamic(context, current, new Strategy[] {s1, s2, s3, s4, s5}, new IStrategoTerm[] { t1});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, Strategy s5, IStrategoTerm t1, IStrategoTerm t2) {
        return invokeDynamic(context, current, new Strategy[] {s1, s2, s3, s4, s5}, new IStrategoTerm[] { t1, t2});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, Strategy s5, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3) {
        return invokeDynamic(context, current, new Strategy[] {s1, s2, s3, s4, s5}, new IStrategoTerm[] { t1, t2, t3});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, Strategy s5, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4) {
        return invokeDynamic(context, current, new Strategy[] {s1, s2, s3, s4, s5}, new IStrategoTerm[] { t1, t2, t3, t4});
    }

    public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, Strategy s5, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
        return invokeDynamic(context, current, new Strategy[] {s1, s2, s3, s4, s5}, new IStrategoTerm[] { t1, t2, t3, t4, t5});
    }
}
