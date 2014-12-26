package org.strategoxt.lang.linking;

import java.lang.annotation.Annotation;
import java.util.ArrayList;
import java.util.List;

import org.strategoxt.lang.RegisteringStrategy;
import org.strategoxt.lang.Strategy;

public class StrategyExecutorBuilder {
	
	public Strategy buildExecutor(String strategyName, List<Strategy> strategies) {
		List<Strategy> cleaned = removeDuplicatedStrategies(strategies, CongruenceStrategy.class);
		cleaned = removeDuplicatedStrategies(cleaned, DynamicRuleStrategy.class);
		if (cleaned.size() > 1) {
			System.out.println("[StrategyCollector]   Got " + cleaned.size() + " executors for " + strategyName);
			for (Strategy s : strategies) {
				System.out.println("    " + s.getClass().getName());
			}
		}
		return chooseExecutorImpl(cleaned.toArray(new RegisteringStrategy[cleaned.size()]));
	}
	
	private Strategy chooseExecutorImpl(Strategy[] s) {
		switch (s.length)  {
		case 1:
			return s[0];
		case 2:
			return new StrategyExecutor2(s[0], s[1]);
		case 3:
			return new StrategyExecutor3(s[0], s[1], s[2]);
		case 4:
			return new StrategyExecutor4(s[0], s[1], s[2], s[3]);
		default:
			return new StrategyExecutor(s);	
		}
	}
	
	private <A extends Annotation> List<Strategy> removeDuplicatedStrategies(List<Strategy> strategies, Class<A> annotationClass) {
		List<Strategy> cleanedStrategies = new ArrayList<Strategy>();
		boolean contained = false;
		for (Strategy s : strategies) {
			if (s.getClass().getAnnotation(annotationClass) != null) {
				if (!contained) {
					contained = true;
					cleanedStrategies.add(s);
				}
			} else {
				cleanedStrategies.add(s);
			}
		}
		return cleanedStrategies;
		
	}

}
