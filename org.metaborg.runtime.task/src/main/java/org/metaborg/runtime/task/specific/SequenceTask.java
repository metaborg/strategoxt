package org.metaborg.runtime.task.specific;

import java.util.Iterator;
import java.util.Map;
import java.util.Queue;
import java.util.Set;

import org.metaborg.runtime.task.ITask;
import org.metaborg.runtime.task.ITaskFactory;
import org.metaborg.runtime.task.ListTaskResults;
import org.metaborg.runtime.task.Task;
import org.metaborg.runtime.task.TaskStatus;
import org.metaborg.runtime.task.TaskStorageType;
import org.metaborg.runtime.task.TaskType;
import org.metaborg.runtime.task.engine.ITaskEngine;
import org.metaborg.runtime.task.evaluation.ITaskEvaluationFrontend;
import org.metaborg.runtime.task.evaluation.ITaskEvaluationQueue;
import org.metaborg.runtime.task.evaluation.ITaskEvaluator;
import org.metaborg.runtime.task.evaluation.ITaskQueuer;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.Tools;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoConstructor;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

import com.google.common.collect.Lists;
import com.google.common.collect.Maps;
import com.google.common.collect.Sets;

public class SequenceTask implements ITaskFactory, ITaskQueuer, ITaskEvaluator {
	private final ITermFactory factory;

	/**
	 * Maps task identifiers from sequence tasks to an iterator that holds the next subtask inside the sequence to
	 * evaluate.
	 */
	private final Map<IStrategoTerm, Iterator<IStrategoTerm>> iterators = Maps.newHashMap();

	/**
	 * Maps task identifiers of sequence tasks to task identifiers of subtasks that the sequence tasks are currently
	 * evaluating.
	 */
	private final Map<IStrategoTerm, IStrategoTerm> subtaskIDs = Maps.newHashMap();


	public SequenceTask(ITermFactory factory) {
		this.factory = factory;
	}


	@Override
	public IStrategoList adjustDependencies(IStrategoList dependencies) {
		return factory.makeList();
	}

	@Override
	public ITask create(IStrategoAppl instruction, IStrategoList dependencies, TaskType type,
		TaskStorageType storageType, boolean shortCircuit) {
		return new Task(instruction, dependencies, type, TaskStorageType.List, shortCircuit, new ListTaskResults());
	}

	@Override
	public ITask clone(ITask task) {
		return new Task((Task) task); // TODO: get rid of cast or ITask interface.
	}


	@Override
	public void queue(ITaskEngine taskEngine, ITaskEvaluationQueue evaluationQueue, Set<IStrategoTerm> scheduled) {
		for(IStrategoTerm taskID : scheduled) {
			final ITask task = taskEngine.getTask(taskID);
			if(SequenceTask.isSequence(task.instruction())) {
				evaluationQueue.queue(taskID);
			}
		}
	}


	@Override
	public void evaluate(IStrategoTerm taskID, ITask task, ITaskEngine taskEngine,
		ITaskEvaluationQueue evaluationQueue, IContext context, Strategy collect, Strategy insert, Strategy perform,
		boolean cycle) {
		Iterator<IStrategoTerm> iter = iterators.get(taskID);
		if(iter == null) {
			iter = task.instruction().getSubterm(0).iterator();
			iterators.put(taskID, iter);
		}

		// Handle the result of a sequence subtask.
		{
			final IStrategoTerm subtaskID = subtaskIDs.get(taskID);
			if(subtaskID != null) {
				evaluationQueue.removeRuntimeDependency(taskID, subtaskID); // TODO: needed/correct?
				final ITask subtask = taskEngine.getTask(subtaskID);
				if(handleSolvedTask(task, taskID, iter, subtask, taskEngine, evaluationQueue))
					return;
			}
		}

		if(!iter.hasNext()) {
			// Last subtask has failed, so the sequence fails.
			sequenceFails(task, taskID, taskEngine, evaluationQueue);
			return;
		}

		// Retrieve the next subtask to evaluate.
		final IStrategoTerm subtaskResult = iter.next();
		final IStrategoTerm subtaskID = getTaskID(subtaskResult);
		if(subtaskID == null) {
			// Current entry in the sequence is not a task identifier, queue sequence for evaluation again.
			evaluationQueue.queue(taskID);
			return;
		}
		subtaskIDs.put(taskID, subtaskID);
		final ITask subtask = taskEngine.getTask(subtaskID);
		taskEngine.addDependency(taskID, subtaskID);

		if(subtask.solved()) {
			if(handleSolvedTask(task, taskID, iter, subtask, taskEngine, evaluationQueue))
				return;
		} else {
			// Queue task and its dependencies for evaluation.
			queueTransitive(subtaskID, taskEngine, evaluationQueue);
			evaluationQueue.addRuntimeDependency(taskID, subtaskID);
			return;
		}
	}

	@Override
	public void reset() {
		iterators.clear();
		subtaskIDs.clear();
	}

