package org.strategoxt.benchmark.string;

import org.openjdk.jmh.annotations.Benchmark;
import org.openjdk.jmh.annotations.Setup;
import org.openjdk.jmh.infra.Blackhole;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.benchmark.BaseBenchmark;

import java.util.Arrays;
import java.util.List;
import java.util.function.Function;
import java.util.stream.Collectors;

public abstract class StringTransformBenchmark extends BaseBenchmark {
    protected String[] inputStrings = {
            "",
            "a",
            new String(new char[100]).replace('\0', 'a'),
            new String(new char[50]).replace("\0", "aabb\\r\n\t\"\"\'")
    };
    protected List<IStrategoString> inputs;

    private Function<IStrategoTerm, IStrategoTerm> benchmark;

    @Setup
    public void setupBenchmark() {
        inputs = Arrays.stream(inputStrings).map(s -> factory.makeString(s)).collect(Collectors.toList());
        benchmark = createBenchmark();
    }

    protected abstract Function<IStrategoTerm,IStrategoTerm> createBenchmark();

    @Benchmark
    public void doStringTransform(Blackhole b) {
        for (IStrategoString input : inputs) {
            b.consume(benchmark.apply(input));
        }
    }
}
