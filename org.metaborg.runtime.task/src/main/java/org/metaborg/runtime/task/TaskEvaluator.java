package org.metaborg.runtime.task;

import static org.metaborg.runtime.task.util.CarthesianProduct.cartesianProduct;
import static org.metaborg.runtime.task.util.InvokeStrategy.invoke;
import static org.metaborg.runtime.task.util.ListBuilder.makeList;

import java.util.Collection;
import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Set;

import org.metaborg.runtime.task.collection.BidirectionalLinkedHashMultimap;
import org.metaborg.runtime.task.collection.BidirectionalSetMultimap;
import org.metaborg.runtime.task.util.Debug;
import org.metaborg.runtime.task.util.Timer;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.Tools;
import org.spoofax.interpreter.library.ssl.StrategoHashMap;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoConstructor;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;
import org.spoofax.interpreter.terms.ITermFactory;

import com.google.common.collect.Iterables;
import com.google.common.collect.LinkedHashMultimap;
import com.google.common.collect.Multimap;
import com.google.common.collect.Sets;

public class TaskEvaluator implements ITaskEvaluator {
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


	public TaskEvaluator(TaskEngine taskEngine, ITermFactory factory) {
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

				final IStrategoTerm instruction = task.instruction;
				final Iterable<IStrategoTerm> instructions =
					instructionCombinations(context, insert, task.isCombinator, instruction,
						taskEngine.getDependencies(taskID));

				// TODO: optimize success/unknown using a bitflag?
				boolean unknown = false;
				boolean failure = true;
				if(instructions != null) {
					for(IStrategoTerm insertedInstruction : instructions) {
						final IStrategoTerm result = solve(context, perform, taskID, task, insertedInstruction);
						final ResultType resultType = handleResult(taskID, task, instruction, result);
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

			if(Debug.DEBUGGING) {
				final Set<IStrategoTerm> cycle = findCycle(scheduled);
				if(cycle != null) {
					System.err.println("Cycle found: " + cycle);
					for(IStrategoTerm taskID : cycle) {
						final Task task = taskEngine.getTask(taskID);
						System.out.println(taskID + ": " + task + " - " + taskEngine.getDependencies(taskID));
					}
				}
				
				for(IStrategoTerm taskID : scheduled) {
					final Task task = taskEngine.getTask(taskID);
					final Set<IStrategoTerm> dependencies = toRuntimeDependency.get(taskID);
					if(!dependencies.isEmpty())
						System.err.println(taskID + ": " + task + " still depends on: ");
					for(IStrategoTerm dependencyID : dependencies) {
						final Task dependency = taskEngine.getTask(dependencyID);
						if(!dependency.solved())
							System.out.println(dependencyID + ": " + dependency);
					}
				}
			}
			
			return factory.makeTuple(factory.makeList(evaluated), factory.makeList(scheduled));			
		} finally {
			reset();
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

	public void reset() {
		evaluationQueue.clear();
		toRuntimeDependency.clear();
	}

	private Iterable<IStrategoTerm> instructionCombinations(IContext context, Strategy insert, boolean combinator,
		IStrategoTerm instruction, Iterable<IStrategoTerm> resultIDs) {
		final Collection<IStrategoTerm> instructions = new LinkedList<IStrategoTerm>();

		// TODO: insert results in Java instead of an external strategy?
		if(Iterables.isEmpty(resultIDs)) {
			instructions.add(instruction);
		} else if(!combinator) {
			// TODO: prevent construction of a multimap by changing cartesianProduct to accept a list of task IDs.
			final Multimap<IStrategoTerm, IStrategoTerm> resultsMap = LinkedHashMultimap.create();
			for(IStrategoTerm resultID : resultIDs) {
				final Task task = taskEngine.getTask(resultID);
				if(task.failed()) // If a dependency does not have any results, the task cannot be executed.
					return null;
				resultsMap.putAll(resultID, task.results());
			}

			final Collection<StrategoHashMap> resultCombinations = cartesianProduct(resultsMap);
			for(StrategoHashMap mapping : resultCombinations) {
				instructions.add(insertResults(context, insert, instruction, mapping));
			}
		} else {
			StrategoHashMap mapping = new StrategoHashMap();
			for(IStrategoTerm resultID : resultIDs) {
				final Task task = taskEngine.getTask(resultID);
				mapping.put(resultID, makeList(factory, task.results()));
			}

			instructions.add(insertResults(context, insert, instruction, mapping));
		}

		return instructions;
	}

	private IStrategoTerm insertResults(IContext context, Strategy insertResults, IStrategoTerm instruction,
		StrategoHashMap resultCombinations) {
		return invoke(context, insertResults, instruction,
			createHashtableTerm(context.getFactory(), resultCombinations));
	}

	private IStrategoAppl createHashtableTerm(ITermFactory factory, StrategoHashMap hashMap) {
		return factory.makeAppl(factory.makeConstructor("Hashtable", 1), hashMap);
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

	private ResultType handleResult(IStrategoTerm taskID, Task task, IStrategoTerm instruction, IStrategoTerm result) {
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
			// Retrieve dependencies for a dependent task.
			Collection<IStrategoTerm> dependencies = toRuntimeDependency.get(dependent);
			int dependenciesSize = dependencies.size();
			if(dependenciesSize == 0) {
				// If toRuntimeDependency does not contain dependencies for dependent yet, add them.
				toRuntimeDependency.putAll(dependent, taskEngine.getDependencies(dependent));
				dependenciesSize = toRuntimeDependency.get(dependent).size();
			}

			// Remove the dependency to the solved task. If that was the last dependency, schedule the task.
			final boolean removed = toRuntimeDependency.remove(dependent, solved);
			if(dependenciesSize == 1 && removed && !taskEngine.getTask(dependent).solved())
				queue(dependent);
		}
	}

	private void updateDelayedDependencies(IStrategoTerm delayed, IStrategoList dependencies) {
		// Sets the runtime dependencies for a task to the given dependency list.
		toRuntimeDependency.removeAll(delayed);
		for(final IStrategoTerm dependency : dependencies)
			toRuntimeDependency.put(delayed, dependency);
	}
}
