package org.strategoxt.benchmark.string;

import org.spoofax.interpreter.stratego.CallT;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.string_override.SRTS_EXT_escape_0_0;

import java.util.function.Function;

@SuppressWarnings("unused")
public class EscapePrimStringBenchmark extends StringTransformBenchmark {
    @Override
    public Function<IStrategoTerm, IStrategoTerm> createBenchmark() {
        return currentTerm -> SRTS_EXT_escape_0_0.instance.invoke(context, currentTerm);
    }
}
