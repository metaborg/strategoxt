package org.metaborg.runtime.task.interop;

import org.metaborg.runtime.task.TaskManager;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

public class task_api_reset_0_0 extends Strategy {
	public static task_api_reset_0_0 instance = new task_api_reset_0_0();

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current) {
		TaskManager.getInstance().getCurrent().reset();
		return current;
	}
}
