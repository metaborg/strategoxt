package org.metaborg.runtime.task.engine;

import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;

import org.metaborg.runtime.task.BaseTaskFactory;
import org.metaborg.runtime.task.ITask;
import org.metaborg.runtime.task.ITaskFactory;
import org.metaborg.runtime.task.TaskStorageType;
import org.metaborg.runtime.task.TaskType;
import org.metaborg.runtime.task.digest.ITermDigester;
import org.metaborg.runtime.task.evaluation.ITaskEvaluationFrontend;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoConstructor;
import org.spoofax.interpreter.terms.IStrategoList;
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
	private final Predicate<ITask> visibleTask;
	private final Predicate<Entry<IStrategoTerm, ITask>> visibleEntry;
	private final Predicate<IStrategoTerm> sourcesVisible;
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
		this.visibleTask = new Predicate<ITask>() {
			@Override
			public boolean apply(ITask task) {
				return parentTaskVisible(task);
			}
		};
		this.visibleEntry = new Predicate<Entry<IStrategoTerm, ITask>>() {
			@Override
			public boolean apply(Entry<IStrategoTerm, ITask> entry) {
				return parentTaskVisible(entry.getKey());
			}
		};
		this.sourcesVisible = new Predicate<IStrategoTerm>() {
			@Override
			public boolean apply(IStrategoTerm taskID) {
				return parentSourcesVisible(taskID);
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
	public ITaskFactory getTaskFactory(IStrategoAppl instruction) {
		final ITaskFactory taskFactory = current.getTaskFactory(instruction);
		if(taskFactory instanceof BaseTaskFactory)
			return parent.getTaskFactory(instruction);
		return taskFactory;
	}

	@Override
	public void registerTaskFactory(IStrategoConstructor constructor, ITaskFactory factory) {
		current.registerTaskFactory(constructor, factory);
	}


	@Override
	public void startCollection(IStrategoTerm source) {
		current.startCollection(source);
	}

	@Override
	public IStrategoTerm createTaskID(IStrategoAppl instruction, IStrategoList dependencies) {
		return current.createTaskID(instruction, dependencies);
	}

	@Override
	public IStrategoTerm addTask(IStrategoTerm source, IStrategoList dependencies, IStrategoAppl instruction,
		TaskType type, TaskStorageType storageType, boolean shortCircuit) {
		return current.addTask(source, dependencies, instruction, type, storageType, shortCircuit);
	}

	@Override
	public void addPersistedTask(IStrategoTerm taskID, ITask task, IStrategoList initialDependencies) {
		current.addPersistedTask(taskID, task, initialDependencies);
	}

	@Override
	public void removeTask(IStrategoTerm taskID) {
		current.removeTask(taskID);
		getTaskRemovalStatus(taskID).removed = true;
	}

	@Override
	public IStrategoTerm stopCollection(IStrategoTerm source) {
		return current.stopCollection(source);
	}


	@Override
	public ITask invalidate(IStrategoTerm taskID) {
		return current.invalidate(taskID);
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

	private boolean parentTaskVisible(ITask task) {
		final IStrategoTerm taskID = current.getTaskID(task);
		return parentTaskVisible(taskID);
	}

	private Iterable<IStrategoTerm> parentVisibleFilter(Iterable<IStrategoTerm> taskIDs) {
		return Iterables.filter(taskIDs, visible);
	}

	private Iterable<ITask> parentTaskVisibleFilter(Iterable<ITask> tasks) {
		return Iterables.filter(tasks, visibleTask);
	}

	private Iterable<Entry<IStrategoTerm, ITask>> parentEntryInvisibleFilter(
		Iterable<Entry<IStrategoTerm, ITask>> entries) {
		return Iterables.filter(entries, visibleEntry);
	}


	@Override
	public ITask getTask(IStrategoTerm taskID) {
		ITask task = current.getTask(taskID);
		if(task == null && parentTaskVisible(taskID))
			task = parent.getTask(taskID);
		return task;
	}

	@Override
	public IStrategoTerm getTaskID(ITask task) {
		IStrategoTerm taskID = current.getTaskID(task);
		if(taskID == null && parentTaskVisible(taskID))
			taskID = parent.getTaskID(task);
		return taskID;
	}

	@Override
	public IStrategoTerm getTaskID(IStrategoAppl instruction, IStrategoList dependencies) {
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
	public Iterable<ITask> getTasks() {
		final Iterable<ITask> parentTasks = parentTaskVisibleFilter(parent.getTasks());
		final Iterable<ITask> ownTasks = current.getTasks();
		return Iterables.concat(parentTasks, ownTasks);
	}

	@Override
	public Iterable<Entry<IStrategoTerm, ITask>> getTaskEntries() {
		final Iterable<Entry<IStrategoTerm, ITask>> parentTaskEntries =
			parentEntryInvisibleFilter(parent.getTaskEntries());
		final Iterable<Entry<IStrategoTerm, ITask>> ownTaskEntries = current.getTaskEntries();
		return Iterables.concat(parentTaskEntries, ownTaskEntries);
	}


	private boolean parentSourcesVisible(IStrategoTerm taskID) {
		return !getTaskRemovalStatus(taskID).partitionOverride;
	}

	private Iterable<IStrategoTerm> parentSourcesVisibleFilter(Iterable<IStrategoTerm> taskIDs) {
		return Iterables.filter(taskIDs, sourcesVisible);
	}

	@Override
	public Set<IStrategoTerm> getAllSources() {
		return Sets.union(current.getAllSources(), parent.getAllSources());
	}

	@Override
	public Set<IStrategoTerm> getSourcesOf(IStrategoTerm taskID) {
		final Set<IStrategoTerm> ownSources = current.getSourcesOf(taskID);
		if(parentTaskVisible(taskID) && parentSourcesVisible(taskID))
			return Sets.union(ownSources, parent.getSourcesOf(taskID));
		else
			return ownSources;
	}

	@Override
	public Iterable<IStrategoTerm> getFromSource(IStrategoTerm source) {
		final Iterable<IStrategoTerm> parentTaskIDs =
			parentSourcesVisibleFilter(parentVisibleFilter(parent.getFromSource(source)));
		final Iterable<IStrategoTerm> ownTaskIDs = current.getFromSource(source);
		return Iterables.concat(parentTaskIDs, ownTaskIDs);
	}

	@Override
	public void addToSource(IStrategoTerm taskID, IStrategoTerm source) {
		current.addToSource(taskID, source);
	}

	@Override
	public void removeFromSource(IStrategoTerm taskID, IStrategoTerm source) {
		if(parentSourcesVisible(taskID)) {
			// TODO: copying is not correct if the parent changes, need to keep a Set<Source> that have been del.
			removeSourcesOf(taskID);
			for(IStrategoTerm sourceCopy : parent.getSourcesOf(taskID)) {
				addToSource(taskID, sourceCopy);
			}
		}
		current.removeFromSource(taskID, source);
	}

	@Override
	public void removeSourcesOf(IStrategoTerm taskID) {
		current.removeSourcesOf(taskID);
		getTaskRemovalStatus(taskID).partitionOverride = true;
	}


	private boolean parentDependenciesVisible(IStrategoTerm taskID) {
		return !getTaskRemovalStatus(taskID).dependencyOverride;
	}

	private Iterable<IStrategoTerm> parentDependenciesVisibleFilter(Iterable<IStrategoTerm> reads) {
		return Iterables.filter(reads, dependenciesVisible);
	}

	@Override
	public Iterable<IStrategoTerm> getDependencies(IStrategoTerm taskID, boolean withDynamic) {
		final Iterable<IStrategoTerm> ownTaskIDs = current.getDependencies(taskID, withDynamic);
		if(parentTaskVisible(taskID) && parentDependenciesVisible(taskID))
			return Iterables.concat(parent.getDependencies(taskID, withDynamic), ownTaskIDs);
		else
			return ownTaskIDs;
	}

	@Override
	public Iterable<IStrategoTerm> getDynamicDependencies(IStrategoTerm taskID) {
		final Iterable<IStrategoTerm> ownTaskIDs = current.getDynamicDependencies(taskID);
		if(parentTaskVisible(taskID) && parentDependenciesVisible(taskID))
			return Iterables.concat(parent.getDynamicDependencies(taskID), ownTaskIDs);
		else
			return ownTaskIDs;
	}

	@Override
	public Set<IStrategoTerm> getTransitiveDependencies(IStrategoTerm taskID) {
		return current.getTransitiveDependencies(taskID);
	}

	@Override
	public Iterable<IStrategoTerm> getDependents(IStrategoTerm taskID, boolean withDynamic) {
		// TODO: Should not return duplicates?
		final Iterable<IStrategoTerm> parentTaskIDs =
			parentDependenciesVisibleFilter(parentVisibleFilter(parent.getDependents(taskID, withDynamic)));
		final Iterable<IStrategoTerm> ownTaskIDs = current.getDependents(taskID, withDynamic);
		return Iterables.concat(parentTaskIDs, ownTaskIDs);
	}

	@Override
	public Iterable<IStrategoTerm> getDynamicDependents(IStrategoTerm taskID) {
		// TODO: Should not return duplicates?
		final Iterable<IStrategoTerm> parentTaskIDs =
			parentDependenciesVisibleFilter(parentVisibleFilter(parent.getDynamicDependents(taskID)));
		final Iterable<IStrategoTerm> ownTaskIDs = current.getDynamicDependents(taskID);
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
