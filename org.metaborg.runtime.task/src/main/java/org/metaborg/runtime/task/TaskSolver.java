package org.metaborg.runtime.task;

import static com.google.common.base.Predicates.in;
import static com.google.common.base.Predicates.not;
import static com.google.common.base.Predicates.or;
import static com.google.common.collect.Maps.filterKeys;
import static com.google.common.collect.Multimaps.filterValues;
import static com.google.common.collect.Sets.filter;

import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;

import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

import com.google.common.collect.Multimap;

public class TaskSolver {
	private final TaskEngine taskEngine;
	
	/** Solved tasks (view). */
	private final Set<IStrategoInt> solved;
	
	/** Unsatisfied dependencies between tasks (view). */
	private final Multimap<IStrategoInt, IStrategoInt> toOpenDependency;
	
	/** Task is solvable, if it is neither solved, nor has any unsatisfied dependency (view). */
	private final Map<IStrategoInt, IStrategoTerm> toSolvableInstruction;
	
	/** solved task is invalid, if it has a dependency on an unsolved task (view). */
	private final Set<IStrategoInt> invalid;
	
	public TaskSolver(TaskEngine taskEngine, Map<IStrategoInt, IStrategoTerm> toInstruction,
		ManyToManyMap<IStrategoInt, IStrategoInt> toDependency, Set<IStrategoInt> solved) {
		this.taskEngine = taskEngine;
		this.solved = solved;
		this.toOpenDependency = filterValues(toDependency, not(in(this.solved)));
		this.toSolvableInstruction = filterKeys(toInstruction, not(or(in(this.solved), in(toOpenDependency.keys()))));
		this.invalid = filter(this.solved, in(filterValues(toDependency, not(in(this.solved))).keySet()));
	}
	
	public void evaluate(Context context, Strategy stategy) {
		invalid.clear();
		for(Entry<IStrategoInt, IStrategoTerm> solvable : toSolvableInstruction.entrySet())
			taskEngine.setResult(solvable.getKey(), solve(context, stategy, solvable.getKey(), solvable.getValue()));
	}

	public IStrategoList solve(Context context, Strategy strategy, IStrategoInt taskID, IStrategoTerm instruction) {
		return (IStrategoList) strategy.invoke(context, instruction, taskID);
	}
}
