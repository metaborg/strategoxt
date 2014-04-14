package org.metaborg.runtime.task.specific;

import org.metaborg.runtime.task.ITask;
import org.metaborg.runtime.task.ITaskFactory;
import org.metaborg.runtime.task.SetTaskResults;
import org.metaborg.runtime.task.Task;
import org.metaborg.runtime.task.TaskType;
import org.metaborg.runtime.task.engine.ITaskEngine;
import org.spoofax.interpreter.terms.IStrategoConstructor;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

public class RelationLookupTask implements ITaskFactory {
	@Override
	public IStrategoList adjustDependencies(IStrategoList dependencies) {
		return dependencies;
	}

	@Override
	public ITask create(IStrategoTerm instruction, IStrategoList dependencies, TaskType type, boolean shortCircuit) {
		// TODO: only thing this does is use a set, this should be done from the Stratego library instead.
		return new Task(instruction, dependencies, type, shortCircuit, new SetTaskResults());
	}

	@Override
	public ITask clone(ITask task) {
		return new Task((Task) task); // TODO: get rid of cast or ITask interface.
	}


	public static RelationLookupTask register(ITaskEngine taskEngine, ITermFactory factory) {
		final RelationLookupTask evaluator = new RelationLookupTask();
		final IStrategoConstructor constructor = factory.makeConstructor("RelationLookup", 2);
		taskEngine.registerTaskFactory(constructor, evaluator);
		return evaluator;
	}
}
