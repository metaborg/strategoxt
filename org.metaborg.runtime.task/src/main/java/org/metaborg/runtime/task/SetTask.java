package org.metaborg.runtime.task;

import java.util.Set;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;

import com.google.common.collect.Sets;

public class SetTask extends ATask {
	private Set<IStrategoTerm> results = Sets.newHashSet();


	public SetTask(IStrategoTerm instruction, IStrategoList initialDependencies, TaskType type, boolean shortCircuit) {
		super(instruction, initialDependencies, type, shortCircuit);
	}

	public SetTask(ATask task) {
		super(task);

		this.results = Sets.newHashSet(task.results());
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
		setStatus(TaskStatus.Success);
	}

	@Override
	public void addResults(Iterable<IStrategoTerm> results) {
		for(IStrategoTerm result : results)
			this.results.add(result);
		setStatus(TaskStatus.Success);
	}

	@Override
	public void addResult(IStrategoTerm result) {
		results.add(result);
		setStatus(TaskStatus.Success);
	}

	@Override
	public void clearResults() {
		results.clear();
	}
}
