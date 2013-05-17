package org.metaborg.runtime.task;

import java.util.Collection;

import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
import org.spoofax.terms.attachments.TermAttachmentSerializer;

public class TaskEngineFactory {
	public IStrategoTerm toTerm(TaskEngine taskEngine, ITermFactory factory) {
		final TermAttachmentSerializer serializer = new TermAttachmentSerializer(factory);

		IStrategoList tasks = factory.makeList();
		for(final IStrategoTerm taskID : taskEngine.getTaskIDs()) {
			final IStrategoTerm instruction = taskEngine.getInstruction(taskID);
			final Collection<IStrategoString> partitions = taskEngine.getPartitionsOf(taskID);
			final Collection<IStrategoTerm> dependencies = taskEngine.getDependencies(taskID);
			final Collection<IStrategoTerm> reads = taskEngine.getReads(taskID);
			IStrategoTerm results = taskEngine.getResult(taskID);
			if(results != null)
				results = serializer.toAnnotations(results);
			final boolean failed = taskEngine.hasFailed(taskID);
			tasks =
				factory.makeListCons(
					createTaskTerm(factory, taskID, instruction, partitions, dependencies, reads, results, failed),
					tasks);
		}

		final IStrategoTerm digestState = taskEngine.getDigester().state(factory);

		return factory.makeTuple(digestState, tasks);
	}

	public TaskEngine fromTerms(TaskEngine taskEngine, IStrategoTerm term, ITermFactory factory) {
		final TermAttachmentSerializer serializer = new TermAttachmentSerializer(factory);

		final IStrategoTerm digestState = term.getSubterm(0);
		taskEngine.getDigester().setState(digestState);

		final IStrategoTerm tasks = term.getSubterm(1);
		for(IStrategoTerm task : tasks) {
			final IStrategoTerm taskID = task.getSubterm(0);
			final IStrategoTerm instruction = task.getSubterm(1);
			final IStrategoList partitions = (IStrategoList) task.getSubterm(2);
			final IStrategoList dependencies = (IStrategoList) task.getSubterm(3);
			final IStrategoList reads = (IStrategoList) task.getSubterm(4);
			final IStrategoTerm results = serializer.fromAnnotations(task.getSubterm(5), false);
			final IStrategoInt failed = (IStrategoInt) task.getSubterm(6);
			taskEngine.addPersistedTask(taskID, instruction, partitions, dependencies, reads, results, failed);
		}

		return taskEngine;
	}

	private IStrategoTerm createTaskTerm(ITermFactory factory, IStrategoTerm taskID, IStrategoTerm instruction,
		Collection<IStrategoString> partitions, Collection<IStrategoTerm> dependencies,
		Collection<IStrategoTerm> reads, IStrategoTerm results, boolean failed) {
		return factory.makeTuple(taskID, instruction, factory.makeList(partitions), factory.makeList(dependencies),
			factory.makeList(reads), results == null ? factory.makeTuple() : results, failed ? factory.makeInt(1)
				: factory.makeInt(0));
	}
}
