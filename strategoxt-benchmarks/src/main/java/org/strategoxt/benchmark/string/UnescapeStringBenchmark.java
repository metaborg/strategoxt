package org.strategoxt.benchmark.string;

import org.spoofax.interpreter.stratego.CallT;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;

import java.util.function.Function;

@SuppressWarnings("unused")
public class UnescapeStringBenchmark extends StringTransformBenchmark {
    @Override
    public Function<IStrategoTerm, IStrategoTerm> createBenchmark() {
        InterpreterStrategy unescape_0_0 = new InterpreterStrategy(new CallT("unescape_0_0", new Strategy[0], new IStrategoTerm[0]));
        return currentTerm -> unescape_0_0.invoke(context, currentTerm);
    }
}
