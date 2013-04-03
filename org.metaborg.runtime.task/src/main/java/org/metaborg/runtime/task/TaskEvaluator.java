package org.metaborg.runtime.task;

import java.util.ArrayList;
import java.util.Collection;
import java.util.HashSet;
import java.util.Queue;
import java.util.Set;
import java.util.concurrent.ConcurrentLinkedQueue;

import org.spoofax.interpreter.core.Tools;
import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoConstructor;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

import com.google.common.collect.Iterables;

public class TaskEvaluator {
	private final TaskEngine taskEngine;
	private final ITermFactory factory;
	private final IStrategoConstructor dependencyConstructor;


	/** Set of task that are scheduled for evaluation the next time evaluate is called. */
	private final Set<IStrategoInt> nextScheduled = new HashSet<IStrategoInt>();
	
	/** Queue of task that are scheduled for evaluation. */
	private final Queue<IStrategoInt> evaluationQueue = new ConcurrentLinkedQueue<IStrategoInt>();

	/** Dependencies of tasks which are updated during evaluation. */
	private final ManyToManyMap<IStrategoInt, IStrategoInt> toRuntimeDependency = ManyToManyMap.create();


	public TaskEvaluator(TaskEngine taskEngine, ITermFactory factory) {
		this.taskEngine = taskEngine;
		this.factory = factory;
		this.dependencyConstructor = factory.makeConstructor("Dependency", 1);
	}

	/**
	 * Schedules a task with unknown dependencies for evaluation.
	 * 
	 * @param taskID Task identifier to schedule.
	 */
	public void schedule(IStrategoInt taskID) {
		nextScheduled.add(taskID);
	}

	private void queue(IStrategoInt taskID) {
		evaluationQueue.add(taskID);
	}

	public IStrategoList evaluate(Context context, Strategy performInstruction, Strategy insertResults) {
		try {
			// Remove solutions and reads for tasks that are scheduled for evaluation.
			for(IStrategoInt taskID : nextScheduled) {
				taskEngine.removeSolved(taskID);
				taskEngine.removeReads(taskID);
			}

			// Fill toRuntimeDependency for scheduled tasks such that solving the task activates their dependent tasks.
			for(IStrategoInt taskID : nextScheduled) {
				Set<IStrategoInt> dependencies = new HashSet<IStrategoInt>(taskEngine.getDependencies(taskID));
				for(IStrategoInt dependency : taskEngine.getDependencies(taskID)) {
					if(taskEngine.isSolved(dependency))
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
			for(IStrategoInt taskID; (taskID = evaluationQueue.poll()) != null;) {
				final IStrategoTerm instruction = taskEngine.getInstruction(taskID);
				final IStrategoTerm result = solve(context, performInstruction, insertResults, taskID, instruction);
				if(result != null && Tools.isTermAppl(result)) {
					// The task has dynamic dependencies.
					IStrategoAppl resultAppl = (IStrategoAppl) result;
					if(resultAppl.getConstructor().equals(dependencyConstructor)) {
						updateDelayedDependencies(taskID, (IStrategoList) resultAppl.getSubterm(0));
					}
				} else if(result == null) {
					// The task failed to produce a result.
					taskEngine.addFailed(taskID);
					tryScheduleNewTasks(taskID);
				} else if(Tools.isTermList(result)) {
					// The task produced a result.
					taskEngine.addResult(taskID, (IStrategoList) result);
					nextScheduled.remove(instruction);
					tryScheduleNewTasks(taskID);
				} else {
					throw new IllegalStateException("Unexpected result from perform-task(|taskID): " + result
						+ ". Must be a list.");
				}
			}

			IStrategoList erroneousTasks = factory.makeList(nextScheduled);
			return erroneousTasks;
		} finally {
			reset();
		}
	}

	public void reset() {
		nextScheduled.clear();
		evaluationQueue.clear();
		toRuntimeDependency.clear();
	}

	private IStrategoTerm solve(Context context, Strategy performInstruction, Strategy insertResults,
		IStrategoInt taskID, IStrategoTerm instruction) {
		IStrategoTerm insertedInstruction = insertResults(context, insertResults, instruction);
		return performInstruction.invoke(context, insertedInstruction, taskID);
	}

	private IStrategoTerm insertResults(Context context, Strategy insertResults, IStrategoTerm instruction) {
		return insertResults.invoke(context, instruction);
	}

	private void tryScheduleNewTasks(IStrategoInt solved) {
		// Retrieve dependent tasks of the solved task.
		Collection<IStrategoInt> dependents = taskEngine.getDependent(solved);
		// Make a copy for toRuntimeDependency because a remove operation can occur while iterating.
		Collection<IStrategoInt> runtimeDependents =
			new ArrayList<IStrategoInt>(toRuntimeDependency.getInverse(solved));

		for(IStrategoInt dependent : Iterables.concat(dependents, runtimeDependents)) {
			// Retrieve dependencies for a dependent task.
			Collection<IStrategoInt> dependencies = toRuntimeDependency.get(dependent);
			int dependenciesSize = dependencies.size();
			if(dependenciesSize == 0) {
				// If toRuntimeDependency does not contain dependencies for dependent yet, add them.
				dependencies = taskEngine.getDependencies(dependent);
				dependenciesSize = dependencies.size();
				toRuntimeDependency.putAll(dependent, dependencies);
			}

			// Remove the dependency to the solved task. If that was the last dependency, schedule the task.
			boolean removed = toRuntimeDependency.remove(dependent, solved);
			if(dependenciesSize == 1 && removed)
				queue(dependent);
		}
	}

	private void updateDelayedDependencies(IStrategoInt delayed, IStrategoList dependencies) {
		// Sets the runtime dependencies for a task to the given dependency list.
		toRuntimeDependency.removeAll(delayed);
		while(!dependencies.isEmpty()) {
			toRuntimeDependency.put(delayed, (IStrategoInt) dependencies.head());
			dependencies = dependencies.tail();
		}
	}
}
