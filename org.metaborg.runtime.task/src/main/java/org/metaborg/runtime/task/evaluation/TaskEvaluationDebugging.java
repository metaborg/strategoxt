package org.metaborg.runtime.task.evaluation;

import java.util.LinkedHashSet;
import java.util.Set;

import org.metaborg.runtime.task.ITask;
import org.metaborg.runtime.task.engine.ITaskEngine;
import org.metaborg.runtime.task.util.Debug;
import org.metaborg.runtime.task.util.collections.BidirectionalSetMultimap;
import org.spoofax.interpreter.terms.IStrategoTerm;

import com.google.common.collect.Iterables;

public final class TaskEvaluationDebugging {
	/**
	 * Produces debug information to debug unevaluated task problems.
	 */
	public static void debugUnevaluated(ITaskEngine taskEngine, Iterable<IStrategoTerm> unevaluated,
		BidirectionalSetMultimap<IStrategoTerm, IStrategoTerm> toRuntimeDependency) {
		if(Debug.DEBUGGING) {
			// Find cycles.
			final Set<IStrategoTerm> cycle = findCycle(toRuntimeDependency, unevaluated);
			if(cycle != null) {
				System.err.println("Cycle found: " + cycle);
				for(IStrategoTerm taskID : cycle) {
					final ITask task = taskEngine.getTask(taskID);
					System.err.println("	" + taskID + ": " + task + " - " + toRuntimeDependency.get(taskID));
				}
				System.err.println();
			}

			// Print out runtime dependencies.
			for(IStrategoTerm taskID : unevaluated) {
				final ITask task = taskEngine.getTask(taskID);
				final Set<IStrategoTerm> dependencies = toRuntimeDependency.get(taskID);
				if(!dependencies.isEmpty()) {
					System.err.println(taskID + ": " + task + " still depends on: ");
				}
				for(IStrategoTerm dependencyID : dependencies) {
					final ITask dependency = taskEngine.getTask(dependencyID);
					if(!dependency.solved()) {
						System.err.println("	" + dependencyID + ": " + dependency);
					}
				}
			}
			System.err.println();
			System.err.println();
		}
	}

	private static Set<IStrategoTerm> findCycle(
		BidirectionalSetMultimap<IStrategoTerm, IStrategoTerm> toRuntimeDependency, Iterable<IStrategoTerm> tasks) {
		// Use LinkedHashSet because it preserves order.
		return findCycle(toRuntimeDependency, tasks, new LinkedHashSet<IStrategoTerm>());
	}

	private static Set<IStrategoTerm> findCycle(
		BidirectionalSetMultimap<IStrategoTerm, IStrategoTerm> toRuntimeDependency, Iterable<IStrategoTerm> tasks,
		Set<IStrategoTerm> seen) {
		for(IStrategoTerm taskID : tasks) {
			final Set<IStrategoTerm> newSeen = new LinkedHashSet<IStrategoTerm>(seen);
			if(!newSeen.add(taskID))
				return newSeen;
			final Set<IStrategoTerm> rec = findCycle(toRuntimeDependency, toRuntimeDependency.get(taskID), newSeen);
			if(rec != null)
				return rec;
		}
		return null;
	}

	public static void debugDelayedDependecy(ITaskEngine taskEngine, IStrategoTerm taskID,
		Iterable<IStrategoTerm> dependencies) {
		if(Debug.DEBUGGING) {
			final ITask task = taskEngine.getTask(taskID);

			if(Iterables.size(dependencies) == 0)
				System.err.println("Task " + taskID + ": " + task + " reported a dynamic dependency on nothing.");

			for(IStrategoTerm dependencyID : dependencies) {
				final ITask dependencyTask = taskEngine.getTask(dependencyID);
				if(dependencyTask.solved()) {
					System.err.println("Task " + taskID + ": " + task + " reported a dynamic dependency on "
						+ dependencyID + ": " + dependencyTask + " but it is already solved!");
				}
			}
		}
	}
}
