package org.metaborg.runtime.task;

import java.util.List;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;

import com.google.common.collect.Lists;

public class ListTask extends ATask {
	private List<IStrategoTerm> results = Lists.newLinkedList();


	public ListTask(IStrategoTerm instruction, IStrategoList initialDependencies, TaskType type, boolean shortCircuit) {
		super(instruction, initialDependencies, type, shortCircuit);
	}

	public ListTask(ATask task) {
		super(task);

		this.results = Lists.newLinkedList(task.results());
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