	/**
	 * Gets the task identifier for given result term.
	 */
	private IStrategoTerm getTaskID(IStrategoTerm resultTerm) {
		if(Tools.isTermAppl(resultTerm) && Tools.hasConstructor((IStrategoAppl) resultTerm, "Result", 1))
			return resultTerm.getSubterm(0);
		return null;
	}

	/**
	 * Handles the result of a solved task. Returns true if the result was handled, false otherwise.
	 */
	private boolean handleSolvedTask(ITask task, IStrategoTerm taskID, Iterator<IStrategoTerm> iter, ITask subtask,
		ITaskEngine taskEngine, ITaskEvaluationQueue evaluationQueue) {
		if(subtask.failed()) {
			// If any subtask of the sequence task fails, the sequence fails.
			sequenceFails(task, taskID, taskEngine, evaluationQueue);
			return true;
		} else if(!iter.hasNext()) {
			// If the last subtask of the sequence task succeeds, the sequence succeeds.
			sequenceSucceeds(task, taskID, subtask, taskEngine, evaluationQueue);
			return true;
		}
		return false;
	}

	/**
	 * Fails the given sequence task.
	 */
	private void sequenceFails(ITask task, IStrategoTerm taskID, ITaskEngine taskEngine,
		ITaskEvaluationQueue evaluationQueue) {
		task.setFailed();
		evaluationQueue.solved(taskID);
		cleanupSequence(taskID, taskEngine, evaluationQueue);
		return;
	}

	/**
	 * Sets the result of given sequence task to the result of given subtask.
	 */
	private void sequenceSucceeds(ITask task, IStrategoTerm taskID, ITask subtask, ITaskEngine taskEngine,
		ITaskEvaluationQueue evaluationQueue) {
		task.results().set(subtask.results());
		task.setStatus(TaskStatus.Success);
		evaluationQueue.solved(taskID);
		cleanupSequence(taskID, taskEngine, evaluationQueue);
		return;
	}

	/**
	 * Cleans up sequence task evaluation after the sequence task has succeeded or failed.
	 */
	private void cleanupSequence(IStrategoTerm taskID, ITaskEngine taskEngine, ITaskEvaluationQueue evaluationQueue) {
		final Iterator<IStrategoTerm> iter = iterators.get(taskID);
		if(iter != null) {
			while(iter.hasNext()) {
				final IStrategoTerm subtaskResult = iter.next();
				final IStrategoTerm subtaskID = getTaskID(subtaskResult);
				if(subtaskID == null)
					continue;

				evaluationQueue.skipped(subtaskID);

				for(IStrategoTerm dependencyTaskID : transitiveDependenciesNoSequence(subtaskID, taskEngine)) {
					evaluationQueue.skipped(dependencyTaskID);
				}
			}
		}

		iterators.remove(taskID);
		subtaskIDs.remove(taskID);
	}

	/**
	 * Queues given task identifier and its transitive dependencies if they are not in the queue yet.
	 */
	private void queueTransitive(IStrategoTerm taskID, ITaskEngine taskEngine, ITaskEvaluationQueue evaluationQueue) {
		evaluationQueue.queueOrDefer(taskID);
		for(IStrategoTerm dependencyTaskID : transitiveDependenciesNoSequence(taskID, taskEngine)) {
			evaluationQueue.queueOrDefer(dependencyTaskID);
		}
	}

	/**
	 * Returns the set of transitive dependencies for given task identifier, but filters out sequence tasks.
	 */
	private Set<IStrategoTerm> transitiveDependenciesNoSequence(IStrategoTerm taskID, ITaskEngine taskEngine) {
		final Set<IStrategoTerm> seen = Sets.newHashSet();
		final Queue<IStrategoTerm> queue = Lists.newLinkedList();

		queue.add(taskID);
		seen.add(taskID);

		for(IStrategoTerm queueTaskID; (queueTaskID = queue.poll()) != null;) {
			final ITask task = taskEngine.getTask(queueTaskID);
			if(SequenceTask.isSequence(task.instruction())) {
				continue;
			}
			for(IStrategoTerm dependency : taskEngine.getDependencies(queueTaskID, false)) {
				if(seen.add(dependency))
					queue.add(dependency);
			}
		}

		seen.remove(taskID);
		return seen;
	}


	private static boolean isSequence(IStrategoTerm instruction) {
		return Tools.isTermAppl(instruction) && Tools.hasConstructor((IStrategoAppl) instruction, "Sequence", 1);
	}

	public static SequenceTask register(ITaskEngine taskEngine, ITaskEvaluationFrontend evaluationFrontend,
		ITermFactory factory) {
		final SequenceTask evaluator = new SequenceTask(factory);
		final IStrategoConstructor constructor = factory.makeConstructor("Sequence", 1);
		taskEngine.registerTaskFactory(constructor, evaluator);
		evaluationFrontend.registerTaskEvaluator(constructor, evaluator);
		return evaluator;
	}
}
