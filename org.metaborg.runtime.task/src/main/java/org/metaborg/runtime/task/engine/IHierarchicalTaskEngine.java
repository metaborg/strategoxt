package org.metaborg.runtime.task.engine;

import org.spoofax.interpreter.terms.IStrategoTerm;

public interface IHierarchicalTaskEngine extends ITaskEngine {
	/**
	 * Returns the current task engine.
	 */
	public abstract ITaskEngine getCurrent();

	/**
	 * Returns the parent task engine.
	 */
	public abstract ITaskEngine getParent();

	/**
	 * Returns all task identifiers that have been removed as a result of garbage collection.
	 */
	public abstract Iterable<IStrategoTerm> getRemovedTasks();
}
