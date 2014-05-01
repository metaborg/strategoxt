package org.metaborg.runtime.task;

import org.spoofax.interpreter.terms.IStrategoTerm;

public interface ITaskResults extends Iterable<IStrategoTerm> {
	public abstract boolean empty();

	public abstract int size();

	public abstract void set(Iterable<IStrategoTerm> results);

	public abstract void addAll(Iterable<IStrategoTerm> results);

	public abstract void add(IStrategoTerm result);

	public abstract void clear();
}
