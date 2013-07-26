package org.metaborg.runtime.task.evaluation;

import static org.metaborg.runtime.task.util.InvokeStrategy.invoke;

import java.util.Queue;
import java.util.Set;

import org.metaborg.runtime.task.ITaskEngine;
import org.metaborg.runtime.task.Task;
import org.metaborg.runtime.task.collection.BidirectionalLinkedHashMultimap;
import org.metaborg.runtime.task.collection.BidirectionalSetMultimap;
import org.metaborg.runtime.task.util.CarthesianProduct;
import org.metaborg.runtime.task.util.Timer;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.Tools;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoConstructor;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

import com.google.common.collect.Lists;
import com.google.common.collect.Sets;

public abstract class AbstractTaskEvaluator implements ITaskEvaluator {
	protected final ITaskEngine taskEngine;
	protected final ITermFactory factory;
	protected final IStrategoConstructor dependencyConstructor;
	protected final IStrategoConstructor singleConstructor;


	/** Queue of task that are scheduled for evaluation. */
	protected final Queue<IStrategoTerm> evaluationQueue = Lists.newLinkedList();

	/** Set of tasks in the queue. **/
	protected final Set<IStrategoTerm> queued = Sets.newHashSet();

	/** Dependencies of tasks which are updated during evaluation. */
	protected final BidirectionalSetMultimap<IStrategoTerm, IStrategoTerm> toRuntimeDependency =
		BidirectionalLinkedHashMultimap.create();

	/** Timer for measuring task time. **/
	protected final Timer timer = new Timer();


	protected AbstractTaskEvaluator(ITaskEngine taskEngine, ITermFactory factory) {
		this.taskEngine = taskEngine;
		this.factory = factory;
		this.dependencyConstructor = factory.makeConstructor("Dependency", 1);
		this.singleConstructor = factory.makeConstructor("Single", 1);
	}

	public void reset() {
		evaluationQueue.clear();
		queued.clear();
		toRuntimeDependency.clear();
		timer.clear();
	}

	/**
	 * Queues given task identifier if it is not in the queue yet.
	 */
	protected void queue(IStrategoTerm taskID) {
		if(!queued.contains(taskID)) {
			evaluationQueue.add(taskID);
			queued.add(taskID);
		}
	}

	/**
	 * Queues given task identifier if all their dependencies are solved, or defers evaluation until all their
	 * dependencies have been solved.
	 */
	protected void queueOrDefer(IStrategoTerm taskID) {
		final Iterable<IStrategoTerm> dependencies = taskEngine.getDependencies(taskID);
		final Set<IStrategoTerm> dependenciesSet = Sets.newHashSet(dependencies);

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
			toRuntimeDependency.putAll(taskID, dependenciesSet);
		}
	}

	/**
	 * Tries to queue new tasks because given task has been solved.
	 */
	protected void tryScheduleNewTasks(IStrategoTerm solved) {
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
	protected void updateDelayedDependencies(IStrategoTerm taskID, IStrategoList dependencies) {
		TaskEvaluationDebugging.debugDelayedDependecy(taskEngine, taskID, dependencies);

		// Sets the runtime dependencies for a task to the given dependency list.
		toRuntimeDependency.removeAll(taskID);
		for(final IStrategoTerm dependency : dependencies)
			toRuntimeDependency.put(taskID, dependency);
	}

	/**
	 * Evaluates a regular task.
	 */
	protected void evaluateRegularTask(IContext context, Strategy insert, Strategy perform, IStrategoTerm taskID,
		Task task) {
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
	 * Evaluates queued tasks and updates the scheduled and evaluated sets.
	 */
	protected Set<IStrategoTerm> evaluateQueuedTasks(Set<IStrategoTerm> scheduled, Set<IStrategoTerm> skipped,
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

			evaluateTask(scheduled, skipped, evaluated, context, insert, perform, taskID, task);
		}

		return scheduled;
	}

	/**
	 * Evaluates given task. Called on each task in the queue in {@link #evaluateQueuedTasks}.
	 */
	protected abstract void evaluateTask(Set<IStrategoTerm> scheduled, Set<IStrategoTerm> skipped,
		Set<IStrategoTerm> evaluated, IContext context, Strategy insert, Strategy perform, IStrategoTerm taskID,
		Task task);

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
}
