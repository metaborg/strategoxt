package org.metaborg.runtime.task;

import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Queue;
import java.util.Set;

import org.metaborg.runtime.task.collection.BidirectionalLinkedHashMultimap;
import org.metaborg.runtime.task.collection.BidirectionalSetMultimap;
import org.metaborg.runtime.task.digest.ITermDigester;
import org.metaborg.runtime.task.util.ListBuilder;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoConstructor;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

import com.google.common.collect.HashBasedTable;
import com.google.common.collect.Lists;
import com.google.common.collect.Sets;
import com.google.common.collect.Table;

public class TaskEngine implements ITaskEngine {
	private final ITermFactory factory;
	private final ITermDigester digester;
	private ITaskEvaluator evaluator;
	private final IStrategoConstructor resultConstructor;


	/** Mapping of task identifiers to tasks. */
	private final Map<IStrategoTerm, Task> toTask = new HashMap<IStrategoTerm, Task>();

	/** Mapping table of instructions and dependencies to task identifiers. */
	private final Table<IStrategoTerm, IStrategoList, IStrategoTerm> toTaskID = HashBasedTable.create();


	/** Origin partitions of tasks. */
	private final BidirectionalSetMultimap<IStrategoTerm, IStrategoString> toPartition =
		BidirectionalLinkedHashMultimap.create();

	/**
	 * Mapping of task identifiers to the initial dependencies of that task when it was added. Required for cleaning up
	 * tasks in the {@link #toTaskID} table mapping because {@link #toDependency} can change during evaluation.
	 **/
	private final Map<IStrategoTerm, IStrategoList> toInitialDependencies = new HashMap<IStrategoTerm, IStrategoList>();

	/** Bidirectional mapping of dependencies between tasks identifiers. Can be updated during evaluation. */
	private final BidirectionalSetMultimap<IStrategoTerm, IStrategoTerm> toDependency = BidirectionalLinkedHashMultimap
		.create();

	/**
	 * Bidirectional mapping from task identifiers to URI's that they read during evaluation. Updated during evaluation.
	 */
	private final BidirectionalSetMultimap<IStrategoTerm, IStrategoTerm> toRead = BidirectionalLinkedHashMultimap
		.create();


	/** Tasks that are not in any partition are garbage. **/
	private final Set<IStrategoTerm> garbage = new HashSet<IStrategoTerm>();

	/** Set of task that are scheduled for evaluation the next time evaluate is called. */
	private final Set<IStrategoTerm> scheduled = new HashSet<IStrategoTerm>();


	/** New tasks that have been added since last call to {@link #startCollection(IStrategoString)}. */
	private final Set<IStrategoTerm> addedTasks = new HashSet<IStrategoTerm>();

	/** Tasks that have been removed when calling {@link #stopCollection(IStrategoString)}. */
	private final Set<IStrategoTerm> removedTasks = new HashSet<IStrategoTerm>();

	/** Partitions that are in process of task collection. */
	private final Set<IStrategoString> inCollection = new HashSet<IStrategoString>();


	public TaskEngine(ITermFactory factory, ITermDigester digester) {
		this.factory = factory;
		this.digester = digester;
		this.resultConstructor = factory.makeConstructor("Result", 1);
	}

	public ITermDigester getDigester() {
		return digester;
	}

	public ITaskEvaluator getEvaluator() {
		return evaluator;
	}

	public void setEvaluator(ITaskEvaluator evaluator) {
		this.evaluator = evaluator;
	}

	public void startCollection(IStrategoString partition) {
		if(inCollection.contains(partition))
			throw new IllegalStateException(
				"Collection has already been started. Call task-stop-collection(|partition) before starting a new collection.");

		addedTasks.clear();
		removedTasks.clear();
		removedTasks.addAll(toPartition.getInverse(partition));
		inCollection.add(partition);
	}

	public boolean taskExists(IStrategoTerm instruction) {
		return toTaskID.containsRow(instruction);
	}


	public IStrategoTerm taskID(IStrategoTerm instruction, IStrategoList dependencies) {
		IStrategoTerm taskID = toTaskID.get(instruction, dependencies);
		if(taskID != null)
			return taskID;
		taskID = digester.digest(factory, instruction, dependencies);
		toTaskID.put(instruction, dependencies, taskID);
		final Task task = getTask(taskID);
		if(task == null)
			return taskID;
		final IStrategoTerm instr = task.instruction;
		if(!instruction.match(instr)) {
			reset();
			throw new IllegalStateException("Identifier collision, task " + instruction + " and " + instr
				+ " have the same identifier: " + taskID);
		}
		return taskID;
	}


