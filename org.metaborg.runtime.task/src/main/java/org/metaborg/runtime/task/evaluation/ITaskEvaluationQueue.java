package org.metaborg.runtime.task.evaluation;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;

public interface ITaskEvaluationQueue {
	public abstract void queue(IStrategoTerm taskID);

	public abstract void queueOrDefer(IStrategoTerm taskID);

	public abstract void taskCompleted(IStrategoTerm solved);

	public abstract void taskDelayed(IStrategoTerm taskID, IStrategoList dependencies);
}