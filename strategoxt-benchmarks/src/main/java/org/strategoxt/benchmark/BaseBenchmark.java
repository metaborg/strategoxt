package org.strategoxt.benchmark;

import org.openjdk.jmh.annotations.Param;
import org.openjdk.jmh.annotations.Scope;
import org.openjdk.jmh.annotations.Setup;
import org.openjdk.jmh.annotations.State;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.TermFactory;
import org.strategoxt.HybridInterpreter;
import org.strategoxt.lang.Context;

import java.util.Arrays;

@State(Scope.Thread)
public abstract class BaseBenchmark {
    @Param({ "3" }) public int width;
    @Param({ "10" }) public int height;
    public IStrategoTerm tree;
    private TermFactory factory;
    protected HybridInterpreter interpreter;
    protected Context context;

    @Setup
    public void setupInput() {
        factory = new TermFactory();
        interpreter = new HybridInterpreter(factory);
        interpreter.init();
        context = interpreter.getCompiledContext();
        tree = generateTree(factory, width, height);
    }

    private static IStrategoTerm generateTree(TermFactory factory, int width, int height) {
        IStrategoTerm[] children = new IStrategoTerm[width];
        if (height <= 1) {
            Arrays.fill(children, factory.makeString("example"));
        } else {
            Arrays.fill(children, generateTree(factory, width, height - 1));
        }
        return factory.makeAppl(factory.makeConstructor("InputTreeNode", width), children);
    }
}
