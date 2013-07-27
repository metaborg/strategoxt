package org.metaborg.runtime.task.evaluation;

import java.util.Map;
import java.util.Queue;
import java.util.Set;

import org.metaborg.runtime.task.ITaskEngine;
import org.metaborg.runtime.task.Task;
import org.metaborg.runtime.task.collection.BidirectionalLinkedHashMultimap;
import org.metaborg.runtime.task.collection.BidirectionalSetMultimap;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.Tools;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoConstructor;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;
import org.spoofax.interpreter.terms.ITermFactory;

import com.google.common.collect.Lists;
import com.google.common.collect.Maps;
import com.google.common.collect.Sets;

public class TaskEvaluationQueue implements ITaskEvaluationQueue, ITaskEvaluationFrontend {
	private final ITaskEngine taskEngine;
	private final ITermFactory factory;


	/** Queue of task that are scheduled for evaluation. */
	private final Queue<IStrategoTerm> evaluationQueue = Lists.newLinkedList();

	/** Set of tasks in the queue. **/
	private final Set<IStrategoTerm> queued = Sets.newHashSet();

	/** Dependencies of tasks which are updated during evaluation. */
	private final BidirectionalSetMultimap<IStrategoTerm, IStrategoTerm> runtimeDependencies =
		BidirectionalLinkedHashMultimap.create();


	/** Maps the constructor of a task to the evaluator that can evaluate the task. */
	private final Map<IStrategoConstructor, ITaskEvaluator> taskEvaluators = Maps.newLinkedHashMap();

	/** The default task evaluator that is used to evaluate tasks for which there is no specific evaluator. */
	private final ITaskEvaluator defaultTaskEvaluator;


	private Set<IStrategoTerm> scheduled;
	private final Set<IStrategoTerm> skipped = Sets.newHashSet();
	private final Set<IStrategoTerm> evaluated = Sets.newHashSet();


	public TaskEvaluationQueue(ITaskEngine taskEngine, ITermFactory factory, ITaskEvaluator defaultTaskEvaluator) {
		this.taskEngine = taskEngine;
		this.factory = factory;
		this.defaultTaskEvaluator = defaultTaskEvaluator;
	}

	public void queue(IStrategoTerm taskID) {
		if(!queued.contains(taskID)) {
			evaluationQueue.add(taskID);
			queued.add(taskID);
		}
	}

	public void queueOrDefer(IStrategoTerm taskID) {
		final Iterable<IStrategoTerm> dependencies = taskEngine.getDependencies(taskID);
		final Set<IStrategoTerm> dependenciesSet = Sets.newHashSet(dependencies);

		// TODO: this could be done in constant time if task engine keeps a set of solved tasks.
		for(final IStrategoTerm dependency : dependencies) {
			if(taskEngine.getTask(dependency).solved()) {
				dependenciesSet.remove(dependency);
			}
		}

		if(dependenciesSet.isEmpty()) {
			// If the task has no unsolved dependencies, queue it for analysis.
			queue(taskID);
		} else {
			// Fill toRuntimeDependency for scheduled tasks such that solving the task activates their dependent tasks.
			runtimeDependencies.putAll(taskID, dependenciesSet);
		}
	}

	public void taskSolved(IStrategoTerm taskID) {
		// Retrieve dependent tasks of the solved task.
		final Set<IStrategoTerm> dependents = Sets.newHashSet(taskEngine.getDependent(taskID));
		dependents.addAll(runtimeDependencies.getInverse(taskID));

		for(final IStrategoTerm dependentTaskID : dependents) {
			// Remove the dependency to the solved task. If that was the last dependency, schedule the task.
			final boolean removed = runtimeDependencies.remove(dependentTaskID, taskID);
			if(removed && runtimeDependencies.get(dependentTaskID).size() == 0
				&& !taskEngine.getTask(dependentTaskID).solved())
				queue(dependentTaskID);
		}
	}

	public void taskSkipped(IStrategoTerm taskID) {
		scheduled.remove(taskID);
		skipped.add(taskID);
	}

