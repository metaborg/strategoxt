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

import com.google.common.collect.ArrayListMultimap;
import com.google.common.collect.HashMultiset;
import com.google.common.collect.Lists;
import com.google.common.collect.Maps;
import com.google.common.collect.Multimap;
import com.google.common.collect.Multiset;
import com.google.common.collect.Multisets;
import com.google.common.collect.Sets;

public class TaskEvaluationQueue implements ITaskEvaluationQueue, ITaskEvaluationFrontend {
	private final ITaskEngine taskEngine;
	private final ITermFactory factory;


	/** Queue of task that are scheduled for evaluation. */
	private final Queue<IStrategoTerm> evaluationQueue = Lists.newLinkedList();

	/** Set of tasks in the queue. **/
	private final Set<IStrategoTerm> queued = Sets.newHashSet();

	/** Dependencies of tasks which are updated during evaluation. */
	private BidirectionalSetMultimap<IStrategoTerm, IStrategoTerm> runtimeDependencies =
		BidirectionalLinkedHashMultimap.create();


	/** Maps the constructor of a task to the evaluator that can evaluate the task. */
	private final Map<IStrategoConstructor, ITaskEvaluator> taskEvaluators = Maps.newLinkedHashMap();

	/** The default task evaluator that is used to evaluate tasks for which there is no specific evaluator. */
	private final ITaskEvaluator defaultTaskEvaluator;

	/** The task evaluator that is currently being used to evaluate tasks. **/
	private ITaskEvaluator currentTaskEvaluator = null;


	private Set<IStrategoTerm> scheduled;
	private final Set<IStrategoTerm> skipped = Sets.newHashSet();
	private final Set<IStrategoTerm> evaluated = Sets.newHashSet();


	public TaskEvaluationQueue(ITaskEngine taskEngine, ITermFactory factory, ITaskEvaluator defaultTaskEvaluator) {
		this.taskEngine = taskEngine;
		this.factory = factory;
		this.defaultTaskEvaluator = defaultTaskEvaluator;
	}

	@Override
	public void queue(IStrategoTerm taskID) {
		if(!queued.contains(taskID)) {
			evaluationQueue.add(taskID);
			queued.add(taskID);
		}
	}

	@Override
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

	@Override
	public void taskSolved(IStrategoTerm taskID) {
		// Retrieve dependent tasks of the solved task.
		final Set<IStrategoTerm> dependents = Sets.newHashSet(taskEngine.getDependent(taskID, false));
		dependents.addAll(runtimeDependencies.getInverse(taskID));

		for(final IStrategoTerm dependentTaskID : dependents) {
			// Remove the dependency to the solved task. If that was the last dependency, schedule the task.
			final boolean removed = runtimeDependencies.remove(dependentTaskID, taskID);
			if(removed && runtimeDependencies.get(dependentTaskID).size() == 0
				&& !taskEngine.getTask(dependentTaskID).solved())
				queue(dependentTaskID);
		}
	}

	@Override
	public void taskSkipped(IStrategoTerm taskID) {
		scheduled.remove(taskID);
		skipped.add(taskID);
	}

	@Override
	public void delay(IStrategoTerm taskID, Iterable<IStrategoTerm> dependencies) {
		TaskEvaluationDebugging.debugDelayedDependecy(taskEngine, taskID, dependencies);

		currentTaskEvaluator.delay();

		// Sets the runtime dependencies for a task to the given dependency list.
		runtimeDependencies.removeAll(taskID);
		for(final IStrategoTerm dependency : dependencies) {
			runtimeDependencies.put(taskID, dependency);
		}

		taskEngine.setDynamicDependencies(taskID, dependencies);
		scheduled.add(taskID);
	}

	@Override
	public void addRuntimeDependency(IStrategoTerm taskID, IStrategoTerm dependencyTaskID) {
		runtimeDependencies.put(taskID, dependencyTaskID);
	}

	@Override
	public void removeRuntimeDependency(IStrategoTerm taskID, IStrategoTerm dependencyTaskID) {
		runtimeDependencies.remove(taskID, dependencyTaskID);
	}


	@Override
	public void addTaskEvaluator(IStrategoConstructor constructor, ITaskEvaluator taskEvaluator) {
		if(taskEvaluators.put(constructor, taskEvaluator) != null) {
			throw new RuntimeException("Task evaluator for " + constructor + " already exists.");
		}
	}

	@Override
	public IStrategoList adjustDependencies(IStrategoList dependencies, IStrategoTerm instruction) {
		final ITaskEvaluator taskEvaluator = getTaskEvaluator(instruction);
		return taskEvaluator.adjustDependencies(dependencies, factory);
	}


