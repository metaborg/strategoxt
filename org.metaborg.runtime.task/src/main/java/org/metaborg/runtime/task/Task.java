package org.metaborg.runtime.task;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;

public final class Task {
	public final IStrategoTerm instruction;
	public IStrategoList results;
	public IStrategoTerm message;
	public boolean failed = false;
	public long time = -1;
	public short evaluations = 0;

	public Task(IStrategoTerm instruction) {
		this.instruction = instruction;
	}

	public Task(IStrategoTerm instruction, IStrategoList results, IStrategoTerm message, boolean failed, long time,
		short evaluations) {
		this.instruction = instruction;
		this.results = results;
		this.message = message;
		this.failed = failed;
		this.time = time;
		this.evaluations = evaluations;
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
