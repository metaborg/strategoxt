package org.strategoxt.strj.pluto_interface;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.stratego.Strategy;
import org.strategoxt.strj.cleardep_interface.ObjectWrapperTerm;

public class SingletonStore {

	public static Strategy factoryByNameStrategy;
	
	public static <T> T readFromSingletonStore(String name) {
		IContext context = PlutoIContextManager.currentContext();
		context.setCurrent(context.getFactory().makeString(name));
		try {
		boolean result = SingletonStore.factoryByNameStrategy.evaluate(context);
		if (!result) {
			throw new InterpreterException("Failed to evalute");
		}
		return ObjectWrapperTerm.<T>get(context.current());
		} catch (InterpreterException e){
			throw new RuntimeException("Failed to load factory \"" + name +"\"", e);
		}
	}

}
