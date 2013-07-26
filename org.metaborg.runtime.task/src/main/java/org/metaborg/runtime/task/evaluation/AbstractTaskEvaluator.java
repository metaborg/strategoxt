package org.metaborg.runtime.task.evaluation;

import static org.metaborg.runtime.task.util.InvokeStrategy.invoke;

import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Set;

import org.metaborg.runtime.task.ITaskEngine;
import org.metaborg.runtime.task.Task;
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
import org.spoofax.interpreter.terms.ITermFactory;

import com.google.common.collect.Sets;

public abstract class AbstractTaskEvaluator implements ITaskEvaluator {
	protected final ITaskEngine taskEngine;
	protected final ITermFactory factory;
	protected final IStrategoConstructor dependencyConstructor;
	protected final IStrategoConstructor singleConstructor;


	/** Queue of task that are scheduled for evaluation. */
	protected final Queue<IStrategoTerm> evaluationQueue = new LinkedList<IStrategoTerm>();

	/** Set of tasks in the queue. **/
	protected final Set<IStrategoTerm> queued = new HashSet<IStrategoTerm>();

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
			toRuntimeDependency.putAll(taskID, dependenciesSet);
		}
	}
	
	/**
	 * Evaluates a regular task.
	 */
	protected void evaluateTask(IContext context, Strategy insert, Strategy perform, IStrategoTerm taskID, Task task) {
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
	protected IStrategoTerm solve(IContext context, Strategy performInstruction, IStrategoTerm taskID, Task task,
		IStrategoTerm instruction) {
		timer.start();
		final IStrategoTerm result = invoke(context, performInstruction, instruction, taskID);
		task.addTime(timer.stop());
		task.addEvaluation();
		return result;
	}

	protected enum ResultType {
		DynamicDependency, Fail, Success
	}

	/**
	 * Handles the result of performing an instruction and returns its result type.
	 */
	protected ResultType handleResult(IStrategoTerm taskID, Task task, IStrategoTerm result) {
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
		debugDelayedDependecy(taskID, dependencies);

		// Sets the runtime dependencies for a task to the given dependency list.
		toRuntimeDependency.removeAll(taskID);
		for(final IStrategoTerm dependency : dependencies)
			toRuntimeDependency.put(taskID, dependency);
	}

	/**
	 * Produces debug information to debug unevaluated task problems.
	 */
	protected void debugUnevaluated(Iterable<IStrategoTerm> unevaluated) {
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
