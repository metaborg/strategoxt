package org.metaborg.runtime.task.util;

import static org.metaborg.runtime.task.util.InvokeStrategy.invoke;
import static org.metaborg.runtime.task.util.ListBuilder.makeList;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.Map.Entry;
import java.util.NoSuchElementException;

import org.metaborg.runtime.task.ITaskEngine;
import org.metaborg.runtime.task.Task;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.library.ssl.StrategoHashMap;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

import com.google.common.collect.Iterables;
import com.google.common.collect.LinkedHashMultimap;
import com.google.common.collect.Multimap;
import com.google.common.collect.UnmodifiableIterator;

public final class CarthesianProduct {
	public static Collection<StrategoHashMap> cartesianProduct(Multimap<IStrategoTerm, IStrategoTerm> results) {
		Collection<StrategoHashMap> result = new ArrayList<StrategoHashMap>();
		if(results.size() > 0)
			result.add(new StrategoHashMap());

		for(Entry<IStrategoTerm, Collection<IStrategoTerm>> entry : results.asMap().entrySet()) {
			Collection<StrategoHashMap> newResults = new ArrayList<StrategoHashMap>();
			for(StrategoHashMap map : result) {
				for(IStrategoTerm val : entry.getValue()) {
					StrategoHashMap mapping = new StrategoHashMap();
					mapping.putAll(map);
					mapping.put(entry.getKey(), val);
					newResults.add(mapping);
				}
			}
			result = newResults;
		}
		return result;
	}

	public static Iterable<IStrategoTerm> taskCombinations(ITermFactory factory, ITaskEngine taskEngine,
		IContext context, Strategy insert, IStrategoTerm taskID, Task task) {
		final IStrategoTerm instruction = task.instruction;
		final boolean isCombinator = task.isCombinator;
		final Iterable<IStrategoTerm> resultIDs = taskEngine.getDependencies(taskID);

		if(Iterables.isEmpty(resultIDs)) {
			return singletonIterable(instruction);
		} else if(!isCombinator) {
			return termCombinations(factory, taskEngine, context, insert, instruction, resultIDs);
		} else {
			return noCombinations(factory, taskEngine, context, insert, instruction, resultIDs);
		}
	}

	public static Iterable<IStrategoTerm> termCombinations(ITermFactory factory, ITaskEngine taskEngine,
		IContext context, Strategy insert, IStrategoTerm term, Iterable<IStrategoTerm> resultIDs) {
		final Collection<IStrategoTerm> instructions = new LinkedList<IStrategoTerm>();

		// TODO: prevent construction of a multimap by changing cartesianProduct to accept a list of task IDs.
		final Multimap<IStrategoTerm, IStrategoTerm> resultsMap = LinkedHashMultimap.create();
		for(IStrategoTerm resultID : resultIDs) {
			final Task task = taskEngine.getTask(resultID);
			if(task.failed() || !task.hasResults())
				return null;  // If a dependency does not have any results, the task cannot be executed.
			resultsMap.putAll(resultID, task.results());
		}

		final Collection<StrategoHashMap> resultCombinations = cartesianProduct(resultsMap);
		for(StrategoHashMap mapping : resultCombinations) {
			instructions.add(insertResults(context, insert, term, mapping));
		}

		return instructions;
	}

	public static Iterable<IStrategoTerm> noCombinations(ITermFactory factory, ITaskEngine taskEngine,
		IContext context, Strategy insert, IStrategoTerm term, Iterable<IStrategoTerm> resultIDs) {
		final StrategoHashMap mapping = new StrategoHashMap();
		for(IStrategoTerm resultID : resultIDs) {
			final Task task = taskEngine.getTask(resultID);
			mapping.put(resultID, makeList(factory, task.results()));
		}

		return singletonIterable(insertResults(context, insert, term, mapping));
	}

	private static IStrategoTerm insertResults(IContext context, Strategy insertResults, IStrategoTerm instruction,
		StrategoHashMap resultCombinations) {
		return invoke(context, insertResults, instruction,
			createHashtableTerm(context.getFactory(), resultCombinations));
	}

	private static IStrategoAppl createHashtableTerm(ITermFactory factory, StrategoHashMap hashMap) {
		return factory.makeAppl(factory.makeConstructor("Hashtable", 1), hashMap);
	}

	public static <T> Iterable<T> singletonIterable(final T value) {
		return new Iterable<T>() {
			public Iterator<T> iterator() {
				return new UnmodifiableIterator<T>() {
					boolean done;

					public boolean hasNext() {
						return !done;
					}

					public T next() {
						if(done) {
							throw new NoSuchElementException();
						}
						done = true;
						return value;
					}
				};
			}
		};
	}
}
