package org.strategoxt.lang;

import java.lang.reflect.Field;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;

import org.strategoxt.lang.linking.StrategyExecutor;
import org.strategoxt.lang.linking.StrategyExecutor2;
import org.strategoxt.lang.linking.StrategyExecutor3;
import org.strategoxt.lang.linking.StrategyExecutor4;
import org.strategoxt.lang.linking.StrategyExecutorBuilder;

public class StrategyCollector {

	private Map<String, List<Strategy>> strategyImplementators;
	private Map<String, Map<String, Strategy>> specialImplementators;
	private Map<String, Strategy> strategyExecutors;
	private Map<String, Strategy> nonSpecialExecutors;

	public StrategyCollector() {
		this.strategyImplementators = new HashMap<String, List<Strategy>>();
		this.specialImplementators = new HashMap<String,Map<String, Strategy>>();
		this.strategyExecutors = new HashMap<String, Strategy>();
		this.nonSpecialExecutors = new HashMap<String, Strategy>();
	}
	
	private boolean isSpecial(String name, String specialName) {
		return this.specialImplementators.containsKey(name) && this.specialImplementators.get(specialName).containsKey(name);
	}
	
	private String isSpecial(String name) {
		String specialName = null;
		for (Entry<String, Map<String, Strategy>>  e  : this.specialImplementators.entrySet() ) {
			if (e.getValue().containsKey(name)) {
				if (specialName == null) {
					specialName = e.getKey();
				} else {
					System.out.println("[StrategyCollector]   Strategy " + name + " is " + specialName + " and also " + e.getKey()+ ". Use "+ specialName );
				}
			}
		}
		return specialName;
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
	
	public void registerSpecialStrategyImplementator(String name, Strategy implementator, String specialName) {
		if (this.isSpecial(name, specialName)) {
			// Strategy is overriden multiple times. STRJ did not support this, we keep the latest implementator
			System.out.println("[StrategyCollector]   Warning: Strategy \""+name +"\" is " + specialName + " mutliple times. The overriding implementator seen finally while linking is used.");
		}
		Map<String, Strategy> specialMap = this.specialImplementators.get(specialName);
		if (specialMap == null) {
			specialMap = new HashMap<String, Strategy>();
			this.specialImplementators.put(specialName, specialMap);
		}
		specialMap.put(name, implementator);
	}

	private List<Strategy> getStrategyImplementators(String name) {
		List<Strategy> implementators = this.strategyImplementators.get(name);
		if (implementators == null) {

			throw new RuntimeException("No implementators found for strategy " + name);

		}return implementators;
		
	}

	private void registerStrategyExecutor(String name, Strategy executor) {
		this.strategyExecutors.put(name, executor);
	}

	public Strategy getStrategyExecutor(String name) {
		Strategy s = this.strategyExecutors.get(name);
		if (s == null) {
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
		return s;
	}
	
	public Strategy getNonSpecialStrategyExecutor(String name) {
		return this.nonSpecialExecutors.get(name);
	}
	
	private static Strategy createExectuor(String startegyName, List<Strategy> strategies) {
		return new StrategyExecutorBuilder().buildExecutor(startegyName, strategies);
	}

	public void createExecutors() {
		for (String strategyName : this.strategyImplementators.keySet()) {
			List<Strategy> s;
			String specialName = this.isSpecial(strategyName);
			if (specialName != null) {
				s = Collections.singletonList(this.specialImplementators.get(specialName).get(strategyName));
				this.nonSpecialExecutors.put(strategyName, createExectuor(strategyName,this.getStrategyImplementators(strategyName)));
			} else {
				s= this.getStrategyImplementators(strategyName);
			}
			
			this.registerStrategyExecutor(strategyName, createExectuor(strategyName, s));
			
		}
	}

}
