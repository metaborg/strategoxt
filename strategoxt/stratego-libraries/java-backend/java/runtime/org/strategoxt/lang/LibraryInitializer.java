package org.strategoxt.lang;

import java.util.HashSet;
import java.util.List;
import java.util.Set;

public abstract class LibraryInitializer {

	private boolean isInitialized = false;
	
	public final StrategyCollector initialize() {
		StrategyCollector c = new StrategyCollector();
		this.initialize(c);
		return c;
	}
	
	private static class InitializerSetEntry {
		private LibraryInitializer initializer;

		public InitializerSetEntry(LibraryInitializer initializer) {
			super();
			this.initializer = initializer;
		}
		
		@Override
		public boolean equals(Object obj) {
			if (obj == null) return false;
			return this.hashCode() == obj.hashCode();
		}
		
		@Override
		public int hashCode() {
			return this.initializer.getClass().hashCode();
		}
		
		@Override
		public String toString() {
			return this.initializer.toString() + " " + this.initializer.getClass().hashCode();
		}
		
	}

	private final void collectDependentInitializer(final Set<InitializerSetEntry> collector) {
		collector.add(new InitializerSetEntry(this));
		for (LibraryInitializer initializer : this.getDependentLibraryInitializer()) {
			initializer.collectDependentInitializer(collector);
		}
	}
	
	private final void initialize(final StrategyCollector collector) {
		if (this.isInitialized) {
			return;
		}
		final Set<InitializerSetEntry> dependentInitializer = new HashSet<>();
		this.collectDependentInitializer(dependentInitializer);
		System.out.println("Initialzie with : " + dependentInitializer);
		for (InitializerSetEntry initializer : dependentInitializer) {
			initializer.initializer.registerImplementators(collector);
		}
		collector.createExecutors();
		for (InitializerSetEntry initializer : dependentInitializer) {
			initializer.initializer.bindExecutors(collector);
		}
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
