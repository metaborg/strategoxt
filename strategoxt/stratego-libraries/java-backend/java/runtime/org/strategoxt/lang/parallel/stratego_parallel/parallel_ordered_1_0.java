package org.strategoxt.lang.parallel.stratego_parallel;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.RegisteringStrategy;
import org.strategoxt.lang.Strategy;
import org.strategoxt.lang.StrategyCollector;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class parallel_ordered_1_0 extends RegisteringStrategy {
	protected static parallel_ordered_1_0 instance = new parallel_ordered_1_0();

	@Override
	public void registerImplementators(StrategyCollector collector) {
		collector.registerStrategyImplementator("parallel_ordered_1_0", instance);
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s) {
		ParallelAll.instance.setAllowUnordered(false);
		ParallelAll.instance.setForcedParallel(true);
		return s.invoke(context, current);
	}
}
