package org.metaborg.runtime.task;

import java.util.HashSet;
import java.util.LinkedList;
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


	/** Set of all removed task identifiers which should be invisible in the parent task engine. */
	private final Set<IStrategoTerm> allRemoved = new HashSet<IStrategoTerm>();

	/** Predicate that decides whether a task identifier from the parent should be visible or not. */
	private final Predicate<IStrategoTerm> visible;
	private final Predicate<Task> visibleTask;
	private final Predicate<Entry<IStrategoTerm, Task>> visibleEntry;


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

		if(!taskIDExists(taskID)) {
			toTask.put(taskID, new Task(instruction, dependencies, combinator));
			addedTasks.add(taskID);
			schedule(taskID);
		}
		removedTasks.remove(taskID);

		toPartition.put(taskID, partition);
		for(final IStrategoTerm dependency : dependencies)
			addDependency(taskID, dependency);

		return createResult(taskID);
	}
	
	private boolean taskIDExists(IStrategoTerm taskID) {
		return getTaskCurrent(taskID) != null || parent.getTask(taskID) != null;
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
			toPartition.put(taskID, (IStrategoString) partition);
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
		allRemoved.add(taskID);
		final Task task = getTask(taskID);
		if(task == null)
			return; // Task is not in this task engine but in a parent one.
		toTaskID.remove(task.instruction, ListBuilder.makeList(factory, task.initialDependencies));
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

	private boolean parentTaskVisible(IStrategoTerm taskID) {
		return !allRemoved.contains(taskID);
	}

	private boolean parentTaskVisible(Task task) {
		final IStrategoTerm taskID = toTask.inverse().get(task);
		return parentTaskVisible(taskID);
	}

	private Iterable<IStrategoTerm> parentInvisibleFilter(Iterable<IStrategoTerm> taskIDs) {
		return Iterables.filter(taskIDs, visible);
	}

	private Iterable<Task> parentTaskInvisibleFilter(Iterable<Task> tasks) {
		return Iterables.filter(tasks, visibleTask);
	}

	private Iterable<Entry<IStrategoTerm, Task>>
		parentEntryInvisibleFilter(Iterable<Entry<IStrategoTerm, Task>> entries) {
		return Iterables.filter(entries, visibleEntry);
	}

	public void invalidate(IStrategoTerm taskID) {
		final Task task = getTaskCurrent(taskID);
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
		final Iterable<IStrategoTerm> parentTaskIDs = parentInvisibleFilter(parent.getTaskIDs());
		final Iterable<IStrategoTerm> ownTaskIDs = toTask.keySet();
		return Iterables.concat(parentTaskIDs, ownTaskIDs);
	}

	public Iterable<Task> getTasks() {
		final Iterable<Task> parentTasks = parentTaskInvisibleFilter(parent.getTasks());
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


	public Set<IStrategoString> getAllPartition() {
		return Sets.union(new HashSet<IStrategoString>(toPartition.values()), parent.getAllPartition());
	}

	public Set<IStrategoString> getPartitionsOf(IStrategoTerm taskID) {
		return Sets.union(new HashSet<IStrategoString>(toPartition.get(taskID)), parent.getPartitionsOf(taskID));
	}

	public Iterable<IStrategoTerm> getInPartition(IStrategoString partition) {
		final Iterable<IStrategoTerm> parentTaskIDs = parentInvisibleFilter(parent.getInPartition(partition));
		final Iterable<IStrategoTerm> ownTaskIDs = toPartition.getInverse(partition);
		return Iterables.concat(parentTaskIDs, ownTaskIDs);
	}


	public Iterable<IStrategoTerm> getDependencies(IStrategoTerm taskID) {
		final Iterable<IStrategoTerm> parentTaskIDs = parentInvisibleFilter(parent.getDependencies(taskID));
		final Iterable<IStrategoTerm> ownTaskIDs = toDependency.get(taskID);
		return Iterables.concat(parentTaskIDs, ownTaskIDs);
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
		final Iterable<IStrategoTerm> parentTaskIDs = parentInvisibleFilter(parent.getDependent(taskID));
		final Iterable<IStrategoTerm> ownTaskIDs = toDependency.getInverse(taskID);
		return Iterables.concat(parentTaskIDs, ownTaskIDs);
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
		toDependency.removeAll(taskID);
		toDependency.removeAllInverse(taskID);
	}


	public Iterable<IStrategoTerm> getReads(IStrategoTerm taskID) {
		final Iterable<IStrategoTerm> ownURIs = toRead.get(taskID);
		if(parentTaskVisible(taskID))
			return Iterables.concat(parent.getReads(taskID), ownURIs);
		else
			return ownURIs;
	}

	public Iterable<IStrategoTerm> getReaders(IStrategoTerm uri) {
		final Iterable<IStrategoTerm> parentTaskIDs = parentInvisibleFilter(parent.getReaders(uri));
		final Iterable<IStrategoTerm> ownTaskIDs = toRead.getInverse(uri);
		return Iterables.concat(parentTaskIDs, ownTaskIDs);
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
	
	
	public Iterable<IStrategoTerm> getRemovedTasks() {
		return allRemoved;
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
		parent.reset();
	}
}
