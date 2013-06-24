package org.metaborg.runtime.task;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;

public interface ITaskEvaluator {
	/**
	 * Schedules a task with unknown dependencies for evaluation.
	 * 
	 * @param taskID Task identifier to schedule.
	 */
	public abstract void schedule(IStrategoTerm taskID);

	public abstract IStrategoTuple evaluate(IContext context, Strategy collect, Strategy insert, Strategy perform);

	public abstract void reset();
}