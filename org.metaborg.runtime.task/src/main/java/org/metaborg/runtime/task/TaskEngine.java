package org.metaborg.runtime.task;

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

import com.google.common.base.Predicate;
import com.google.common.collect.BiMap;
import com.google.common.collect.HashBasedTable;
import com.google.common.collect.HashBiMap;
import com.google.common.collect.Iterables;
import com.google.common.collect.Lists;
import com.google.common.collect.Maps;
import com.google.common.collect.Sets;
import com.google.common.collect.Table;

public class TaskEngine implements ITaskEngine {
	private final ITaskEngine parent;
	private final ITermFactory factory;
	private final ITermDigester digester;
	private ITaskEvaluator evaluator;
	private final IStrategoConstructor resultConstructor;


	/** Bidirectional mapping between task identifiers and tasks. */
	private final BiMap<IStrategoTerm, Task> toTask = HashBiMap.create();

	/** Mapping table of instructions and dependencies to task identifiers. */
	private final Table<IStrategoTerm, IStrategoList, IStrategoTerm> toTaskID = HashBasedTable.create();


	/** Origin partitions of tasks. */
	private final BidirectionalSetMultimap<IStrategoTerm, IStrategoString> toPartition =
		BidirectionalLinkedHashMultimap.create();

	/** Bidirectional mapping of dependencies between tasks identifiers. Can be updated during evaluation. */
	private final BidirectionalSetMultimap<IStrategoTerm, IStrategoTerm> toDependency = BidirectionalLinkedHashMultimap
		.create();

	/** Bidirectional mapping from task identifiers to URI's that they read during evaluation. */
	private final BidirectionalSetMultimap<IStrategoTerm, IStrategoTerm> toRead = BidirectionalLinkedHashMultimap
		.create();


	/** Tasks that are not in any partition are garbage. **/
	private final Set<IStrategoTerm> garbage = Sets.newHashSet();

	/** Set of task that are scheduled for evaluation the next time evaluate is called. */
	private final Set<IStrategoTerm> scheduled = Sets.newHashSet();


	/** New tasks that have been added since last call to {@link #startCollection(IStrategoString)}. */
	private final Set<IStrategoTerm> addedTasks = Sets.newHashSet();

	/** Tasks that have been removed when calling {@link #stopCollection(IStrategoString)}. */
	private final Set<IStrategoTerm> removedTasks = Sets.newHashSet();

	/** Partitions that are in process of task collection. */
	private final Set<IStrategoString> inCollection = Sets.newHashSet();


	/** Mapping from task identifiers to objects that contain the removal status of that task. */
	private final Map<IStrategoTerm, TaskRemovalStatus> tasksRemovalStatus = Maps.newHashMap();

	/** Predicate that decides whether a task identifier from the parent should be visible or not. */
	private final Predicate<IStrategoTerm> visible;
	private final Predicate<Task> visibleTask;
	private final Predicate<Entry<IStrategoTerm, Task>> visibleEntry;
	private final Predicate<IStrategoTerm> partitionsVisible;
	private final Predicate<IStrategoTerm> dependenciesVisible;
	private final Predicate<IStrategoTerm> readsVisible;


