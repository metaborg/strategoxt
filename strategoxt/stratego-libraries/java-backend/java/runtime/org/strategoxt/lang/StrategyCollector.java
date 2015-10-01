package org.strategoxt.lang;

import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;

import org.strategoxt.lang.LibraryInitializer.InitializerSetEntry;
import org.strategoxt.lang.linking.StrategyExecutorBuilder;

public class StrategyCollector {

	private Map<String, List<RegisteringStrategy>> strategyImplementators;
	
	private Map<String, Strategy> strategyExecutors;
	
	private Map<String, Map<Strategy, Strategy>> specialExecutors;
	
	private Set<InitializerSetEntry> allInitializers;

	public StrategyCollector() {
		this.strategyImplementators = new HashMap<String, List<RegisteringStrategy>>();
		//this.specialImplementators = new HashMap<String,Map<String, Strategy>>();
		
		this.strategyExecutors = new HashMap<String, Strategy>();
		this.specialExecutors = new HashMap<String,Map<Strategy, Strategy>>();
		this.allInitializers = new HashSet<LibraryInitializer.InitializerSetEntry>();
	}
	
	public void addLibraryInitializers(Collection<InitializerSetEntry> initializers) {
		allInitializers.addAll(initializers);
		
	}

	public void collectImplementators() {
		for (InitializerSetEntry initializer : allInitializers) {
			initializer.initializer.registerImplementators(this);
		}
	}

	public void initializeLibraries(Context context) {
		for (InitializerSetEntry initializer : allInitializers) {
			initializer.initializer.initializeLibrary(context);
		}
	}
	
	public void bindExecutors() {
		RuntimeException lastE = null;
		for (List<RegisteringStrategy> strategiesForName : strategyImplementators.values()) {
			for (RegisteringStrategy strategy : strategiesForName) {
				try {
				strategy.bindExecutors(this);
				}catch (RuntimeException e) {
					System.err.println(e.getMessage());
					lastE = e;
				}
			}
		}
		for (InitializerSetEntry initializer : allInitializers) {
			initializer.initializer.bindExecutors(this);
		}
		if(lastE != null) {
			throw lastE;
		}
	}
	
	public Set<String> getAvailableStrategyNames() {
		return this.strategyExecutors.keySet();
	}
	
	public Set<Entry<String, Strategy>> getAvailableStrategies() {
		return this.strategyExecutors.entrySet();
	}

	public void registerStrategyImplementator(String name, RegisteringStrategy implementator) {
		List<RegisteringStrategy> implementators = this.strategyImplementators.get(name);
		if (implementators == null) {
			implementators = new ArrayList<RegisteringStrategy>(2);
			this.strategyImplementators.put(name, implementators);
		}
		implementators.add(implementator);
	}
	
	public Strategy getStrategyExecutor(String name) {
		final Strategy executor = this.strategyExecutors.get(name);
		if (executor == null) {
			// Fallback
			return getExecutorFromClasspath(name);
		}
		return executor;
	}
	
	public Strategy getStrategyExecutor(String name, Strategy requester) {
		if (! (StrategyExecutorBuilder.isExtending(requester) || StrategyExecutorBuilder.isOverwriting(requester))) {
			throw new AssertionError("Only an extending or overwriting strategy is allows to request a specific (proceed) implementator");
		}
		final Map<Strategy, Strategy> executorMap = this.specialExecutors.get(name);
		if (executorMap == null) {
			System.out.println("Warning: A strategy with name " + name + " requests a special executor but no available.");
			return getStrategyExecutor(name);
		}
		final Strategy specialExecutor = executorMap.get(requester);
		if (specialExecutor == null) {
			System.out.println("Warning: A strategy with name " + name + " requests a special executor but no available for request " + requester +".");
			System.out.println("Executor map is:" +executorMap);
			System.out.println("Query for: " + requester.getClass().getName()+ "(" + requester.hashCode() +")");
			for (Strategy s : executorMap.keySet()) {
				Strategy v = executorMap.get(s);
				System.out.println(s.getClass().getName() + "("+s.hashCode() + ") -> " +
						v.getClass().getName() + "("+v.hashCode()  + ")");
			}
			return getStrategyExecutor(name);
		}
		return specialExecutor;
	}
	

	public void createExecutors() {
		StrategyExecutorBuilder builder = new StrategyExecutorBuilder();
		for (Entry<String, List<RegisteringStrategy>> strategy : this.strategyImplementators.entrySet()) {
			final String name = strategy.getKey();
			final List<RegisteringStrategy> implementators = strategy.getValue();
			final Strategy executor = builder.buildExecutor(name, implementators);
			this.strategyExecutors.put(name, executor);
			if (builder.hasSpecialExecutors()) {
				this.specialExecutors.put(name, builder.getSpecialExecutor());
			}
		}
	}
	
	private static Strategy getExecutorFromClasspath(String name) {
		
		// Compatibility to old stuff, not intended to be used, was needed in development process
		System.out.println("[StrategyCollector]   No implementator found. Try to resolve classpath " + name);
		final List<String> packages = Arrays.asList("org.strategoxt.stratego_lib", "org.strategoxt.lang");
		for (String packageName : packages) {
			try {
				Class<? extends Strategy> strategyClass = (Class<? extends Strategy>) StrategyCollector.class.getClassLoader().loadClass(
						packageName + "." + name);
				Field instanceField = strategyClass.getDeclaredField("instance");
				return (Strategy) instanceField.get(null);

			} catch (Exception e) {

			}
		}
		System.out.println("[StrategyCollector]   Failed");
		throw new RuntimeException("[StrategyCollector]   No executor found for strategy " + name);
	
}

}
