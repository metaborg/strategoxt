package org.metaborg.runtime.task.evaluation;

import java.util.LinkedHashSet;
import java.util.Set;

import org.metaborg.runtime.task.ITaskEngine;
import org.metaborg.runtime.task.Task;
import org.metaborg.runtime.task.collection.BidirectionalSetMultimap;
import org.metaborg.runtime.task.util.Debug;
import org.spoofax.interpreter.terms.IStrategoTerm;

public final class TaskEvaluationDebugging {
	/**
	 * Produces debug information to debug unevaluated task problems.
	 */
	public static void debugUnevaluated(ITaskEngine taskEngine, Iterable<IStrategoTerm> unevaluated,
		BidirectionalSetMultimap<IStrategoTerm, IStrategoTerm> toRuntimeDependency) {
		if(Debug.DEBUGGING) {
			// Find cycles.
			final Set<IStrategoTerm> cycle = findCycle(taskEngine, unevaluated);
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

	private static Set<IStrategoTerm> findCycle(ITaskEngine taskEngine, Iterable<IStrategoTerm> tasks) {
		return findCycle(taskEngine, tasks, new LinkedHashSet<IStrategoTerm>()); // Use LinkedHashSet because it
																					// preserves order.
	}

	private static Set<IStrategoTerm> findCycle(ITaskEngine taskEngine, Iterable<IStrategoTerm> tasks,
		Set<IStrategoTerm> seen) {
		for(IStrategoTerm taskID : tasks) {
			final Set<IStrategoTerm> newSeen = new LinkedHashSet<IStrategoTerm>(seen);
			if(!newSeen.add(taskID))
				return newSeen;
			final Set<IStrategoTerm> rec = findCycle(taskEngine, taskEngine.getDependencies(taskID), newSeen);
			if(rec != null)
				return rec;
		}
		return null;
	}

	public static void debugDelayedDependecy(ITaskEngine taskEngine, IStrategoTerm taskID,
		Iterable<IStrategoTerm> dependencies) {
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
