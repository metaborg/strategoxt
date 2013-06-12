package org.metaborg.runtime.task;

import static com.google.common.base.Predicates.in;
import static com.google.common.base.Predicates.not;
import static com.google.common.collect.Sets.filter;

import java.util.ArrayList;
import java.util.Collection;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Queue;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;

import org.metaborg.runtime.task.digest.ITermDigester;
import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoConstructor;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;
import org.spoofax.interpreter.terms.ITermFactory;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

public class TaskEngine {
	private final ITermFactory factory;
	private final ITermDigester digester;
	private final IStrategoConstructor resultConstructor;


	/** Instructions of tasks. */
	private final Map<IStrategoTerm, IStrategoTerm> toInstruction =
		new ConcurrentHashMap<IStrategoTerm, IStrategoTerm>();

	/** Origin partitions of tasks. */
	private final ManyToManyMap<IStrategoTerm, IStrategoString> toPartition = ManyToManyMap.create();

	/** Dependencies between tasks. */
	private final ManyToManyMap<IStrategoTerm, IStrategoTerm> toDependency = ManyToManyMap.create();

	/** Dependencies between tasks. */
	private final ManyToManyMap<IStrategoTerm, IStrategoTerm> toRead = ManyToManyMap.create();

	/** Solutions of tasks. */
	private final ConcurrentHashMap<IStrategoTerm, IStrategoList> toResult =
		new ConcurrentHashMap<IStrategoTerm, IStrategoList>();

	/** Produced messages of tasks. */
	private final Map<IStrategoTerm, IStrategoTerm> toMessage = new ConcurrentHashMap<IStrategoTerm, IStrategoTerm>();

	/** Tasks that have failed to produce a solution. */
	private final Set<IStrategoTerm> failed = new HashSet<IStrategoTerm>();


	/** All tasks (view). */
	private final Set<IStrategoTerm> tasks = toInstruction.keySet();

	/** Solved tasks (view). */
	private final Set<IStrategoTerm> solved = toResult.keySet();

	/** Task is garbage, if it is has no partition anymore (view). */
	private final Set<IStrategoTerm> garbage = filter(tasks, not(in(toPartition.keys())));


	/** New tasks that have been added since last call to {@link #startCollection(IStrategoString)}. */
	private final Set<IStrategoTerm> addedTasks = new HashSet<IStrategoTerm>();

	/** Tasks that have been removed when calling {@link #stopCollection(IStrategoString)}. */
	private final Set<IStrategoTerm> removedTasks = new HashSet<IStrategoTerm>();

	/** Partitions that are in process of task collection. */
	private final Set<IStrategoString> inCollection = new HashSet<IStrategoString>();


	/** Evaluates tasks to results. */
	private ITaskEvaluator evaluator;


	public TaskEngine(ITermFactory factory, ITermDigester digester) {
		this.factory = factory;
		this.digester = digester;
		this.resultConstructor = factory.makeConstructor("Result", 1);
	}
	
	public void setEvaluator(ITaskEvaluator evaluator) {
		this.evaluator = evaluator;
	}

	/**
	 * Starts task collection for given partition.
	 * 
	 * @param partition
	 *            The partition to collect tasks for.
	 */
	public void startCollection(IStrategoString partition) {
		if(inCollection.contains(partition))
			throw new IllegalStateException(
				"Collection has already been started. Call task-stop-collection(|partition) before starting a new collection.");

		addedTasks.clear();
		removedTasks.clear();
		removedTasks.addAll(toPartition.getInverse(partition));
		inCollection.add(partition);
	}

	/**
	 * Queries if given instruction exists.
	 * 
	 * @param instruction The instruction.
	 * @return True if it exists, false otherwise.
	 */
	public boolean taskExists(IStrategoTerm instruction) {
		return digester.digested(instruction);
	}
	
	/**
	 * Given an instruction, returns its identifier.
	 * 
	 * @param instruction The instruction.
	 * @return Identifier of the instruction.
	 */
	public IStrategoTerm taskID(IStrategoTerm instruction) {
		final IStrategoTerm taskID = digester.digest(instruction, factory);
		final IStrategoTerm instr = toInstruction.get(taskID);
		if(instr != null && !instruction.match(instr)) {
			reset();
			throw new IllegalStateException("Identifier collision, task " + instruction + " and " + instr
				+ " have the same identifier: " + taskID);
		}
		return taskID;
	}
	
