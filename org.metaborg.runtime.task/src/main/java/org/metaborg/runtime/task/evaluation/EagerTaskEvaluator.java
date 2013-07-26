package org.metaborg.runtime.task.evaluation;

import java.util.Set;

import org.metaborg.runtime.task.ITaskEngine;
import org.metaborg.runtime.task.Task;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;
import org.spoofax.interpreter.terms.ITermFactory;

import com.google.common.collect.Sets;

public class EagerTaskEvaluator extends AbstractTaskEvaluator {
	public EagerTaskEvaluator(ITaskEngine taskEngine, ITermFactory factory) {
		super(taskEngine, factory);
	}

	public IStrategoTuple evaluate(Set<IStrategoTerm> scheduled, IContext context, Strategy insert, Strategy perform) {
		try {
			// Queue or defer scheduled tasks.
			for(final IStrategoTerm taskID : scheduled) {
				queueOrDefer(taskID);
			}

			// Evaluate each task in the queue.
			final Set<IStrategoTerm> evaluated = Sets.newHashSet();
			final Set<IStrategoTerm> skipped = Sets.newHashSet();
			evaluateQueuedTasks(scheduled, skipped, evaluated, context, insert, perform);

			// Debug unevaluated tasks if debugging is enabled.
			TaskEvaluationDebugging.debugUnevaluated(taskEngine, scheduled, toRuntimeDependency);

			// Return evaluated, skipped and unevaluated task identifiers.
			return factory.makeTuple(factory.makeList(evaluated), factory.makeList(skipped),
				factory.makeList(scheduled));
		} finally {
			reset();
		}
	}

	protected void evaluateTask(Set<IStrategoTerm> scheduled, Set<IStrategoTerm> skipped, Set<IStrategoTerm> evaluated,
		IContext context, Strategy insert, Strategy perform, IStrategoTerm taskID, Task task) {
		evaluateRegularTask(context, insert, perform, taskID, task);
	}
}
