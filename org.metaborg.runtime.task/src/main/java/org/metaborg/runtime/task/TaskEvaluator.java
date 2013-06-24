package org.metaborg.runtime.task;

import static org.metaborg.runtime.task.util.CarthesianProduct.cartesianProduct;
import static org.metaborg.runtime.task.util.InvokeStrategy.invoke;
import static org.metaborg.runtime.task.util.ListBuilder.makeList;

import java.util.ArrayList;
import java.util.Collection;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.Map.Entry;
import java.util.Queue;
import java.util.Set;

import org.metaborg.runtime.task.collection.BidirectionalLinkedHashMultimap;
import org.metaborg.runtime.task.collection.BidirectionalMultimap;
import org.metaborg.runtime.task.util.Timer;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.Tools;
import org.spoofax.interpreter.library.ssl.StrategoHashMap;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoConstructor;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;
import org.spoofax.interpreter.terms.ITermFactory;

import com.google.common.collect.Iterables;
import com.google.common.collect.LinkedHashMultimap;
import com.google.common.collect.Multimap;

public class TaskEvaluator implements ITaskEvaluator {
	private final TaskEngine taskEngine;
	private final ITermFactory factory;
	private final IStrategoConstructor dependencyConstructor;
	private final IStrategoConstructor singleConstructor;


	/** Set of task that are scheduled for evaluation the next time evaluate is called. */
	private final Set<IStrategoTerm> nextScheduled = new HashSet<IStrategoTerm>();

	/** Queue of task that are scheduled for evaluation. */
	private final Queue<IStrategoTerm> evaluationQueue = new LinkedList<IStrategoTerm>();

	/** Dependencies of tasks which are updated during evaluation. */
	private final BidirectionalMultimap<IStrategoTerm, IStrategoTerm> toRuntimeDependency =
		BidirectionalLinkedHashMultimap.create();

	/** Timer for measuring task time **/
	private final Timer timer = new Timer();


	public TaskEvaluator(TaskEngine taskEngine, ITermFactory factory) {
		this.taskEngine = taskEngine;
		this.factory = factory;
		this.dependencyConstructor = factory.makeConstructor("Dependency", 1);
		this.singleConstructor = factory.makeConstructor("Single", 1);
	}

	public void schedule(IStrategoTerm taskID) {
		// TODO: TaskEngine should keep a list of tasks to schedule and pass it to evaluate.
		nextScheduled.add(taskID);
	}

	private void queue(IStrategoTerm taskID) {
		evaluationQueue.add(taskID);
	}

	public IStrategoTuple evaluate(IContext context, Strategy collect, Strategy insert, Strategy perform) {
		taskEngine.clearTimes();
		taskEngine.clearEvaluations();

		try {
			// TODO: Move this to the stopCollection function in TaskEngine so that tasks are already invalidated.
			// Remove solutions and reads for tasks that are scheduled for evaluation.
			for(final IStrategoTerm taskID : nextScheduled) {
				taskEngine.removeSolved(taskID);
				taskEngine.removeReads(taskID);
			}

			// TODO: This can also be done on-demand in tryScheduleNewTasks.
			// Fill toRuntimeDependency for scheduled tasks such that solving the task activates their dependent tasks.
			for(final IStrategoTerm taskID : nextScheduled) {
				final Set<IStrategoTerm> dependencies = new HashSet<IStrategoTerm>(taskEngine.getDependencies(taskID));
				for(final IStrategoTerm dependency : taskEngine.getDependencies(taskID)) {
					if(taskEngine.solved(dependency))
						dependencies.remove(dependency);
				}

				// If the task has no unsolved dependencies, queue it for analysis.
				if(dependencies.isEmpty()) {
					evaluationQueue.add(taskID);
				} else {
					toRuntimeDependency.putAll(taskID, dependencies);
				}
			}

			// Evaluate each task in the queue.
			int numTasksEvaluated = 0;
			for(IStrategoTerm taskID; (taskID = evaluationQueue.poll()) != null;) {
				++numTasksEvaluated;
				final IStrategoTerm instruction = taskEngine.getInstruction(taskID);
				final Iterable<IStrategoTerm> instructions =
					instructionCombinations(context, collect, insert, instruction);

				// TODO: optimize fail/success by using bit flags?
				boolean fail = false;
				boolean success = false;
				for(IStrategoTerm insertedInstruction : instructions) {
					final IStrategoTerm result = solve(context, perform, taskID, insertedInstruction);
					final ResultType resultType = handleResult(taskID, instruction, result);
					switch(resultType) {
						case Fail:
							fail = true;
							break;
						case Success:
							success = true;
							break;
						case Unknown:
							throw new IllegalStateException("Unexpected result from perform-task(|taskID): " + result
								+ ".");
						default:
							break;
					}
				}

				if(fail || success) {
					// TODO: should completely failed tasks activate other tasks? Probably not since one of its results
					// will be empty, so it cannot be evaluated.
					tryScheduleNewTasks(taskID);

					if(success) {
						nextScheduled.remove(instruction);
					} else {
						taskEngine.setFailed(taskID);
					}
				}
			}

			return factory.makeTuple(factory.makeList(nextScheduled), factory.makeInt(numTasksEvaluated));
		} finally {
			reset();
		}
	}

	public void reset() {
		nextScheduled.clear();
		evaluationQueue.clear();
		toRuntimeDependency.clear();
	}

