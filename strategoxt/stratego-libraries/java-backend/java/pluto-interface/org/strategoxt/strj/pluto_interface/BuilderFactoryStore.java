package org.strategoxt.strj.pluto_interface;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.stratego.Strategy;
import org.strategoxt.strj.cleardep_interface.ObjectWrapperTerm;

import build.pluto.builder.BuilderFactory;

public class BuilderFactoryStore {

	public static IContext factoryByNameContext;
	public static Strategy factoryByNameStrategy;
	
	public static <T extends BuilderFactory<?,?,?>> T readFactoryFromStore(String name) {
		BuilderFactoryStore.factoryByNameContext.setCurrent(BuilderFactoryStore.factoryByNameContext.getFactory().makeString(name));
		try {
		boolean result = BuilderFactoryStore.factoryByNameStrategy.evaluate(BuilderFactoryStore.factoryByNameContext);
		if (!result) {
			throw new InterpreterException("Failed to evalute");
		}
		return ObjectWrapperTerm.<T>get(BuilderFactoryStore.factoryByNameContext.current());
		} catch (InterpreterException e){
			throw new RuntimeException("Failed to load factory \"" + name +"\"", e);
		}
	}

}
