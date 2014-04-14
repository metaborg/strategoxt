package org.metaborg.runtime.task;

import java.util.Set;

import org.spoofax.interpreter.terms.IStrategoTerm;

import com.google.common.collect.Sets;

public class SetTaskResults implements ITaskResults {
	private Set<IStrategoTerm> results = Sets.newHashSet();

	public SetTaskResults() {

	}

	public SetTaskResults(ITaskResults results) {
		this.results = Sets.newHashSet(results.results());
	}


	@Override
	public Iterable<IStrategoTerm> results() {
		return results;
	}

	public boolean hasResult(IStrategoTerm term) {
		return results.contains(term);
	}

	@Override
	public boolean hasResults() {
		return !results.isEmpty();
	}

	@Override
	public void setResults(Iterable<IStrategoTerm> results) {
		this.results = Sets.newHashSet(results);
	}

	@Override
	public void addResults(Iterable<IStrategoTerm> results) {
		for(IStrategoTerm result : results)
			this.results.add(result);
	}

	@Override
	public void addResult(IStrategoTerm result) {
		results.add(result);
	}

	@Override
	public void clearResults() {
		results.clear();
	}
}
