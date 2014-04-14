package org.metaborg.runtime.task.evaluation.evaluators;

import java.util.Set;

import org.metaborg.runtime.task.ITask;
import org.metaborg.runtime.task.ITaskEngine;
import org.metaborg.runtime.task.SetTaskResults;
import org.metaborg.runtime.task.Task;
import org.metaborg.runtime.task.TaskType;
import org.metaborg.runtime.task.evaluation.ITaskEvaluationFrontend;
import org.metaborg.runtime.task.evaluation.ITaskEvaluationQueue;
import org.metaborg.runtime.task.evaluation.ITaskEvaluator;
import org.spoofax.NotImplementedException;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.Tools;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

public class RelationMatchEvaluator implements ITaskEvaluator {
	private IStrategoTerm current;

	@Override
	public IStrategoList adjustDependencies(IStrategoList dependencies, ITermFactory factory) {
		return dependencies;
	}

	@Override
	public ITask create(IStrategoTerm instruction, IStrategoList dependencies, TaskType type, boolean shortCircuit) {
		return new Task(instruction, dependencies, TaskType.Raw, shortCircuit, new SetTaskResults());
	}

	@Override
	public ITask create(ITask task) {
		return new Task((Task) task); // TODO: get rid of cast or ITask interface.
	}

	@Override
	public void queue(ITaskEngine taskEngine, ITaskEvaluationQueue evaluationQueue, Set<IStrategoTerm> scheduled) {
		for(IStrategoTerm taskID : scheduled) {
			final ITask task = taskEngine.getTask(taskID);
			if(isRelationMatch(task.instruction())) {
				evaluationQueue.queueOrDefer(taskID);
			}
		}
	}

	@Override
	public void evaluate(IStrategoTerm taskID, ITask task, ITaskEngine taskEngine,
		ITaskEvaluationQueue evaluationQueue, IContext context, Strategy collect, Strategy insert, Strategy perform) {
		evaluate(taskID, task, taskEngine, evaluationQueue);
	}

	@Override
	public void evaluateCyclic(IStrategoTerm taskID, ITask task, ITaskEngine taskEngine,
		ITaskEvaluationQueue evaluationQueue, IContext context, Strategy collect, Strategy insert, Strategy perform) {
		evaluate(taskID, task, taskEngine, evaluationQueue);
	}

	private void
		evaluate(IStrategoTerm taskID, ITask task, ITaskEngine taskEngine, ITaskEvaluationQueue evaluationQueue) {
		current = taskID;
		try {
			final IStrategoTerm instruction = task.instruction();
			final IStrategoTerm lookupTaskID = instruction.getSubterm(0).getSubterm(0);
			final SetTaskResults lookupTaskResults = (SetTaskResults) taskEngine.getTask(lookupTaskID).results();
			final IStrategoTerm expectedTermTaskID = instruction.getSubterm(1).getSubterm(0);
			final ITask expectedTermTask = taskEngine.getTask(expectedTermTaskID);

			task.setFailed();
			for(IStrategoTerm expectedTermTuple : expectedTermTask.results()) {
				final IStrategoTerm regularTerm = expectedTermTuple.getSubterm(0);
				if(lookupTaskResults.contains(regularTerm)) {
					task.results().add(regularTerm);
					return;
				}

				final IStrategoTerm uriTerm = expectedTermTuple.getSubterm(1);
				if(lookupTaskResults.contains(uriTerm)) {
					task.results().add(uriTerm);
					return;
				}
			}
		} finally {
			evaluationQueue.taskSolved(taskID);
			current = null;
		}
	}

	@Override
	public IStrategoTerm current() {
		return current;
	}

	@Override
	public void delay() {
		throw new NotImplementedException("Delaying a relation match task has not been implemented yet");
	}

	@Override
	public void reset() {
		current = null;
	}

	public static boolean isRelationMatch(IStrategoTerm instruction) {
		return Tools.isTermAppl(instruction) && Tools.hasConstructor((IStrategoAppl) instruction, "RelationMatch", 2);
	}

	public static RelationMatchEvaluator register(ITaskEvaluationFrontend evaluationFrontend, ITermFactory factory) {
		final RelationMatchEvaluator evaluator = new RelationMatchEvaluator();
		evaluationFrontend.addTaskEvaluator(factory.makeConstructor("RelationMatch", 2), evaluator);
		return evaluator;
	}
}
