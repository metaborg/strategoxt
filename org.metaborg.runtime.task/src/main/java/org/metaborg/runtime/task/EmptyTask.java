package org.metaborg.runtime.task;

import org.metaborg.runtime.task.util.EmptyIterable;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;

public class EmptyTask extends ATask {
	public EmptyTask(IStrategoTerm instruction, IStrategoList initialDependencies, TaskType type, boolean shortCircuit) {
		super(instruction, initialDependencies, type, shortCircuit);
	}

	public EmptyTask(ATask task) {
		super(task);
	}


	@Override
	public Iterable<IStrategoTerm> results() {
		return new EmptyIterable<IStrategoTerm>();
	}

	@Override
	public boolean hasResults() {
		return false;
	}

	@Override
	public void setResults(Iterable<IStrategoTerm> results) {
		setStatus(TaskStatus.Success);
	}

	@Override
	public void addResults(Iterable<IStrategoTerm> results) {
		setStatus(TaskStatus.Success);
	}

	@Override
	public void addResult(IStrategoTerm result) {
		setStatus(TaskStatus.Success);
	}

	@Override
	public void clearResults() {

	}
}
