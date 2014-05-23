package org.metaborg.runtime.task.evaluation;

import java.util.Set;

import org.metaborg.runtime.task.engine.ITaskEngine;
import org.spoofax.interpreter.terms.IStrategoTerm;

public interface ITaskQueuer {
	/**
	 * Queues task from given set of scheduled tasks.
	 */
	public abstract void queue(ITaskEngine taskEngine, ITaskEvaluationQueue evaluationQueue,
		Set<IStrategoTerm> scheduled);

}
