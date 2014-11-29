package org.strategoxt.lang;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import java.util.Map.Entry;
import java.util.Set;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.VarScope;

public abstract class LibraryInitializer {

	private boolean isInitialized = false;
	
	public static void initializeInterop(final IContext context, final Context compiledContext, final LibraryInitializer...initializers) {
		LibraryInitializer dummyParent = new LibraryInitializer() {
			
			@Override
			protected void initializeLibrary(Context context) {
				// Do not to anything
			}
			
			@Override
			protected List<RegisteringStrategy> getLibraryStrategies() {
				// Dont have anything
				return Collections.emptyList();
			}
			
			@Override
			protected List<LibraryInitializer> getDependentLibraryInitializer() {
				// But here we have something
				return Arrays.asList(initializers);
			}
		};
		dummyParent.registerInterop(context, compiledContext, context.getVarScope());
	}
	
	public final void initialize(Context context) {
		StrategyCollector c = new StrategyCollector();
		this.initialize(c, context);
		context.setStrategyCollector(c);
	}
	
	public final void registerInterop(final IContext context, final Context compiledContext, final VarScope varScope) {
		this.initialize(compiledContext);
		for (Entry<String,Strategy> strategy : compiledContext.getStrategyCollector().getAvailableStrategies()) {
			varScope.addSVar(strategy.getKey(), new InteropSDefT(strategy.getValue(), context));

		}
	}
	
	
	
	/**
	 * Wraps {@link LibraryInitializer} to compare them by class. To objects of
	 * the same class should be equal. Used when collecting initializers to
	 * avoid duplicated in sets.
	 * 
	 * @author moritzlichter
	 *
	 */
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
		for (LibraryInitializer initializer : this.getAllDependentLibraryInitializers()) {
			//Cycle detection
			if (!collector.contains(new InitializerSetEntry(initializer))) {
				initializer.collectDependentInitializer(collector);
			}
		}
	}
	
	private final void initialize(final StrategyCollector collector, final Context context) {
		if (this.isInitialized) {
			return;
		}
		final Set<InitializerSetEntry> dependentInitializer = new HashSet<>();
		this.collectDependentInitializer(dependentInitializer);
		System.out.println("Initialzie with : " + dependentInitializer);
		for (InitializerSetEntry initializer : dependentInitializer) {
			initializer.initializer.registerImplementators(collector);
		}
		for (InitializerSetEntry initializer : dependentInitializer) {
			initializer.initializer.initializeLibrary(context);
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
	
	protected abstract void initializeLibrary(Context context);
	
	protected final List<LibraryInitializer> getAllDependentLibraryInitializers() {
		List<LibraryInitializer> instantiatedInitializers = this.getDependentLibraryInitializer();
		List<String> uninstantiatedInitializers = this.getDependentLibraryInitializerClassNames();
		List<LibraryInitializer> allInitializers;
		if (instantiatedInitializers != null) {
			allInitializers = instantiatedInitializers;
		} else {
			allInitializers = new ArrayList<LibraryInitializer>();
		}
		if (uninstantiatedInitializers == null) {
			return allInitializers;
		}
		for (String initializerClassName : uninstantiatedInitializers) {
			try {
				@SuppressWarnings("unchecked")
				Class<LibraryInitializer> initializerClass = (Class<LibraryInitializer>) Class.forName(initializerClassName);
				LibraryInitializer initializer = initializerClass.newInstance();
				allInitializers.add(initializer);
			} catch(ClassCastException e) {
				// Wrong class object
				throw new Error("Wrong library initializer class for " + initializerClassName, e);
			} catch (ClassNotFoundException e) {
				throw new Error("Unable to load imported initializer class for " + initializerClassName, e);
			} catch (InstantiationException e) {
				throw new Error("Unable to initialze initializer " + initializerClassName, e);
			} catch (IllegalAccessException e) {
				throw new Error("IllegalAcces while initializing " + initializerClassName, e);
			}
		}
		return allInitializers;
	}

	protected List<LibraryInitializer> getDependentLibraryInitializer() {
		return null;
	};
	
	protected List<String> getDependentLibraryInitializerClassNames() {
		return null;
	}

}
