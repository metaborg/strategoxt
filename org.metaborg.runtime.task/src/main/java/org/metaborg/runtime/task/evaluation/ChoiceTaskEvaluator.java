package org.metaborg.runtime.task.evaluation;

import java.util.Iterator;
import java.util.Map;
import java.util.Queue;
import java.util.Set;

import org.metaborg.runtime.task.ITaskEngine;
import org.metaborg.runtime.task.Task;
import org.spoofax.NotImplementedException;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.Tools;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

import com.google.common.collect.Lists;
import com.google.common.collect.Maps;
import com.google.common.collect.Sets;

public class ChoiceTaskEvaluator implements ITaskEvaluator {
	/**
	 * Maps task identifiers of choice tasks to an iterator that holds the next subtask inside the choice to evaluate.
	 */
	private final Map<IStrategoTerm, Iterator<IStrategoTerm>> iterators = Maps.newHashMap();

	/**
	 * Maps task identifiers of choice tasks to task identifiers of subtasks that the choice tasks are currently
	 * evaluating.
	 */
	private final Map<IStrategoTerm, IStrategoTerm> subtaskIDs = Maps.newHashMap();


	@Override
	public IStrategoList adjustDependencies(IStrategoList dependencies, ITermFactory factory) {
		return factory.makeList();
	}

	@Override
	public void queue(ITaskEngine taskEngine, ITaskEvaluationQueue evaluationQueue, Set<IStrategoTerm> scheduled) {
		for(IStrategoTerm taskID : scheduled) {
			final Task task = taskEngine.getTask(taskID);
			if(ChoiceTaskEvaluator.isChoice(task.instruction())) {
				evaluationQueue.queue(taskID);
			}
		}
	}

	@Override
	public void evaluate(IStrategoTerm taskID, Task task, ITaskEngine taskEngine, ITaskEvaluationQueue evaluationQueue,
		IContext context, Strategy collect, Strategy insert, Strategy perform) {
		// Handle the result of a choice task.
		{
			final IStrategoTerm subtaskID = subtaskIDs.get(taskID);
			if(subtaskID != null) {
				evaluationQueue.removeRuntimeDependency(taskID, subtaskID); // TODO: needed/correct?

				// TODO: why do we need to check if the subtask has results?
				final Task subtask = taskEngine.getTask(subtaskID);
				if(!subtask.failed() && subtask.hasResults()) {
					choiceSucceeds(task, taskID, subtask, taskEngine, evaluationQueue);
					return;
				}
			}
		}

		Iterator<IStrategoTerm> iter = iterators.get(taskID);
		if(iter == null) {
			iter = task.instruction().getSubterm(0).iterator();
			iterators.put(taskID, iter);
		}

		// If the choice does not have any results left it has failed.
		if(!iter.hasNext()) {
			choiceFails(task, taskID, taskEngine, evaluationQueue);
			return;
		}

		// Retrieve the next task to evaluate.
		final IStrategoTerm subtaskResult = iter.next();
		final IStrategoTerm subtaskID = getTaskID(subtaskResult);
		if(subtaskID == null) {
			// Current entry in the choice is not a task identifier, queue choice for evaluation again.
			// TODO: actually this term should be the result of this choice.
			evaluationQueue.queue(taskID);
			return;
		}
		subtaskIDs.put(taskID, subtaskID);
		final Task subtask = taskEngine.getTask(subtaskID);
		taskEngine.addDependency(taskID, subtaskID);

		if(subtask.solved()) {
			if(subtask.failed()) {
				// Schedule the choice for evaluation again.
				evaluationQueue.queue(taskID);
				return;
			} else {
				// Task was already solved.
				choiceSucceeds(task, taskID, subtask, taskEngine, evaluationQueue);
				return;
			}
		} else {
			// Queue task and its dependencies for evaluation.
			queueTransitive(subtaskID, taskEngine, evaluationQueue);
			evaluationQueue.addRuntimeDependency(taskID, subtaskID);
			return;
		}
	}

	@Override
	public void evaluateCyclic(IStrategoTerm taskID, Task task, ITaskEngine taskEngine,
		ITaskEvaluationQueue evaluationQueue, IContext context, Strategy collect, Strategy insert, Strategy perform) {
		evaluate(taskID, task, taskEngine, evaluationQueue, context, collect, insert, perform);
	}

	@Override
	public void delay() {
		throw new NotImplementedException("Delaying a choice task has not been implemented yet");
	}

	@Override
	public IStrategoTerm current() {
		throw new NotImplementedException("Getting the currently evaluating choice task has not been implemented yet");
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
	 * Fails the given choice task.
	 */
	private void choiceFails(Task task, IStrategoTerm taskID, ITaskEngine taskEngine,
		ITaskEvaluationQueue evaluationQueue) {
		task.setFailed();
		evaluationQueue.taskSolved(taskID);
		cleanupChoice(taskID, taskEngine, evaluationQueue);
		return;
	}

	/**
	 * Sets the result of given choice task to the result of given subtask.
	 */
	private void choiceSucceeds(Task task, IStrategoTerm taskID, Task subtask, ITaskEngine taskEngine,
		ITaskEvaluationQueue evaluationQueue) {
		task.setResults(subtask.results());
		evaluationQueue.taskSolved(taskID);
		cleanupChoice(taskID, taskEngine, evaluationQueue);
		return;
	}

	/**
	 * Cleans up choice task evaluation after the choice task has succeeded or failed.
	 */
	private void cleanupChoice(IStrategoTerm taskID, ITaskEngine taskEngine, ITaskEvaluationQueue evaluationQueue) {
		final Iterator<IStrategoTerm> iter = iterators.get(taskID);
		if(iter != null) {
			while(iter.hasNext()) {
				final IStrategoTerm subtaskResult = iter.next();
				final IStrategoTerm subtaskID = getTaskID(subtaskResult);
				if(subtaskID == null)
					continue;

				evaluationQueue.taskSkipped(subtaskID);

				for(IStrategoTerm dependencyTaskID : transitiveDependenciesNoChoice(subtaskID, taskEngine)) {
					evaluationQueue.taskSkipped(dependencyTaskID);
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
		for(IStrategoTerm dependencyTaskID : transitiveDependenciesNoChoice(taskID, taskEngine)) {
			evaluationQueue.queueOrDefer(dependencyTaskID);
		}
	}

	/**
	 * Returns the set of transitive dependencies for given task identifier, but filters out choice tasks.
	 */
	private Set<IStrategoTerm> transitiveDependenciesNoChoice(IStrategoTerm taskID, ITaskEngine taskEngine) {
		final Set<IStrategoTerm> seen = Sets.newHashSet();
		final Queue<IStrategoTerm> queue = Lists.newLinkedList();

		queue.add(taskID);
		seen.add(taskID);

		for(IStrategoTerm queueTaskID; (queueTaskID = queue.poll()) != null;) {
			final Task task = taskEngine.getTask(queueTaskID);
			if(ChoiceTaskEvaluator.isChoice(task.instruction())) {
				continue;
			}
			for(IStrategoTerm dependency : taskEngine.getDependencies(queueTaskID)) {
				if(seen.add(dependency))
					queue.add(dependency);
			}
		}

		seen.remove(taskID);
		return seen;
	}

	private static boolean isChoice(IStrategoTerm instruction) {
		return Tools.isTermAppl(instruction) && Tools.hasConstructor((IStrategoAppl) instruction, "Choice", 1);
	}
}
