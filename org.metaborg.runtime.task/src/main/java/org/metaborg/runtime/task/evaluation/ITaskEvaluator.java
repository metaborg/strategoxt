package org.metaborg.runtime.task.evaluation;

import java.util.Set;

import org.metaborg.runtime.task.Task;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;

public interface ITaskEvaluator {
	/**
	 * Queues task in given evaluation queue from given set of scheduled tasks.
	 */
	public abstract void queue(ITaskEvaluationQueue evaluationQueue, Set<IStrategoTerm> scheduled);

	/**
	 * Evaluates given task.
	 * 
	 * @param taskID
	 * @param task
	 * @param scheduled
	 * @param skipped
	 * @param evaluated
	 * @param context
	 * @param insert
	 * @param perform
	 */
	public abstract void evaluate(IStrategoTerm taskID, Task task, Set<IStrategoTerm> scheduled,
		Set<IStrategoTerm> skipped, Set<IStrategoTerm> evaluated, IContext context, Strategy insert, Strategy perform);
}
