package org.metaborg.runtime.task;

import static com.google.common.base.Predicates.in;
import static com.google.common.base.Predicates.not;
import static com.google.common.collect.Sets.filter;

import java.util.Collection;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;

import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoConstructor;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;
import org.spoofax.interpreter.terms.ITermFactory;

public class TaskEngine {
	private final ITermFactory factory;
	private final IStrategoConstructor resultConstructor;

	/** Instructions of tasks. */
	private final Map<IStrategoInt, IStrategoTerm> toInstruction = new ConcurrentHashMap<IStrategoInt, IStrategoTerm>();

	/** Origin partitions of tasks. */
	private final ManyToManyMap<IStrategoInt, IStrategoString> toPartition = ManyToManyMap.create();

	/** Dependencies between tasks. */
	private final ManyToManyMap<IStrategoInt, IStrategoInt> toDependency = ManyToManyMap.create();

	/** Solutions of tasks. */
	private final Map<IStrategoInt, IStrategoList> toResult = new ConcurrentHashMap<IStrategoInt, IStrategoList>();

	/** All tasks (view). */
	private final Set<IStrategoInt> tasks = toInstruction.keySet();

	/** Solved tasks (view). */
	private final Set<IStrategoInt> solved = toResult.keySet();

	/** Task is garbage, if it is has no partition anymore (view). */
	private final Set<IStrategoInt> garbage = filter(tasks, not(in(toPartition.keys())));

	/**
	 * New tasks that have been added since last call to {@link #startCollection(IStrategoString)}.
	 */
	private final Set<IStrategoInt> addedTasks = new HashSet<IStrategoInt>();

	/**
	 * Tasks that have been removed when calling {@link #stopCollection(IStrategoString)}.
	 */
	private final Set<IStrategoInt> removedTasks = new HashSet<IStrategoInt>();

	/** Partitions that are in process of collecting. */
	private final Set<IStrategoString> inCollection = new HashSet<IStrategoString>();

	public TaskEngine(ITermFactory factory) {
		this.factory = factory;
		this.resultConstructor = factory.makeConstructor("Result", 1);
	}

	public void startCollection(IStrategoString partition) {
		if (inCollection.contains(partition))
			throw new IllegalStateException(
				"Collection has already been started. Call stopCollection before starting a new collection.");

		addedTasks.clear();
		removedTasks.clear();
		removedTasks.addAll(toPartition.getInverse(partition));
		inCollection.add(partition);
	}

	public IStrategoAppl addTask(IStrategoString partition, IStrategoList dependencies, IStrategoTerm instruction) {
		if (!inCollection.contains(partition))
			throw new IllegalStateException(
				"Collection has not been started yet. Call startCollection before adding tasks.");

		IStrategoInt taskID = factory.makeInt(instruction.hashCode());
		if (toInstruction.put(taskID, instruction) == null)
			addedTasks.add(taskID);
		removedTasks.remove(taskID);

		toPartition.put(taskID, partition);
		// TODO: Don't use getAllSubterms() on IStrategoList, allocates an array
		// copy.
		for (IStrategoTerm dep : dependencies.getAllSubterms())
			toDependency.put(taskID, (IStrategoInt) dep);

		return createResult(taskID);
	}

	private IStrategoAppl createResult(IStrategoInt taskID) {
		return factory.makeAppl(resultConstructor, taskID);
	}

	public IStrategoTuple stopCollection(IStrategoString partition) {
		if (!inCollection.contains(partition))
			throw new IllegalStateException(
				"Collection has not been started yet. Call startCollection before stopping collection.");

		for (IStrategoInt removed : removedTasks)
			toPartition.remove(removed, partition);
		collectGarbage();
		inCollection.remove(partition);

		// TODO: Do we still need to get the list of added and removed tasks in
		// Stratego?
		return factory.makeTuple(factory.makeList(addedTasks), factory.makeList(removedTasks));
	}

	public IStrategoTerm getInstruction(IStrategoInt taskID) {
		return toInstruction.get(taskID);
	}

	public Collection<IStrategoString> getPartitionsOf(IStrategoInt taskID) {
		return toPartition.get(taskID);
	}

	public Collection<IStrategoInt> getInPartition(IStrategoString partition) {
		return toPartition.getInverse(partition);
	}

	public Collection<IStrategoInt> getDependencies(IStrategoInt taskID) {
		return toDependency.get(taskID);
	}

	public Collection<IStrategoInt> getDependent(IStrategoInt taskID) {
		return toDependency.getInverse(taskID);
	}

	public void setResult(IStrategoInt taskID, IStrategoList resultList) {
		toResult.put(taskID, resultList);
	}

	public IStrategoList getResult(IStrategoInt taskID) {
		return toResult.get(taskID);
	}

	public IStrategoList getResult(IStrategoAppl resultID) {
		return toResult.get((IStrategoInt) resultID.getSubterm(0));
	}

	public TaskSolver createSolver() {
		return new TaskSolver(this, toInstruction, toDependency, solved);
	}

	public void reset() {
		toInstruction.clear();
		toPartition.clear();
		toDependency.clear();
		toResult.clear();
		addedTasks.clear();
		removedTasks.clear();
		inCollection.clear();
	}

	private void collectGarbage() {
		tasks.removeAll(garbage);
		solved.removeAll(garbage);
		toDependency.removeAll(garbage);
	}
}
