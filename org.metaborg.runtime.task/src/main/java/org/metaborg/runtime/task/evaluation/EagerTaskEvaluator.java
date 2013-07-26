package org.metaborg.runtime.task.evaluation;

import java.util.HashSet;
import java.util.Set;

import org.metaborg.runtime.task.ITaskEngine;
import org.metaborg.runtime.task.Task;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;
import org.spoofax.interpreter.terms.ITermFactory;

public class EagerTaskEvaluator extends AbstractTaskEvaluator {
	public EagerTaskEvaluator(ITaskEngine taskEngine, ITermFactory factory) {
		super(taskEngine, factory);
	}

	public IStrategoTuple evaluate(Set<IStrategoTerm> scheduled, IContext context, Strategy insert, Strategy perform) {
		try {
			for(final IStrategoTerm taskID : scheduled) {
				queueOrDefer(taskID);
			}

			// Evaluate each task in the queue.
			final Set<IStrategoTerm> evaluated = new HashSet<IStrategoTerm>();
			for(IStrategoTerm taskID; (taskID = evaluationQueue.poll()) != null;) {
				final Task task = taskEngine.getTask(taskID);

				evaluated.add(taskID);
				scheduled.remove(taskID);
				queued.remove(taskID);

				// Clean up data for this task again, since a task may be scheduled multiple times. A re-schedule should
				// overwrite previous data.
				taskEngine.invalidate(taskID);

				evaluateTask(context, insert, perform, taskID, task);
			}

			debugUnevaluated(scheduled);

			return factory.makeTuple(factory.makeList(evaluated), factory.makeList(), factory.makeList(scheduled));
		} finally {
			reset();
		}
	}

	public void reset() {
		super.reset();
	}
}
