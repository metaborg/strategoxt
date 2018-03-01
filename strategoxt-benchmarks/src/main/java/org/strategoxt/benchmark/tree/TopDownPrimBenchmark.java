package org.strategoxt.benchmark.tree;

import org.spoofax.interpreter.stratego.CallT;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.benchmark.BaseBenchmark;
import org.strategoxt.lang.SRTS_EXT_downup_2_0;

import java.util.function.Function;

@SuppressWarnings("unused")
public class TopDownPrimBenchmark extends TreeTraversalBenchmark {
    @Override
    public Function<IStrategoTerm, IStrategoTerm> createBenchmark() {
        CallT is_string_0_0 = new CallT("is_string_0_0", new Strategy[0], new IStrategoTerm[0]);
        CallT try_is_string = new CallT("try_1_0", new Strategy[]{is_string_0_0}, new IStrategoTerm[0]);
        BaseBenchmark.InterpreterStrategy program = new BaseBenchmark.InterpreterStrategy(try_is_string);
        return currentTerm ->
                SRTS_EXT_downup_2_0.instance.invoke(context, currentTerm, program, org.strategoxt.lang._Id.instance);
    }
}
