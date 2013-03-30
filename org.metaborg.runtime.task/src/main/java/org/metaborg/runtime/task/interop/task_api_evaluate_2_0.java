package org.metaborg.runtime.task.interop;

import org.metaborg.runtime.task.TaskManager;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

public class task_api_evaluate_2_0 extends Strategy {
	public static task_api_evaluate_2_0 instance = new task_api_evaluate_2_0();

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy performInstruction,
		Strategy insertResults) {
		TaskManager.getInstance().getCurrent().getEvaluator().evaluate(context, performInstruction, insertResults);
		return current;
	}
}
