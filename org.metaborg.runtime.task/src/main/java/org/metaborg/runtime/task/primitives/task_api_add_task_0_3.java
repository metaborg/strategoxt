package org.metaborg.runtime.task.primitives;

import org.metaborg.runtime.task.TaskManager;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;

public class task_api_add_task_0_3 extends AbstractPrimitive {
	public static task_api_add_task_0_3 instance = new task_api_add_task_0_3();

	public task_api_add_task_0_3() {
		super("task_api_add_task", 0, 3);
	}

	@Override
	public boolean call(IContext env, Strategy[] svars, IStrategoTerm[] tvars) throws InterpreterException {
		final IStrategoTerm partition = tvars[0];
		final IStrategoTerm dependencies = tvars[1];
		final IStrategoTerm instruction = tvars[2];
		env.setCurrent(TaskManager.getInstance().getCurrent()
			.addTask((IStrategoString) partition, (IStrategoList) dependencies, instruction, false));
		return true;
	}
}
