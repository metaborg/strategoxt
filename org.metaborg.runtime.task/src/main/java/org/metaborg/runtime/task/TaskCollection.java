package org.metaborg.runtime.task;

import java.util.Set;

import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;

import com.google.common.collect.Iterables;
import com.google.common.collect.Sets;

public class TaskCollection {
	/** New tasks that have been added since last call to {@link #startCollection(IStrategoString)}. */
	private final Set<IStrategoTerm> addedTasks = Sets.newHashSet();

	/** Tasks that have been removed when calling {@link #stopCollection(IStrategoString)}. */
	private final Set<IStrategoTerm> removedTasks = Sets.newHashSet();

	/** Partitions that are in process of task collection. */
	private final Set<IStrategoString> inCollection = Sets.newHashSet();


	public void startCollection(IStrategoString partition, Iterable<IStrategoTerm> tasksIDsInPartition) {
		if(inCollection.contains(partition))
			throw new IllegalStateException(
				"Collection has already been started. Call task-stop-collection(|partition) before starting a new collection.");

		addedTasks.clear();
		removedTasks.clear();
		Iterables.addAll(removedTasks, tasksIDsInPartition);
		inCollection.add(partition);
	}

	public boolean inCollection(IStrategoString partition) {
		return inCollection.contains(partition);
	}

	public void addTask(IStrategoTerm taskID) {
		addedTasks.add(taskID);
	}

	public void keepTask(IStrategoTerm taskID) {
		removedTasks.remove(taskID);
	}

	public Iterable<IStrategoTerm> stopCollection(IStrategoString partition) {
		if(!inCollection(partition))
			throw new IllegalStateException(
				"Collection has not been started yet. Call task-start-collection(|partition) before stopping collection.");

		inCollection.remove(partition);
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
