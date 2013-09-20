package org.metaborg.runtime.task;

import java.util.Map.Entry;
import java.util.Queue;
import java.util.Set;

import org.metaborg.runtime.task.collection.BidirectionalLinkedHashMultimap;
import org.metaborg.runtime.task.collection.BidirectionalSetMultimap;
import org.metaborg.runtime.task.digest.ITermDigester;
import org.metaborg.runtime.task.evaluation.ITaskEvaluationFrontend;
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

import com.google.common.collect.BiMap;
import com.google.common.collect.HashBasedTable;
import com.google.common.collect.HashBiMap;
import com.google.common.collect.Iterables;
import com.google.common.collect.Lists;
import com.google.common.collect.Sets;
import com.google.common.collect.Table;

public class TaskEngine implements ITaskEngine {
	private ITaskEngine wrapper;
	private final ITermFactory factory;
	private final ITermDigester digester;
	private ITaskEvaluationFrontend evaluationFrontend;
	private final IStrategoConstructor resultConstructor;


	/** Bidirectional mapping between task identifiers and tasks. */
	private final BiMap<IStrategoTerm, Task> toTask = HashBiMap.create();

	/** Mapping table of instructions and dependencies to task identifiers. */
	private final Table<IStrategoTerm, IStrategoList, IStrategoTerm> toTaskID = HashBasedTable.create();


	/** Origin partitions of tasks. */
	private final BidirectionalSetMultimap<IStrategoTerm, IStrategoString> toPartition =
		BidirectionalLinkedHashMultimap.create();

	/** Bidirectional mapping of dependencies between tasks identifiers. */
	private final BidirectionalSetMultimap<IStrategoTerm, IStrategoTerm> toDependency = BidirectionalLinkedHashMultimap
		.create();
	// TODO: may not be updated during evaluation any more!

	/** Bidirectional mapping of dynamic dependencies between tasks identifiers. Can be updated during evaluation. */
	private final BidirectionalSetMultimap<IStrategoTerm, IStrategoTerm> toDynamicDependency =
		BidirectionalLinkedHashMultimap.create();

	/** Bidirectional mapping from task identifiers to URI's that they read during evaluation. */
	private final BidirectionalSetMultimap<IStrategoTerm, IStrategoTerm> toRead = BidirectionalLinkedHashMultimap
		.create();


	/** Tasks that are not in any partition are garbage. **/
	private final Set<IStrategoTerm> garbage = Sets.newHashSet();

	/** Set of task that are scheduled for evaluation the next time evaluate is called. */
	private final Set<IStrategoTerm> scheduled = Sets.newHashSet();


	private final TaskCollection taskCollection;


	public TaskEngine(ITermFactory factory, ITermDigester digester) {
		this.factory = factory;
		this.digester = digester;
		this.taskCollection = new TaskCollection();
		this.resultConstructor = factory.makeConstructor("Result", 1);
	}

	@Override
	public ITermDigester getDigester() {
		return digester;
	}

	@Override
	public ITaskEvaluationFrontend getEvaluationFrontend() {
		return evaluationFrontend;
	}

	@Override
	public void setEvaluationFrontend(ITaskEvaluationFrontend evaluationFrontend) {
		this.evaluationFrontend = evaluationFrontend;
	}

	public void setWrapper(ITaskEngine wrapper) {
		this.wrapper = wrapper;
	}

	@Override
	public void startCollection(IStrategoString partition) {
		taskCollection.startCollection(partition, wrapper.getInPartition(partition));
	}

	@Override
	public IStrategoTerm createTaskID(IStrategoTerm instruction, IStrategoList dependencies) {
		IStrategoTerm taskID = wrapper.getTaskID(instruction, dependencies);
		if(taskID != null)
			return taskID;
		taskID = digester.digest(factory, instruction, dependencies);
		toTaskID.put(instruction, dependencies, taskID);
		final Task task = wrapper.getTask(taskID);
		if(task == null)
			return taskID;
		final IStrategoTerm instr = task.instruction;
		if(!instruction.match(instr)) {
			wrapper.reset();
			throw new IllegalStateException("Identifier collision, task " + instruction + " and " + instr
				+ " have the same identifier: " + taskID);
		}
		return taskID;
	}

	@Override
	public IStrategoTerm addTask(IStrategoString partition, IStrategoList dependencies, IStrategoTerm instruction,
		boolean isCombinator, boolean shortCircuit) {
		if(!taskCollection.inCollection(partition))
			throw new IllegalStateException(
				"Collection has not been started yet. Call task-start-collection(|partition) before adding tasks.");

		dependencies = evaluationFrontend.adjustDependencies(dependencies, instruction);

		final IStrategoTerm taskID = createTaskID(instruction, dependencies);

		if(wrapper.getTask(taskID) == null) {
			toTask.put(taskID, new Task(instruction, dependencies, isCombinator, shortCircuit));
			taskCollection.addTask(taskID);
			schedule(taskID);
		}
		taskCollection.keepTask(taskID);

		addToPartition(taskID, partition);
		for(final IStrategoTerm dependency : dependencies)
			addDependency(taskID, dependency);

		return createResult(taskID);
	}

