package org.metaborg.runtime.task;

import java.util.Map.Entry;
import java.util.Set;

import org.metaborg.runtime.task.digest.ITermDigester;
import org.metaborg.runtime.task.evaluation.ITaskEvaluationFrontend;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;

public interface ITaskEngine {
	/**
	 * Returns the term digester.
	 */
	public abstract ITermDigester getDigester();

	/**
	 * Returns the task evaluation frontend.
	 */
	public abstract ITaskEvaluationFrontend getEvaluationFrontend();

	/**
	 * Sets the task evaluation frontend.
	 */
	public abstract void setEvaluationFrontend(ITaskEvaluationFrontend evaluator);


	/**
	 * Starts task collection for given partition.
	 *
	 * @param source The source to collect tasks for.
	 */
	public abstract void startCollection(IStrategoTerm source);


	/**
	 * Given an instruction and its initial dependencies, returns its identifier or creates a new identifier.
	 *
	 * @param instruction The instruction.
	 * @param dependencies The initial dependencies of the instruction.
	 */
	public abstract IStrategoTerm createTaskID(IStrategoTerm instruction, IStrategoList dependencies);

	/**
	 * Adds an instruction with dependencies from a partition and returns a unique task identifier for this instruction.
	 *
	 * @param source The origin of the task.
	 * @param dependencies A list of task identifiers of the tasks that given instruction depends on,
	 * @param instruction The instruction.
	 * @param isCombinator Whether this task is a task combinator.
	 * @param shortCircuit Whether evaluating this task stops after the first successful instruction has been executed.
	 *
	 * @return A unique task identifier for given instruction.
	 */
	public abstract IStrategoTerm addTask(IStrategoTerm source, IStrategoList dependencies, IStrategoTerm instruction,
		boolean isCombinator, boolean shortCircuit);

	/**
	 * Adds a persisted task back to the task engine.
	 *
	 * @param taskID The identifier of the task.
	 * @param task The task object.
	 * @param initialDependencies The initial dependencies of the task.
	 */
	public abstract void addPersistedTask(IStrategoTerm taskID, Task task, IStrategoList initialDependencies);

	/**
	 * Removes task with given identifier from the task engine.
	 *
	 * @param taskID The identifier of the task to remove.
	 */
	public abstract void removeTask(IStrategoTerm taskID);

	/**
	 * Stops collection for given partition.
	 *
	 * @param source The partition to stop collecting tasks for.
	 *
	 * @return A tuple with a list of task identifiers that have been removed and added.
	 */
	public abstract IStrategoTerm stopCollection(IStrategoTerm source);


	/**
	 * Invalidates task with given identifier, removing their results, reads and messages.
	 *
	 * @param taskID The identifier of the task to invalidate.
	 *
	 * @return The task that was invalidated.
	 */
	public abstract Task invalidate(IStrategoTerm taskID);

	/**
	 * Invalidates and schedules tasks that have changed because something they read has changed.
	 *
	 * @param changedReads A list of reads which have changed.
	 *
	 * @return Set of invalidated task identifiers.
	 */
	public abstract Set<IStrategoTerm> invalidateTaskReads(IStrategoList changedReads);

	/**
	 * Evaluates all tasks that have been added since the last call to evaluate (or reset) and all tasks that have
	 * changed by a read.
	 *
	 * @param context The context to call the perform and insert strategies with.
	 * @param perform The strategy that performs an instruction.
	 * @param collect The strategy that collects result IDs from a term.
	 * @param insert The strategy that inserts results into an instruction.
	 *
	 * @return A tuple with a list of task identifiers that have failed and succeeded to produce a result.
	 */
	public abstract IStrategoTerm evaluateScheduled(IContext context, Strategy collect, Strategy insert,
		Strategy perform);

	/**
	 * Evaluates given task identifiers and their transitive dependencies.
	 *
	 * @param context The context to call the perform and insert strategies with.
	 * @param perform The strategy that performs an instruction.
	 * @param collect The strategy that collects result IDs from a term.
	 * @param insert The strategy that inserts results into an instruction.
	 * @param taskIDs The task identifiers to evaluate.
	 *
	 * @return A tuple with a list of task identifiers that have failed and succeeded to produce a result.
	 */
	public abstract IStrategoTerm evaluateNow(IContext context, Strategy collect, Strategy insert, Strategy perform,
		Iterable<IStrategoTerm> taskIDs);


	/**
	 * Gets task with given identifier.
	 *
	 * @param taskID The task identifier.
	 */
	public abstract Task getTask(IStrategoTerm taskID);

	/**
	 * Gets task identifier of given task.
	 *
	 * @param task The task.
	 */
	public abstract IStrategoTerm getTaskID(Task task);

	/**
	 * Given an instruction and its initial dependencies, returns its identifier. If it does not have an identifier,
	 * null is returned.
	 *
	 * @param instruction The instruction.
	 * @param dependencies The initial dependencies of the instruction.
	 */
	public abstract IStrategoTerm getTaskID(IStrategoTerm instruction, IStrategoList dependencies);


	/**
	 * Gets all task identifiers.
	 */
	public abstract Iterable<IStrategoTerm> getTaskIDs();

