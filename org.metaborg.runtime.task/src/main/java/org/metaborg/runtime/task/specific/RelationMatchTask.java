package org.metaborg.runtime.task.specific;

import org.metaborg.runtime.task.ITask;
import org.metaborg.runtime.task.SetTaskResults;
import org.metaborg.runtime.task.TaskStatus;
import org.metaborg.runtime.task.engine.ITaskEngine;
import org.metaborg.runtime.task.evaluation.ITaskEvaluationFrontend;
import org.metaborg.runtime.task.evaluation.ITaskEvaluationQueue;
import org.metaborg.runtime.task.evaluation.ITaskEvaluator;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoConstructor;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

public class RelationMatchTask implements ITaskEvaluator {
	@Override
	public void evaluate(IStrategoTerm taskID, ITask task, ITaskEngine taskEngine,
		ITaskEvaluationQueue evaluationQueue, IContext context, Strategy collect, Strategy insert, Strategy perform,
		boolean cycle) {
		try {
			final IStrategoTerm instruction = task.instruction();
			final IStrategoTerm lookupTaskID = instruction.getSubterm(0).getSubterm(0);
			final ITask lookupTask = taskEngine.getTask(lookupTaskID);
			final SetTaskResults lookupTaskResults = (SetTaskResults) lookupTask.results();
			final IStrategoTerm expectedTermTaskID = instruction.getSubterm(1).getSubterm(0);
			final ITask expectedTermTask = taskEngine.getTask(expectedTermTaskID);

			task.setFailed();
			for(IStrategoTerm expectedTermTuple : expectedTermTask.results()) {
				final IStrategoTerm regularTerm = expectedTermTuple.getSubterm(0);
				if(lookupTaskResults.contains(regularTerm)) {
					task.results().add(regularTerm);
					task.setStatus(TaskStatus.Success);
					return;
				}

				final IStrategoTerm uriTerm = expectedTermTuple.getSubterm(1);
				if(lookupTaskResults.contains(uriTerm)) {
					task.results().add(uriTerm);
					task.setStatus(TaskStatus.Success);
					return;
				}
			}
		} finally {
			evaluationQueue.solved(taskID);
		}
	}

	@Override
	public void reset() {

	}


	public static RelationMatchTask register(ITaskEvaluationFrontend evaluationFrontend, ITermFactory factory) {
		final RelationMatchTask evaluator = new RelationMatchTask();
		final IStrategoConstructor constructor = factory.makeConstructor("RelationMatch", 2);
		evaluationFrontend.registerTaskEvaluator(constructor, evaluator);
		return evaluator;
	}
}
