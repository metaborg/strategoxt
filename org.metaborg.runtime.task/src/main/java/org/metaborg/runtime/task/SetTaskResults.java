package org.metaborg.runtime.task;

import java.util.Iterator;
import java.util.Set;

import org.spoofax.interpreter.terms.IStrategoTerm;

import com.google.common.collect.Sets;

public class SetTaskResults implements ITaskResults {
	private Set<IStrategoTerm> results = Sets.newHashSet();


	public SetTaskResults() {

	}

	public SetTaskResults(ITaskResults results) {
		this.results = Sets.newHashSet(results);
	}


	public boolean contains(IStrategoTerm term) {
		return results.contains(term);
	}

	@Override
	public boolean empty() {
		return results.isEmpty();
	}

	@Override
	public int size() {
		return results.size();
	}

	@Override
	public void set(Iterable<IStrategoTerm> results) {
		this.results = Sets.newHashSet(results);
	}

	@Override
	public void addAll(Iterable<IStrategoTerm> results) {
		for(IStrategoTerm result : results)
			this.results.add(result);
	}

	@Override
	public void add(IStrategoTerm result) {
		results.add(result);
	}

	@Override
	public void clear() {
		results.clear();
	}


	@Override
	public Iterator<IStrategoTerm> iterator() {
		return results.iterator();
	}
}
