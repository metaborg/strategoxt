package org.metaborg.runtime.task.evaluation;

import java.util.Set;

import org.metaborg.runtime.task.ITaskEngine;
import org.metaborg.runtime.task.Task;
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
	public abstract void evaluate(IStrategoTerm taskID, Task task, ITaskEngine taskEngine,
		ITaskEvaluationQueue evaluationQueue, IContext context, Strategy insert, Strategy perform);
	
	/**
	 * Resets the task evaluator to its initial state.
	 */
	public abstract void reset();
}
