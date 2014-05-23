package org.metaborg.runtime.task.evaluation;

import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * Interface that maintains a task evaluation queue and dependency graph.
 */
public interface ITaskEvaluationQueue {
	/**
	 * Queues given task identifier if it is not in the queue yet.
	 */
	public abstract void queue(IStrategoTerm taskID);

	/**
	 * Queues given task identifier if all their dependencies are solved, or defers evaluation until all their
	 * dependencies have been solved.
	 */
	public abstract void queueOrDefer(IStrategoTerm taskID);

	/**
	 * Indicates that task with given task identifier has been solved. Tries to queue new tasks that are activated by
	 * solving that task.
	 */
	public abstract void solved(IStrategoTerm taskID);

	/**
	 * Indicates that task with given task identifier has been skipped.
	 */
	public abstract void skipped(IStrategoTerm taskID);

	/**
	 * Indicates that task with given task identifier is delayed because dynamic dependencies have been found. Updates
	 * the runtime dependency graph with runtime dependencies for given task.
	 */
	public abstract void delayed(IStrategoTerm taskID, Iterable<IStrategoTerm> dependencies);

	/**
	 * Query if the currently evaluating task has been delayed. *
	 */
	public abstract boolean isDelayed();

	/**
	 * Adds a runtime dependency from given task identifier to given dependency task identifier.
	 */
	public abstract void addRuntimeDependency(IStrategoTerm taskID, IStrategoTerm dependencyTaskID);

	/**
	 * Removes the runtime dependency from given task identifier to given dependency task identifier.
	 */
	public abstract void removeRuntimeDependency(IStrategoTerm taskID, IStrategoTerm dependencyTaskID);
}
