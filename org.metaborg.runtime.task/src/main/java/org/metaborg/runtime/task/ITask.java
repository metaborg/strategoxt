package org.metaborg.runtime.task;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;


public interface ITask {
	public abstract IStrategoTerm instruction();

	public abstract void overrideInstruction(IStrategoTerm newInstruction);

	public abstract IStrategoTerm instructionOverride();

	public abstract IStrategoTerm initialInstruction();

	public abstract void clearInstructionOverride();


	public abstract IStrategoList initialDependencies();


	public abstract TaskType type();


	public abstract boolean shortCircuit();


	public abstract Iterable<IStrategoTerm> results();

	public abstract boolean hasResults();

	public abstract void setResults(Iterable<IStrategoTerm> results);

	public abstract void addResults(Iterable<IStrategoTerm> results);

	public abstract void addResult(IStrategoTerm result);


	public abstract TaskStatus status();

	public abstract void setStatus(TaskStatus status);

	public abstract boolean failed();

	public abstract void setFailed();

	public abstract boolean dependencyFailed();

	public abstract void setDependencyFailed();

	public abstract boolean solved();

	public abstract void unsolve();


	public abstract IStrategoTerm message();

	public abstract void setMessage(IStrategoTerm message);

	public abstract void clearMessage();


	public abstract long time();

	public abstract void setTime(long time);

	public abstract void addTime(long time);

	public abstract void clearTime();


	public abstract short evaluations();

	public abstract void setEvaluations(short evaluations);

	public abstract void addEvaluation();

	public abstract void clearEvaluations();
}