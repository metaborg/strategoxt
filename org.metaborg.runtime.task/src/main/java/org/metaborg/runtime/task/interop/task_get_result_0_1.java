package org.metaborg.runtime.task.interop;

import org.metaborg.runtime.task.TaskManager;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

public class task_get_result_0_1 extends Strategy {
	private TaskManager taskManager;

	public task_get_result_0_1(TaskManager taskManager) {
		this.taskManager = taskManager;
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm taskID) {
		return taskManager.getCurrent().getResult((IStrategoInt) taskID);
	}
}
