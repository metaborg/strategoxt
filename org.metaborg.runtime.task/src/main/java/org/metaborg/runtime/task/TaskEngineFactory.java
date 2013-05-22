package org.metaborg.runtime.task;

import java.util.Collection;
import java.util.Map.Entry;

import org.spoofax.interpreter.core.Tools;
import org.spoofax.interpreter.library.ssl.StrategoHashMap;
import org.spoofax.interpreter.terms.IStrategoAppl;
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
			IStrategoTerm results = serializeResults(taskEngine.getResult(taskID), factory, serializer);
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
			final IStrategoTerm results = deserializeResults(task.getSubterm(5), factory, serializer);
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

	private IStrategoTerm serializeResults(IStrategoTerm results, ITermFactory factory,
		TermAttachmentSerializer serializer) {
		if(results != null) {
			IStrategoList newResults = factory.makeList();
			for(IStrategoTerm result : results) {
				IStrategoTerm newResult;
				if(isHashMap(result))
					newResult = serializeHashMap((StrategoHashMap) result, factory);
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
				if(isSerializedHashMap(result))
					newResult = deserializeHashMap(result);
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
		return factory.makeAppl(factory.makeConstructor("StrategoHashMap", 1), entries);
	}

	private boolean isHashMap(IStrategoTerm term) {
		return term instanceof StrategoHashMap;
	}

	private boolean isSerializedHashMap(IStrategoTerm term) {
		return Tools.isTermAppl(term) && Tools.hasConstructor((IStrategoAppl) term, "StrategoHashMap");
	}

	private StrategoHashMap deserializeHashMap(IStrategoTerm term) {
		StrategoHashMap hashMap = new StrategoHashMap();
		IStrategoTerm entries = term.getSubterm(0);
		for(IStrategoTerm entry : entries) {
			hashMap.put(entry.getSubterm(0), entry.getSubterm(1));
		}
		return hashMap;
	}
}
