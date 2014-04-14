package org.metaborg.runtime.task;

import org.spoofax.interpreter.terms.IStrategoTerm;

public interface ITaskResults {
	public abstract Iterable<IStrategoTerm> results();

	public abstract boolean hasResults();

	public abstract void setResults(Iterable<IStrategoTerm> results);

	public abstract void addResults(Iterable<IStrategoTerm> results);

	public abstract void addResult(IStrategoTerm result);

	public abstract void clearResults();
}
