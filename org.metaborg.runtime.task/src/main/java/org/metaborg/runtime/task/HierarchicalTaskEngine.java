package org.metaborg.runtime.task;

import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;

import org.metaborg.runtime.task.digest.ITermDigester;
import org.metaborg.runtime.task.evaluation.ITaskEvaluationFrontend;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;

import com.google.common.base.Predicate;
import com.google.common.collect.Iterables;
import com.google.common.collect.Maps;
import com.google.common.collect.Sets;

public class HierarchicalTaskEngine implements IHierarchicalTaskEngine {
	private ITaskEngine current;
	private ITaskEngine parent;


	/** Mapping from task identifiers to objects that contain the removal status of that task. */
	private final Map<IStrategoTerm, TaskRemovalStatus> tasksRemovalStatus = Maps.newHashMap();

	/** Predicate that decides whether a task identifier from the parent should be visible or not. */
	private final Predicate<IStrategoTerm> visible;
	private final Predicate<Task> visibleTask;
	private final Predicate<Entry<IStrategoTerm, Task>> visibleEntry;
	private final Predicate<IStrategoTerm> partitionsVisible;
	private final Predicate<IStrategoTerm> dependenciesVisible;
	private final Predicate<IStrategoTerm> readsVisible;


	public HierarchicalTaskEngine(ITaskEngine current, ITaskEngine parent) {
		this.current = current;
		this.parent = parent;

		this.visible = new Predicate<IStrategoTerm>() {
			@Override
			public boolean apply(IStrategoTerm taskID) {
				return parentTaskVisible(taskID);
			}
		};
		this.visibleTask = new Predicate<Task>() {
			@Override
			public boolean apply(Task task) {
				return parentTaskVisible(task);
			}
		};
		this.visibleEntry = new Predicate<Entry<IStrategoTerm, Task>>() {
			@Override
			public boolean apply(Entry<IStrategoTerm, Task> entry) {
				return parentTaskVisible(entry.getKey());
			}
		};
		this.partitionsVisible = new Predicate<IStrategoTerm>() {
			@Override
			public boolean apply(IStrategoTerm taskID) {
				return parentPartitionsVisible(taskID);
			}
		};
		this.dependenciesVisible = new Predicate<IStrategoTerm>() {
			@Override
			public boolean apply(IStrategoTerm taskID) {
				return parentDependenciesVisible(taskID);
			}
		};
		this.readsVisible = new Predicate<IStrategoTerm>() {
			@Override
			public boolean apply(IStrategoTerm taskID) {
				return parentReadsVisible(taskID);
			}
		};
	}

	@Override
	public ITermDigester getDigester() {
		return current.getDigester();
	}

	@Override
	public ITaskEvaluationFrontend getEvaluationFrontend() {
		return current.getEvaluationFrontend();
	}

	@Override
	public void setEvaluationFrontend(ITaskEvaluationFrontend evaluator) {
		current.setEvaluationFrontend(evaluator);
		// TODO: also set in parent?
	}


	@Override
	public void startCollection(IStrategoString partition) {
		current.startCollection(partition);
	}

	@Override
	public IStrategoTerm createTaskID(IStrategoTerm instruction, IStrategoList dependencies) {
		return current.createTaskID(instruction, dependencies);
	}

	@Override
	public IStrategoTerm addTask(IStrategoString partition, IStrategoList dependencies, IStrategoTerm instruction,
		boolean isCombinator, boolean shortCircuit) {
		return current.addTask(partition, dependencies, instruction, isCombinator, shortCircuit);
	}

	@Override
	public void addPersistedTask(IStrategoTerm taskID, Task task, Iterable<IStrategoTerm> partitions,
		IStrategoList initialDependencies, Iterable<IStrategoTerm> dependencies, Iterable<IStrategoTerm> reads,
		IStrategoTerm results, TaskStatus status, IStrategoTerm message, long time, short evaluations) {
		current.addPersistedTask(taskID, task, partitions, initialDependencies, dependencies, reads, results, status,
			message, time, evaluations);
	}

	@Override
	public void removeTask(IStrategoTerm taskID) {
		current.removeTask(taskID);
		getTaskRemovalStatus(taskID).removed = true;
	}

	@Override
	public IStrategoTerm stopCollection(IStrategoString partition) {
		return current.stopCollection(partition);
	}


	@Override
	public void invalidate(IStrategoTerm taskID) {
		current.invalidate(taskID);
	}

	@Override
	public Set<IStrategoTerm> invalidateTaskReads(IStrategoList changedReads) {
		return current.invalidateTaskReads(changedReads);
	}

	@Override
	public IStrategoTerm evaluateScheduled(IContext context, Strategy collect, Strategy insert, Strategy perform) {
		return current.evaluateScheduled(context, collect, insert, perform);
	}