	/**
	 * Adds an instruction with dependencies from a partition and returns a unique task identifier for this instruction.
	 * 
	 * @param partition
	 *            The partition where the task comes from.
	 * @param dependencies
	 *            A list of task identifiers of the tasks that given instruction depends on,
	 * @param instruction
	 *            The instruction.
	 * @return A unique task identifier for given instruction.
	 */
	public IStrategoTerm addTask(IStrategoString partition, IStrategoList dependencies, IStrategoTerm instruction) {
		if(!inCollection.contains(partition))
			throw new IllegalStateException(
				"Collection has not been started yet. Call task-start-collection(|partition) before adding tasks.");

		final IStrategoTerm taskID = taskID(instruction);
		
		if(toInstruction.put(taskID, instruction) == null) {
			addedTasks.add(taskID);
			evaluator.schedule(taskID);
		}
		removedTasks.remove(taskID);

		toPartition.put(taskID, partition);
		for(final IStrategoTerm dependency : dependencies)
			addDependency(taskID, dependency);

		return createResult(taskID);
	}

	private IStrategoAppl createResult(IStrategoTerm taskID) {
		return factory.makeAppl(resultConstructor, taskID);
	}

	/**
	 * Adds a persisted task back to the task engine.
	 * 
	 * @param taskID
	 *            The identifier of the task.
	 * @param instruction
	 *            The instruction of the task.
	 * @param partitions
	 *            The partitions of the task
	 * @param dependencies
	 *            The dependencies of the task
	 * @param reads
	 *            The reads of the task.
	 * @param results
	 *            A list of results of the task, or an empty tuple if it has no results.
	 * @param failed
	 *            An integer value that indicates if the task had failed. A value of 1 indicates failure.
	 */
	public void addPersistedTask(IStrategoTerm taskID, IStrategoTerm instruction, IStrategoList partitions,
		IStrategoList dependencies, IStrategoList reads, IStrategoTerm results, IStrategoInt failed) {
		toInstruction.put(taskID, instruction);
		for(final IStrategoTerm partition : partitions)
			toPartition.put(taskID, (IStrategoString) partition);
		for(final IStrategoTerm dependency : dependencies)
			toDependency.put(taskID, dependency);
		for(final IStrategoTerm read : reads)
			toRead.put(taskID, read);
		if(results.getTermType() == IStrategoTerm.LIST)
			toResult.put(taskID, (IStrategoList) results);
		if(failed.intValue() == 1)
			this.failed.add(taskID);
	}

	/**
	 * Stops collection for given partition.
	 * 
	 * @param partition
	 *            The partition to stop collecting tasks for.
	 */
	public void stopCollection(IStrategoString partition) {
		if(!inCollection.contains(partition))
			throw new IllegalStateException(
				"Collection has not been started yet. Call task-start-collection(|partition) before stopping collection.");

		for(final IStrategoTerm removed : removedTasks)
			toPartition.remove(removed, partition);
		collectGarbage();
		inCollection.remove(partition);
	}

	/**
	 * Evaluates all tasks that have been added since the last call to evaluate (or reset) and all tasks that have
	 * changed by a read.
	 * 
	 * @param context
	 *            The context to call the perform and insert strategies with.
	 * @param performInstruction
	 *            The strategy that performs an instruction.
	 * @param insertResults
	 *            The strategy that inserts results into an instruction.
	 * @param changedReads
	 *            A list of reads which have changed.
	 * @return A tuple with a list of task identifiers that have failed to produce a result and the number of task
	 *         evaluations.
	 */
	public IStrategoTuple evaluate(Context context, Strategy performInstruction, Strategy insertResults,
		IStrategoList changedReads) {
		// Schedule tasks and transitive dependent tasks that might have changed as a result of a change in reads.
		for(final IStrategoTerm changedRead : changedReads) {
			// Use work list to prevent recursion, keep collection of seen task ID's to prevent loops.
			final Set<IStrategoTerm> seen = new HashSet<IStrategoTerm>();
			final Queue<IStrategoTerm> workList = new LinkedList<IStrategoTerm>(getRead(changedRead));
			for(IStrategoTerm taskID; (taskID = workList.poll()) != null;) {
				evaluator.schedule(taskID);
				seen.add(taskID);
				Collection<IStrategoTerm> dependent = getDependent(taskID);
				for(IStrategoTerm dependentTaskID : dependent) {
					if(!seen.contains(dependentTaskID))
						workList.offer(dependentTaskID);
				}
			}
		}
		return evaluator.evaluate(context, performInstruction, insertResults);
	}

	public Iterable<IStrategoTerm> getTaskIDs() {
		return tasks;
	}

	public IStrategoTerm getInstruction(IStrategoTerm taskID) {
		return toInstruction.get(taskID);
	}

	public Set<IStrategoString> getAllPartition() {
		return new HashSet<IStrategoString>(toPartition.values());
	}
	
	public Collection<IStrategoString> getPartitionsOf(IStrategoTerm taskID) {
		return toPartition.get(taskID);
	}

