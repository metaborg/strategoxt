package org.metaborg.runtime.task;

import java.util.List;

import org.spoofax.interpreter.terms.IStrategoTerm;

import com.google.common.collect.Lists;

public class ListTaskResults implements ITaskResults {
	private List<IStrategoTerm> results = Lists.newLinkedList();

	public ListTaskResults() {

	}

	public ListTaskResults(ITaskResults results) {
		this.results = Lists.newLinkedList(results.results());
	}


	@Override
	public Iterable<IStrategoTerm> results() {
		return results;
	}

	@Override
	public boolean hasResults() {
		return !results.isEmpty();
	}

	@Override
	public void setResults(Iterable<IStrategoTerm> results) {
		this.results = Lists.newLinkedList(results);
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