	@Override
	public IStrategoTerm evaluateNow(IContext context, Strategy collect, Strategy insert, Strategy perform,
		Iterable<IStrategoTerm> taskIDs) {
		return current.evaluateNow(context, collect, insert, perform, taskIDs);
	}


	private boolean parentTaskVisible(IStrategoTerm taskID) {
		return !getTaskRemovalStatus(taskID).removed;
	}

	private boolean parentTaskVisible(Task task) {
		final IStrategoTerm taskID = current.getTaskID(task);
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


	@Override
	public boolean taskExists(IStrategoTerm instruction) {
		return current.taskExists(instruction) || parent.taskExists(instruction);
	}

	@Override
	public Task getTask(IStrategoTerm taskID) {
		Task task = current.getTask(taskID);
		if(task == null && parentTaskVisible(taskID))
			task = parent.getTask(taskID);
		return task;
	}

	@Override
	public IStrategoTerm getTaskID(Task task) {
		IStrategoTerm taskID = current.getTaskID(task);
		if(taskID == null && parentTaskVisible(taskID))
			taskID = parent.getTaskID(task);
		return taskID;
	}

	@Override
	public IStrategoTerm getTaskID(IStrategoTerm instruction, IStrategoList dependencies) {
		IStrategoTerm taskID = current.getTaskID(instruction, dependencies);
		if(taskID == null) // TODO: this disregards the visibility of the task in the parent, is that OK?
			taskID = parent.getTaskID(instruction, dependencies);
		return taskID;
	}


	@Override
	public Iterable<IStrategoTerm> getTaskIDs() {
		final Iterable<IStrategoTerm> parentTaskIDs = parentVisibleFilter(parent.getTaskIDs());
		final Iterable<IStrategoTerm> ownTaskIDs = current.getTaskIDs();
		return Iterables.concat(parentTaskIDs, ownTaskIDs);
	}

	@Override
	public Iterable<Task> getTasks() {
		final Iterable<Task> parentTasks = parentTaskVisibleFilter(parent.getTasks());
		final Iterable<Task> ownTasks = current.getTasks();
		return Iterables.concat(parentTasks, ownTasks);
	}

	@Override
	public Iterable<Entry<IStrategoTerm, Task>> getTaskEntries() {
		final Iterable<Entry<IStrategoTerm, Task>> parentTaskEntries =
			parentEntryInvisibleFilter(parent.getTaskEntries());
		final Iterable<Entry<IStrategoTerm, Task>> ownTaskEntries = current.getTaskEntries();
		return Iterables.concat(parentTaskEntries, ownTaskEntries);
	}


	private boolean parentPartitionsVisible(IStrategoTerm taskID) {
		return !getTaskRemovalStatus(taskID).partitionOverride;
	}

	private Iterable<IStrategoTerm> parentPartitionVisibleFilter(Iterable<IStrategoTerm> taskIDs) {
		return Iterables.filter(taskIDs, partitionsVisible);
	}

	@Override
	public Set<IStrategoString> getAllPartition() {
		return Sets.union(current.getAllPartition(), parent.getAllPartition());
	}

	@Override
	public Set<IStrategoString> getPartitionsOf(IStrategoTerm taskID) {
		final Set<IStrategoString> ownPartitions = current.getPartitionsOf(taskID);
		if(parentTaskVisible(taskID) && parentPartitionsVisible(taskID))
			return Sets.union(ownPartitions, parent.getPartitionsOf(taskID));
		else
			return ownPartitions;
	}

	@Override
	public Iterable<IStrategoTerm> getInPartition(IStrategoString partition) {
		final Iterable<IStrategoTerm> parentTaskIDs =
			parentPartitionVisibleFilter(parentVisibleFilter(parent.getInPartition(partition)));
		final Iterable<IStrategoTerm> ownTaskIDs = current.getInPartition(partition);
		return Iterables.concat(parentTaskIDs, ownTaskIDs);
	}

	@Override
	public void addToPartition(IStrategoTerm taskID, IStrategoString partition) {
		current.addToPartition(taskID, partition);
	}

	@Override
	public void removeFromPartition(IStrategoTerm taskID, IStrategoString partition) {
		if(parentPartitionsVisible(taskID)) {
			// TODO: copying is not correct if the parent changes, need to keep a Set<Partition> that have been del.
			removePartitionsOf(taskID);
			for(IStrategoString copyPartition : parent.getPartitionsOf(taskID)) {
				addToPartition(taskID, copyPartition);
			}
		}
		current.removeFromPartition(taskID, partition);
	}

	@Override
	public void removePartitionsOf(IStrategoTerm taskID) {
		current.removePartitionsOf(taskID);
		getTaskRemovalStatus(taskID).partitionOverride = true;
	}


	private boolean parentDependenciesVisible(IStrategoTerm taskID) {
		return !getTaskRemovalStatus(taskID).dependencyOverride;
	}

	private Iterable<IStrategoTerm> parentDependenciesVisibleFilter(Iterable<IStrategoTerm> reads) {
		return Iterables.filter(reads, dependenciesVisible);
	}

	@Override
	public Iterable<IStrategoTerm> getDependencies(IStrategoTerm taskID) {
		final Iterable<IStrategoTerm> ownTaskIDs = current.getDependencies(taskID);
		if(parentTaskVisible(taskID) && parentDependenciesVisible(taskID))
			return Iterables.concat(parent.getDependencies(taskID), ownTaskIDs);
		else
			return ownTaskIDs;
	}

	@Override
	public Set<IStrategoTerm> getTransitiveDependencies(IStrategoTerm taskID) {
		return current.getTransitiveDependencies(taskID);
	}

	@Override
	public Iterable<IStrategoTerm> getDependent(IStrategoTerm taskID, boolean withDynamic) {
		// TODO: Should not return duplicates?
		final Iterable<IStrategoTerm> parentTaskIDs =
			parentDependenciesVisibleFilter(parentVisibleFilter(parent.getDependent(taskID, withDynamic)));
		final Iterable<IStrategoTerm> ownTaskIDs = current.getDependent(taskID, withDynamic);
		return Iterables.concat(parentTaskIDs, ownTaskIDs);
	}

	@Override
	public boolean becomesCyclic(IStrategoTerm taskIDFrom, IStrategoTerm taskIDTo) {
		return current.becomesCyclic(taskIDFrom, taskIDTo);
	}

	@Override
	public void addDependency(IStrategoTerm taskID, IStrategoTerm dependency) {
		current.addDependency(taskID, dependency);
	}

	@Override
	public void setDynamicDependencies(IStrategoTerm taskID, Iterable<IStrategoTerm> dependencies) {
		current.setDynamicDependencies(taskID, dependencies);
	}

	@Override
	public void removeDependencies(IStrategoTerm taskID) {
		current.removeDependencies(taskID);
		getTaskRemovalStatus(taskID).dependencyOverride = true;
	}


	private boolean parentReadsVisible(IStrategoTerm taskID) {
		return !getTaskRemovalStatus(taskID).readOverride;
	}

	private Iterable<IStrategoTerm> parentReadsVisibleFilter(Iterable<IStrategoTerm> reads) {
		return Iterables.filter(reads, readsVisible);
	}

	@Override
	public Iterable<IStrategoTerm> getReads(IStrategoTerm taskID) {
		final Iterable<IStrategoTerm> ownURIs = current.getReads(taskID);
		if(parentTaskVisible(taskID) && parentReadsVisible(taskID))
			return Iterables.concat(parent.getReads(taskID), ownURIs);
		else
			return ownURIs;
	}

	@Override
	public Iterable<IStrategoTerm> getReaders(IStrategoTerm uri) {
		final Iterable<IStrategoTerm> parentTaskIDs =
			parentReadsVisibleFilter(parentVisibleFilter(parent.getReaders(uri)));
		final Iterable<IStrategoTerm> ownTaskIDs = current.getReaders(uri);
		return Iterables.concat(parentTaskIDs, ownTaskIDs);
	}

	@Override
	public void addRead(IStrategoTerm taskID, IStrategoTerm uri) {
		current.addRead(taskID, uri);
	}

	@Override
	public void removeReads(IStrategoTerm taskID) {
		current.removeReads(taskID);
		getTaskRemovalStatus(taskID).readOverride = true;
	}


	@Override
	public void clearTimes() {
		current.clearTimes();
		parent.clearTimes();
	}

	@Override
	public void clearEvaluations() {
		current.clearEvaluations();
		parent.clearTimes();
	}


	@Override
	public void recover() {
		current.recover();
		parent.recover();
	}

	@Override
	public void reset() {
		current.reset();
		parent.reset();
		tasksRemovalStatus.clear();
	}


	@Override
	public ITaskEngine getCurrent() {
		return current;
	}

	@Override
	public ITaskEngine getParent() {
		return parent;
	}


	private TaskRemovalStatus getTaskRemovalStatus(IStrategoTerm taskID) {
		TaskRemovalStatus status = tasksRemovalStatus.get(taskID);
		if(status == null) {
			status = new TaskRemovalStatus();
			tasksRemovalStatus.put(taskID, status);
		}
		return status;
	}

	@Override
	public Iterable<IStrategoTerm> getRemovedTasks() {
		return tasksRemovalStatus.keySet();
	}
}
