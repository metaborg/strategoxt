package org.strategoxt.benchmark.string;

import org.spoofax.interpreter.stratego.CallT;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.benchmark.tree.TreeTraversalBenchmark;

import java.util.function.Function;

@SuppressWarnings("unused")
public class EscapeStringBenchmark extends StringTransformBenchmark {
    @Override
    public Function<IStrategoTerm, IStrategoTerm> createBenchmark() {
        InterpreterStrategy escape_0_0 = new InterpreterStrategy(new CallT("escape_0_0", new Strategy[0], new IStrategoTerm[0]));
        return currentTerm -> escape_0_0.invoke(context, currentTerm);
    }
}
