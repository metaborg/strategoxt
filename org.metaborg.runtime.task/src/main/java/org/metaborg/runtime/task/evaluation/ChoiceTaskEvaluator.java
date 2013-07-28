package org.metaborg.runtime.task.evaluation;

import java.util.Iterator;
import java.util.Map;
import java.util.Queue;
import java.util.Set;

import org.metaborg.runtime.task.ITaskEngine;
import org.metaborg.runtime.task.Task;
import org.metaborg.runtime.task.TaskIdentification;
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
	 * Maps task identifiers from choice tasks to an iterator that holds the next task inside the choice to evaluate.
	 */
	private final Map<IStrategoTerm, Iterator<IStrategoTerm>> choiceIterators = Maps.newHashMap();

	/**
	 * Maps task identifiers from choice tasks to task identifiers from the task that the choice task is currently
	 * evaluating.
	 */
	private final Map<IStrategoTerm, IStrategoTerm> choiceTaskIDs = Maps.newHashMap();


	public IStrategoList adjustDependencies(IStrategoList dependencies, ITermFactory factory) {
		return factory.makeList();
	}

	public void queue(ITaskEngine taskEngine, ITaskEvaluationQueue evaluationQueue, Set<IStrategoTerm> scheduled) {
		for(IStrategoTerm taskID : scheduled) {
			final Task task = taskEngine.getTask(taskID);
			if(TaskIdentification.isChoice(task.instruction)) {
				evaluationQueue.queue(taskID);
			}
		}
	}

	public void evaluate(IStrategoTerm taskID, Task task, ITaskEngine taskEngine, ITaskEvaluationQueue evaluationQueue,
		IContext context, Strategy insert, Strategy perform) {
		// Handle the result of a choice task.
		final IStrategoTerm choiceTaskID = choiceTaskIDs.get(taskID);
		if(choiceTaskID != null) {
			evaluationQueue.removeRuntimeDependency(taskID, choiceTaskID); // TODO: needed/correct?

			final Task choiceTask = taskEngine.getTask(choiceTaskID);
			if(!choiceTask.failed() && choiceTask.hasResults()) {
				task.setResults(choiceTask.results());
				evaluationQueue.taskSolved(taskID);
				cleanupChoice(taskID, taskEngine, evaluationQueue);
				return;
			}
		}

		Iterator<IStrategoTerm> choiceIter = choiceIterators.get(taskID);
		if(choiceIter == null) {
			choiceIter = task.instruction.getSubterm(0).iterator();
			choiceIterators.put(taskID, choiceIter);
		}

		// If the choice does not have any results left it has failed.
		if(!choiceIter.hasNext()) {
			task.setFailed();
			evaluationQueue.taskSolved(taskID);
			cleanupChoice(taskID, taskEngine, evaluationQueue);
			return;
		}

		// Retrieve the next task to evaluate.
		final IStrategoTerm currentTaskResult = choiceIter.next();
		final IStrategoTerm currentTaskID = getTaskID(currentTaskResult);
		if(currentTaskID == null) {
			// Current entry in the choice is not a task identifier, queue choice for evaluation again.
			// TODO: actually this term should be the result of this choice.
			evaluationQueue.queue(taskID);
			return;
		}
		choiceTaskIDs.put(taskID, currentTaskID);
		final Task currentTask = taskEngine.getTask(currentTaskID);
		taskEngine.addDependency(taskID, currentTaskID);

		if(currentTask.solved()) {
			if(currentTask.failed()) {
				// Schedule the choice for evaluation again.
				evaluationQueue.queue(taskID);
				return;
			} else {
				// Task was already solved.
				task.setResults(currentTask.results());
				evaluationQueue.taskSolved(taskID);
				cleanupChoice(taskID, taskEngine, evaluationQueue);
				return;
			}
		} else {
			// Queue task and its dependencies for evaluation.
			queueTransitive(currentTaskID, taskEngine, evaluationQueue);
			evaluationQueue.addRuntimeDependency(taskID, currentTaskID);
			return;
		}
	}

	public void reset() {
		choiceIterators.clear();
		choiceTaskIDs.clear();
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
	 * Cleans up choice task evaluation after the choice task has succeeded or failed.
	 */
	private void cleanupChoice(IStrategoTerm taskID, ITaskEngine taskEngine, ITaskEvaluationQueue evaluationQueue) {
		final Iterator<IStrategoTerm> choiceIter = choiceIterators.get(taskID);
		while(choiceIter.hasNext()) {
			final IStrategoTerm currentTaskResult = choiceIter.next();
			final IStrategoTerm currentTaskID = getTaskID(currentTaskResult);
			if(currentTaskID == null)
				continue;

			evaluationQueue.taskSkipped(currentTaskID);

			for(IStrategoTerm dependencyTaskID : transitiveDependenciesNoChoice(currentTaskID, taskEngine)) {
				evaluationQueue.taskSkipped(dependencyTaskID);
			}
		}

		choiceIterators.remove(taskID);
		choiceTaskIDs.remove(taskID);
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
			if(TaskIdentification.isChoice(task.instruction)) {
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
}
