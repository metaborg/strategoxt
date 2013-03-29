package org.metaborg.runtime.task.interop;

import org.metaborg.runtime.task.TaskManager;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

public class task_set_result_0_2 extends Strategy {
	public static task_set_result_0_2 instance = new task_set_result_0_2();

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm taskID, IStrategoTerm resultList) {
		TaskManager.getInstance().getCurrent().setResult((IStrategoInt) taskID, (IStrategoList) resultList);
		return current;
	}
}
