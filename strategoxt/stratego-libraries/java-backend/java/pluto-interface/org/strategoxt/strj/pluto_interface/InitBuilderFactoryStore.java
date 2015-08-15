package org.strategoxt.strj.pluto_interface;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.Term;

import org.sugarj.common.Log;

public class InitBuilderFactoryStore extends AbstractPrimitive {


	public static final String NAME = "InitBuilderFactoryStore";
	
	public InitBuilderFactoryStore() {
		super(NAME, 1, 1);
	}
	
	@Override
	public boolean call(IContext arg0, Strategy[] arg1, IStrategoTerm[] arg2) throws InterpreterException {
		PlutoIContextManager.pushContext(arg0);
		SingletonStore.factoryByNameStrategy = arg1[0];
		int logLevel = Term.asJavaInt(arg2[0]);
		if (logLevel > 2) {
			Log.log.setLoggingLevel(Log.ALWAYS);
		} else {
			Log.log.setLoggingLevel(Log.CORE);
		}
		PlutoIContextManager.popContext();
		return true;
	}

}
