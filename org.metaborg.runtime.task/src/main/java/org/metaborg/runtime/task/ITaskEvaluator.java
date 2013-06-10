package org.metaborg.runtime.task;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;


public interface ITaskEvaluator {

	/**
	 * Schedules a task with unknown dependencies for evaluation.
	 * 
	 * @param taskID Task identifier to schedule.
	 */
	public abstract void schedule(IStrategoTerm taskID);

	public abstract IStrategoTuple evaluate(Context context, Strategy performInstruction, Strategy insertResults);

	public abstract void reset();

}