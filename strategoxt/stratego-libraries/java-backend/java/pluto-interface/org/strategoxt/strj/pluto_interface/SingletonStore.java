package org.strategoxt.strj.pluto_interface;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.stratego.Strategy;
import org.strategoxt.strj.cleardep_interface.ObjectWrapperTerm;

public class SingletonStore {

	public static IContext factoryByNameContext;
	public static Strategy factoryByNameStrategy;
	
	public static <T> T readFromSingletonStore(String name) {
		SingletonStore.factoryByNameContext.setCurrent(SingletonStore.factoryByNameContext.getFactory().makeString(name));
		try {
		boolean result = SingletonStore.factoryByNameStrategy.evaluate(SingletonStore.factoryByNameContext);
		if (!result) {
			throw new InterpreterException("Failed to evalute");
		}
		return ObjectWrapperTerm.<T>get(SingletonStore.factoryByNameContext.current());
		} catch (InterpreterException e){
			throw new RuntimeException("Failed to load factory \"" + name +"\"", e);
		}
	}

}
