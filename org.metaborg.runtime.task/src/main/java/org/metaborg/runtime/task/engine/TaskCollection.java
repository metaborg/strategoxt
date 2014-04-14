package org.metaborg.runtime.task.engine;

import java.util.Set;

import org.spoofax.interpreter.terms.IStrategoTerm;

import com.google.common.collect.Iterables;
import com.google.common.collect.Sets;

public class TaskCollection {
	/** New tasks that have been added since last call to {@link #startCollection}. */
	private final Set<IStrategoTerm> addedTasks = Sets.newHashSet();

	/** Tasks that have been removed when calling {@link #stopCollection(IStrategoTerm)}. */
	private final Set<IStrategoTerm> removedTasks = Sets.newHashSet();

	/** Partitions that are in process of task collection. */
	private final Set<IStrategoTerm> inCollection = Sets.newHashSet();


	public void startCollection(IStrategoTerm source, Iterable<IStrategoTerm> tasksIDsInSource) {
		if(inCollection.contains(source))
			throw new IllegalStateException(
				"Collection has already been started. Call task-stop-collection(|source) before starting a new collection.");

		addedTasks.clear();
		removedTasks.clear();
		Iterables.addAll(removedTasks, tasksIDsInSource);
		inCollection.add(source);
	}

	public boolean inCollection(IStrategoTerm source) {
		return inCollection.contains(source);
	}

	public void addTask(IStrategoTerm taskID) {
		addedTasks.add(taskID);
	}

	public void keepTask(IStrategoTerm taskID) {
		removedTasks.remove(taskID);
	}

	public Iterable<IStrategoTerm> stopCollection(IStrategoTerm source) {
		if(!inCollection(source))
			throw new IllegalStateException(
				"Collection has not been started yet. Call task-start-collection(|source) before stopping collection.");

		inCollection.remove(source);
		return removedTasks;
	}

	public Iterable<IStrategoTerm> addedTasks() {
		return addedTasks;
	}

	public void recover() {
		reset();
	}

	public void reset() {
		addedTasks.clear();
		removedTasks.clear();
		inCollection.clear();
	}
}
