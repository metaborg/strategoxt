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

/**
 * Class contains signature of the same class in the runtime folder. This is necessary for the Java Compiler to be able to compile the generated Java Code during bootstrapping.
 */
public class StrategyCollector {


	public StrategyCollector() {
	}
	
	public void addLibraryInitializers(Collection<InitializerSetEntry> initializers) {
		
	}

	public void collectImplementators() {

	}

	public void initializeLibraries(Context context) {

	}
	
	public void bindExecutors() {
		
	}
	
	public Set<String> getAvailableStrategyNames() {
		return null;
	}
	
	public Set<Entry<String, Strategy>> getAvailableStrategies() {
		return null;
	}

	public void registerStrategyImplementator(String name, RegisteringStrategy implementator) {
		
	}
	
	public Strategy getStrategyExecutor(String name) {
		return null;
	}
	
	public Strategy getStrategyExecutor(String name, Strategy requester) {
		return null;
	}
	

	public void createExecutors() {
		
	}

}
