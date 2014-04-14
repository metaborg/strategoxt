package org.metaborg.runtime.task.evaluation;

import java.util.Set;

import org.metaborg.runtime.task.engine.ITaskEngine;
import org.spoofax.interpreter.terms.IStrategoTerm;

public class BaseTaskQueuer implements ITaskQueuer {
	@Override
	public void queue(ITaskEngine taskEngine, ITaskEvaluationQueue evaluationQueue, Set<IStrategoTerm> scheduled) {
		// Queue or defer evaluation for all scheduled tasks.
		for(final IStrategoTerm taskID : scheduled) {
			evaluationQueue.queueOrDefer(taskID);
		}
	}
}
