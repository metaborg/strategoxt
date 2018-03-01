package org.strategoxt.benchmark;

import org.openjdk.jmh.annotations.Scope;
import org.openjdk.jmh.annotations.Setup;
import org.openjdk.jmh.annotations.State;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.TermFactory;
import org.strategoxt.HybridInterpreter;
import org.strategoxt.lang.Context;

@State(Scope.Thread)
public abstract class BaseBenchmark {
    protected TermFactory factory;
    private HybridInterpreter interpreter;
    protected Context context;

    @Setup
    public void setupInterpreter() {
        factory = new TermFactory();
        interpreter = new HybridInterpreter(factory);
        interpreter.init();
        context = interpreter.getCompiledContext();
    }

    public class InterpreterStrategy extends org.strategoxt.lang.Strategy {
        final Strategy interpStrategy;

        public InterpreterStrategy(Strategy strat) {
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
