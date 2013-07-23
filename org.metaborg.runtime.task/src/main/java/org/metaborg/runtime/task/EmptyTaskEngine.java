package org.metaborg.runtime.task;

import java.util.Map.Entry;
import java.util.Set;

import org.metaborg.runtime.task.digest.ITermDigester;
import org.metaborg.runtime.task.util.EmptyIterable;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;

import com.google.common.collect.ImmutableSet;

public class EmptyTaskEngine implements ITaskEngine {
	public ITermDigester getDigester() {
		return null;
	}

	public ITaskEvaluator getEvaluator() {
		return null;
	}

	public void setEvaluator(ITaskEvaluator evaluator) {

	}

	public ITaskEngine getParent() {
		return null;
	}

	public void startCollection(IStrategoString partition) {

	}

	public boolean taskExists(IStrategoTerm instruction) {
		return false;
	}

	public IStrategoTerm getTaskID(IStrategoTerm instruction, IStrategoList dependencies) {
		return null;
	}

	public IStrategoTerm createTaskID(IStrategoTerm instruction, IStrategoList dependencies) {
		return null;
	}

	public IStrategoTerm addTask(IStrategoString partition, IStrategoList dependencies, IStrategoTerm instruction,
		boolean combinator) {
		return null;
	}

	public void
		addPersistedTask(IStrategoTerm taskID, IStrategoTerm instruction, IStrategoInt combinator,
			IStrategoList partitions, IStrategoList initialDependencies, IStrategoList dependencies,
			IStrategoList reads, IStrategoTerm results, IStrategoInt failed, IStrategoTerm message, IStrategoTerm time,
			IStrategoTerm evaluations) {

	}

	public void removeTask(IStrategoTerm taskID) {

	}

	public void stopCollection(IStrategoString partition) {

	}

	public void invalidate(IStrategoTerm taskID) {

	}

	public void invalidateTaskReads(IStrategoList changedReads) {

	}

	public IStrategoTerm evaluateScheduled(IContext context, Strategy insert, Strategy perform) {
		return null;
	}

	public IStrategoTerm evaluateNow(IContext context, Strategy insert, Strategy perform,
		Iterable<IStrategoTerm> taskIDs) {
		return null;
	}

	public Iterable<IStrategoTerm> getTaskIDs() {
		return new EmptyIterable<IStrategoTerm>();
	}

	public Iterable<Task> getTasks() {
		return new EmptyIterable<Task>();
	}

	public Iterable<Entry<IStrategoTerm, Task>> getTaskEntries() {
		return new EmptyIterable<Entry<IStrategoTerm, Task>>();
	}

	public Task getTask(IStrategoTerm taskID) {
		return null;
	}

	public Iterable<IStrategoTerm> getTaskIDsCurrent() {
		return new EmptyIterable<IStrategoTerm>();
	}

	public Iterable<Task> getTasksCurrent() {
		return new EmptyIterable<Task>();
	}

	public Iterable<Entry<IStrategoTerm, Task>> getTaskEntriesCurrent() {
		return new EmptyIterable<Entry<IStrategoTerm, Task>>();
	}

	public Task getTaskCurrent(IStrategoTerm taskID) {
		return null;
	}

	public Set<IStrategoString> getAllPartition() {
		return ImmutableSet.of();
	}

	public Set<IStrategoString> getPartitionsOf(IStrategoTerm taskID) {
		return ImmutableSet.of();
	}

	public Iterable<IStrategoTerm> getInPartition(IStrategoString partition) {
		return new EmptyIterable<IStrategoTerm>();
	}

	public Iterable<IStrategoTerm> getDependencies(IStrategoTerm taskID) {
		return new EmptyIterable<IStrategoTerm>();
	}

	public Set<IStrategoTerm> getTransitiveDependencies(IStrategoTerm taskID) {
		return ImmutableSet.of();
	}

	public Iterable<IStrategoTerm> getDependent(IStrategoTerm taskID) {
		return new EmptyIterable<IStrategoTerm>();
	}

	public boolean becomesCyclic(IStrategoTerm taskIDFrom, IStrategoTerm taskIDTo) {
		return false;
	}

	public void addDependency(IStrategoTerm taskID, IStrategoTerm dependency) {

	}

	public void removeDependencies(IStrategoTerm taskID) {

	}

	public Iterable<IStrategoTerm> getReads(IStrategoTerm taskID) {
		return new EmptyIterable<IStrategoTerm>();
	}

	public Iterable<IStrategoTerm> getReaders(IStrategoTerm uri) {
		return new EmptyIterable<IStrategoTerm>();
	}

	public void addRead(IStrategoTerm taskID, IStrategoTerm uri) {

	}

	public void removeReads(IStrategoTerm taskID) {

	}

	public void clearTimes() {

	}

	public void clearEvaluations() {

	}
	
	public Iterable<IStrategoTerm> getRemovedTasks() {
		return new EmptyIterable<IStrategoTerm>(); 
	}

	public void recover() {

	}

	public void reset() {

	}
}
