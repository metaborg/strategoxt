package org.strategoxt.benchmark.tree;

import org.spoofax.interpreter.stratego.CallT;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.benchmark.BaseBenchmark;

import java.util.function.Function;

@SuppressWarnings("unused")
public class TopDownBenchmark extends TreeTraversalBenchmark {
    @Override
    public Function<IStrategoTerm, IStrategoTerm> createBenchmark() {
        CallT is_string_0_0 = new CallT("is_string_0_0", new Strategy[0], new IStrategoTerm[0]);
        CallT try_is_string = new CallT("try_1_0", new Strategy[]{is_string_0_0}, new IStrategoTerm[0]);
        BaseBenchmark.InterpreterStrategy topdown_try_is_string = new BaseBenchmark.InterpreterStrategy(new CallT("topdown_1_0", new Strategy[]{try_is_string}, new IStrategoTerm[0]));
        return currentTerm -> topdown_try_is_string.invoke(context, currentTerm);
    }
}
