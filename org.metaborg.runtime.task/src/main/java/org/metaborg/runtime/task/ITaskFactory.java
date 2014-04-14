package org.metaborg.runtime.task;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;

public interface ITaskFactory {
	/**
	 * Returns adjusted dependencies.
	 */
	public abstract IStrategoList adjustDependencies(IStrategoList dependencies);

	/**
	 * Creates a task.
	 */
	public abstract ITask create(IStrategoTerm instruction, IStrategoList dependencies, TaskType type,
		boolean shortCircuit);

	/**
	 * Clones a task.
	 */
	public abstract ITask clone(ITask task);
}
