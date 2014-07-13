package org.strategoxt.lang;

import java.lang.reflect.Field;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;

public class StrategyCollector {

	private Map<String, List<Strategy>> strategyImplementators;
	private Map<String, Strategy> overridenImplementator;
	private Map<String, Strategy> strategyExecutors;
	private Map<String, Strategy> nonOverridenExecutors;

	public StrategyCollector() {
		this.strategyImplementators = new HashMap<String, List<Strategy>>();
		this.overridenImplementator = new HashMap<String, Strategy>();
		this.strategyExecutors = new HashMap<String, Strategy>();
		this.nonOverridenExecutors = new HashMap<String, Strategy>();
	}
	
	private boolean isOverriden(String name) {
		return this.overridenImplementator.containsKey(name);
	}

	public void registerStrategyImplementator(String name, Strategy implementator) {
		List<Strategy> implementators = this.strategyImplementators.get(name);
		if (implementators == null) {
			implementators = new LinkedList<Strategy>();
			this.strategyImplementators.put(name, implementators);
		}
		implementators.add(implementator);
	}
	
	public void registerStrategyOverrideImplementator(String name, Strategy implementator) {
		if (this.isOverriden(name)) {
			// Strategy is overriden multiple times. STRJ did not support this, we keep the latest implementator
			System.out.println("Warning: Strategy \""+name +"\" is overriden mutliple times. The overriding implementator seen finally while linking is used.");
		}
		this.overridenImplementator.put(name, implementator);
	}

	private Strategy[] getStrategyImplementators(String name) {
		List<Strategy> implementators = this.strategyImplementators.get(name);
		if (implementators == null) {

			throw new RuntimeException("No implementators found for strategy " + name);

		}
		Strategy[] fastImplementators = new Strategy[implementators.size()];
		int index = 0;
		for (Strategy s : implementators) {
			fastImplementators[index] = s;
			index++;
		}
		return fastImplementators;
	}

	private void registerStrategyExecutor(String name, Strategy executor) {
		this.strategyExecutors.put(name, executor);
	}

	public Strategy getStrategyExecutor(String name) {
		Strategy s = this.strategyExecutors.get(name);
		if (s == null) {
			System.out.println("No implementator found. Try to resolve classpath " + name);
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
			System.out.println("Failed");
			throw new RuntimeException("No executor found for strategy " + name);
		}
		return s;
	}
	
	public Strategy getStrategyNonOverridenExecutor(String name) {
		return this.nonOverridenExecutors.get(name);
	}
	
	private static Strategy createExectuor(Strategy[] s) {
		if (s.length == 1) {
			return s[0];
		} else {
			return new StrategyExecutor(s);
		}
	}

	public void createExecutors() {
		for (String strategyName : this.strategyImplementators.keySet()) {
			Strategy[] s;
			if (this.isOverriden(strategyName)) {
				s = new Strategy[]{this.overridenImplementator.get(strategyName)};
				this.nonOverridenExecutors.put(strategyName, createExectuor(this.getStrategyImplementators(strategyName)));
			} else {
				s= this.getStrategyImplementators(strategyName);
			}
			this.registerStrategyExecutor(strategyName, createExectuor(s));
			
		}
	}

}
