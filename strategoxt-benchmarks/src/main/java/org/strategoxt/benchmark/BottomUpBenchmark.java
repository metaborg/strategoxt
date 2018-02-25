package org.strategoxt.benchmark;

import org.spoofax.interpreter.stratego.CallT;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;

import java.util.function.Function;

public class BottomUpBenchmark extends TreeTraversalBenchmark {
    protected Function<IStrategoTerm, IStrategoTerm> benchmark;

    @Override
    public Function<IStrategoTerm, IStrategoTerm> createBenchmark() {
        CallT is_string_0_0 = new CallT("is_string_0_0", new Strategy[0], new IStrategoTerm[0]);
        CallT try_is_string = new CallT("try_1_0", new Strategy[]{is_string_0_0}, new IStrategoTerm[0]);
        InterpreterStrategy bottomup_try_is_string = new InterpreterStrategy(new CallT("bottomup_1_0", new Strategy[]{try_is_string}, new IStrategoTerm[0]));
        return currentTerm -> bottomup_try_is_string.invoke(context, currentTerm);
    }
}
