package org.metaborg.runtime.task.primitives;

import org.metaborg.runtime.task.TaskManager;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.core.Tools;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;

public class task_api_evaluate_now_2_1 extends AbstractPrimitive {
	public static task_api_evaluate_now_2_1 instance = new task_api_evaluate_now_2_1();

	public task_api_evaluate_now_2_1() {
		super("task_api_evaluate_now", 2, 1);
	}

	@Override
	public boolean call(IContext env, Strategy[] svars, IStrategoTerm[] tvars) throws InterpreterException {
		final Strategy insert = svars[0];
		final Strategy perform = svars[1];
		IStrategoTerm taskIDs = tvars[0];
		if(!Tools.isTermList(taskIDs))
			taskIDs = env.getFactory().makeList(taskIDs);
		env.setCurrent(TaskManager.getInstance().getCurrent().evaluateNow(env, insert, perform, taskIDs));
		return true;
	}
}
