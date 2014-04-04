package org.metaborg.runtime.task.evaluation.evaluators;

import java.util.Set;

import org.metaborg.runtime.task.EmptyTask;
import org.metaborg.runtime.task.ITask;
import org.metaborg.runtime.task.ITaskEngine;
import org.metaborg.runtime.task.SetTask;
import org.metaborg.runtime.task.TaskStatus;
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
	private final ITermFactory factory;

	private IStrategoTerm current;

	public RelationMatchEvaluator(ITermFactory factory) {
		this.factory = factory;
	}

	@Override
	public IStrategoList adjustDependencies(IStrategoList dependencies, ITermFactory factory) {
		return dependencies;
	}

	@Override
	public ITask create(IStrategoTerm instruction, IStrategoList dependencies, TaskType type, boolean shortCircuit) {
		return new EmptyTask(instruction, dependencies, TaskType.Raw, shortCircuit);
	}

	@Override
	public ITask create(ITask task) {
		return new EmptyTask((EmptyTask) task);
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
			final SetTask lookupTask = (SetTask) taskEngine.getTask(lookupTaskID);
			final IStrategoTerm expectedTermTaskID = instruction.getSubterm(1).getSubterm(0);
			final ITask expectedTermTask = taskEngine.getTask(expectedTermTaskID);

			System.out.println(instruction);
			System.out.println(lookupTask.results());
			System.out.println(expectedTermTask.results());

			task.setFailed();
			for(IStrategoTerm expectedTermTuple : expectedTermTask.results()) {
				if(lookupTask.hasResult(expectedTermTuple.getSubterm(0))
					|| lookupTask.hasResult(expectedTermTuple.getSubterm(1))) {
					task.setStatus(TaskStatus.Success);
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
		final RelationMatchEvaluator evaluator = new RelationMatchEvaluator(factory);
		evaluationFrontend.addTaskEvaluator(factory.makeConstructor("RelationMatch", 2), evaluator);
		return evaluator;
	}
}
