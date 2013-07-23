package org.metaborg.runtime.task.primitives;

import java.util.HashSet;
import java.util.Set;

import org.metaborg.runtime.task.ITaskEngine;
import org.metaborg.runtime.task.TaskManager;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.core.Tools;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;

import com.google.common.collect.Iterables;

public class task_api_partitions_of_0_1 extends AbstractPrimitive {
	public static task_api_partitions_of_0_1 instance = new task_api_partitions_of_0_1();

	public task_api_partitions_of_0_1() {
		super("task_api_partitions_of", 0, 1);
	}

	@Override
	public boolean call(IContext env, Strategy[] svars, IStrategoTerm[] tvars) throws InterpreterException {
		final ITaskEngine taskEngine = TaskManager.getInstance().getCurrent();
		final IStrategoTerm taskIDOrTaskIDS = tvars[0];
		
		final Set<IStrategoString> partitions = new HashSet<IStrategoString>();
		if(Tools.isTermList(taskIDOrTaskIDS)) {
			for(IStrategoTerm taskID : taskIDOrTaskIDS) {
				Iterables.addAll(partitions, taskEngine.getPartitionsOf(taskID));
			}
		} else {
			Iterables.addAll(partitions, taskEngine.getPartitionsOf(taskIDOrTaskIDS));
		}

		env.setCurrent(env.getFactory().makeList(partitions));
		
		return true;
	}
}
