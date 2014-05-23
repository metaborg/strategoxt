package org.metaborg.runtime.task.evaluation;

import org.metaborg.runtime.task.ITask;
import org.metaborg.runtime.task.engine.ITaskEngine;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * Interface for evaluating individual tasks.
 */
public interface ITaskEvaluator {
	/**
	 * Evaluates given task.
	 */
	public abstract void evaluate(IStrategoTerm taskID, ITask task, ITaskEngine taskEngine,
		ITaskEvaluationQueue evaluationQueue, IContext context, Strategy collect, Strategy insert, Strategy perform,
		boolean cycle);

	/**
	 * Resets the task evaluator to its initial state.
	 */
	public abstract void reset();
}
