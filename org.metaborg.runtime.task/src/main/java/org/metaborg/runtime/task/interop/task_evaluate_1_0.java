package org.metaborg.runtime.task.interop;

import org.metaborg.runtime.task.TaskManager;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

public class task_evaluate_1_0 extends Strategy {
	public static task_evaluate_1_0 instance = new task_evaluate_1_0();

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy performInstruction) {
		TaskManager.getInstance().getCurrent().createSolver().evaluate(context, performInstruction);
		return current;
	}
}
