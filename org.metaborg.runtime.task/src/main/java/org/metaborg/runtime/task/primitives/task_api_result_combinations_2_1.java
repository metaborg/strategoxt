package org.metaborg.runtime.task.primitives;

import org.metaborg.runtime.task.ITaskEngine;
import org.metaborg.runtime.task.Task;
import org.metaborg.runtime.task.TaskManager;
import org.metaborg.runtime.task.util.CarthesianProduct;
import org.metaborg.runtime.task.util.InvokeStrategy;
import org.metaborg.runtime.task.util.ListBuilder;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

public class task_api_result_combinations_2_1 extends AbstractPrimitive {
	public static task_api_result_combinations_2_1 instance = new task_api_result_combinations_2_1();

	public task_api_result_combinations_2_1() {
		super("task_api_result_combinations", 2, 1);
	}

	@Override
	public boolean call(IContext env, Strategy[] svars, IStrategoTerm[] tvars) throws InterpreterException {
		final ITermFactory factory = env.getFactory();
		final ITaskEngine taskEngine = TaskManager.getInstance().getCurrent();
		final IStrategoTerm term = tvars[0];
		final Strategy collect = svars[0];
		final Strategy insert = svars[1];
		final IStrategoTerm resultIDs = InvokeStrategy.invoke(env, collect, term);
		
		// HACK: produce dependencies if any of the results has not been solved yet.
		IStrategoList dependencies = factory.makeList();
		for(IStrategoTerm taskID : resultIDs) {
			final Task task = taskEngine.getTask(taskID);
			if(!task.solved())
				dependencies = factory.makeListCons(taskID, dependencies);
		}
		if(!dependencies.isEmpty()) {
			env.setCurrent(factory.makeAppl(factory.makeConstructor("Dependency", 1), dependencies));
			return true;
		}
		
		final Iterable<IStrategoTerm> combinations =
			CarthesianProduct.termCombinations(factory, taskEngine, env, insert, term, resultIDs);
		if(combinations == null)
			return false;
		env.setCurrent(ListBuilder.makeList(factory, combinations));
		return true;
	}
}
