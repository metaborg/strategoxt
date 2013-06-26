package org.metaborg.runtime.task;

import java.util.Set;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;

public interface ITaskEvaluator {
	public abstract IStrategoTuple evaluate(Set<IStrategoTerm> scheduled, IContext context, Strategy collect,
		Strategy insert, Strategy perform);

	public abstract void reset();
}