	public IStrategoTerm addTask(IStrategoString partition, IStrategoList dependencies, IStrategoTerm instruction,
		boolean combinator) {
		if(!inCollection.contains(partition))
			throw new IllegalStateException(
				"Collection has not been started yet. Call task-start-collection(|partition) before adding tasks.");

		final IStrategoTerm taskID = taskID(instruction, dependencies);

		if(!toTask.containsKey(taskID)) {
			toTask.put(taskID, new Task(instruction, combinator));
			addedTasks.add(taskID);
			schedule(taskID);
		}
		removedTasks.remove(taskID);

		toPartition.put(taskID, partition);
		toInitialDependencies.put(taskID, dependencies);
		for(final IStrategoTerm dependency : dependencies)
			addDependency(taskID, dependency);

		return createResult(taskID);
	}

	private IStrategoAppl createResult(IStrategoTerm taskID) {
		return factory.makeAppl(resultConstructor, taskID);
	}

	public void
		addPersistedTask(IStrategoTerm taskID, IStrategoTerm instruction, IStrategoInt combinator,
			IStrategoList partitions, IStrategoList initialDependencies, IStrategoList dependencies,
			IStrategoList reads, IStrategoTerm results, IStrategoInt failed, IStrategoTerm message, IStrategoTerm time,
			IStrategoTerm evaluations) {
		Task task = new Task(instruction, combinator.intValue() == 1);
		if(toTask.put(taskID, task) != null)
			throw new RuntimeException("Trying to add a persisted task that already exists.");

		toTaskID.put(task.instruction, initialDependencies, taskID);
		for(final IStrategoTerm partition : partitions)
			toPartition.put(taskID, (IStrategoString) partition);
		toInitialDependencies.put(taskID, initialDependencies);
		for(final IStrategoTerm dependency : dependencies)
			toDependency.put(taskID, dependency);
		for(final IStrategoTerm read : reads)
			toRead.put(taskID, read);
		if(results.getTermType() == IStrategoTerm.LIST)
			task.setResults(results);
		if(failed.intValue() == 1)
			task.setFailed();
		if(message.getTermType() != IStrategoTerm.TUPLE || message.getSubtermCount() != 0)
			task.setMessage(message);
		if(time.getTermType() == IStrategoTerm.INT)
			task.setTime(((IStrategoInt) time).intValue());
		if(evaluations.getTermType() == IStrategoTerm.INT)
			task.setEvaluations((short) ((IStrategoInt) evaluations).intValue());
	}

	public void removeTask(IStrategoTerm taskID) {
		toTaskID.remove(getTask(taskID).instruction, ListBuilder.makeList(factory, getInitialDependencies(taskID)));
		removeDependencies(taskID);
		removeReads(taskID);
		scheduled.remove(taskID);
		toTask.remove(taskID);
	}

	public void stopCollection(IStrategoString partition) {
		if(!inCollection.contains(partition))
			throw new IllegalStateException(
				"Collection has not been started yet. Call task-start-collection(|partition) before stopping collection.");

		for(final IStrategoTerm removed : removedTasks) {
			toPartition.remove(removed, partition);
			if(!toPartition.containsKey(removed))
				garbage.add(removed);
		}

		inCollection.remove(partition);
		collectGarbage();
	}

	private void collectGarbage() {
		for(final IStrategoTerm taskID : garbage)
			removeTask(taskID);

		garbage.clear();
	}

	/**
	 * Schedules task with given identifier for evaluation the next time {@link #evaluate} is called.
	 * 
	 * @param taskID The identifier of the task to schedule.
	 */
	private void schedule(IStrategoTerm taskID) {
		scheduled.add(taskID);
	}

	public void invalidate(IStrategoTerm taskID) {
		final Task task = getTask(taskID);
		if(task == null)
			throw new RuntimeException("Cannot invalidate task that does not exist: " + taskID);
		task.unsolve();
		task.clearMessage();
		removeReads(taskID);
	}

	public void invalidateTaskReads(IStrategoList changedReads) {
		// Schedule tasks and transitive dependent tasks that might have changed as a result of a change in reads.
		for(final IStrategoTerm changedRead : changedReads) {
			// Use work list to prevent recursion, keep collection of seen task ID's to prevent loops.
			final Set<IStrategoTerm> seen = new HashSet<IStrategoTerm>();
			final Queue<IStrategoTerm> workList = Lists.newLinkedList(getReaders(changedRead));
			for(IStrategoTerm taskID; (taskID = workList.poll()) != null;) {
				schedule(taskID);
				seen.add(taskID);
				for(IStrategoTerm dependentTaskID : getDependent(taskID)) {
					if(!seen.contains(dependentTaskID)) {
						workList.offer(dependentTaskID);
					}
				}
			}
		}
	}