	/**
	 * Gets all tasks.
	 */
	public abstract Iterable<Task> getTasks();

	/**
	 * Gets all task identifier to task mappings.
	 */
	public abstract Iterable<Entry<IStrategoTerm, Task>> getTaskEntries();


	/**
	 * Gets all sources.
	 */
	public abstract Set<IStrategoTerm> getAllSources();

	/**
	 * Gets all sources which the task with given identifier has been added to.
	 *
	 * @param taskID The task identifier.
	 */
	public abstract Set<IStrategoTerm> getSourcesOf(IStrategoTerm taskID);

	/**
	 * Gets all task identifiers that have been added to given source.
	 *
	 * @param source The source.
	 */
	public abstract Iterable<IStrategoTerm> getFromSource(IStrategoTerm source);

	/**
	 * Adds task with given identifier to given source.
	 *
	 * @param taskID The task identifier.
	 * @param source The source.
	 */
	public abstract void addToSource(IStrategoTerm taskID, IStrategoTerm source);

	/**
	 * Removes task with given identifier from given source.
	 *
	 * @param taskID The task identifier.
	 * @param source The partition.
	 */
	public abstract void removeFromSource(IStrategoTerm taskID, IStrategoTerm source);

	/**
	 * Remove task with given identifier from all sources.
	 *
	 * @param taskID The task identifier.
	 */
	public abstract void removeSourcesOf(IStrategoTerm taskID);


	/**
	 * Gets all other task identifiers that task with given identifier statically depends on.
	 *
	 * @param taskID The task identifier to get static dependencies for.
	 */
	public abstract Iterable<IStrategoTerm> getDependencies(IStrategoTerm taskID);

	/**
	 * Gets all other task identifiers that task with given identifier dynamically depends on.
	 *
	 * @param taskID The task identifier to get dynamic dependencies for.
	 */
	public abstract Iterable<IStrategoTerm> getDynamicDependencies(IStrategoTerm taskID);

	/**
	 * Gets all other task identifier that task with given identifier statically transitively depends on.
	 *
	 * @param taskID The task identifier to get static dependencies for.
	 */
	public abstract Set<IStrategoTerm> getTransitiveDependencies(IStrategoTerm taskID);

	/**
	 * Gets all other task identifier that depend on the task with given identifier.
	 *
	 * @param taskID The task identifier to get dependent tasks for.
	 * @param withDynamic If dynamic dependents should be included.
	 */
	public abstract Iterable<IStrategoTerm> getDependent(IStrategoTerm taskID, boolean withDynamic);

	/**
	 * Queries if adding a dependency between two tasks would cause a cyclic dependency. Does not change the actual
	 * dependency graph.
	 *
	 * @param taskIDFrom The task identifier of the task to add a dependency edge from.
	 * @param taskIDTo The task identifier of the task to add a dependency edge to.
	 *
	 * @return True if a cyclic dependency is created, false otherwise.
	 */
	public abstract boolean becomesCyclic(IStrategoTerm taskIDFrom, IStrategoTerm taskIDTo);

	/**
	 * Adds a dependency between two tasks.
	 *
	 * @param taskID The task identifier of the task to add a dependency edge from.
	 * @param dependency The task identifier of the task to add a dependency edge to.
	 */
	public abstract void addDependency(IStrategoTerm taskID, IStrategoTerm dependency);

	/**
	 * Sets the dynamic dependencies for a task.
	 *
	 * @param taskID The task identifier of the task to set the dynamic dependencies for.
	 * @param dependencies The task identifiers of dynamic dependencies.
	 */
	public abstract void setDynamicDependencies(IStrategoTerm taskID, Iterable<IStrategoTerm> dependencies);

	/**
	 * Removes all incoming and outgoing dependencies for a task.
	 *
	 * @param taskID The task identifier of the task to remove all dependencies for.
	 */
	public abstract void removeDependencies(IStrategoTerm taskID);


	/**
	 * Gets all URI's that task with given identifier has read.
	 *
	 * @param taskID The task identifier to get reads for.
	 */
	public abstract Iterable<IStrategoTerm> getReads(IStrategoTerm taskID);

	/**
	 * Gets all task identifiers that have read given URI.
	 *
	 * @param uri The URI to get reader tasks for.
	 */
	public abstract Iterable<IStrategoTerm> getReaders(IStrategoTerm uri);

	/**
	 * Adds a read from a task identifier to a URI.
	 *
	 * @param taskID The task identifier to add a read for.
	 * @param uri The URI that has been read.
	 */
	public abstract void addRead(IStrategoTerm taskID, IStrategoTerm uri);

	/**
	 * Removes all reads for task with given identifier.
	 *
	 * @param taskID The task identifier to remove reads for.
	 */
	public abstract void removeReads(IStrategoTerm taskID);


	/**
	 * Resets the evaluation time for each task.
	 */
	public abstract void clearTimes();

	/**
	 * Resets the evaluation count for each task.
	 */
	public abstract void clearEvaluations();


	/**
	 * Attempt to recover the task engine after an exception during collection or evaluation.
	 */
	public abstract void recover();

	/**
	 * Resets the task engine to the initial state.
	 */
	public abstract void reset();
}