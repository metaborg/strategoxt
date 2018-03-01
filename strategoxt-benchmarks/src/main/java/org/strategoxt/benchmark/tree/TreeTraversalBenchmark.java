package org.strategoxt.benchmark.tree;

import org.openjdk.jmh.annotations.Benchmark;
import org.openjdk.jmh.annotations.Param;
import org.openjdk.jmh.annotations.Setup;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.TermFactory;
import org.strategoxt.benchmark.BaseBenchmark;

import java.util.Arrays;
import java.util.function.Function;

public abstract class TreeTraversalBenchmark extends BaseBenchmark {
    @SuppressWarnings("WeakerAccess")
    @Param({ "3" })
    public int width;
    @SuppressWarnings("WeakerAccess")
    @Param({ "10" })
    public int height;
    private IStrategoTerm input;
    private Function<IStrategoTerm, IStrategoTerm> benchmark;

    @Setup
    public void setupBenchmark() {
        input = generateTree(factory, width, height);
        benchmark = createBenchmark();
    }

    protected abstract Function<IStrategoTerm,IStrategoTerm> createBenchmark();

//    Removing the tree traversal benchmarks, downup_2_0 in Java is not faster
//    @Benchmark
    public IStrategoTerm doTreeTraversal() {
        return benchmark.apply(input);
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