	public void taskDelayed(IStrategoTerm taskID, IStrategoList dependencies) {
		TaskEvaluationDebugging.debugDelayedDependecy(taskEngine, taskID, dependencies);

		// Sets the runtime dependencies for a task to the given dependency list.
		runtimeDependencies.removeAll(taskID);
		for(final IStrategoTerm dependency : dependencies)
			runtimeDependencies.put(taskID, dependency);
	}

	public void addRuntimeDependency(IStrategoTerm taskID, IStrategoTerm dependencyTaskID) {
		runtimeDependencies.put(taskID, dependencyTaskID);
	}

	public void removeRuntimeDependency(IStrategoTerm taskID, IStrategoTerm dependencyTaskID) {
		runtimeDependencies.remove(taskID, dependencyTaskID);
	}


	public void addTaskEvaluator(IStrategoConstructor constructor, ITaskEvaluator taskEvaluator) {
		if(taskEvaluators.put(constructor, taskEvaluator) != null) {
			throw new RuntimeException("Task evaluator for " + constructor + " already exists.");
		}
	}

	public IStrategoList adjustDependencies(IStrategoList dependencies, IStrategoTerm instruction) {
		final ITaskEvaluator taskEvaluator = getTaskEvaluator(instruction);
		return taskEvaluator.adjustDependencies(dependencies, factory);
	}

	public IStrategoTuple evaluate(Set<IStrategoTerm> scheduled, IContext context, Strategy insert, Strategy perform) {
		try {
			this.scheduled = scheduled;

			// Queue tasks and evaluate them for each specific task evaluator.
			for(ITaskEvaluator taskEvaluator : taskEvaluators.values()) {
				taskEvaluator.queue(taskEngine, this, this.scheduled);
				evaluateQueuedTasks(context, insert, perform);
			}

			// Evaluate the remaining tasks with the default task evaluator.
			defaultTaskEvaluator.queue(taskEngine, this, this.scheduled);
			evaluateQueuedTasks(context, insert, perform);

			// Debug unevaluated tasks if debugging is enabled.
			TaskEvaluationDebugging.debugUnevaluated(taskEngine, this.scheduled, runtimeDependencies);

			// Return evaluated, skipped and unevaluated task identifiers.
			return factory.makeTuple(factory.makeList(evaluated), factory.makeList(skipped),
				factory.makeList(this.scheduled));
		} finally {
			reset();
		}
	}

	public void reset() {
		evaluationQueue.clear();
		queued.clear();
		runtimeDependencies.clear();

		scheduled = null;
		skipped.clear();
		evaluated.clear();

		for(ITaskEvaluator evaluator : taskEvaluators.values())
			evaluator.reset();
		defaultTaskEvaluator.reset();
	}


	/**
	 * Evaluates queued tasks and updates the scheduled and evaluated sets.
	 */
	private void evaluateQueuedTasks(IContext context, Strategy insert, Strategy perform) {
		// Evaluate each task in the queue.
		for(IStrategoTerm taskID; (taskID = evaluationQueue.poll()) != null;) {
			final Task task = taskEngine.getTask(taskID);

			evaluated.add(taskID);
			scheduled.remove(taskID);
			queued.remove(taskID);

			// Clean up data for this task again, since a task may be scheduled multiple times. A re-schedule should
			// overwrite previous data.
			taskEngine.invalidate(taskID);

			evaluateTask(taskID, task, context, insert, perform);
		}
	}

	/**
	 * Returns a task evaluator for given instruction.
	 */
	private ITaskEvaluator getTaskEvaluator(IStrategoTerm instruction) {
		ITaskEvaluator taskEvaluator;
		if(!Tools.isTermAppl(instruction)) {
			taskEvaluator = defaultTaskEvaluator;
		} else {
			taskEvaluator = taskEvaluators.get(((IStrategoAppl) instruction).getConstructor());
			if(taskEvaluator == null)
				taskEvaluator = defaultTaskEvaluator;
		}
		return taskEvaluator;
	}

	/**
	 * Evaluates given task using a specific or default task evaluator.
	 */
	private void evaluateTask(IStrategoTerm taskID, Task task, IContext context, Strategy insert, Strategy perform) {
		final ITaskEvaluator taskEvaluator = getTaskEvaluator(task.instruction);
		taskEvaluator.evaluate(taskID, task, taskEngine, this, context, insert, perform);
	}
}
