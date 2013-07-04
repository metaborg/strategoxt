package org.metaborg.runtime.task.primitives;

import static org.metaborg.runtime.task.util.ListBuilder.makeList;

import org.metaborg.runtime.task.Task;
import org.metaborg.runtime.task.TaskEngine;
import org.metaborg.runtime.task.TaskManager;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;

public class task_api_get_results_0_1 extends AbstractPrimitive {
	public static task_api_get_results_0_1 instance = new task_api_get_results_0_1();

	public task_api_get_results_0_1() {
		super("task_api_get_results", 0, 1);
	}

	@Override
	public boolean call(IContext env, Strategy[] svars, IStrategoTerm[] tvars) throws InterpreterException {
		final TaskEngine taskEngine = TaskManager.getInstance().getCurrent();
		final IStrategoTerm taskID = tvars[0];
		final Task task = taskEngine.getTask(taskID);
		if(!task.solved())
			return false;
		env.setCurrent(makeList(env.getFactory(), task.results()));
		return true;
	}
}
