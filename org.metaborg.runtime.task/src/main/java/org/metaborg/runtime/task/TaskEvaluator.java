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

	// TODO: Could schedule duplicates of a task is removed and added again without calling evaluate.
	/** Queue of task that are scheduled for evaluation the next time evaluate is called. */
	private final Queue<IStrategoInt> scheduled = new ConcurrentLinkedQueue<IStrategoInt>();

	/** Set of all instructions that can be scheduled. Used for retrieving unevaluated and erroneous tasks. */
	private final Set<IStrategoTerm> possibleInstructions = new HashSet<IStrategoTerm>();

	/** Dependencies of tasks which are updated during evaluation. */
	private final ManyToManyMap<IStrategoInt, IStrategoInt> toRuntimeDependency = ManyToManyMap.create();

	public TaskEvaluator(TaskEngine taskEngine, ITermFactory factory) {
		this.taskEngine = taskEngine;
		this.factory = factory;
		this.dependencyConstructor = factory.makeConstructor("Dependency", 1);
	}

	public void trySchedule(IStrategoInt taskID, IStrategoList dependencies, IStrategoTerm instruction) {
		possibleInstructions.add(instruction);
		if(dependencies.isEmpty())
			scheduled.add(taskID);
	}

	public IStrategoList evaluate(Context context, Strategy performInstruction, Strategy insertResults) {
		for(IStrategoInt taskID; (taskID = scheduled.poll()) != null;) {
			taskEngine.removeSolved(taskID);
			final IStrategoTerm instruction = taskEngine.getInstruction(taskID);
			final IStrategoTerm result = solve(context, performInstruction, insertResults, taskID, instruction);
			if(result != null && Tools.isTermAppl(result)) {
				IStrategoAppl resultAppl = (IStrategoAppl) result;
				if(resultAppl.getConstructor().equals(dependencyConstructor)) {
					updateDelayedDependencies(taskID, (IStrategoList) resultAppl.getSubterm(0));
				}
			} else if(result == null) {
				taskEngine.addFailed(taskID);
				tryScheduleNewTasks(taskID);
			} else if(Tools.isTermList(result)) {
				taskEngine.addResult(taskID, (IStrategoList) result);
				possibleInstructions.remove(instruction);
				tryScheduleNewTasks(taskID);
			} else {
				throw new IllegalStateException("Unexpected result from perform-task(|taskID): " + result
					+ ". Must be a list.");
			}
		}

		IStrategoList erroneousTasks = factory.makeList(possibleInstructions);
		reset();
		return erroneousTasks;
	}

	public void reset() {
		scheduled.clear();
		possibleInstructions.clear();
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
				scheduled.add(dependent);
		}
	}

	private void updateDelayedDependencies(IStrategoInt delayed, IStrategoList dependencies) {
		toRuntimeDependency.removeAll(delayed);
		while(!dependencies.isEmpty()) {
			toRuntimeDependency.put(delayed, (IStrategoInt) dependencies.head());
			dependencies = dependencies.tail();
		}
	}
}
