package org.strategoxt.lang;

import java.lang.reflect.Field;
import java.util.Arrays;
import java.util.Collection;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;

import org.strategoxt.lang.LibraryInitializer.InitializerSetEntry;
import org.strategoxt.lang.linking.StrategyExecutorBuilder;

public class StrategyCollector {

	private Map<String, List<Strategy>> strategyImplementators;
	
	private Map<String, Strategy> strategyExecutors;
	
	private Map<String, Map<Strategy, Strategy>> specialExecutors;
	
	private Set<InitializerSetEntry> allInitializers;

	public StrategyCollector() {
		this.strategyImplementators = new HashMap<String, List<Strategy>>();
		//this.specialImplementators = new HashMap<String,Map<String, Strategy>>();
		
		this.strategyExecutors = new HashMap<String, Strategy>();
		this.specialExecutors = new HashMap<String,Map<Strategy, Strategy>>();
		this.allInitializers = new HashSet<LibraryInitializer.InitializerSetEntry>();
	}
	
	public void addLibraryInitializers(Collection<InitializerSetEntry> initializers) {
		allInitializers.addAll(initializers);
		
	}
	
	public void collectImplementators() {
		System.out.println("Initialize with " + allInitializers);
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
		for (InitializerSetEntry initializer : allInitializers) {
			try {
			initializer.initializer.bindExecutors(this);
			}catch (RuntimeException e) {
				System.err.println(e.getMessage());
				lastE = e;
			}
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

	public void registerStrategyImplementator(String name, Strategy implementator) {
		List<Strategy> implementators = this.strategyImplementators.get(name);
		if (implementators == null) {
			implementators = new LinkedList<Strategy>();
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
		final Map<Strategy, Strategy> executorMap = this.specialExecutors.get(name);
		if (specialExecutors == null) {
			System.out.println("Warning: A strategy with name " + name + " requests a special executor but no available.");
			return getStrategyExecutor(name);
		}
		final Strategy specialExecutor = executorMap.get(requester);
		if (specialExecutor == null) {
			System.out.println("Warning: A strategy with name " + name + " requests a special executor but no available for request " + requester +".");
			System.out.println("Executor map is:" +executorMap);
			return getStrategyExecutor(name);
		}
		return specialExecutor;
	}
	

	public void createExecutors() {
		StrategyExecutorBuilder builder = new StrategyExecutorBuilder();
		for (Entry<String, List<Strategy>> strategy : this.strategyImplementators.entrySet()) {
			final String name = strategy.getKey();
			final List<Strategy> implementators = strategy.getValue();
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
