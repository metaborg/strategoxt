package org.strategoxt.lang.parallel.stratego_parallel;

import java.util.Arrays;
import java.util.List;

import org.strategoxt.lang.Context;
import org.strategoxt.lang.RegisteringStrategy;

public class LibraryInitializer extends org.strategoxt.lang.LibraryInitializer {

	@Override
	protected List<RegisteringStrategy> getLibraryStrategies() {
		return Arrays.<RegisteringStrategy>asList(parallel_ordered_1_0.instance, parallel_unordered_1_0.instance, ParallelAll.instance);
	}

	@Override
	protected void initializeLibrary(Context context) {
		stratego_parallel.init(context);
	}

}
