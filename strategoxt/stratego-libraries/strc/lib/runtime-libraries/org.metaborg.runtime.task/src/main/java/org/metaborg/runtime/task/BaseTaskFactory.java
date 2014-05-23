package org.metaborg.runtime.task;

import java.util.Collection;
import java.util.LinkedList;

import org.metaborg.runtime.task.engine.ITaskEngine;
import org.spoofax.interpreter.core.Tools;
import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

public class BaseTaskFactory implements ITaskFactory {
	private final ITermFactory factory;
	private final ITaskEngine taskEngine;


	public BaseTaskFactory(ITermFactory factory, ITaskEngine taskEngine) {
		this.factory = factory;
		this.taskEngine = taskEngine;
	}


	@Override
	public IStrategoList adjustDependencies(IStrategoList dependencies) {
		return dependencies;
	}

	@Override
	public ITask create(IStrategoAppl instruction, IStrategoList dependencies, TaskType type,
		TaskStorageType storageType, boolean shortCircuit) {
		final ITaskResults taskResults;
		switch(storageType) {
			case Auto: {
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
					final ITask task = taskEngine.getTask(taskID);
					set = task != null && (task.results() instanceof SetTaskResults) && set;
				}

				if(set) {
					taskResults = new SetTaskResults();
				} else {
					taskResults = new ListTaskResults();
				}
				break;
			}
			case List: {
				taskResults = new ListTaskResults();
				break;
			}
			case Set: {
				taskResults = new SetTaskResults();
				break;
			}
			default: {
				throw new RuntimeException("Unhandled task storage type " + storageType);
			}
		}

		return new Task(instruction, dependencies, type, storageType, shortCircuit, taskResults);
	}

	@Override
	public ITask clone(ITask task) {
		return new Task((Task) task); // TODO: get rid of cast or ITask interface.
	}
}
