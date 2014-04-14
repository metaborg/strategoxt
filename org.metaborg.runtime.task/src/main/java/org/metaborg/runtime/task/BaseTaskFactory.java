package org.metaborg.runtime.task;

import java.util.Collection;
import java.util.LinkedList;

import org.metaborg.runtime.task.engine.TaskManager;
import org.spoofax.interpreter.core.Tools;
import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

public class BaseTaskFactory implements ITaskFactory {
	private final ITermFactory factory;


	public BaseTaskFactory(ITermFactory factory) {
		this.factory = factory;
	}


	@Override
	public IStrategoList adjustDependencies(IStrategoList dependencies) {
		return dependencies;
	}

	@Override
	public ITask create(IStrategoAppl instruction, IStrategoList dependencies, TaskType type, boolean shortCircuit) {
		// HACK: create set task for insert and combine instructions that consist of only set tasks.
		// TODO: should be factored out.
		final ITaskResults taskResults;
		if(Tools.isTermAppl(instruction) && (Tools.hasConstructor(instruction, "Insert", 1))
			|| (Tools.hasConstructor(instruction, "Combine", 1))) {
			IStrategoTerm innerResults = instruction.getSubterm(0);
			if(innerResults.getTermType() != IStrategoTerm.LIST)
				innerResults = factory.makeList(innerResults);

			final Collection<IStrategoTerm> results = new LinkedList<IStrategoTerm>();
			for(IStrategoTerm result : innerResults) {
				if(Tools.isTermAppl(result) && Tools.hasConstructor((IStrategoAppl) result, "Result", 1)) {
					results.add(result.getSubterm(0));
				}
			}

			boolean set = results.size() != 0;
			for(IStrategoTerm taskID : results) {
				final ITask task = TaskManager.getInstance().getCurrent().getTask(taskID);
				set = task != null && (task.results() instanceof SetTaskResults) && set;
			}

			if(set) {
				taskResults = new SetTaskResults();
			} else {
				taskResults = new ListTaskResults();
			}
		} else {
			taskResults = new ListTaskResults();
		}

		return new Task(instruction, dependencies, type, shortCircuit, taskResults);
	}

	@Override
	public ITask clone(ITask task) {
		return new Task((Task) task); // TODO: get rid of cast or ITask interface.
	}
}
