package org.metaborg.runtime.task.primitives;

import org.metaborg.runtime.task.engine.TaskManager;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;

public class task_api_invalidate_task_reads_0_1 extends AbstractPrimitive {
	public static task_api_invalidate_task_reads_0_1 instance = new task_api_invalidate_task_reads_0_1();

	public task_api_invalidate_task_reads_0_1() {
		super("task_api_invalidate_task_reads", 0, 1);
	}

	@Override
	public boolean call(IContext env, Strategy[] svars, IStrategoTerm[] tvars) throws InterpreterException {
		final IStrategoList changedReads = (IStrategoList) tvars[0];
		env.setCurrent(env.getFactory().makeList(
			TaskManager.getInstance().getCurrent().invalidateTaskReads(changedReads)));
		return true;
	}
}
