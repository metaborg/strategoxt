package org.metaborg.runtime.task;

import java.util.HashSet;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;

import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;
import org.spoofax.interpreter.terms.ITermFactory;

import static com.google.common.collect.Sets.filter;

import static com.google.common.base.Predicates.in;
import static com.google.common.base.Predicates.not;

public class Tasks {
	
	private final ITermFactory factory;
	
	private final ManyToManyMap<IStrategoInt, IStrategoString> toPartition = ManyToManyMap.create();
	private final ManyToManyMap<IStrategoInt, IStrategoTerm> toDependency  = ManyToManyMap.create();
	private final Map<IStrategoInt, IStrategoTerm> toInstruction = new ConcurrentHashMap<IStrategoInt, IStrategoTerm>();
	private final Map<IStrategoInt, IStrategoList> toResult      = new ConcurrentHashMap<IStrategoInt, IStrategoList>();
	
	private final Set<IStrategoInt> addedTasks   = new HashSet<IStrategoInt>();
	private final Set<IStrategoInt> removedTasks = new HashSet<IStrategoInt>();
	
	private final Set<IStrategoInt> tasks    = toInstruction.keySet();
	private final Set<IStrategoInt> garbage  = filter(tasks, not(in(toPartition.keys())));
	private final Set<IStrategoInt> solved   = toResult.keySet();
	private final Set<IStrategoInt> stalled  = toDependency.keySet();
	// private final Set<IStrategoInt> solvable = filter(tasks, not(or(in(solved), in(stalled))));
	
	public Tasks(ITermFactory factory) {
		this.factory = factory;
	}
	
	public IStrategoInt addTask(IStrategoString partition, IStrategoList dependencies, IStrategoTerm instruction) {
		
		IStrategoInt taskID = factory.makeInt(instruction.hashCode());
		if(toInstruction.put(taskID, instruction) == null)
			addedTasks.add(taskID);
		removedTasks.remove(taskID);
		
		toPartition.put(taskID, partition);
		for (IStrategoTerm dep : dependencies.getAllSubterms()) 
			toDependency.put(taskID, dep);
        
        return taskID;
	}
	
	public void addResult(IStrategoInt taskID, IStrategoTerm result) {
		toResult.put(taskID, factory.makeListCons(result, factory.makeList()));
	}
	
	public void addResult(IStrategoInt taskID, IStrategoList resultList) {
		toResult.put(taskID, resultList);
	}
	
	public IStrategoList getResult(IStrategoInt taskID) {
		return toResult.get(taskID);
	}
	
	public void startCollection(IStrategoString partition) {
		addedTasks.clear();
		removedTasks.clear();
		removedTasks.addAll(toPartition.getInverse(partition));
	}
	
	public IStrategoTuple stopCollection(IStrategoString partition) {

		for(IStrategoInt removed : removedTasks)
			toPartition.remove(removed, partition);
		
		collectGarbage();
		
		return factory.makeTuple(factory.makeList(addedTasks), factory.makeList(removedTasks));
	}
	
//	private void removeTask(IStrategoInt taskID, IStrategoString partition) {
//		toPartition.remove(taskID, partition);
//		
//		if(!toPartition.containsKey(taskID)) {
//			toDependency.removeAll(taskID);
//			toInstruction.remove(taskID);
//			toResult.remove(taskID);
//		}
//	}
	
	private void collectGarbage() {
		tasks.removeAll(garbage);
		solved.removeAll(garbage);
		stalled.removeAll(garbage);
	}
 }
