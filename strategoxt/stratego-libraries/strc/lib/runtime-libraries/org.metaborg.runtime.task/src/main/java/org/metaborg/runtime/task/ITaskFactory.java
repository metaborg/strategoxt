package org.metaborg.runtime.task;

import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoList;

public interface ITaskFactory {
	/**
	 * Returns adjusted dependencies.
	 */
	public abstract IStrategoList adjustDependencies(IStrategoList dependencies);

	/**
	 * Creates a task.
	 */
	public abstract ITask create(IStrategoAppl instruction, IStrategoList dependencies, TaskType type,
		TaskStorageType storageType, boolean shortCircuit);

	/**
	 * Clones a task.
	 */
	public abstract ITask clone(ITask task);
}
