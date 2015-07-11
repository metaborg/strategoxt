package org.strategoxt.strj.pluto_interface;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;

import build.pluto.shaded.org.sugarj.common.Log;

public class InitBuilderFactoryStore extends AbstractPrimitive {


	public static final String NAME = "InitBuilderFactoryStore";
	
	public InitBuilderFactoryStore() {
		super(NAME, 1, 0);
	}
	
	@Override
	public boolean call(IContext arg0, Strategy[] arg1, IStrategoTerm[] arg2) throws InterpreterException {
		SingletonStore.factoryByNameContext = arg0;
		SingletonStore.factoryByNameStrategy = arg1[0];
		Log.log.setLoggingLevel(Log.ALWAYS);
		return true;
	}

}
