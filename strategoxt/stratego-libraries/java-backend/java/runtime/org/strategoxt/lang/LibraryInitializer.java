package org.strategoxt.lang;

import java.util.List;

public abstract class LibraryInitializer {

	private boolean isInitialized = false;
	
	public final void initialize() {
		this.initialize(new StrategyCollector());
	}

	private final void initialize(final StrategyCollector collector) {
		if (this.isInitialized) {
			return;
		}
		final List<LibraryInitializer> dependentInitializer = this.getDependentLibraryInitializer();
		this.registerImplementators(collector);
		for (LibraryInitializer initializer : dependentInitializer) {
			initializer.registerImplementators(collector);
		}
		collector.createExecutors();
		for (LibraryInitializer initializer : dependentInitializer) {
			initializer.bindExecutors(collector);
		}
		this.bindExecutors(collector);
	}

	private final void registerImplementators(final StrategyCollector collector) {
		for (RegisteringStrategy s : this.getLibraryStrategies()) {
			s.registerImplementators(collector);
		}
	}

	private final void bindExecutors(final StrategyCollector collector) {
		for (RegisteringStrategy s : this.getLibraryStrategies()) {
			s.bindExecutors(collector);
		}
		this.isInitialized = true;
	}

	protected abstract List<RegisteringStrategy> getLibraryStrategies();

	protected abstract List<LibraryInitializer> getDependentLibraryInitializer();

}
