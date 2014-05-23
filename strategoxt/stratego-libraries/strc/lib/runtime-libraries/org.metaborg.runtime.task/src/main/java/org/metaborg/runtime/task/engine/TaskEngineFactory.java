package org.metaborg.runtime.task.engine;

import static org.metaborg.runtime.task.util.TermTools.*;

import java.util.Map.Entry;

import org.metaborg.runtime.task.ITask;
import org.metaborg.runtime.task.TaskStatus;
import org.metaborg.runtime.task.TaskStorageType;
import org.metaborg.runtime.task.TaskType;
import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
import org.spoofax.terms.attachments.TermAttachmentSerializer;

public class TaskEngineFactory {
	public IStrategoTerm toTerm(ITaskEngine taskEngine, ITermFactory factory) {
		final TermAttachmentSerializer serializer = new TermAttachmentSerializer(factory);

		final IStrategoTerm digestState = taskEngine.getDigester().state(factory);

		IStrategoList tasks = factory.makeList();
		for(final Entry<IStrategoTerm, ITask> entry : taskEngine.getTaskEntries()) {
			final IStrategoTerm taskID = entry.getKey();
			final ITask task = entry.getValue();

			IStrategoTerm results = serializer.toAnnotations(makeList(factory, task.results()));
			IStrategoTerm message = task.message();
			if(message != null)
				message = serializer.toAnnotations(message);

			final Iterable<IStrategoTerm> sources = taskEngine.getSourcesOf(taskID);
			final Iterable<IStrategoTerm> dependencies = taskEngine.getDependencies(taskID, false);
			final Iterable<IStrategoTerm> dynamicDependencies = taskEngine.getDynamicDependencies(taskID);
			final Iterable<IStrategoTerm> reads = taskEngine.getReads(taskID);

			// @formatter:off
			final IStrategoTerm taskTuple = factory.makeTuple(
				taskID,
				task.initialInstruction(),
				task.initialDependencies(),
				factory.makeInt(task.type().id),
				factory.makeInt(task.storageType().id),
				makeBool(factory, task.shortCircuit()),
				makeNullable(factory, task.instructionOverride()),
				results,
				factory.makeInt(task.status().id),
				makeNullable(factory, message),
				makeLong(factory, task.time()),
				makeShort(factory, task.evaluations()),

				makeList(factory, sources),
				makeList(factory, dependencies),
				makeList(factory, dynamicDependencies),
				makeList(factory, reads)
			);
			// @formatter:on

			tasks = factory.makeListCons(taskTuple, tasks);
		}

		return factory.makeTuple(digestState, tasks);
	}

	public ITaskEngine fromTerms(ITaskEngine taskEngine, IStrategoTerm term, ITermFactory factory) {
		final TermAttachmentSerializer serializer = new TermAttachmentSerializer(factory);

		final IStrategoTerm digestState = term.getSubterm(0);
		taskEngine.getDigester().setState(digestState);

		final IStrategoTerm tasks = term.getSubterm(1);
		for(IStrategoTerm taskTerm : tasks) {
			int i = -1;

			final IStrategoTerm taskID = taskTerm.getSubterm(++i);
			final IStrategoAppl instruction = (IStrategoAppl) taskTerm.getSubterm(++i);
			final IStrategoList initialDependencies = (IStrategoList) taskTerm.getSubterm(++i);
			final IStrategoInt type = (IStrategoInt) taskTerm.getSubterm(++i);
			final IStrategoInt storageType = (IStrategoInt) taskTerm.getSubterm(++i);
			final IStrategoInt shortCircuit = (IStrategoInt) taskTerm.getSubterm(++i);
			final IStrategoTerm instructionOverride = taskTerm.getSubterm(++i);
			final IStrategoTerm results = serializer.fromAnnotations(taskTerm.getSubterm(++i), false);
			final IStrategoInt status = (IStrategoInt) taskTerm.getSubterm(++i);
			final IStrategoTerm message = serializer.fromAnnotations(taskTerm.getSubterm(++i), false);
			final IStrategoTerm time = taskTerm.getSubterm(++i);
			final IStrategoTerm evaluations = taskTerm.getSubterm(++i);

			final IStrategoList sources = (IStrategoList) taskTerm.getSubterm(++i);
			final IStrategoList dependencies = (IStrategoList) taskTerm.getSubterm(++i);
			final IStrategoList dynamicDependencies = (IStrategoList) taskTerm.getSubterm(++i);
			final IStrategoList reads = (IStrategoList) taskTerm.getSubterm(++i);

			final ITask task =
				taskEngine.getTaskFactory(instruction).create(instruction, initialDependencies,
					TaskType.get(type.intValue()), TaskStorageType.get(storageType.intValue()), takeBool(shortCircuit));
			if(!isNull(instructionOverride))
				task.overrideInstruction((IStrategoAppl) instructionOverride);
			if(!isNull(results))
				task.results().set(results);
			task.setStatus(TaskStatus.get(status.intValue()));
			if(!isNull(message))
				task.setMessage(message);
			task.setTime(takeLong(time));
			task.setEvaluations(takeShort(evaluations));
			taskEngine.addPersistedTask(taskID, task, initialDependencies);

			for(final IStrategoTerm source : sources)
				taskEngine.addToSource(taskID, source);
			for(final IStrategoTerm dependency : dependencies)
				taskEngine.addDependency(taskID, dependency);
			taskEngine.setDynamicDependencies(taskID, dynamicDependencies);
			for(final IStrategoTerm read : reads)
				taskEngine.addRead(taskID, read);
		}

		return taskEngine;
	}
}
