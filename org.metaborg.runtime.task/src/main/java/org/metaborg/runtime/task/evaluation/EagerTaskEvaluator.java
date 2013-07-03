package org.metaborg.runtime.task.evaluation;

import static org.metaborg.runtime.task.util.InvokeStrategy.invoke;

import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Set;

import org.metaborg.runtime.task.Task;
import org.metaborg.runtime.task.TaskEngine;
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

public class EagerTaskEvaluator implements ITaskEvaluator {
	private final TaskEngine taskEngine;
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


	public EagerTaskEvaluator(TaskEngine taskEngine, ITermFactory factory) {
		this.taskEngine = taskEngine;
		this.factory = factory;
		this.dependencyConstructor = factory.makeConstructor("Dependency", 1);
		this.singleConstructor = factory.makeConstructor("Single", 1);
	}

	private void queue(IStrategoTerm taskID) {
		if(!queued.contains(taskID)) {
			evaluationQueue.add(taskID);
			queued.add(taskID);
		}
	}

	public IStrategoTuple evaluate(Set<IStrategoTerm> scheduled, IContext context, Strategy insert, Strategy perform) {
		try {
			// Fill toRuntimeDependency for scheduled tasks such that solving the task activates their dependent tasks.
			for(final IStrategoTerm taskID : scheduled) {
				final Set<IStrategoTerm> dependencies = Sets.newHashSet(taskEngine.getDependencies(taskID));
				for(final IStrategoTerm dependency : taskEngine.getDependencies(taskID)) {
					if(taskEngine.getTask(dependency).solved()) {
						dependencies.remove(dependency);
					}
				}

				// If the task has no unsolved dependencies, queue it for analysis.
				if(dependencies.isEmpty()) {
					queue(taskID);
				} else {
					toRuntimeDependency.putAll(taskID, dependencies);
				}
			}

			// Evaluate each task in the queue.
			final Set<IStrategoTerm> evaluated = new HashSet<IStrategoTerm>();
			for(IStrategoTerm taskID; (taskID = evaluationQueue.poll()) != null;) {
				final Task task = taskEngine.getTask(taskID);

				evaluated.add(taskID);
				scheduled.remove(taskID);
				queued.remove(taskID);

				// Clean up data for this task again, since a task may be scheduled multiple times. A re-schedule should
				// overwrite previous data.
				taskEngine.invalidate(taskID);

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

			debugUnevaluated(scheduled);

			return factory.makeTuple(factory.makeList(evaluated), factory.makeList(scheduled));
		} finally {
			reset();
		}
	}

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
