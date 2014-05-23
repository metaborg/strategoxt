package org.metaborg.runtime.task.primitives;

import static org.metaborg.runtime.task.util.TermTools.makeList;

import org.metaborg.runtime.task.engine.ITaskEngine;
import org.metaborg.runtime.task.engine.TaskManager;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;

public class task_api_get_readers_0_1 extends AbstractPrimitive {
	public static task_api_get_readers_0_1 instance = new task_api_get_readers_0_1();

	public task_api_get_readers_0_1() {
		super("task_api_get_readers", 0, 1);
	}

	@Override
	public boolean call(IContext env, Strategy[] svars, IStrategoTerm[] tvars) throws InterpreterException {
		final ITaskEngine taskEngine = TaskManager.getInstance().getCurrent();
		final IStrategoTerm uri = tvars[0];
		env.setCurrent(makeList(env.getFactory(), taskEngine.getReaders(uri)));
		return true;
	}
}
