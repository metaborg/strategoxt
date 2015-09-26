package org.strategoxt.lang.linking;

import java.lang.annotation.Annotation;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

import org.strategoxt.lang.Strategy;

public class StrategyExecutorBuilder {

	public static boolean hasAnnotation(Object o, Class<? extends Annotation> a) {
		//return o.getClass().getAnnotation(a) != null;
		// Try class name based comparation for eclipse
		String searchedName = a.getName();
		for (Annotation anno : o.getClass().getAnnotations()) {
			if (anno.annotationType().getName().equals(searchedName)) {
				return true;
			}
		}
		return false;
	}
	
	private Map<Strategy, Strategy> specialExecutors;

	public Strategy buildExecutor(String strategyName, List<Strategy> strategies) {
		List<Strategy> cleaned = removeDuplicatedStrategies(strategies, CongruenceStrategy.class);
		cleaned = removeDuplicatedStrategies(cleaned, DynamicRuleStrategy.class);

		List<Strategy> specialStrategies = extractSpecialStrategies(cleaned);
		if (specialStrategies == null) {
			// No overriding or extending executors
			this.specialExecutors = null;
			return chooseExecutorImpl(cleaned);
		}

		this.specialExecutors = new HashMap<Strategy, Strategy>();

		Strategy normalExecutor = chooseExecutorImpl(cleaned);
		List<Strategy> extendedStrategies = getAllStrategies(specialStrategies, ExtendingStrategy.class);
		Strategy extendedExecutor;
		if (extendedStrategies.isEmpty()) {
			extendedExecutor = normalExecutor;
		} else {
			for (Strategy extendedStrategy : extendedStrategies) {
				this.specialExecutors.put(extendedStrategy, normalExecutor);
			}
			extendedExecutor = chooseExecutorImpl(extendedStrategies);
		}

		List<Strategy> overridingStrategies = getAllStrategies(specialStrategies, OverridingStrategy.class);
		Strategy overridingExecutor;
		if (overridingStrategies.isEmpty()) {
			overridingExecutor = extendedExecutor;
		} else {
			for (Strategy overridingStrategy : overridingStrategies) {
				this.specialExecutors.put(overridingStrategy, extendedExecutor);
			}
			overridingExecutor = chooseExecutorImpl(overridingStrategies);
		}

		return overridingExecutor;
	}

	public boolean hasSpecialExecutors() {
		return this.specialExecutors != null;
	}

	public Map<Strategy, Strategy> getSpecialExecutor() {
		return this.specialExecutors;
	}

	private static Strategy chooseExecutorImpl(List<Strategy> s) {
		switch (s.size()) {
		case 1:
			return s.get(0);
		case 2:
			return new StrategyExecutor2(s.get(0), s.get(1));
		case 3:
			return new StrategyExecutor3(s.get(0), s.get(1), s.get(2));
		case 4:
			return new StrategyExecutor4(s.get(0), s.get(1), s.get(2), s.get(3));
		default:
			return new StrategyExecutor(s.toArray(new Strategy[s.size()]));
		}
	}

	private <A extends Annotation> List<Strategy> removeDuplicatedStrategies(List<Strategy> strategies, Class<A> annotationClass) {
		List<Strategy> cleanedStrategies = new ArrayList<Strategy>();
		boolean contained = false;
		for (Strategy s : strategies) {
			if (hasAnnotation(s, annotationClass)) {
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

	private List<Strategy> getAllStrategies(List<Strategy> strategies, Class<? extends Annotation> annotationClass) {
		List<Strategy> result = new ArrayList<Strategy>();
		for (Strategy strategy : strategies) {
			if (hasAnnotation(strategy, annotationClass)) {
				result.add(strategy);
			}
		}
		return result;
	}

	private List<Strategy> extractSpecialStrategies(List<Strategy> strategies) {
		// Initialize the result list lazy, because it is empty usually
		List<Strategy> special = null;
		Iterator<Strategy> iterator = strategies.iterator();
		while (iterator.hasNext()) {
			Strategy strategy = iterator.next();
			if (isOverriding(strategy) || isExtending(strategy)) {
				if (special == null) {
					special = new ArrayList<Strategy>();
				}
				special.add(strategy);
				iterator.remove();
			}
		}
		return special;
	}

	private static boolean isOverriding(Strategy strategy) {
		return hasAnnotation(strategy, OverridingStrategy.class);
	}

	private static boolean isExtending(Strategy strategy) {
		return hasAnnotation(strategy, ExtendingStrategy.class);
	}

}
