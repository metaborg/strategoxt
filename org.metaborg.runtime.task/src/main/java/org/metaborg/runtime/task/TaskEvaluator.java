package org.metaborg.runtime.task;

import java.util.Collection;
import java.util.Queue;
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
	private final IStrategoConstructor dependenciesConstructor;

	private final Queue<IStrategoInt> scheduled = new ConcurrentLinkedQueue<IStrategoInt>();

	private final ManyToManyMap<IStrategoInt, IStrategoInt> toRuntimeDependency = ManyToManyMap.create();

	public TaskEvaluator(TaskEngine taskEngine, ITermFactory factory) {
		this.taskEngine = taskEngine;
		this.dependenciesConstructor = factory.makeConstructor("Dependencies", 1);
	}

	public void schedule(IStrategoInt taskID) {
		scheduled.add(taskID);
	}

	public void scheduleAll(Collection<IStrategoInt> tasks) {
		scheduled.addAll(tasks);
	}

	public void evaluate(Context context, Strategy performInstruction, Strategy insertResults) {
		for(IStrategoInt taskID; (taskID = scheduled.poll()) != null;) {
			taskEngine.removeSolved(taskID);
			final IStrategoTerm instruction = taskEngine.getInstruction(taskID);
			final IStrategoTerm result = solve(context, performInstruction, insertResults, taskID, instruction);
			if(result != null && Tools.isTermAppl(result)) {
				IStrategoAppl resultAppl = (IStrategoAppl) result;
				if(resultAppl.getConstructor().equals(dependenciesConstructor)) {
					updateDelayedDependencies(taskID, (IStrategoList) resultAppl.getSubterm(0));
				}
			} else if(result == null || !Tools.isTermList(result)) {
				taskEngine.addFailed(taskID);
				tryScheduleNewTasks(taskID);
			} else {
				taskEngine.addResult(taskID, (IStrategoList) result);
				tryScheduleNewTasks(taskID);
			}
		}
	}

	private IStrategoTerm solve(Context context, Strategy performInstruction, Strategy insertResults,
		IStrategoInt taskID, IStrategoTerm instruction) {
		return performInstruction.invoke(context, insertResults(context, insertResults, instruction), taskID);
	}

	private IStrategoTerm insertResults(Context context, Strategy insertResults, IStrategoTerm instruction) {
		return insertResults.invoke(context, instruction);
	}

	private void tryScheduleNewTasks(IStrategoInt solved) {
		// Retrieve dependent tasks of the solved task.
		Collection<IStrategoInt> dependents = taskEngine.getDependent(solved);
		Collection<IStrategoInt> runtimeDependents = toRuntimeDependency.getInverse(solved);

		for(IStrategoInt dependent : Iterables.concat(dependents, runtimeDependents)) {
			// Retrieve dependencies for a dependent task.
			Collection<IStrategoInt> dependencies = toRuntimeDependency.get(dependent);
			int dependenciesSize = dependencies.size();
			if(dependenciesSize == 0) {
				// If toRuntimeDependency does not contain dependencies for dependent yet, add them.
				dependencies = taskEngine.getDependencies(dependent);
				toRuntimeDependency.putAll(dependent, dependencies);
			}

			// TODO: might cause a CME, need to copy the dependents?
			// Remove the dependency to the solved task. If that was the last dependency, schedule the task.
			boolean removed = toRuntimeDependency.remove(dependent, solved);
			if(dependenciesSize == 1 && removed)
				schedule(dependent);
		}
	}

	private void updateDelayedDependencies(IStrategoInt delayed, IStrategoList dependencies) {
		while(!dependencies.isEmpty()) {
			toRuntimeDependency.put(delayed, (IStrategoInt) dependencies.head());
			dependencies = dependencies.tail();
		}
	}
}
