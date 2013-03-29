package org.metaborg.runtime.task.interop;

import org.metaborg.runtime.task.TaskManager;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

public class task_stop_colleciton_0_1 extends Strategy {
	private TaskManager taskManager;

	public task_stop_colleciton_0_1(TaskManager taskManager) {
		this.taskManager = taskManager;
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm partition) {
		return taskManager.getCurrent().stopCollection((IStrategoString) partition);
	}
}
