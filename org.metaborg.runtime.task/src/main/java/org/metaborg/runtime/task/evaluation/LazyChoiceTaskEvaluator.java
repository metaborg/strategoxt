package org.metaborg.runtime.task.evaluation;

import static org.metaborg.runtime.task.util.InvokeStrategy.invoke;

import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.LinkedList;
import java.util.Map;
import java.util.Queue;
import java.util.Set;

import org.metaborg.runtime.task.ITaskEngine;
import org.metaborg.runtime.task.Task;
import org.metaborg.runtime.task.TaskIdentification;
import org.metaborg.runtime.task.collection.BidirectionalLinkedHashMultimap;
import org.metaborg.runtime.task.collection.BidirectionalSetMultimap;
import org.metaborg.runtime.task.util.CarthesianProduct;
import org.metaborg.runtime.task.util.Debug;
import org.metaborg.runtime.task.util.Timer;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.Tools;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoConstructor;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;
import org.spoofax.interpreter.terms.ITermFactory;

import com.google.common.collect.Sets;

public class LazyChoiceTaskEvaluator implements ITaskEvaluator {
	private final ITaskEngine taskEngine;
	private final ITermFactory factory;
	private final IStrategoConstructor dependencyConstructor;
	private final IStrategoConstructor singleConstructor;


	/** Queue of task that are scheduled for evaluation. */
	private final Queue<IStrategoTerm> evaluationQueue = new LinkedList<IStrategoTerm>();

	/** Set of tasks in the queue. **/
	private final Set<IStrategoTerm> queued = new HashSet<IStrategoTerm>();

	/** Dependencies of tasks which are updated during evaluation. */
	private final BidirectionalSetMultimap<IStrategoTerm, IStrategoTerm> toRuntimeDependency =
		BidirectionalLinkedHashMultimap.create();

	/** Timer for measuring task time. **/
	private final Timer timer = new Timer();


	private final Map<IStrategoTerm, Iterator<IStrategoTerm>> choiceIterators =
		new HashMap<IStrategoTerm, Iterator<IStrategoTerm>>();
	private final Map<IStrategoTerm, IStrategoTerm> choiceTaskIDs = new HashMap<IStrategoTerm, IStrategoTerm>();


	public LazyChoiceTaskEvaluator(ITaskEngine taskEngine, ITermFactory factory) {
		this.taskEngine = taskEngine;
		this.factory = factory;
		this.dependencyConstructor = factory.makeConstructor("Dependency", 1);
		this.singleConstructor = factory.makeConstructor("Single", 1);
	}

