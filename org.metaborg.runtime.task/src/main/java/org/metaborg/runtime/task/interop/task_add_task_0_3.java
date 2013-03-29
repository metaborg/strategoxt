package org.metaborg.runtime.task.interop;

import org.metaborg.runtime.task.TaskManager;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

public class task_add_task_0_3 extends Strategy {
	public static task_add_task_0_3 instance = new task_add_task_0_3();

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm partition,
					IStrategoTerm dependencies, IStrategoTerm instruction) {
		return TaskManager.getInstance().getCurrent()
						.addTask((IStrategoString) partition, (IStrategoList) dependencies, instruction);
	}
}
