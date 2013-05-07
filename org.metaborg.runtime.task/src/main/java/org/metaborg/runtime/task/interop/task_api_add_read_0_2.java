package org.metaborg.runtime.task.interop;

import org.metaborg.runtime.task.TaskManager;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

public class task_api_add_read_0_2 extends Strategy {
	public static task_api_add_read_0_2 instance = new task_api_add_read_0_2();

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm taskID, IStrategoTerm read) {
		TaskManager.getInstance().getCurrent().addRead(taskID, read);
		return current;
	}
}
