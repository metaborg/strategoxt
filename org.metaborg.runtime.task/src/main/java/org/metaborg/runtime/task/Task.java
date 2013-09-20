package org.metaborg.runtime.task;

import java.util.List;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;

import com.google.common.collect.Lists;

public final class Task {
	public final IStrategoTerm instruction;
	public final IStrategoList initialDependencies;
	public final boolean isCombinator; // TODO: move this to task (type) definition, this is wasting space.
	public final boolean shortCircuit; // TODO: move this to task (type) definition, this is wasting space.

	private List<IStrategoTerm> results = Lists.newLinkedList();
	private boolean failed = false;
	private boolean solved = false;
	private IStrategoTerm message;
	private long time = -1;
	private short evaluations = 0;

	public Task(IStrategoTerm instruction, IStrategoList initialDependencies, boolean isCombinator, boolean shortCircuit) {
		this.instruction = instruction;
		this.initialDependencies = initialDependencies;
		this.isCombinator = isCombinator;
		this.shortCircuit = shortCircuit;
	}

	public Task(Task task) {
		this.instruction = task.instruction;
		this.initialDependencies = task.initialDependencies;
		this.isCombinator = task.isCombinator;
		this.shortCircuit = task.shortCircuit;
		this.results = Lists.newLinkedList(task.results);
		this.failed = task.failed;
		this.solved = task.solved;
		this.message = task.message;
		this.time = task.time;
		this.evaluations = task.evaluations;
	}

	public Iterable<IStrategoTerm> results() {
		return results;
	}

	public boolean hasResults() {
		return !results.isEmpty();
	}

	public void setResults(Iterable<IStrategoTerm> results) {
		this.results = Lists.newLinkedList(results);
		solved = true;
	}

	public void addResults(Iterable<IStrategoTerm> results) {
		for(IStrategoTerm result : results)
			this.results.add(result);
		solved = true;
	}

	public void addResult(IStrategoTerm result) {
		results.add(result);
		solved = true;
	}

	public boolean failed() {
		return failed;
	}

	public void setFailed() {
		failed = true;
		solved = true;
	}

	public boolean solved() {
		return solved;
	}

	public void unsolve() {
		results.clear();
		failed = false;
		solved = false;
	}

	public IStrategoTerm message() {
		return message;
	}

	public void setMessage(IStrategoTerm message) {
		this.message = message;
	}

	public void clearMessage() {
		message = null;
	}

	public long time() {
		return time;
	}

	public void setTime(long time) {
		this.time = time;
	}

	public void addTime(long time) {
		this.time += time;
	}

	public void clearTime() {
		time = -1;
	}

	public short evaluations() {
		return evaluations;
	}

	public void setEvaluations(short evaluations) {
		this.evaluations = evaluations;
	}

	public void addEvaluation() {
		++evaluations;
	}

	public void clearEvaluations() {
		evaluations = 0;
	}

	@Override
	public int hashCode() {
		final int prime = 31;
		int result = 1;
		result = prime * result + ((initialDependencies == null) ? 0 : initialDependencies.hashCode());
		result = prime * result + ((instruction == null) ? 0 : instruction.hashCode());
		return result;
	}

	@Override
	public boolean equals(Object obj) {
		if(this == obj)
			return true;
		if(obj == null)
			return false;
		if(getClass() != obj.getClass())
			return false;
		Task other = (Task) obj;
		if(initialDependencies == null) {
			if(other.initialDependencies != null)
				return false;
		} else if(!initialDependencies.equals(other.initialDependencies))
			return false;
		if(instruction == null) {
			if(other.instruction != null)
				return false;
		} else if(!instruction.equals(other.instruction))
			return false;
		return true;
	}

	@Override
	public String toString() {
		return "Task [instruction=" + instruction + ", isCombinator=" + isCombinator + ", results=" + results
			+ ", failed=" + failed + ", solved=" + solved + ", message=" + message + ", time=" + time
			+ ", evaluations=" + evaluations + "]";
	}
}
