package org.strategoxt.benchmark;

import org.openjdk.jmh.annotations.Benchmark;
import org.openjdk.jmh.annotations.Setup;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;

import java.util.function.Function;

public abstract class TreeTraversalBenchmark extends BaseBenchmark {
    private Function<IStrategoTerm, IStrategoTerm> benchmark;

    @Setup
    public void setupBenchmark() {
        benchmark = createBenchmark();
    }

    protected abstract Function<IStrategoTerm,IStrategoTerm> createBenchmark();

    @Benchmark
    public IStrategoTerm doTreeTraversal() {
        return benchmark.apply(tree);
    }

    public class InterpreterStrategy extends org.strategoxt.lang.Strategy {
        final Strategy interpStrategy;

        protected InterpreterStrategy(Strategy strat) {
            interpStrategy = strat;
        }

        @Override
        public IStrategoTerm invoke(Context context, IStrategoTerm current) {
            interpreter.setCurrent(current);
            try {
                if (interpStrategy.evaluate(interpreter.getContext())) {
                    return interpreter.current();
                } else {
                    return null;
                }
            } catch (InterpreterException e) {
                throw new RuntimeException(e);
            }
        }
    }
}
