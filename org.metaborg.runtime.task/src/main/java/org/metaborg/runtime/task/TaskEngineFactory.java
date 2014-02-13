package org.metaborg.runtime.task;

import static org.metaborg.runtime.task.util.TermTools.isNull;
import static org.metaborg.runtime.task.util.TermTools.makeBool;
import static org.metaborg.runtime.task.util.TermTools.makeList;
import static org.metaborg.runtime.task.util.TermTools.makeLong;
import static org.metaborg.runtime.task.util.TermTools.makeNullable;
import static org.metaborg.runtime.task.util.TermTools.makeShort;
import static org.metaborg.runtime.task.util.TermTools.takeBool;
import static org.metaborg.runtime.task.util.TermTools.takeLong;
import static org.metaborg.runtime.task.util.TermTools.takeShort;

import java.util.Map.Entry;

import org.spoofax.interpreter.core.Tools;
import org.spoofax.interpreter.library.ssl.StrategoHashMap;
import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
import org.spoofax.terms.attachments.TermAttachmentSerializer;

public class TaskEngineFactory {
	public IStrategoTerm toTerm(ITaskEngine taskEngine, ITermFactory factory) {
		final TermAttachmentSerializer serializer = new TermAttachmentSerializer(factory);

		IStrategoList tasks = factory.makeList();
		for(final Entry<IStrategoTerm, Task> entry : taskEngine.getTaskEntries()) {
			final IStrategoTerm taskID = entry.getKey();
			final Task task = entry.getValue();

			final Iterable<IStrategoTerm> sources = taskEngine.getSourcesOf(taskID);
			final Iterable<IStrategoTerm> dependencies = taskEngine.getDependencies(taskID);
			final Iterable<IStrategoTerm> reads = taskEngine.getReads(taskID);
			final IStrategoTerm results = serializeResults(task.results(), factory, serializer);
			IStrategoTerm message = task.message();
			if(message != null)
				message = serializer.toAnnotations(message);
			tasks =
				factory.makeListCons(
					createTaskTerm(factory, taskID, task, sources, dependencies, reads, results, message), tasks);
		}

		final IStrategoTerm digestState = taskEngine.getDigester().state(factory);

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
			final IStrategoTerm instruction = taskTerm.getSubterm(++i);
			final IStrategoInt isCombinator = (IStrategoInt) taskTerm.getSubterm(++i);
			final IStrategoInt shortCircuit = (IStrategoInt) taskTerm.getSubterm(++i);
			final IStrategoList sources = (IStrategoList) taskTerm.getSubterm(++i);
			final IStrategoList initialDependencies = (IStrategoList) taskTerm.getSubterm(++i);
			final IStrategoList dependencies = (IStrategoList) taskTerm.getSubterm(++i);
			final IStrategoList reads = (IStrategoList) taskTerm.getSubterm(++i);
			final IStrategoTerm results = deserializeResults(taskTerm.getSubterm(++i), factory, serializer);
			final IStrategoInt status = (IStrategoInt) taskTerm.getSubterm(++i);
			final IStrategoTerm message = taskTerm.getSubterm(++i);
			final IStrategoTerm time = taskTerm.getSubterm(++i);
			final IStrategoTerm evaluations = taskTerm.getSubterm(++i);
			final IStrategoTerm instructionOverride = taskTerm.getSubterm(++i);

			final Task task =
				new Task(instruction, initialDependencies, takeBool(isCombinator), takeBool(shortCircuit));
			task.overrideInstruction(instructionOverride);
			if(!isNull(results))
				task.setResults(results);
			task.setStatus(TaskStatus.get(status.intValue()));
			if(!isNull(message))
				task.setMessage(message);
			task.setTime(takeLong(time));
			task.setEvaluations(takeShort(evaluations));

			taskEngine.addPersistedTask(taskID, task, sources, initialDependencies, dependencies, reads);
		}

		return taskEngine;
	}

	private IStrategoTerm createTaskTerm(ITermFactory factory, IStrategoTerm taskID, Task task,
		Iterable<IStrategoTerm> sources, Iterable<IStrategoTerm> dependencies, Iterable<IStrategoTerm> reads,
		IStrategoTerm results, IStrategoTerm message) {
		return factory.makeTuple(taskID, task.instruction, makeBool(factory, task.isCombinator),
			makeBool(factory, task.shortCircuit), makeList(factory, sources), task.initialDependencies,
			makeList(factory, dependencies), makeList(factory, reads), makeNullable(factory, results),
			factory.makeInt(task.status().id), makeNullable(factory, message), makeLong(factory, task.time()),
			makeShort(factory, task.evaluations()), makeNullable(factory, task.instructionOverride()));
	}

	private IStrategoList serializeResults(Iterable<IStrategoTerm> results, ITermFactory factory,
		TermAttachmentSerializer serializer) {
		if(results != null) {
			IStrategoList newResults = factory.makeList();
			for(IStrategoTerm result : results) {
				IStrategoTerm newResult;
				if(isHashMap(result))
					newResult = serializeHashMap((StrategoHashMap) result.getSubterm(0), factory);
				else
					newResult = result;
				newResults = factory.makeListCons(serializer.toAnnotations(newResult), newResults);
			}
			return newResults;
		}
		return null;
	}

	private IStrategoTerm deserializeResults(IStrategoTerm results, ITermFactory factory,
		TermAttachmentSerializer serializer) {
		if(Tools.isTermList(results)) {
			IStrategoList newResults = factory.makeList();
			for(IStrategoTerm result : results) {
				IStrategoTerm newResult;
				if(isHashMap(result))
					newResult = deserializeHashMap(result, factory);
				else
					newResult = result;
				newResults = factory.makeListCons(serializer.fromAnnotations(newResult, false), newResults);
			}
			return newResults;
		}
		return results;
	}

	private IStrategoTerm serializeHashMap(StrategoHashMap hashMap, ITermFactory factory) {
		IStrategoList entries = factory.makeList();
		for(Entry<IStrategoTerm, IStrategoTerm> entry : hashMap.entrySet()) {
			entries = factory.makeListCons(factory.makeTuple(entry.getKey(), entry.getValue()), entries);
		}
		return factory.makeAppl(factory.makeConstructor("Hashtable", 1), entries);
	}

	private boolean isHashMap(IStrategoTerm term) {
		return Tools.isTermAppl(term) && Tools.hasConstructor((IStrategoAppl) term, "Hashtable");
	}

	private IStrategoTerm deserializeHashMap(IStrategoTerm term, ITermFactory factory) {
		StrategoHashMap hashMap = new StrategoHashMap();
		IStrategoTerm entries = term.getSubterm(0);
		for(IStrategoTerm entry : entries) {
			hashMap.put(entry.getSubterm(0), entry.getSubterm(1));
		}
		return factory.makeAppl(factory.makeConstructor("Hashtable", 1), hashMap);
	}
}
