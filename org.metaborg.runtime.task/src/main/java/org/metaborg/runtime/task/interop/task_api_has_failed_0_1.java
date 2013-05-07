package org.metaborg.runtime.task.interop;

import org.metaborg.runtime.task.TaskManager;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

public class task_api_has_failed_0_1 extends Strategy {
	public static task_api_has_failed_0_1 instance = new task_api_has_failed_0_1();

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm taskID) {
		if(TaskManager.getInstance().getCurrent().hasFailed(taskID))
			return current;
		else
			return null;
	}
}