	/**
	 * Queues given task identifier if it is not in the queue yet.
	 */
	private void queue(IStrategoTerm taskID) {
		if(!queued.contains(taskID)) {
			evaluationQueue.add(taskID);
			queued.add(taskID);
		}
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
	 * Queues given task identifier if all their dependencies are solved, or defers evaluation until all their
	 * dependencies have been solved.
	 */
	private void queueOrDefer(IStrategoTerm taskID) {
		// TODO: don't call getDependencies twice
		final Set<IStrategoTerm> dependencies = Sets.newHashSet(taskEngine.getDependencies(taskID));
		for(final IStrategoTerm dependency : taskEngine.getDependencies(taskID)) {
			if(taskEngine.getTask(dependency).solved()) {
				dependencies.remove(dependency);
			}
		}

		if(dependencies.isEmpty()) {
			// If the task has no unsolved dependencies, queue it for analysis.
			queue(taskID);
		} else {
			toRuntimeDependency.putAll(taskID, dependencies);
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
	private Set<IStrategoTerm> evaluateScheduledTasks(final Set<IStrategoTerm> scheduled,
		final Set<IStrategoTerm> skipped, final Set<IStrategoTerm> evaluated, IContext context, Strategy insert,
		Strategy perform) {
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

	private IStrategoTerm getTaskID(IStrategoTerm resultTerm) {
		if(Tools.isTermAppl(resultTerm) && Tools.hasConstructor((IStrategoAppl) resultTerm, "Result", 1))
			return resultTerm.getSubterm(0);
		return null;
	}

	/**
	 * Evaluates a choice task.
	 */
	private void evaluateChoice(final Set<IStrategoTerm> scheduled, final Set<IStrategoTerm> skipped,
		IStrategoTerm taskID, Task task) {
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
	private void cleanupChoice(final Set<IStrategoTerm> scheduled, final Set<IStrategoTerm> skipped,
		IStrategoTerm taskID) {
		final Iterator<IStrategoTerm> choiceIter = choiceIterators.get(taskID);
		while(choiceIter.hasNext()) {
			final IStrategoTerm currentTaskResult = choiceIter.next();
			final IStrategoTerm currentTaskID = getTaskID(currentTaskResult);
			if(currentTaskID == null)
				continue;
			// System.out.println("Skipped " + choiceTaskID + ": " + taskEngine.getTask(choiceTaskID));
			scheduled.remove(currentTaskID);
			// evaluated.add(currentTaskID);
			skipped.add(currentTaskID);
			for(IStrategoTerm dependencyTaskID : transitiveDependenciesNoChoice(currentTaskID)) {
				// System.out.println("Skipped " + dependencyTaskID + ": " + taskEngine.getTask(dependencyTaskID));
				scheduled.remove(dependencyTaskID);
				// evaluated.add(dependencyTaskID);
				skipped.add(currentTaskID);
			}
		}
		choiceIterators.remove(taskID);
		choiceTaskIDs.remove(taskID);
	}

	/**
	 * Evaluates a regular task.
	 */
	private void evaluateTask(IContext context, Strategy insert, Strategy perform, IStrategoTerm taskID, Task task) {
		final Iterable<IStrategoTerm> instructions =
			CarthesianProduct.taskCombinations(factory, taskEngine, context, insert, taskID, task);

		// TODO: optimize success/unknown using a bitflag?
		boolean unknown = false;
		boolean failure = true;
		if(instructions != null) {
			for(IStrategoTerm instruction : instructions) {
				final IStrategoTerm result = solve(context, perform, taskID, task, instruction);
				final ResultType resultType = handleResult(taskID, task, result);
				switch(resultType) {
					case Fail:
						break;
					case Success:
						failure = false;
						break;
					default: // Unknown result or dynamic dependency.
						unknown = true;
						break;
				}
			}
		}

		if(!unknown) {
			// Try to schedule new tasks even for failed tasks since they may activate combinators.
			tryScheduleNewTasks(taskID);

			if(failure)
				task.setFailed();
		}
	}

	/**
	 * Solves an instruction and returns its raw result.
	 */
	private IStrategoTerm solve(IContext context, Strategy performInstruction, IStrategoTerm taskID, Task task,
		IStrategoTerm instruction) {
		timer.start();
		final IStrategoTerm result = invoke(context, performInstruction, instruction, taskID);
		task.addTime(timer.stop());
		task.addEvaluation();
		return result;
	}

	private enum ResultType {
		DynamicDependency, Fail, Success
	}

	/**
	 * Handles the result of performing an instruction and returns its result type.
	 */
	private ResultType handleResult(IStrategoTerm taskID, Task task, IStrategoTerm result) {
		if(result == null)
			return ResultType.Fail; // The task failed to produce a result.

		if(Tools.isTermAppl(result)) {
			final IStrategoAppl resultAppl = (IStrategoAppl) result;
			if(resultAppl.getConstructor().equals(dependencyConstructor)) {
				// The task has dynamic dependencies.
				updateDelayedDependencies(taskID, (IStrategoList) resultAppl.getSubterm(0));
				return ResultType.DynamicDependency;
			} else if(resultAppl.getConstructor().equals(singleConstructor)) {
				// The result must be treated as a single result.
				task.addResult(result.getSubterm(0));
				return ResultType.Success;
			} else {
				// Treat as single result.
				task.addResult(result);
				return ResultType.Success;
			}
		} else if(Tools.isTermList(result)) {
			// The task produced multiple results.
			task.addResults(result);
			return ResultType.Success;
		} else {
			// The task produced a single result.
			task.addResult(result);
			return ResultType.Success;
		}
	}

	/**
	 * Tries to queue new tasks because given task has been solved.
	 */
	private void tryScheduleNewTasks(IStrategoTerm solved) {
		// Retrieve dependent tasks of the solved task.
		final Set<IStrategoTerm> dependents = Sets.newHashSet(taskEngine.getDependent(solved));
		dependents.addAll(toRuntimeDependency.getInverse(solved));

		for(final IStrategoTerm dependent : dependents) {
			// Remove the dependency to the solved task. If that was the last dependency, schedule the task.
			final boolean removed = toRuntimeDependency.remove(dependent, solved);
			if(removed && toRuntimeDependency.get(dependent).size() == 0 && !taskEngine.getTask(dependent).solved())
				queue(dependent);
		}
	}

	/**
	 * Updates the runtime dependency graph with runtime dependencies for given task.
	 */
	private void updateDelayedDependencies(IStrategoTerm taskID, IStrategoList dependencies) {
		debugDelayedDependecy(taskID, dependencies);

		// Sets the runtime dependencies for a task to the given dependency list.
		toRuntimeDependency.removeAll(taskID);
		for(final IStrategoTerm dependency : dependencies)
			toRuntimeDependency.put(taskID, dependency);
	}

	public void reset() {
		evaluationQueue.clear();
		queued.clear();
		toRuntimeDependency.clear();
		timer.clear();
	}

	private void debugUnevaluated(Iterable<IStrategoTerm> unevaluated) {
		if(Debug.DEBUGGING) {
			// Find cycles.
			final Set<IStrategoTerm> cycle = findCycle(unevaluated);
			if(cycle != null) {
				System.err.println("Cycle found: " + cycle);
				System.err.flush();
				for(IStrategoTerm taskID : cycle) {
					final Task task = taskEngine.getTask(taskID);
					System.out.println("	" + taskID + ": " + task + " - " + taskEngine.getDependencies(taskID));
					System.out.flush();
				}
			}

			// Print out runtime dependencies.
			for(IStrategoTerm taskID : unevaluated) {
				final Task task = taskEngine.getTask(taskID);
				final Set<IStrategoTerm> dependencies = toRuntimeDependency.get(taskID);
				if(!dependencies.isEmpty()) {
					System.err.println(taskID + ": " + task + " still depends on: ");
					System.err.flush();
				}
				for(IStrategoTerm dependencyID : dependencies) {
					final Task dependency = taskEngine.getTask(dependencyID);
					if(!dependency.solved()) {
						System.out.println("	" + dependencyID + ": " + dependency);
						System.out.flush();
					}
				}
			}
		}
	}

	private Set<IStrategoTerm> findCycle(Iterable<IStrategoTerm> tasks) {
		return findCycle(tasks, new LinkedHashSet<IStrategoTerm>()); // Use LinkedHashSet because it preserves order.
	}

	private Set<IStrategoTerm> findCycle(Iterable<IStrategoTerm> tasks, Set<IStrategoTerm> seen) {
		for(IStrategoTerm taskID : tasks) {
			final Set<IStrategoTerm> newSeen = new LinkedHashSet<IStrategoTerm>(seen);
			if(!newSeen.add(taskID))
				return newSeen;
			final Set<IStrategoTerm> rec = findCycle(taskEngine.getDependencies(taskID), newSeen);
			if(rec != null)
				return rec;
		}
		return null;
	}

	private void debugDelayedDependecy(IStrategoTerm taskID, IStrategoList dependencies) {
		final Task task = taskEngine.getTask(taskID);
		for(IStrategoTerm dependencyID : dependencies) {
			final Task dependencyTask = taskEngine.getTask(dependencyID);
			if(dependencyTask.solved()) {
				System.err.println("Task " + taskID + ": " + task + " reported a dynamic dependency on " + dependencyID
					+ ": " + dependencyTask + " but it is already solved!");
			}
		}
	}
}
