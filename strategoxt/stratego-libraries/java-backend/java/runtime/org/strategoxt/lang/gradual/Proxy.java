package org.strategoxt.lang.gradual;

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

    // TODO: implement invoke methods
}