	private Iterable<IStrategoTerm> instructionCombinations(IContext context, Strategy collect, Strategy insert,
		IStrategoTerm instruction) {
		final IStrategoTerm resultIDs = invoke(context, collect, instruction);
		final Collection<IStrategoTerm> instructions = new LinkedList<IStrategoTerm>();

		// TODO: insert and collect results in Java instead of an external strategy?

		if(!isTaskCombinator(instruction)) {
			// TODO: prevent construction of a multimap by changing cartesianProduct to accept a list of task IDs.
			final Multimap<IStrategoInt, IStrategoTerm> resultsMap = LinkedHashMultimap.create();
			for(IStrategoTerm resultID : resultIDs) {
				IStrategoInt key = (IStrategoInt) resultID;
				final Iterable<IStrategoTerm> results = taskEngine.getResults(key);
				// If one of the results of a dependency are empty the task cannot be executed, so return no
				// instructions.
				if(!results.iterator().hasNext())
					return instructions;
				resultsMap.putAll(key, results);
			}

			final Collection<StrategoHashMap> resultCombinations = cartesianProduct(resultsMap);
			for(StrategoHashMap mapping : resultCombinations) {
				printMapping(mapping);
				System.out.println("Inserting into task " + instruction);
				instructions.add(insertResults(context, insert, instruction, mapping));
			}
		} else {
			StrategoHashMap mapping = new StrategoHashMap();
			for(IStrategoTerm resultID : resultIDs) {
				final Iterable<IStrategoTerm> results = taskEngine.getResults(resultID);
				mapping.put(resultID, makeList(factory, results));
			}

			printMapping(mapping);
			System.out.println("Inserting into combinator " + instruction);
			instructions.add(insertResults(context, insert, instruction, mapping));
		}

		return instructions;
	}

	private void printMapping(StrategoHashMap mapping) {
		for(Entry<IStrategoTerm, IStrategoTerm> entry : mapping.entrySet())
			System.out.println(entry.getKey() + " -> " + entry.getValue());
	}

	private IStrategoTerm insertResults(IContext context, Strategy insertResults, IStrategoTerm instruction,
		StrategoHashMap resultCombinations) {
		return invoke(context, insertResults, instruction, resultCombinations);
	}

	private IStrategoTerm solve(IContext context, Strategy performInstruction, IStrategoTerm taskID,
		IStrategoTerm instruction) {
		timer.start();
		final IStrategoTerm result = invoke(context, performInstruction, instruction, taskID);
		taskEngine.addTime(taskID, timer.stop());
		taskEngine.addEvaluation(taskID);
		return result;
	}

	private enum ResultType {
		Unknown, DynamicDependency, Fail, Success
	}

	private ResultType handleResult(IStrategoTerm taskID, final IStrategoTerm instruction, final IStrategoTerm result) {
		if(result != null) {
			if(Tools.isTermAppl(result)) {
				final IStrategoAppl resultAppl = (IStrategoAppl) result;
				if(resultAppl.getConstructor().equals(dependencyConstructor)) {
					// The task has dynamic dependencies.
					updateDelayedDependencies(taskID, (IStrategoList) resultAppl.getSubterm(0));
					return ResultType.DynamicDependency;
				} else if(resultAppl.getConstructor().equals(singleConstructor)) {
					// The result must be treated as a single result.
					taskEngine.addResult(taskID, result.getSubterm(0));
					return ResultType.Success;
				} else {
					// Treat as single result.
					taskEngine.addResult(taskID, result);
					return ResultType.Success;
				}
			} else if(Tools.isTermList(result)) {
				// The task produced multiple results.
				taskEngine.addResults(taskID, result);
				return ResultType.Success;
			} else {
				// The task produced a single result.
				taskEngine.addResult(taskID, result);
				return ResultType.Success;
			}
		} else {
			// The task failed to produce a result.
			return ResultType.Fail;
		}
	}

	private void tryScheduleNewTasks(IStrategoTerm solved) {
		// Retrieve dependent tasks of the solved task.
		final Collection<IStrategoTerm> dependents = taskEngine.getDependent(solved);
		// Make a copy for toRuntimeDependency because a remove operation can occur while iterating.
		final Collection<IStrategoTerm> runtimeDependents =
			new ArrayList<IStrategoTerm>(toRuntimeDependency.getInverse(solved));

		for(final IStrategoTerm dependent : Iterables.concat(dependents, runtimeDependents)) {
			// Retrieve dependencies for a dependent task.
			Collection<IStrategoTerm> dependencies = toRuntimeDependency.get(dependent);
			int dependenciesSize = dependencies.size();
			if(dependenciesSize == 0) {
				// If toRuntimeDependency does not contain dependencies for dependent yet, add them.
				dependencies = taskEngine.getDependencies(dependent);
				dependenciesSize = dependencies.size();
				toRuntimeDependency.putAll(dependent, dependencies);
			}

			// Remove the dependency to the solved task. If that was the last dependency, schedule the task.
			final boolean removed = toRuntimeDependency.remove(dependent, solved);
			if(dependenciesSize == 1 && removed && !taskEngine.solved(dependent))
				queue(dependent);
		}
	}

	private void updateDelayedDependencies(IStrategoTerm delayed, IStrategoList dependencies) {
		// Sets the runtime dependencies for a task to the given dependency list.
		toRuntimeDependency.removeAll(delayed);
		for(final IStrategoTerm dependency : dependencies)
			toRuntimeDependency.put(delayed, dependency);
	}

	private boolean isTaskCombinator(IStrategoTerm instruction) {
		// TODO: extensible task combinators; use new-combinator instead of new-task and set a boolean?
		if(Tools.isTermAppl(instruction)) {
			final String name = ((IStrategoAppl) instruction).getConstructor().getName();
			return name.equals("Choice") || name.equals("PropConstraint") || name.equals("Message")
				|| name.equals("Concat") || name.equals("DisambiguateDefs");
		}
		return false;
	}
}
