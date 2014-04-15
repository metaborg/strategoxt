package org.metaborg.runtime.task.primitives;

import org.metaborg.runtime.task.engine.TaskManager;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;

public class task_api_evaluate_scheduled_3_0 extends AbstractPrimitive {
	public static task_api_evaluate_scheduled_3_0 instance = new task_api_evaluate_scheduled_3_0();

	public task_api_evaluate_scheduled_3_0() {
		super("task_api_evaluate_scheduled", 3, 0);
	}

	@Override
	public boolean call(IContext env, Strategy[] svars, IStrategoTerm[] tvars) throws InterpreterException {
		final Strategy collect = svars[0];
		final Strategy insert = svars[1];
		final Strategy perform = svars[2];
		env.setCurrent(TaskManager.getInstance().getCurrent().evaluateScheduled(env, collect, insert, perform));
		return true;
	}
}
