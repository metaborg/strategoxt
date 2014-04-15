package org.metaborg.runtime.task.primitives;

import org.metaborg.runtime.task.engine.TaskManager;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;

public class task_api_pop_0_0 extends AbstractPrimitive {
	public static task_api_pop_0_0 instance = new task_api_pop_0_0();

	public task_api_pop_0_0() {
		super("task_api_pop", 0, 0);
	}

	@Override
	public boolean call(IContext env, Strategy[] svars, IStrategoTerm[] tvars) throws InterpreterException {
		TaskManager.getInstance().popTaskEngine();
		return true;
	}
}
