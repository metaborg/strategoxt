package org.metaborg.runtime.task.primitives;

import org.metaborg.runtime.task.engine.TaskManager;
import org.metaborg.runtime.task.evaluation.ITaskEvaluationFrontend;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;

public class task_api_delay_0_1 extends AbstractPrimitive {
	public static task_api_delay_0_1 instance = new task_api_delay_0_1();

	public task_api_delay_0_1() {
		super("task_api_delay", 0, 1);
	}

	@Override
	public boolean call(IContext env, Strategy[] svars, IStrategoTerm[] tvars) throws InterpreterException {
		final IStrategoList dependencies = (IStrategoList) tvars[0];
		final ITaskEvaluationFrontend evaluator = TaskManager.getInstance().getCurrent().getEvaluationFrontend();
		final IStrategoTerm taskID = evaluator.current();

		if(taskID == null)
			throw new RuntimeException("Cannot delay task while no task evaluation is in progress.");

		evaluator.delayed(taskID, dependencies);
		return false;
	}
}