	public IStrategoTerm evaluateScheduled(IContext context, Strategy insert, Strategy perform) {
		for(IStrategoTerm taskID : scheduled)
			invalidate(taskID);
		clearTimes();
		clearEvaluations();

		IStrategoTerm result = evaluator.evaluate(scheduled, context, insert, perform);
		scheduled.clear();
		return result;
	}

	public IStrategoTerm evaluateNow(IContext context, Strategy insert, Strategy perform,
		Iterable<IStrategoTerm> taskIDs) {
		final Set<IStrategoTerm> scheduled = Sets.newHashSet(taskIDs);
		for(IStrategoTerm taskID : taskIDs)
			scheduled.addAll(getTransitiveDependencies(taskID));
		return evaluator.evaluate(scheduled, context, insert, perform);
	}

	public Iterable<IStrategoTerm> getTaskIDs() {
		return toTask.keySet();
	}

	public Iterable<Task> getTasks() {
		return toTask.values();
	}

	public Iterable<Entry<IStrategoTerm, Task>> getTaskEntries() {
		return toTask.entrySet();
	}

	public Task getTask(IStrategoTerm taskID) {
		return toTask.get(taskID);
	}


	public Set<IStrategoString> getAllPartition() {
		return new HashSet<IStrategoString>(toPartition.values());
	}

	public Iterable<IStrategoString> getPartitionsOf(IStrategoTerm taskID) {
		return toPartition.get(taskID);
	}

	public Iterable<IStrategoTerm> getInPartition(IStrategoString partition) {
		return toPartition.getInverse(partition);
	}


	public IStrategoList getInitialDependencies(IStrategoTerm taskID) {
		return toInitialDependencies.get(taskID);
	}

	public Iterable<IStrategoTerm> getDependencies(IStrategoTerm taskID) {
		return toDependency.get(taskID);
	}
	
	public Set<IStrategoTerm> getTransitiveDependencies(IStrategoTerm taskID) {
		final Set<IStrategoTerm> seen = new HashSet<IStrategoTerm>();
		final Queue<IStrategoTerm> queue = new LinkedList<IStrategoTerm>();

		queue.add(taskID);
		seen.add(taskID);

		for(IStrategoTerm queueTaskID; (queueTaskID = queue.poll()) != null;) {
			for(IStrategoTerm dependency : getDependencies(queueTaskID)) {
				if(seen.add(dependency))
					queue.add(dependency);
			}
		}
		
		seen.remove(taskID);
		return seen;
	}


	public Iterable<IStrategoTerm> getDependent(IStrategoTerm taskID) {
		return toDependency.getInverse(taskID);
	}

	public boolean becomesCyclic(IStrategoTerm taskIDFrom, IStrategoTerm taskIDTo) {
		final Set<IStrategoTerm> seen = new HashSet<IStrategoTerm>();
		final Queue<IStrategoTerm> queue = new LinkedList<IStrategoTerm>();

		queue.add(taskIDTo);
		seen.add(taskIDTo);

		for(IStrategoTerm taskID; (taskID = queue.poll()) != null;) {
			for(IStrategoTerm dependency : getDependencies(taskID)) {
				if(dependency.equals(taskIDFrom))
					return true;
				if(seen.add(dependency))
					queue.add(dependency);
			}
		}

		return false;
	}

	public void addDependency(IStrategoTerm taskID, IStrategoTerm dependency) {
		toDependency.put(taskID, dependency);
	}

	public void removeDependencies(IStrategoTerm taskID) {
		toInitialDependencies.remove(taskID);
		toDependency.removeAll(taskID);
		toDependency.removeAllInverse(taskID);
	}


	public Iterable<IStrategoTerm> getReads(IStrategoTerm taskID) {
		return toRead.get(taskID);
	}

	public Iterable<IStrategoTerm> getReaders(IStrategoTerm uri) {
		return toRead.getInverse(uri);
	}

	public void addRead(IStrategoTerm taskID, IStrategoTerm uri) {
		toRead.put(taskID, uri);
	}

	public void removeReads(IStrategoTerm taskID) {
		toRead.removeAll(taskID);
	}


	public void clearTimes() {
		for(Task task : getTasks()) {
			task.clearTime();
		}
	}

	public void clearEvaluations() {
		for(Task task : getTasks()) {
			task.clearEvaluations();
		}
	}

	
	public void recover() {
		evaluator.reset();
		addedTasks.clear();
		removedTasks.clear();
		inCollection.clear();
	}

	public void reset() {
		digester.reset();
		evaluator.reset();
		toTask.clear();
		toTaskID.clear();
		toPartition.clear();
		toInitialDependencies.clear();
		toDependency.clear();
		toRead.clear();
		garbage.clear();
		scheduled.clear();
		addedTasks.clear();
		removedTasks.clear();
		inCollection.clear();
	}
}
