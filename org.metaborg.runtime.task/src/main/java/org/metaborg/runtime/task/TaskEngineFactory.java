package org.metaborg.runtime.task;

import java.util.Collection;

import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoConstructor;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
import org.spoofax.terms.TermFactory;
import org.spoofax.terms.attachments.TermAttachmentSerializer;

public class TaskEngineFactory {
	private static final IStrategoConstructor TASK_CONSTRUCTOR = new TermFactory().makeConstructor("Task", 7);

	public IStrategoList toTerm(TaskEngine taskEngine, ITermFactory factory) {
		final TermAttachmentSerializer serializer = new TermAttachmentSerializer(factory);
		IStrategoList tasks = factory.makeList();
		for(final IStrategoInt taskID : taskEngine.getTaskIDs()) {
			final IStrategoTerm instruction = taskEngine.getInstruction(taskID);
			final Collection<IStrategoString> partitions = taskEngine.getPartitionsOf(taskID);
			final Collection<IStrategoInt> dependencies = taskEngine.getDependencies(taskID);
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
		return tasks;
	}

	public TaskEngine fromTerms(TaskEngine taskEngine, IStrategoList tasks, ITermFactory factory) {
		final TermAttachmentSerializer serializer = new TermAttachmentSerializer(factory);
		while(!tasks.isEmpty()) {
			final IStrategoAppl task = (IStrategoAppl) tasks.head();
			final IStrategoInt taskID = (IStrategoInt) task.getSubterm(0);
			final IStrategoTerm instruction = task.getSubterm(1);
			final IStrategoList partitions = (IStrategoList) task.getSubterm(2);
			final IStrategoList dependencies = (IStrategoList) task.getSubterm(3);
			final IStrategoList reads = (IStrategoList) task.getSubterm(4);
			final IStrategoTerm results = serializer.fromAnnotations(task.getSubterm(5), false);
			final IStrategoInt failed = (IStrategoInt) task.getSubterm(6);
			taskEngine.addPersistedTask(taskID, instruction, partitions, dependencies, reads, results, failed);
			tasks = tasks.tail();
		}

		return taskEngine;
	}

	private IStrategoAppl createTaskTerm(ITermFactory factory, IStrategoInt taskID, IStrategoTerm instruction,
		Collection<IStrategoString> partitions, Collection<IStrategoInt> dependencies, Collection<IStrategoTerm> reads,
		IStrategoTerm results, boolean failed) {
		return factory.makeAppl(TASK_CONSTRUCTOR, taskID, instruction, factory.makeList(partitions),
			factory.makeList(dependencies), factory.makeList(reads), results == null ? factory.makeTuple() : results,
			failed ? factory.makeInt(1) : factory.makeInt(0));
	}
}
