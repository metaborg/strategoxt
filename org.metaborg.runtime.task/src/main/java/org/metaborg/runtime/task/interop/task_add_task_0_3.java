package org.metaborg.runtime.task.interop;

import org.metaborg.runtime.task.TaskManager;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

public class task_add_task_0_3 extends Strategy {
	private TaskManager taskManager;

	public task_add_task_0_3(TaskManager taskManager) {
		this.taskManager = taskManager;
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm partition,
		IStrategoTerm dependencies, IStrategoTerm instruction) {
		return taskManager.getCurrent().addTask((IStrategoString) partition, (IStrategoList) dependencies, instruction);
	}
}
