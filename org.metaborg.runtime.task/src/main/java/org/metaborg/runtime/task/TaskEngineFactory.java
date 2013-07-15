package org.metaborg.runtime.task;

import static org.metaborg.runtime.task.util.ListBuilder.makeList;

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
	public IStrategoTerm toTerm(ITaskEngine taskEngine, ITermFactory factory) {
		final TermAttachmentSerializer serializer = new TermAttachmentSerializer(factory);

		IStrategoList tasks = factory.makeList();
		for(final Entry<IStrategoTerm, Task> entry : taskEngine.getTaskEntries()) {
			final IStrategoTerm taskID = entry.getKey();
			final Task task = entry.getValue();
			
			final IStrategoTerm instruction = task.instruction;
			final boolean combinator = task.isCombinator;
			final Iterable<IStrategoString> partitions = taskEngine.getPartitionsOf(taskID);
			final IStrategoList initialDependencies = task.initialDependencies;
			final Iterable<IStrategoTerm> dependencies = taskEngine.getDependencies(taskID);
			final Iterable<IStrategoTerm> reads = taskEngine.getReads(taskID);
			final IStrategoTerm results = serializeResults(task.results(), factory, serializer);
			final boolean failed = task.failed();
			IStrategoTerm message = task.message();
			if(message != null)
				message = serializer.toAnnotations(message);
			final long time = task.time();
			final short evaluations = task.evaluations();
			tasks =
				factory.makeListCons(
					createTaskTerm(factory, taskID, instruction, combinator, partitions, initialDependencies,
						dependencies, reads, results, failed, message, time, evaluations), tasks);
		}

		final IStrategoTerm digestState = taskEngine.getDigester().state(factory);

		return factory.makeTuple(digestState, tasks);
	}

	public ITaskEngine fromTerms(ITaskEngine taskEngine, IStrategoTerm term, ITermFactory factory) {
		final TermAttachmentSerializer serializer = new TermAttachmentSerializer(factory);

		final IStrategoTerm digestState = term.getSubterm(0);
		taskEngine.getDigester().setState(digestState);

		final IStrategoTerm tasks = term.getSubterm(1);
		for(IStrategoTerm task : tasks) {
			final IStrategoTerm taskID = task.getSubterm(0);
			final IStrategoTerm instruction = task.getSubterm(1);
			final IStrategoInt combinator = (IStrategoInt) task.getSubterm(2);
			final IStrategoList partitions = (IStrategoList) task.getSubterm(3);
			final IStrategoList initialDependencies = (IStrategoList) task.getSubterm(4);
			final IStrategoList dependencies = (IStrategoList) task.getSubterm(5);
			final IStrategoList reads = (IStrategoList) task.getSubterm(6);
			final IStrategoTerm results = deserializeResults(task.getSubterm(7), factory, serializer);
			final IStrategoInt failed = (IStrategoInt) task.getSubterm(8);
			final IStrategoTerm message = task.getSubterm(9);
			final IStrategoTerm time = task.getSubterm(10);
			final IStrategoTerm evaluations = task.getSubterm(11);
			taskEngine.addPersistedTask(taskID, instruction, combinator, partitions, initialDependencies, dependencies,
				reads, results, failed, message, time, evaluations);
		}

		return taskEngine;
	}

	private IStrategoTerm createTaskTerm(ITermFactory factory, IStrategoTerm taskID, IStrategoTerm instruction,
		boolean combinator, Iterable<IStrategoString> partitions, IStrategoList initialDependencies,
		Iterable<IStrategoTerm> dependencies, Iterable<IStrategoTerm> reads, IStrategoTerm results, boolean failed,
		IStrategoTerm message, long time,
		short evaluations) {
		return factory.makeTuple(
			taskID, 
			instruction,
			combinator ? factory.makeInt(1) : factory.makeInt(0),
			makeList(factory, partitions), 
			initialDependencies,
			makeList(factory, dependencies),
			makeList(factory, reads), 
			results == null ? factory.makeTuple() : results, 
			failed ? factory.makeInt(1) : factory.makeInt(0), 
			message == null ? factory.makeTuple() : message,
			factory.makeInt((int) time),
			factory.makeInt(evaluations)
		);
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
