package org.metaborg.runtime.task.evaluation;

import static org.metaborg.runtime.task.util.InvokeStrategy.invoke;

import java.util.Set;

import org.metaborg.runtime.task.ITaskEngine;
import org.metaborg.runtime.task.Task;
import org.metaborg.runtime.task.util.CarthesianProduct;
import org.metaborg.runtime.task.util.Timer;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.Tools;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoConstructor;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

public class BaseTaskEvaluator implements ITaskEvaluator {
	private final ITermFactory factory;
	private final IStrategoConstructor dependencyConstructor;
	private final IStrategoConstructor singleConstructor;


	/** Timer for measuring task time. **/
	private final Timer timer = new Timer();


	public BaseTaskEvaluator(ITermFactory factory) {
		this.factory = factory;
		this.dependencyConstructor = factory.makeConstructor("Dependency", 1);
		this.singleConstructor = factory.makeConstructor("Single", 1);
	}

	public IStrategoList adjustDependencies(IStrategoList dependencies, ITermFactory factory) {
		return dependencies;
	}

	public void queue(ITaskEngine taskEngine, ITaskEvaluationQueue evaluationQueue, Set<IStrategoTerm> scheduled) {
		// Queue or defer evaluation for all scheduled tasks.
		for(final IStrategoTerm taskID : scheduled) {
			evaluationQueue.queueOrDefer(taskID);
		}
	}

	public void evaluate(IStrategoTerm taskID, Task task, ITaskEngine taskEngine, ITaskEvaluationQueue evaluationQueue,
		IContext context, Strategy insert, Strategy perform) {
		final Iterable<IStrategoTerm> instructions =
			CarthesianProduct.taskCombinations(factory, taskEngine, context, insert, taskID, task);

		// TODO: optimize success/unknown using a bitflag?
		boolean unknown = false;
		boolean failure = true;
		if(instructions != null) {
			for(IStrategoTerm instruction : instructions) {
				final IStrategoTerm result = solve(context, perform, taskID, task, instruction);
				final ResultType resultType = handleResult(taskID, task, result, evaluationQueue);
				switch(resultType) {
					case Fail:
						break;
					case Success:
						failure = false;
						break;
					default: // Unknown result or dynamic dependency.
						unknown = true;
						break;
				}
			}
		}

		if(!unknown) {
			// Try to schedule new tasks even for failed tasks since they may activate combinators.
			evaluationQueue.taskSolved(taskID);

			if(failure)
				task.setFailed();
		}
	}

	public void reset() {
		timer.reset();
	}

	/**
	 * Solves an instruction and returns its raw result.
	 */
	private IStrategoTerm solve(IContext context, Strategy performInstruction, IStrategoTerm taskID, Task task,
		IStrategoTerm instruction) {
		timer.start();
		final IStrategoTerm result = invoke(context, performInstruction, instruction, taskID);
		task.addTime(timer.stop());
		task.addEvaluation();
		return result;
	}

	private enum ResultType {
		DynamicDependency, Fail, Success
	}

	/**
	 * Handles the result of performing an instruction and returns its result type.
	 */
	private ResultType handleResult(IStrategoTerm taskID, Task task, IStrategoTerm result,
		ITaskEvaluationQueue evaluationQueue) {
		if(result == null)
			return ResultType.Fail; // The task failed to produce a result.

		if(Tools.isTermAppl(result)) {
			final IStrategoAppl resultAppl = (IStrategoAppl) result;
			if(resultAppl.getConstructor().equals(dependencyConstructor)) {
				// The task has dynamic dependencies and needs to be delayed.
				evaluationQueue.taskDelayed(taskID, (IStrategoList) resultAppl.getSubterm(0));
				return ResultType.DynamicDependency;
			} else if(resultAppl.getConstructor().equals(singleConstructor)) {
				// The result must be treated as a single result.
				task.addResult(result.getSubterm(0));
				return ResultType.Success;
			} else {
				// Treat as single result.
				task.addResult(result);
				return ResultType.Success;
			}
		} else if(Tools.isTermList(result)) {
			// The task produced multiple results.
			task.addResults(result);
			return ResultType.Success;
		} else {
			// The task produced a single result.
			task.addResult(result);
			return ResultType.Success;
		}
	}
}
