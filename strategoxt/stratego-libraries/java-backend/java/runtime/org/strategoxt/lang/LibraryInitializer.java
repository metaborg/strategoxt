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

	private static LibraryInitializer buildInitializer(final LibraryInitializer... initializers) {
		return buildInitializer(Arrays.asList(initializers));
	}

	private static LibraryInitializer buildInitializer(final List<LibraryInitializer> initializers) {
		return new LibraryInitializer() {

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
				return initializers;
			}
		};
	}

	public static void initializeInterop(final IContext context, final Context compiledContext,
			final LibraryInitializer... initializers) {
		buildInitializer(initializers).registerInterop(context, compiledContext, context.getVarScope());
	}

	public static void initialize(final Context context, final LibraryInitializer... initializers) {
		buildInitializer(initializers).initialize(context);
	}

	public final void initialize(Context context) {
		StrategyCollector c = new StrategyCollector();
		context.setStrategyCollector(c);
		this.initialize(c, context);
	}

	public final void registerInterop(final IContext context, final Context compiledContext, final VarScope varScope) {
		this.initialize(compiledContext);
		for (Entry<String, Strategy> strategy : compiledContext.getStrategyCollector().getAvailableStrategies()) {
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
	public static class InitializerSetEntry {
		public LibraryInitializer initializer;

		public InitializerSetEntry(LibraryInitializer initializer) {
			super();
			this.initializer = initializer;
		}

		@Override
		public boolean equals(Object obj) {
			if (obj == null)
				return false;
			return this.getClass().equals(obj.getClass());
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
			// Cycle detection
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
		for (LibraryInitializer global : GlobalLibraries.getGlobalLibraryInitializers()) {
			dependentInitializer.add(new InitializerSetEntry(global));
		}
		collector.addLibraryInitializers(dependentInitializer);
		collector.collectImplementators();
		collector.initializeLibraries(context);
		collector.createExecutors();
		collector.bindExecutors();

	}

	protected final void registerImplementators(final StrategyCollector collector) {
		for (RegisteringStrategy s : this.getLibraryStrategies()) {
			s.registerImplementators(collector);
		}
	}

	protected final void bindExecutors(final StrategyCollector collector) {
		// for (RegisteringStrategy s : this.getLibraryStrategies()) {
		// s.bindExecutors(collector);
		// }
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
				Class<LibraryInitializer> initializerClass = (Class<LibraryInitializer>) this.getClass()
						.getClassLoader().loadClass(initializerClassName);
				LibraryInitializer initializer = initializerClass.newInstance();
				allInitializers.add(initializer);
			} catch (ClassCastException e) {
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
