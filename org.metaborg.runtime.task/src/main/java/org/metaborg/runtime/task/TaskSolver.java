package org.metaborg.runtime.task;

import static com.google.common.base.Predicates.in;
import static com.google.common.base.Predicates.not;
import static com.google.common.base.Predicates.and;
import static com.google.common.base.Predicates.or;
import static com.google.common.collect.Maps.filterKeys;
import static com.google.common.collect.Multimaps.filterValues;
import static com.google.common.collect.Sets.filter;

import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;

import org.spoofax.interpreter.core.Tools;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

import com.google.common.base.Predicate;
import com.google.common.collect.Multimap;

public class TaskSolver {
	private final TaskEngine taskEngine;

	/** Solved tasks. View over the result collection. */
	private final Set<IStrategoInt> solved;

	/** Failed tasks. */
	private final Set<IStrategoInt> failed;

	/** Unsatisfied dependencies between tasks. View over the dependency collection. */
	private final Multimap<IStrategoInt, IStrategoInt> toOpenDependency;

	/**
	 * Task is solvable if it is neither solved, nor has any unsatisfied dependency. View over the instruction
	 * collection.
	 */
	private final Map<IStrategoInt, IStrategoTerm> toSolvableInstruction;

	/** Solved task is invalid, if it has a dependency on an unsolved task. View over the result collection. */
	private final Set<IStrategoInt> invalid;

	public TaskSolver(TaskEngine taskEngine, Set<IStrategoInt> solved, Set<IStrategoInt> failed,
		Map<IStrategoInt, IStrategoTerm> toInstruction, ManyToManyMap<IStrategoInt, IStrategoInt> toDependency) {
		this.taskEngine = taskEngine;
		this.solved = solved;
		this.failed = failed;
		
		Predicate<IStrategoInt> unsolved = not(or(in(this.solved), in(this.failed)));
		
		// TODO: Filters are not efficient, entire collection is iterated. 
		this.toOpenDependency = filterValues(toDependency, unsolved);
		this.toSolvableInstruction = filterKeys(toInstruction, and(unsolved, not(in(toOpenDependency.keys()))));
		this.invalid = filter(this.solved, in(filterValues(toDependency, unsolved).keySet()));
	}

	public void evaluate(Context context, Strategy performInstruction) {
		invalid.clear();
		for(Entry<IStrategoInt, IStrategoTerm> solvable : toSolvableInstruction.entrySet()) {
			final IStrategoInt taskID = solvable.getKey();
			final IStrategoTerm result = solve(context, performInstruction, taskID, solvable.getValue());
			if(result == null || !Tools.isTermList(result))
				taskEngine.addFailed(taskID);
			else
				taskEngine.setResult(taskID, (IStrategoList) result);
		}
	}

	public IStrategoTerm solve(Context context, Strategy performInstruction, IStrategoInt taskID,
		IStrategoTerm instruction) {
		return performInstruction.invoke(context, instruction, taskID);
	}
}
