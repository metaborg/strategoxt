package org.metaborg.runtime.task.primitives;

import java.io.IOException;

import org.metaborg.runtime.task.TaskManager;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Strategy;

public class task_api_persist_0_0 extends AbstractPrimitive {
	public static task_api_persist_0_0 instance = new task_api_persist_0_0();

	public task_api_add_dependency_0_2() {
		super("task_api_add_dependency", 0, 2);
	}
	
	@Override
	public boolean call(IContext env, Strategy[] svars, IStrategoTerm[] tvars) throws InterpreterException {
		final IStrategoTerm taskID = tvars[0];
		try {
			TaskManager.getInstance().storeCurrent(env.getFactory());
			return true;
		} catch(IOException e) {
			e.printStackTrace();
			return false;
		}
	}
}