	@Override
	public IStrategoTuple evaluate(Set<IStrategoTerm> scheduled, IContext context, Strategy collect, Strategy insert,
		Strategy perform) {
		try {
			this.scheduled = scheduled;

			// Queue tasks and evaluate them for each specific task evaluator.
			for(ITaskEvaluator taskEvaluator : taskEvaluators.values()) {
				currentTaskEvaluator = taskEvaluator;
				taskEvaluator.queue(taskEngine, this, this.scheduled);
				evaluateQueuedTasks(context, collect, insert, perform);
			}

			// Evaluate the remaining tasks with the default task evaluator.
			currentTaskEvaluator = defaultTaskEvaluator;
			defaultTaskEvaluator.queue(taskEngine, this, this.scheduled);
			evaluateQueuedTasks(context, collect, insert, perform);

			if(!this.scheduled.isEmpty()) {
				// Debug unevaluated tasks if debugging is enabled.
				TaskEvaluationDebugging.debugUnevaluated(taskEngine, this.scheduled, runtimeDependencies);

				// Make a copy of the dynamic dependency graph for later use.
				final BidirectionalSetMultimap<IStrategoTerm, IStrategoTerm> copiedRuntimeDependencies =
					BidirectionalLinkedHashMultimap.create(runtimeDependencies);
				final Set<IStrategoTerm> taskIDs = Sets.newHashSet(copiedRuntimeDependencies.keySet());

				// Evaluate all tasks left in the dependency graph using a special strategy to break cycles.
				for(final IStrategoTerm taskID : taskIDs) {
					queue(taskID);
				}
				evaluateCyclicTasks(context, collect, insert, perform);

				// Store values
				final Multimap<IStrategoTerm, IStrategoTerm> values = ArrayListMultimap.create();
				for(final IStrategoTerm taskID : taskIDs) {
					final Task task = taskEngine.getTask(taskID);
					if(!task.failed())
						values.putAll(taskID, task.results());
				}

				// Do fixpoint evaluation until the results of tasks stop changing.
				for(int i = 0; i < 25; ++i) {
					System.out.println("Fixpoint cycle " + i);

					runtimeDependencies = BidirectionalLinkedHashMultimap.create(copiedRuntimeDependencies);
					for(final IStrategoTerm taskID : taskIDs) {
						queue(taskID);
					}
					evaluateCyclicTasks(context, collect, insert, perform);

					// Compare values
					boolean done = true;
					for(final IStrategoTerm taskID : taskIDs) {
						final Task task = taskEngine.getTask(taskID);

						// TODO: this assumes that no results and failure means the same, is that correct?
						if(values.get(taskID).isEmpty()) {
							if(task.failed() || !task.hasResults()) {
								continue;
							} else {
								done = false;
								break;
							}
						} else if(task.failed() || !task.hasResults()) {
							done = false;
							break;
						}

						// TODO: creating two sets and taking the symmetric difference is VERY expensive?
						final Multiset<IStrategoTerm> oldValues = HashMultiset.create(values.get(taskID));
						final Multiset<IStrategoTerm> newValues = HashMultiset.create(task.results());
						final Multiset<IStrategoTerm> diff1 = Multisets.difference(newValues, oldValues);
						final Multiset<IStrategoTerm> diff2 = Multisets.difference(oldValues, newValues);

						if(!diff1.isEmpty() || !diff2.isEmpty()) {
							done = false;
							break;
						}
					}

					if(done) {
						System.out.println("Done with fixpoint evaluation!");
						break;
					}

					values.clear();
					for(final IStrategoTerm taskID : taskIDs) {
						final Task task = taskEngine.getTask(taskID);
						if(!task.failed())
							values.putAll(taskID, task.results());
					}
				}
			}

			// Return evaluated, skipped and unevaluated task identifiers.
			return factory.makeTuple(factory.makeList(evaluated), factory.makeList(skipped),
				factory.makeList(this.scheduled));
		} finally {
			reset();
		}
	}

	@Override
	public IStrategoTerm current() {
		if(currentTaskEvaluator == null)
			return null;

		return currentTaskEvaluator.current();
	}

	@Override
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
		currentTaskEvaluator = null;
	}


	/**
	 * Evaluates queued tasks and updates the scheduled and evaluated sets.
	 */
	private void evaluateQueuedTasks(IContext context, Strategy collect, Strategy insert, Strategy perform) {
		// Evaluate each task in the queue.
		for(IStrategoTerm taskID; (taskID = evaluationQueue.poll()) != null;) {
			final Task task = taskEngine.getTask(taskID);

			evaluated.add(taskID);
			scheduled.remove(taskID);
			queued.remove(taskID);

			// Clean up data for this task again, since a task may be scheduled multiple times. A re-schedule should
			// overwrite previous data.
			taskEngine.invalidate(taskID);

			evaluateTask(taskID, task, context, collect, insert, perform);
		}
	}

	/**
	 * Evaluates queued tasks and updates the scheduled and evaluated sets.
	 */
	private void evaluateCyclicTasks(IContext context, Strategy collect, Strategy insert, Strategy perform) {
		// Evaluate each task in the queue.
		for(IStrategoTerm taskID; (taskID = evaluationQueue.poll()) != null;) {
			final Task task = taskEngine.getTask(taskID);

			evaluated.add(taskID);
			scheduled.remove(taskID);
			queued.remove(taskID);

			// Clean up data for this task again, since a task may be scheduled multiple times. A re-schedule should
			// overwrite previous data.
			taskEngine.invalidate(taskID);

			evaluateCyclicTask(taskID, task, context, collect, insert, perform);
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
	private void evaluateTask(IStrategoTerm taskID, Task task, IContext context, Strategy collect, Strategy insert,
		Strategy perform) {
		final ITaskEvaluator taskEvaluator = getTaskEvaluator(task.instruction());
		taskEvaluator.evaluate(taskID, task, taskEngine, this, context, collect, insert, perform);
	}

	/**
	 * Evaluates given task using a specific or default task evaluator.
	 */
	private void evaluateCyclicTask(IStrategoTerm taskID, Task task, IContext context, Strategy collect,
		Strategy insert, Strategy perform) {
		final ITaskEvaluator taskEvaluator = getTaskEvaluator(task.instruction());
		currentTaskEvaluator = taskEvaluator;
		taskEvaluator.evaluateCyclic(taskID, task, taskEngine, this, context, collect, insert, perform);
	}
}
