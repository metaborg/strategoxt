package org.metaborg.runtime.task;

import java.util.LinkedList;
import java.util.List;

import org.spoofax.interpreter.terms.IStrategoTerm;

import com.google.common.collect.Lists;

public final class Task {
	public final IStrategoTerm instruction;
	public final boolean isCombinator;

	private List<IStrategoTerm> results = new LinkedList<IStrategoTerm>();
	private boolean failed = false;
	private boolean solved = false;
	private IStrategoTerm message;
	private long time = -1;
	private short evaluations = 0;

	public Task(IStrategoTerm instruction, boolean combinator) {
		this.instruction = instruction;
		this.isCombinator = combinator;
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
	}

	public boolean solved() {
		return solved || failed;
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
		result = prime * result + evaluations;
		result = prime * result + (failed ? 1231 : 1237);
		result = prime * result + ((instruction == null) ? 0 : instruction.hashCode());
		result = prime * result + ((message == null) ? 0 : message.hashCode());
		result = prime * result + ((results == null) ? 0 : results.hashCode());
		result = prime * result + (int) (time ^ (time >>> 32));
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
		if(evaluations != other.evaluations)
			return false;
		if(failed != other.failed)
			return false;
		if(instruction == null) {
			if(other.instruction != null)
				return false;
		} else if(!instruction.equals(other.instruction))
			return false;
		if(message == null) {
			if(other.message != null)
				return false;
		} else if(!message.equals(other.message))
			return false;
		if(results == null) {
			if(other.results != null)
				return false;
		} else if(!results.equals(other.results))
			return false;
		if(time != other.time)
			return false;
		return true;
	}
}
