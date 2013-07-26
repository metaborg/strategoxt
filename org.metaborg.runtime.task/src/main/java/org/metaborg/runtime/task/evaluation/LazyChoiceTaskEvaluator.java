package org.metaborg.runtime.task.evaluation;

import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedList;
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
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;
import org.spoofax.interpreter.terms.ITermFactory;

/**
 * @author gohla
 *
 */
public class LazyChoiceTaskEvaluator extends AbstractTaskEvaluator {
	private final Map<IStrategoTerm, Iterator<IStrategoTerm>> choiceIterators =
		new HashMap<IStrategoTerm, Iterator<IStrategoTerm>>();
	private final Map<IStrategoTerm, IStrategoTerm> choiceTaskIDs = new HashMap<IStrategoTerm, IStrategoTerm>();


	public LazyChoiceTaskEvaluator(ITaskEngine taskEngine, ITermFactory factory) {
		super(taskEngine, factory);
	}

	/**
	 * Queues given task identifier and its transitive dependencies if they are not in the queue yet.
	 */
	private void queueTransitive(IStrategoTerm taskID) {
		queueOrDefer(taskID);
		for(IStrategoTerm dependencyTaskID : transitiveDependenciesNoChoice(taskID)) {
			queueOrDefer(dependencyTaskID);
		}
	}

	/**
	 * Returns the set of transitive dependencies for given task identifier, but filters out choice tasks.
	 */
	private Set<IStrategoTerm> transitiveDependenciesNoChoice(IStrategoTerm taskID) {
		final Set<IStrategoTerm> seen = new HashSet<IStrategoTerm>();
		final Queue<IStrategoTerm> queue = new LinkedList<IStrategoTerm>();

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

	public IStrategoTuple evaluate(Set<IStrategoTerm> scheduled, IContext context, Strategy insert, Strategy perform) {
		try {
			final Set<IStrategoTerm> evaluated = new HashSet<IStrategoTerm>();
			final Set<IStrategoTerm> skipped = new HashSet<IStrategoTerm>();

			// First only queue Choice tasks, which will in turn lazily queue tasks inside the Choice.
			for(IStrategoTerm taskID : scheduled) {
				final Task task = taskEngine.getTask(taskID);
				if(TaskIdentification.isChoice(task.instruction)) {
					queue(taskID);
				}
			}
			evaluateScheduledTasks(scheduled, skipped, evaluated, context, insert, perform);

			// Queue the leftover tasks that need to be eagerly evaluated.
			// Fill toRuntimeDependency for scheduled tasks such that solving the task activates their dependent tasks.
			for(final IStrategoTerm taskID : scheduled) {
				queueOrDefer(taskID);
			}
			evaluateScheduledTasks(scheduled, skipped, evaluated, context, insert, perform);

			debugUnevaluated(scheduled);

			return factory.makeTuple(factory.makeList(evaluated), factory.makeList(skipped),
				factory.makeList(scheduled));
		} finally {
			reset();
		}
	}

	/**
	 * Evaluates queued tasks and updates the scheduled and evaluated sets.
	 */
	private Set<IStrategoTerm> evaluateScheduledTasks(Set<IStrategoTerm> scheduled, final Set<IStrategoTerm> skipped,
		Set<IStrategoTerm> evaluated, IContext context, Strategy insert, Strategy perform) {
		// Evaluate each task in the queue.
		for(IStrategoTerm taskID; (taskID = evaluationQueue.poll()) != null;) {
			final Task task = taskEngine.getTask(taskID);

			evaluated.add(taskID);
			scheduled.remove(taskID);
			queued.remove(taskID);

			// Clean up data for this task again, since a task may be scheduled multiple times. A re-schedule should
			// overwrite previous data.
			taskEngine.invalidate(taskID);

			if(TaskIdentification.isChoice(task.instruction)) {
				evaluateChoice(scheduled, skipped, taskID, task);
			} else {
				evaluateTask(context, insert, perform, taskID, task);
			}
		}

		return scheduled;
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
	 * Evaluates a choice task.
	 */
	private void evaluateChoice(Set<IStrategoTerm> scheduled, Set<IStrategoTerm> skipped, IStrategoTerm taskID,
		Task task) {
		// Handle the result of a choice task.
		IStrategoTerm choiceTaskID = choiceTaskIDs.get(taskID);
		if(choiceTaskID != null) {
			toRuntimeDependency.remove(taskID, choiceTaskID); // TODO: needed/correct?

			final Task choiceTask = taskEngine.getTask(choiceTaskID);
			if(!choiceTask.failed() && choiceTask.hasResults()) {
				task.setResults(choiceTask.results());
				tryScheduleNewTasks(taskID);
				cleanupChoice(scheduled, skipped, taskID);
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
			tryScheduleNewTasks(taskID);
			cleanupChoice(scheduled, skipped, taskID);
			return;
		}

		// Retrieve the next task to evaluate.
		final IStrategoTerm currentTaskResult = choiceIter.next();
		final IStrategoTerm currentTaskID = getTaskID(currentTaskResult);
		if(currentTaskID == null) {
			// Current entry in the choice is not a task identifier, queue choice for evaluation again.
			// TODO: actually this term should be the result of this choice.
			queue(taskID);
			return;
		}
		choiceTaskIDs.put(taskID, currentTaskID);
		final Task currentTask = taskEngine.getTask(currentTaskID);
		taskEngine.addDependency(taskID, currentTaskID);

		if(currentTask.solved()) {
			if(currentTask.failed()) {
				// Schedule the choice for evaluation again.
				queue(taskID);
				return;
			} else {
				// Task was already solved.
				task.setResults(currentTask.results());
				tryScheduleNewTasks(taskID);
				cleanupChoice(scheduled, skipped, taskID);
				return;
			}
		} else {
			// Queue task and its dependencies for evaluation.
			queueTransitive(currentTaskID);
			toRuntimeDependency.put(taskID, currentTaskID);
			return;
		}
	}

	/**
	 * Cleans up choice task evaluation after the choice task has succeeded or failed.
	 */
	private void cleanupChoice(Set<IStrategoTerm> scheduled, Set<IStrategoTerm> skipped, IStrategoTerm taskID) {
		final Iterator<IStrategoTerm> choiceIter = choiceIterators.get(taskID);
		while(choiceIter.hasNext()) {
			final IStrategoTerm currentTaskResult = choiceIter.next();
			final IStrategoTerm currentTaskID = getTaskID(currentTaskResult);
			if(currentTaskID == null)
				continue;

			scheduled.remove(currentTaskID);
			skipped.add(currentTaskID);

			for(IStrategoTerm dependencyTaskID : transitiveDependenciesNoChoice(currentTaskID)) {
				scheduled.remove(dependencyTaskID);
				skipped.add(currentTaskID);
			}
		}
		choiceIterators.remove(taskID);
		choiceTaskIDs.remove(taskID);
	}

	public void reset() {
		super.reset();
		choiceIterators.clear();
		choiceTaskIDs.clear();
	}
}
