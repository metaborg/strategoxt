package org.metaborg.runtime.task;

import java.util.Collection;

import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoConstructor;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
import org.spoofax.terms.TermFactory;

public class TaskEngineFactory {
	private static final IStrategoConstructor TASK_CONSTRUCTOR = new TermFactory().makeConstructor("Task", 6);

	public IStrategoList toTerm(TaskEngine taskEngine, ITermFactory factory) {
		IStrategoList tasks = factory.makeList();
		for(IStrategoInt taskID : taskEngine.getTaskIDs()) {
			IStrategoTerm instruction = taskEngine.getInstruction(taskID);
			Collection<IStrategoInt> dependencies = taskEngine.getDependencies(taskID);
			Collection<IStrategoTerm> reads = taskEngine.getReads(taskID);
			IStrategoList results = taskEngine.getResult(taskID);
			boolean failed = taskEngine.hasFailed(taskID);
			tasks =
				factory.makeListCons(
					createTaskTerm(factory, taskID, instruction, dependencies, reads, results, failed), tasks);
		}
		return tasks;
	}

	public TaskEngine fromTerms(TaskEngine taskEngine, IStrategoList tasks, ITermFactory factory) {
		while(!tasks.isEmpty()) {
			IStrategoAppl task = (IStrategoAppl) tasks.head();
			IStrategoInt taskID = (IStrategoInt) task.getSubterm(0);
			IStrategoTerm instruction = task.getSubterm(1);
			IStrategoList dependencies = (IStrategoList) task.getSubterm(2);
			IStrategoList reads = (IStrategoList) task.getSubterm(3);
			IStrategoTerm results = task.getSubterm(4);
			IStrategoInt failed = (IStrategoInt) task.getSubterm(5);

			taskEngine.addPersistedTask(taskID, instruction, dependencies, reads, results, failed);

			tasks = tasks.tail();
		}

		return taskEngine;
	}

	private IStrategoAppl createTaskTerm(ITermFactory factory, IStrategoInt taskID, IStrategoTerm instruction,
		Collection<IStrategoInt> dependencies, Collection<IStrategoTerm> reads, IStrategoList results, boolean failed) {
		return factory.makeAppl(TASK_CONSTRUCTOR, taskID, instruction, factory.makeList(dependencies), factory
			.makeList(reads), results == null ? factory.makeTuple() : results,
			failed ? factory.makeInt(1) : factory.makeInt(0));
	}
}
