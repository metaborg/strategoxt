package org.strategoxt.lang.parallel.stratego_parallel;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class parallel_unordered_1_0 extends Strategy {
	public static parallel_unordered_1_0 instance = new parallel_unordered_1_0();
	
	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s) {
		ParallelAll.instance.setAllowUnordered(true);
		ParallelAll.instance.setForcedParallel(true);
		try {
			return s.invoke(context, current);
		} finally {
			ParallelAll.instance.setAllowUnordered(false);
		}
	}
}
