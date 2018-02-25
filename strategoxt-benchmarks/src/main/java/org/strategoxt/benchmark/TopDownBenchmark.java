package org.strategoxt.benchmark;

import org.openjdk.jmh.annotations.Benchmark;
import org.openjdk.jmh.annotations.Setup;
import org.spoofax.interpreter.stratego.CallT;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.SRTS_EXT_downup_2_0;

import java.util.function.Function;

public class TopDownBenchmark extends TreeTraversalBenchmark {
    protected Function<IStrategoTerm, IStrategoTerm> benchmark;

    @Override
    public Function<IStrategoTerm, IStrategoTerm> createBenchmark() {
        CallT is_string_0_0 = new CallT("is_string_0_0", new Strategy[0], new IStrategoTerm[0]);
        CallT try_is_string = new CallT("try_1_0", new Strategy[]{is_string_0_0}, new IStrategoTerm[0]);
        InterpreterStrategy topdown_try_is_string = new InterpreterStrategy(new CallT("topdown_1_0", new Strategy[]{try_is_string}, new IStrategoTerm[0]));
        return currentTerm -> topdown_try_is_string.invoke(context, currentTerm);
    }
}