	public Collection<IStrategoTerm> getInPartition(IStrategoString partition) {
		return toPartition.getInverse(partition);
	}

	public Collection<IStrategoTerm> getDependencies(IStrategoTerm taskID) {
		return toDependency.get(taskID);
	}

	public Collection<IStrategoTerm> getDependent(IStrategoTerm taskID) {
		return toDependency.getInverse(taskID);
	}
	
	public boolean becomesCyclic(IStrategoTerm taskIDFrom, IStrategoTerm taskIDTo) {
		final Set<IStrategoTerm> seen = new HashSet<IStrategoTerm>();
		final Queue<IStrategoTerm> queue = new LinkedList<IStrategoTerm>();
		
		queue.add(taskIDTo);
		seen.add(taskIDTo);
		
		for(IStrategoTerm taskID; (taskID = queue.poll()) != null;) {
			final Collection<IStrategoTerm> dependencies = getDependencies(taskID);
			for(IStrategoTerm dependency : dependencies) {
				if(dependency.equals(taskIDFrom))
					return true;
				if(seen.add(dependency))
					queue.add(dependency);
			}
		}
		
		return false;
	}

	public Collection<IStrategoTerm> getReads(IStrategoTerm taskID) {
		return toRead.get(taskID);
	}

	public Collection<IStrategoTerm> getRead(IStrategoTerm read) {
		return toRead.getInverse(read);
	}

	public void addRead(IStrategoTerm taskID, IStrategoTerm read) {
		toRead.put(taskID, read);
	}

	public Collection<IStrategoTerm> removeReads(IStrategoTerm taskID) {
		return toRead.removeAll(taskID);
	}
	
	public void addDependency(IStrategoTerm taskID, IStrategoTerm dependency) {
		toDependency.put(taskID, dependency);
	}

	public void addResult(IStrategoTerm taskID, IStrategoList resultList) {
		toResult.put(taskID, resultList);
	}

	public IStrategoList removeResult(IStrategoTerm taskID) {
		return toResult.remove(taskID);
	}

	public IStrategoList getResult(IStrategoTerm taskID) {
		return toResult.get(taskID);
	}

	public Set<Entry<IStrategoTerm, IStrategoList>> getAllResults() {
		return toResult.entrySet();
	}

	public void setMessage(IStrategoTerm taskID, IStrategoTerm resultList) {
		toMessage.put(taskID, resultList);
	}

	public IStrategoTerm removeMessage(IStrategoTerm taskID) {
		return toMessage.remove(taskID);
	}

	public IStrategoTerm getMessage(IStrategoTerm taskID) {
		return toMessage.get(taskID);
	}

	public IStrategoList getMessages(IStrategoString partition) {
		Collection<IStrategoTerm> taskIDs = getInPartition(partition);
		IStrategoList messages = factory.makeList();
		for(IStrategoTerm taskID : taskIDs) {
			IStrategoTerm message = getMessage(taskID);
			if(message != null)
				messages = factory.makeListCons(message, messages);
		}
		return messages;
	}

	public void addFailed(IStrategoTerm taskID) {
		failed.add(taskID);
	}

	public boolean removeFailed(IStrategoTerm taskID) {
		return failed.remove(taskID);
	}

	public boolean hasFailed(IStrategoTerm taskID) {
		return failed.contains(taskID);
	}

	public boolean isSolved(IStrategoTerm taskID) {
		return getResult(taskID) != null || hasFailed(taskID) == true;
	}

	public void removeSolved(IStrategoTerm taskID) {
		removeResult(taskID);
		removeFailed(taskID);
	}

	public ITaskEvaluator getEvaluator() {
		return evaluator;
	}

	public ITermDigester getDigester() {
		return digester;
	}
	
	public void reset() {
		toInstruction.clear();
		toPartition.clear();
		toDependency.clear();
		toRead.clear();
		toResult.clear();
		toMessage.clear();
		failed.clear();
		addedTasks.clear();
		removedTasks.clear();
		inCollection.clear();
		evaluator.reset();
		digester.reset();
	}

	private void collectGarbage() {
		// TODO: this iterates over the entire tasks collection?
		final ArrayList<IStrategoTerm> garbage = new ArrayList<IStrategoTerm>(this.garbage);
		
		solved.removeAll(garbage);
		toMessage.remove(garbage);
		failed.removeAll(garbage);
		
		for(final IStrategoTerm taskID : garbage) {
			toDependency.removeAll(taskID);
			toDependency.removeAllInverse(taskID);
			toRead.removeAll(taskID);
			toRead.removeAllInverse(taskID);
			digester.undigest(getInstruction(taskID));
		}
		
		tasks.removeAll(garbage);
	}
}
