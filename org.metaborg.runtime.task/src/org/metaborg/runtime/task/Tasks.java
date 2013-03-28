package org.metaborg.runtime.task;

import java.util.Collection;
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

import com.google.common.collect.LinkedHashMultimap;
import com.google.common.collect.Multimap;

public class Tasks {
	private final ITermFactory factory;
	private final Multimap<IStrategoInt, IStrategoString> toPartition = LinkedHashMultimap.create();
	private final Multimap<IStrategoString, IStrategoInt> fromPartition = LinkedHashMultimap.create();
	private final Map<IStrategoInt, IStrategoTerm> toInstruction = new ConcurrentHashMap<IStrategoInt, IStrategoTerm>();
	private final Map<IStrategoInt, IStrategoList> toResult = new ConcurrentHashMap<IStrategoInt, IStrategoList>();
	private final Multimap<IStrategoInt, IStrategoInt> toDependency = LinkedHashMultimap.create();
	private final Multimap<IStrategoInt, IStrategoInt> toDependent = LinkedHashMultimap.create();
	
	private final Set<IStrategoInt> initialTasks = new HashSet<IStrategoInt>();
	private final Set<IStrategoInt> addedTasks = new HashSet<IStrategoInt>();
	
	public Tasks(ITermFactory factory) {
		this.factory = factory;
	}
	
	public IStrategoInt addTask(IStrategoTerm instruction, IStrategoString partition, IStrategoList dependencies) {
		IStrategoInt taskID = factory.makeInt(instruction.hashCode());
		if(toInstruction.put(taskID, instruction) == null)
			addedTasks.add(taskID);
		initialTasks.remove(taskID);
		
		toPartition.put(taskID, partition);
		fromPartition.put(partition, taskID);
		
        while(!dependencies.isEmpty()) {
        	IStrategoInt head = (IStrategoInt) dependencies.head();
            toDependency.put(taskID, head);
            toDependent.put(head, taskID);
            dependencies = dependencies.tail();
        }
        
        return taskID;
	}
	
	public void addResult(IStrategoInt taskID, IStrategoTerm result) {
		toResult.put(taskID, factory.makeListCons(result, factory.makeList()));
	}
	
	public void addResult(IStrategoInt taskID, IStrategoList resultList) {
		toResult.put(taskID, resultList);
	}
	
	public void startAnalysis(IStrategoString partition) {
		addedTasks.clear();
		initialTasks.clear();
		initialTasks.addAll(fromPartition.get(partition));
	}
	
	public IStrategoTuple stopAnalysis(IStrategoString partition) {
		for(IStrategoInt removed : initialTasks)
			removeTask(removed, partition);
		
		return factory.makeTuple(factory.makeList(initialTasks), factory.makeList(addedTasks));
	}
	
	private void removeTask(IStrategoInt taskID, IStrategoString partition) {
		toPartition.remove(taskID, partition);
		fromPartition.remove(partition, taskID);
		if(!toPartition.containsKey(taskID)) {
			toInstruction.remove(taskID);
			Collection<IStrategoInt> removedDependencies = toDependency.removeAll(taskID);
			for(IStrategoInt removedDep : removedDependencies) {
				toDependent.remove(removedDep, taskID);
			}
			toResult.remove(taskID);
		}
	}
}
