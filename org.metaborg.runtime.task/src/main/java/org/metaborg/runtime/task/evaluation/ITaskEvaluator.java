package org.metaborg.runtime.task.evaluation;

import java.util.Set;

import org.metaborg.runtime.task.ITask;
import org.metaborg.runtime.task.ITaskEngine;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * Interface for evaluating individual tasks.
 */
public interface ITaskEvaluator {
	/**
	 * Queues task from given set of scheduled tasks.
	 */
	public abstract void queue(ITaskEngine taskEngine, ITaskEvaluationQueue evaluationQueue,
		Set<IStrategoTerm> scheduled);

	/**
	 * Evaluates given task.
	 */
	public abstract void evaluate(IStrategoTerm taskID, ITask task, ITaskEngine taskEngine,
		ITaskEvaluationQueue evaluationQueue, IContext context, Strategy collect, Strategy insert, Strategy perform);

	/**
	 * Evaluates given cyclic task.
	 */
	public abstract void evaluateCyclic(IStrategoTerm taskID, ITask task, ITaskEngine taskEngine,
		ITaskEvaluationQueue evaluationQueue, IContext context, Strategy collect, Strategy insert, Strategy perform);

	/**
	 * Returns the task identifier of the task that is currently being evaluated.
	 */
	public abstract IStrategoTerm current();

	/**
	 * Delays the current executing task.
	 */
	public abstract void delay();

	/**
	 * Resets the task evaluator to its initial state.
	 */
	public abstract void reset();
}