	public TaskEngine(ITaskEngine parent, ITermFactory factory, ITermDigester digester) {
		this.parent = parent;
		this.factory = factory;
		this.digester = digester;
		this.resultConstructor = factory.makeConstructor("Result", 1);

		this.visible = new Predicate<IStrategoTerm>() {
			public boolean apply(IStrategoTerm taskID) {
				return parentTaskVisible(taskID);
			}
		};
		this.visibleTask = new Predicate<Task>() {
			public boolean apply(Task task) {
				return parentTaskVisible(task);
			}
		};
		this.visibleEntry = new Predicate<Entry<IStrategoTerm, Task>>() {
			public boolean apply(Entry<IStrategoTerm, Task> entry) {
				return parentTaskVisible(entry.getKey());
			}
		};
		this.partitionsVisible = new Predicate<IStrategoTerm>() {
			public boolean apply(IStrategoTerm taskID) {
				return parentPartitionsVisible(taskID);
			}
		};
		this.dependenciesVisible = new Predicate<IStrategoTerm>() {
			public boolean apply(IStrategoTerm taskID) {
				return parentDependenciesVisible(taskID);
			}
		};
		this.readsVisible = new Predicate<IStrategoTerm>() {
			public boolean apply(IStrategoTerm taskID) {
				return parentReadsVisible(taskID);
			}
		};
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

	public ITaskEngine getParent() {
		return parent;
	}

	public void startCollection(IStrategoString partition) {
		if(inCollection.contains(partition))
			throw new IllegalStateException(
				"Collection has already been started. Call task-stop-collection(|partition) before starting a new collection.");

		addedTasks.clear();
		removedTasks.clear();
		Iterables.addAll(removedTasks, getInPartition(partition));
		inCollection.add(partition);
	}

	public boolean taskExists(IStrategoTerm instruction) {
		return toTaskID.containsRow(instruction) || parent.taskExists(instruction);
	}

	public IStrategoTerm getTaskID(IStrategoTerm instruction, IStrategoList dependencies) {
		IStrategoTerm taskID = toTaskID.get(instruction, dependencies);
		if(taskID == null)
			taskID = parent.getTaskID(instruction, dependencies);
		return taskID;
	}

	public IStrategoTerm createTaskID(IStrategoTerm instruction, IStrategoList dependencies) {
		IStrategoTerm taskID = getTaskID(instruction, dependencies);
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

		final IStrategoTerm taskID = createTaskID(instruction, dependencies);

		if(getTask(taskID) == null) {
			toTask.put(taskID, new Task(instruction, dependencies, combinator));
			addedTasks.add(taskID);
			schedule(taskID);
		}
		removedTasks.remove(taskID);

		addToPartition(taskID, partition);
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
		Task task = new Task(instruction, initialDependencies, combinator.intValue() == 1);
		if(getTask(taskID) != null)
			throw new RuntimeException("Trying to add a persisted task that already exists.");

		toTask.put(taskID, task);
		toTaskID.put(task.instruction, initialDependencies, taskID);
		for(final IStrategoTerm partition : partitions)
			addToPartition(taskID, (IStrategoString) partition);
		for(final IStrategoTerm dependency : dependencies)
			addDependency(taskID, dependency);
		for(final IStrategoTerm read : reads)
			addRead(taskID, read);
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
		getTaskRemovalStatus(taskID).removed = true;
		removePartitionsOf(taskID);
		removeDependencies(taskID);
		removeReads(taskID);
		scheduled.remove(taskID);
		final Task task = getTaskCurrent(taskID);
		if(task == null)
			return; // Task is not in this task engine but in a parent one.
		toTaskID.remove(task.instruction, ListBuilder.makeList(factory, task.initialDependencies));
		toTask.remove(taskID);
	}

	public void stopCollection(IStrategoString partition) {
		if(!inCollection.contains(partition))
			throw new IllegalStateException(
				"Collection has not been started yet. Call task-start-collection(|partition) before stopping collection.");

		for(final IStrategoTerm removed : removedTasks) {
			removeFromPartition(removed, partition);
			if(getPartitionsOf(removed).isEmpty())
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

	private boolean parentTaskVisible(IStrategoTerm taskID) {
		return !getTaskRemovalStatus(taskID).removed;
	}

	private boolean parentTaskVisible(Task task) {
		final IStrategoTerm taskID = toTask.inverse().get(task);
		return parentTaskVisible(taskID);
	}

	private Iterable<IStrategoTerm> parentVisibleFilter(Iterable<IStrategoTerm> taskIDs) {
		return Iterables.filter(taskIDs, visible);
	}

	private Iterable<Task> parentTaskVisibleFilter(Iterable<Task> tasks) {
		return Iterables.filter(tasks, visibleTask);
	}

	private Iterable<Entry<IStrategoTerm, Task>>
		parentEntryInvisibleFilter(Iterable<Entry<IStrategoTerm, Task>> entries) {
		return Iterables.filter(entries, visibleEntry);
	}

	public void invalidate(IStrategoTerm taskID) {
		Task task = getTaskCurrent(taskID);
		if(task == null) {
			task = parent.getTask(taskID);
			if(task == null)
				throw new RuntimeException("Cannot invalidate task that does not exist: " + taskID);
			task = new Task(task);
			toTask.put(taskID, task);
		}
		task.unsolve();
		task.clearMessage();
		removeReads(taskID);
	}

	public void invalidateTaskReads(IStrategoList changedReads) {
		// Schedule tasks and transitive dependent tasks that might have changed as a result of a change in reads.
		for(final IStrategoTerm changedRead : changedReads) {
			// Use work list to prevent recursion, keep collection of seen task ID's to prevent loops.
			final Set<IStrategoTerm> seen = Sets.newHashSet();
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
		clearTimes();       // TODO: clear evaluation times of parent tasks.
		clearEvaluations(); // TODO: clear evaluation count of parent tasks.

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
		final Iterable<IStrategoTerm> parentTaskIDs = parentVisibleFilter(parent.getTaskIDs());
		final Iterable<IStrategoTerm> ownTaskIDs = toTask.keySet();
		return Iterables.concat(parentTaskIDs, ownTaskIDs);
	}

	public Iterable<Task> getTasks() {
		final Iterable<Task> parentTasks = parentTaskVisibleFilter(parent.getTasks());
		final Iterable<Task> ownTasks = toTask.values();
		return Iterables.concat(parentTasks, ownTasks);
	}

	public Iterable<Entry<IStrategoTerm, Task>> getTaskEntries() {
		final Iterable<Entry<IStrategoTerm, Task>> parentTaskEntries =
			parentEntryInvisibleFilter(parent.getTaskEntries());
		final Iterable<Entry<IStrategoTerm, Task>> ownTaskEntries = toTask.entrySet();
		return Iterables.concat(parentTaskEntries, ownTaskEntries);
	}

	public Task getTask(IStrategoTerm taskID) {
		Task task = toTask.get(taskID);
		if(task == null && parentTaskVisible(taskID))
			task = parent.getTask(taskID);
		return task;
	}


	public Iterable<IStrategoTerm> getTaskIDsCurrent() {
		return toTask.keySet();
	}

	public Iterable<Task> getTasksCurrent() {
		return toTask.values();
	}

	public Iterable<Entry<IStrategoTerm, Task>> getTaskEntriesCurrent() {
		return toTask.entrySet();
	}

	public Task getTaskCurrent(IStrategoTerm taskID) {
		return toTask.get(taskID);
	}


	private boolean parentPartitionsVisible(IStrategoTerm taskID) {
		return !getTaskRemovalStatus(taskID).partitionOverride;
	}

	private Iterable<IStrategoTerm> parentPartitionVisibleFilter(Iterable<IStrategoTerm> taskIDs) {
		return Iterables.filter(taskIDs, partitionsVisible);
	}

	public Set<IStrategoString> getAllPartition() {
		return Sets.union(Sets.newHashSet(toPartition.values()), parent.getAllPartition());
	}

	public Set<IStrategoString> getPartitionsOf(IStrategoTerm taskID) {
		final Set<IStrategoString> ownPartitions = toPartition.get(taskID);
		if(parentTaskVisible(taskID) && parentPartitionsVisible(taskID))
			return Sets.union(ownPartitions, parent.getPartitionsOf(taskID));
		else
			return ownPartitions;
	}

	public Iterable<IStrategoTerm> getInPartition(IStrategoString partition) {
		final Iterable<IStrategoTerm> parentTaskIDs =
			parentPartitionVisibleFilter(parentVisibleFilter(parent.getInPartition(partition)));
		final Iterable<IStrategoTerm> ownTaskIDs = toPartition.getInverse(partition);
		return Iterables.concat(parentTaskIDs, ownTaskIDs);
	}

	private void addToPartition(IStrategoTerm taskID, IStrategoString partition) {
		System.out.println("Part: " + taskID + " -> " + partition);
		toPartition.put(taskID, partition);
	}

	private void removeFromPartition(IStrategoTerm taskID, IStrategoString partition) {
		if(parentPartitionsVisible(taskID)) {
			// TODO: copying is not correct if the parent changes, need to keep a Set<Partition> that have been del.
			removePartitionsOf(taskID);
			for(IStrategoString copyPartition : parent.getPartitionsOf(taskID)) {
				addToPartition(taskID, copyPartition);
			}
		}
		toPartition.remove(taskID, partition);
	}

	private void removePartitionsOf(IStrategoTerm taskID) {
		toPartition.removeAll(taskID);
		getTaskRemovalStatus(taskID).partitionOverride = true;
	}


	private boolean parentDependenciesVisible(IStrategoTerm taskID) {
		return !getTaskRemovalStatus(taskID).dependencyOverride;
	}

	private Iterable<IStrategoTerm> parentDependenciesVisibleFilter(Iterable<IStrategoTerm> reads) {
		return Iterables.filter(reads, dependenciesVisible);
	}

	public Iterable<IStrategoTerm> getDependencies(IStrategoTerm taskID) {
		final Iterable<IStrategoTerm> ownTaskIDs = toDependency.get(taskID);
		if(parentTaskVisible(taskID) && parentDependenciesVisible(taskID))
			return Iterables.concat(parent.getDependencies(taskID), ownTaskIDs);
		else
			return ownTaskIDs;
	}

	public Set<IStrategoTerm> getTransitiveDependencies(IStrategoTerm taskID) {
		final Set<IStrategoTerm> seen = Sets.newHashSet();
		final Queue<IStrategoTerm> queue = Lists.newLinkedList();

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
		final Iterable<IStrategoTerm> parentTaskIDs =
			parentDependenciesVisibleFilter(parentVisibleFilter(parent.getDependent(taskID)));
		final Iterable<IStrategoTerm> ownTaskIDs = toDependency.getInverse(taskID);
		return Iterables.concat(parentTaskIDs, ownTaskIDs);
	}

	public boolean becomesCyclic(IStrategoTerm taskIDFrom, IStrategoTerm taskIDTo) {
		final Set<IStrategoTerm> seen = Sets.newHashSet();
		final Queue<IStrategoTerm> queue = Lists.newLinkedList();

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
		toDependency.removeAll(taskID);
		toDependency.removeAllInverse(taskID);
		getTaskRemovalStatus(taskID).dependencyOverride = true;
	}


	private boolean parentReadsVisible(IStrategoTerm taskID) {
		return !getTaskRemovalStatus(taskID).readOverride;
	}

	private Iterable<IStrategoTerm> parentReadsVisibleFilter(Iterable<IStrategoTerm> reads) {
		return Iterables.filter(reads, readsVisible);
	}

	public Iterable<IStrategoTerm> getReads(IStrategoTerm taskID) {
		final Iterable<IStrategoTerm> ownURIs = toRead.get(taskID);
		if(parentTaskVisible(taskID) && parentReadsVisible(taskID))
			return Iterables.concat(parent.getReads(taskID), ownURIs);
		else
			return ownURIs;
	}

	public Iterable<IStrategoTerm> getReaders(IStrategoTerm uri) {
		final Iterable<IStrategoTerm> parentTaskIDs =
			parentReadsVisibleFilter(parentVisibleFilter(parent.getReaders(uri)));
		final Iterable<IStrategoTerm> ownTaskIDs = toRead.getInverse(uri);
		return Iterables.concat(parentTaskIDs, ownTaskIDs);
	}

	public void addRead(IStrategoTerm taskID, IStrategoTerm uri) {
		toRead.put(taskID, uri);
	}

	public void removeReads(IStrategoTerm taskID) {
		toRead.removeAll(taskID);
		getTaskRemovalStatus(taskID).readOverride = true;
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


	public Iterable<IStrategoTerm> getRemovedTasks() {
		return tasksRemovalStatus.keySet();
	}

	private TaskRemovalStatus getTaskRemovalStatus(IStrategoTerm taskID) {
		TaskRemovalStatus status = tasksRemovalStatus.get(taskID);
		if(status == null) {
			status = new TaskRemovalStatus();
			tasksRemovalStatus.put(taskID, status);
		}
		return status;
	}


	public void recover() {
		evaluator.reset();
		addedTasks.clear();
		removedTasks.clear();
		inCollection.clear();
		parent.recover();
	}

	public void reset() {
		digester.reset();
		evaluator.reset();

		toTask.clear();
		toTaskID.clear();

		toPartition.clear();
		toDependency.clear();
		toRead.clear();

		garbage.clear();
		scheduled.clear();
		addedTasks.clear();
		removedTasks.clear();
		inCollection.clear();

		tasksRemovalStatus.clear();
		parent.reset();
	}
}