	private IStrategoAppl createResult(IStrategoTerm taskID) {
		return factory.makeAppl(resultConstructor, taskID);
	}

	@Override
	public void addPersistedTask(IStrategoTerm taskID, IStrategoTerm instruction, IStrategoInt isCombinator,
		IStrategoInt shortCircuit, IStrategoList partitions, IStrategoList initialDependencies,
		IStrategoList dependencies, IStrategoList reads, IStrategoTerm results, IStrategoInt failed,
		IStrategoTerm message, IStrategoTerm time, IStrategoTerm evaluations) {
		if(wrapper.getTask(taskID) != null)
			throw new RuntimeException("Trying to add a persisted task that already exists.");

		Task task =
			new Task(instruction, initialDependencies, isCombinator.intValue() == 1, shortCircuit.intValue() == 1);
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

	@Override
	public void removeTask(IStrategoTerm taskID) {
		removePartitionsOf(taskID);
		removeDependencies(taskID);
		removeReads(taskID);
		scheduled.remove(taskID);
		final Task task = getTask(taskID); // Don't use wrapper, cannot remove from parent in this task engine.
		if(task == null)
			return; // Task is not in this task engine but might be in a parent one.
		toTaskID.remove(task.instruction, ListBuilder.makeList(factory, task.initialDependencies));
		toTask.remove(taskID);
	}

	@Override
	public IStrategoTerm stopCollection(IStrategoString partition) {
		final Iterable<IStrategoTerm> removedTasks = taskCollection.stopCollection(partition);
		final Iterable<IStrategoTerm> addedTasks = taskCollection.addedTasks();

		for(final IStrategoTerm removed : removedTasks) {
			wrapper.removeFromPartition(removed, partition);
			if(wrapper.getPartitionsOf(removed).isEmpty())
				garbage.add(removed);
		}

		collectGarbage();

		return factory
			.makeTuple(ListBuilder.makeList(factory, removedTasks), ListBuilder.makeList(factory, addedTasks));
	}

	private void collectGarbage() {
		for(final IStrategoTerm taskID : garbage)
			wrapper.removeTask(taskID);

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

	@Override
	public void invalidate(IStrategoTerm taskID) {
		Task task = getTask(taskID);
		if(task == null) {
			task = wrapper.getTask(taskID);
			if(task == null)
				throw new RuntimeException("Cannot invalidate task that does not exist: " + taskID);
			task = new Task(task);
			toTask.put(taskID, task);
		}
		task.unsolve();
		task.clearMessage();
		wrapper.removeReads(taskID);
	}

	@Override
	public Set<IStrategoTerm> invalidateTaskReads(IStrategoList changedReads) {
		// Use work list to prevent recursion, keep collection of seen task ID's to prevent loops.
		final Set<IStrategoTerm> seen = Sets.newHashSet();
		final Queue<IStrategoTerm> workList = Lists.newLinkedList();
		for(final IStrategoTerm changedRead : changedReads) {
			Iterables.addAll(seen, wrapper.getReaders(changedRead));
		}
		workList.addAll(seen);

		// Schedule tasks and transitive dependent tasks that might have changed as a result of a change in reads.
		for(IStrategoTerm taskID; (taskID = workList.poll()) != null;) {
			schedule(taskID);

			final Iterable<IStrategoTerm> dependent = wrapper.getDependent(taskID, true);
			for(IStrategoTerm dependentTaskID : dependent) {
				if(seen.add(dependentTaskID)) {
					workList.offer(dependentTaskID);
				}
			}
		}

		return seen;
	}

	@Override
	public IStrategoTerm evaluateScheduled(IContext context, Strategy collect, Strategy insert, Strategy perform) {
		for(IStrategoTerm taskID : scheduled)
			invalidate(taskID);
		wrapper.clearTimes();
		wrapper.clearEvaluations();

		IStrategoTerm result = evaluationFrontend.evaluate(scheduled, context, collect, insert, perform);
		scheduled.clear();
		return result;
	}

	@Override
	public IStrategoTerm evaluateNow(IContext context, Strategy collect, Strategy insert, Strategy perform,
		Iterable<IStrategoTerm> taskIDs) {
		final Set<IStrategoTerm> scheduled = Sets.newHashSet(taskIDs);
		for(IStrategoTerm taskID : taskIDs)
			scheduled.addAll(getTransitiveDependencies(taskID));
		return evaluationFrontend.evaluate(scheduled, context, collect, insert, perform);
	}


	@Override
	public boolean taskExists(IStrategoTerm instruction) {
		return toTaskID.containsRow(instruction);
	}

	@Override
	public Task getTask(IStrategoTerm taskID) {
		return toTask.get(taskID);
	}

	@Override
	public IStrategoTerm getTaskID(Task task) {
		return toTask.inverse().get(task);
	}

	@Override
	public IStrategoTerm getTaskID(IStrategoTerm instruction, IStrategoList dependencies) {
		return toTaskID.get(instruction, dependencies);
	}


	@Override
	public Iterable<IStrategoTerm> getTaskIDs() {
		return toTask.keySet();
	}

	@Override
	public Iterable<Task> getTasks() {
		return toTask.values();
	}

	@Override
	public Iterable<Entry<IStrategoTerm, Task>> getTaskEntries() {
		return toTask.entrySet();
	}


	@Override
	public Set<IStrategoString> getAllPartition() {
		return Sets.newHashSet(toPartition.values());
	}

	@Override
	public Set<IStrategoString> getPartitionsOf(IStrategoTerm taskID) {
		return toPartition.get(taskID);
	}

	@Override
	public Iterable<IStrategoTerm> getInPartition(IStrategoString partition) {
		return toPartition.getInverse(partition);
	}

	@Override
	public void addToPartition(IStrategoTerm taskID, IStrategoString partition) {
		toPartition.put(taskID, partition);
	}

	@Override
	public void removeFromPartition(IStrategoTerm taskID, IStrategoString partition) {
		toPartition.remove(taskID, partition);
	}

	@Override
	public void removePartitionsOf(IStrategoTerm taskID) {
		toPartition.removeAll(taskID);
	}


	@Override
	public Iterable<IStrategoTerm> getDependencies(IStrategoTerm taskID) {
		return toDependency.get(taskID);
	}

	@Override
	public Set<IStrategoTerm> getTransitiveDependencies(IStrategoTerm taskID) {
		final Set<IStrategoTerm> seen = Sets.newHashSet();
		final Queue<IStrategoTerm> queue = Lists.newLinkedList();

		queue.add(taskID);
		seen.add(taskID);

		for(IStrategoTerm queueTaskID; (queueTaskID = queue.poll()) != null;) {
			for(IStrategoTerm dependency : wrapper.getDependencies(queueTaskID)) {
				if(seen.add(dependency))
					queue.add(dependency);
			}
		}

		seen.remove(taskID);
		return seen;
	}

	@Override
	public Iterable<IStrategoTerm> getDependent(IStrategoTerm taskID, boolean withDynamic) {
		if(withDynamic)
			return Sets.union(toDynamicDependency.getInverse(taskID), toDependency.getInverse(taskID));
		else
			return toDependency.getInverse(taskID);
	}

	@Override
	public boolean becomesCyclic(IStrategoTerm taskIDFrom, IStrategoTerm taskIDTo) {
		final Set<IStrategoTerm> seen = Sets.newHashSet();
		final Queue<IStrategoTerm> queue = Lists.newLinkedList();

		queue.add(taskIDTo);
		seen.add(taskIDTo);

		for(IStrategoTerm taskID; (taskID = queue.poll()) != null;) {
			for(IStrategoTerm dependency : wrapper.getDependencies(taskID)) {
				if(dependency.equals(taskIDFrom))
					return true;
				if(seen.add(dependency))
					queue.add(dependency);
			}
		}

		return false;
	}

	@Override
	public void addDependency(IStrategoTerm taskID, IStrategoTerm dependency) {
		toDependency.put(taskID, dependency);
	}

	@Override
	public void setDynamicDependencies(IStrategoTerm taskID, Iterable<IStrategoTerm> dependencies) {
		toDynamicDependency.removeAll(taskID);
		toDynamicDependency.putAll(taskID, dependencies);
	}

	@Override
	public void removeDependencies(IStrategoTerm taskID) {
		toDependency.removeAll(taskID);
		toDependency.removeAllInverse(taskID);
		toDynamicDependency.removeAll(taskID);
		toDynamicDependency.removeAllInverse(taskID);
	}


	@Override
	public Iterable<IStrategoTerm> getReads(IStrategoTerm taskID) {
		return toRead.get(taskID);
	}

	@Override
	public Iterable<IStrategoTerm> getReaders(IStrategoTerm uri) {
		return toRead.getInverse(uri);
	}

	@Override
	public void addRead(IStrategoTerm taskID, IStrategoTerm uri) {
		toRead.put(taskID, uri);
	}

	@Override
	public void removeReads(IStrategoTerm taskID) {
		toRead.removeAll(taskID);
	}


	@Override
	public void clearTimes() {
		for(Task task : getTasks()) {
			task.clearTime();
		}
	}

	@Override
	public void clearEvaluations() {
		for(Task task : getTasks()) {
			task.clearEvaluations();
		}
	}


	@Override
	public void recover() {
		evaluationFrontend.reset();
		taskCollection.recover();
	}

	@Override
	public void reset() {
		digester.reset();
		evaluationFrontend.reset();
		taskCollection.reset();

		toTask.clear();
		toTaskID.clear();

		toPartition.clear();
		toDependency.clear();
		toDynamicDependency.clear();
		toRead.clear();

		garbage.clear();
		scheduled.clear();
	}
}
