package org.strategoxt.lang;

import java.util.HashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.concurrent.Semaphore;

public class StrategyCollector {

	private Map<String, List<Strategy>> strategyImplementators;
	private Map<String, Strategy> strategyExecutors;

	public StrategyCollector() {
		this.strategyImplementators = new HashMap<String, List<Strategy>>();
		this.strategyExecutors = new HashMap<String, Strategy>();
	}

	public void registerStrategyImplementator(String name, Strategy implementator) {
		List<Strategy> implementators = this.strategyImplementators.get(name);
		if (implementators == null) {
			implementators = new LinkedList<Strategy>();
			this.strategyImplementators.put(name, implementators);
		}
		implementators.add(implementator);
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
		return this.strategyExecutors.get(name);
	}

	public void createExecutors() {
		for (String strategyName : this.strategyImplementators.keySet()) {
			Strategy[] s = this.getStrategyImplementators(strategyName);
			if (s.length == 1) {
				this.registerStrategyExecutor(strategyName, s[0]);
			} else {
				this.registerStrategyExecutor(strategyName, new StrategyExecutor(s));
			}
		}
	}

}
