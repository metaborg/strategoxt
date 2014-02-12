package org.metaborg.runtime.task.evaluation;

import static org.metaborg.runtime.task.util.InvokeStrategy.invoke;

import java.util.Set;

import org.metaborg.runtime.task.ITaskEngine;
import org.metaborg.runtime.task.Task;
import org.metaborg.runtime.task.TaskInsertion;
import org.metaborg.runtime.task.util.Timer;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.Tools;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoConstructor;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

import fj.P2;

public class BaseTaskEvaluator implements ITaskEvaluator {
	private final ITermFactory factory;
	private final IStrategoConstructor higherOrderConstructor;
	private final IStrategoConstructor higherOrderFailConstructor;


	/** Task identifier of the task that is currently being evaluated. **/
	private IStrategoTerm current = null;

	/** Flag indicating if the current task has been delayed. **/
	private boolean delayed = false;

	/** Timer for measuring task time. **/
	private final Timer timer = new Timer();


	public BaseTaskEvaluator(ITermFactory factory) {
		this.factory = factory;
		this.higherOrderConstructor = factory.makeConstructor("HigherOrder", 2);
		this.higherOrderFailConstructor = factory.makeConstructor("HigherOrderFail", 1);
	}

	@Override
	public IStrategoList adjustDependencies(IStrategoList dependencies, ITermFactory factory) {
		return dependencies;
	}

	@Override
	public void queue(ITaskEngine taskEngine, ITaskEvaluationQueue evaluationQueue, Set<IStrategoTerm> scheduled) {
		// Queue or defer evaluation for all scheduled tasks.
		for(final IStrategoTerm taskID : scheduled) {
			evaluationQueue.queueOrDefer(taskID);
		}
	}

	@Override
	public void evaluate(IStrategoTerm taskID, Task task, ITaskEngine taskEngine, ITaskEvaluationQueue evaluationQueue,
		IContext context, Strategy collect, Strategy insert, Strategy perform) {
		evaluate(taskID, task, taskEngine, evaluationQueue, context, collect, insert, perform, false);
	}

	@Override
	public void evaluateCyclic(IStrategoTerm taskID, Task task, ITaskEngine taskEngine,
		ITaskEvaluationQueue evaluationQueue, IContext context, Strategy collect, Strategy insert, Strategy perform) {
		evaluate(taskID, task, taskEngine, evaluationQueue, context, collect, insert, perform, true);
	}

	private void evaluate(IStrategoTerm taskID, Task task, ITaskEngine taskEngine,
		ITaskEvaluationQueue evaluationQueue, IContext context, Strategy collect, Strategy insert, Strategy perform,
		boolean cyclic) {
		delayed = false;
		current = taskID;

		final P2<? extends Iterable<IStrategoTerm>, Boolean> combinations =
			TaskInsertion.taskCombinations(factory, taskEngine, context, collect, insert, taskID, task, false);

		if(combinations != null && combinations._2()) {
			// Inserting results failed because some tasks were not solved yet.
			evaluationQueue.delay(taskID, combinations._1());
			return;
		}

		final boolean execute = combinations != null;

		// TODO: optimize success/unknown using a bitflag?
		boolean higherOrder = false;
		boolean failure = true;
		if(execute) {
			for(IStrategoTerm instruction : combinations._1()) {
				if(cyclic)
					instruction = factory.makeTuple(instruction, factory.makeString("cyclic"));

				final IStrategoTerm result = solve(context, perform, taskID, task, instruction);
				final TaskResultType resultType = handleResult(taskID, task, result, evaluationQueue);

				boolean done = false;
				switch(resultType) {
					case Fail:
						break;
					case Success:
						failure = false;
						if(task.shortCircuit)
							done = true;
						break;
					case HigherOrder:
						higherOrder = true;
						break;
				}

				if(done || delayed)
					break;
			}
		}

		if(!higherOrder && !delayed) {
			// Try to schedule new tasks even for failed tasks since they may activate combinators.
			evaluationQueue.taskSolved(taskID);

			if(failure)
				if(!execute)
					task.setDependencyFailed();
				else
					task.setFailed();
		}

		delayed = false;
		current = null;
	}

	@Override
	public IStrategoTerm current() {
		return current;
	}

	@Override
	public void delay() {
		delayed = true;
	}

	@Override
	public void reset() {
		delayed = false;
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

	/**
	 * Handles the result of performing an instruction and returns its result type.
	 */
	private TaskResultType handleResult(IStrategoTerm taskID, Task task, IStrategoTerm result,
		ITaskEvaluationQueue evaluationQueue) {
		if(result == null)
			return TaskResultType.Fail; // The task failed to produce a result.

		if(Tools.isTermAppl(result)) {
			final IStrategoAppl resultAppl = (IStrategoAppl) result;
			if(resultAppl.getConstructor().equals(higherOrderConstructor)) {
				// The task is a higher order task and has produced new tasks.
				IStrategoTerm newInstruction = resultAppl.getSubterm(0);
				IStrategoTerm createdTasks = resultAppl.getSubterm(1);

				task.overrideInstruction(newInstruction);

				for(IStrategoTerm createdTaskID : createdTasks)
					evaluationQueue.queueOrDefer(createdTaskID);

				if(createdTasks.iterator().hasNext()) {
					evaluationQueue.delay(taskID, createdTasks);
				} else {
					evaluationQueue.queue(taskID);
				}

				return TaskResultType.HigherOrder;
			} else if(resultAppl.getConstructor().equals(higherOrderFailConstructor)) {
				// The task is a higher order task and has produced new tasks, but failed.
				IStrategoTerm createdTasks = resultAppl.getSubterm(0);
				for(IStrategoTerm createdTaskID : createdTasks)
					evaluationQueue.queueOrDefer(createdTaskID);

				return TaskResultType.Fail;
			} else {
				// Treat as single result.
				task.addResult(result);
				return TaskResultType.Success;
			}
		} else if(Tools.isTermList(result)) {
			// The task produced multiple results.
			task.addResults(result);
			return TaskResultType.Success;
		} else {
			// The task produced a single result.
			task.addResult(result);
			return TaskResultType.Success;
		}
	}
}
