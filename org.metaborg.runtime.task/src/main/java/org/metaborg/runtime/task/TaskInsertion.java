package org.metaborg.runtime.task;

import static org.metaborg.runtime.task.util.InvokeStrategy.invoke;
import static org.metaborg.runtime.task.util.ListBuilder.makeList;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.Map.Entry;
import java.util.NoSuchElementException;

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

public final class TaskInsertion {
	/**
	 * Returns all instruction permutations of given task based on its dependencies. For regular tasks,
	 * {@link #instructionCombinations} is called. For task combinators, {@link #combinatorCombinations} is called. This
	 * function assumes that all dependencies of the given task have been solved.
	 */
	public static Iterable<IStrategoTerm> taskCombinations(ITermFactory factory, ITaskEngine taskEngine,
		IContext context, Strategy insert, IStrategoTerm taskID, Task task) {
		final IStrategoTerm instruction = task.instruction;
		final boolean isCombinator = task.isCombinator;
		final Iterable<IStrategoTerm> resultIDs = taskEngine.getDependencies(taskID);

		if(Iterables.isEmpty(resultIDs)) {
			return singletonIterable(instruction);
		} else if(!isCombinator) {
			return instructionCombinations(taskEngine, context, insert, instruction, resultIDs);
		} else {
			return combinatorCombinations(factory, taskEngine, context, insert, instruction, resultIDs);
		}
	}

	/**
	 * Returns instruction permutations for a regular instruction. To create all permutations a cartesian product of all
	 * dependencies is created and applied to the instruction. If all dependencies have only one result, this will
	 * result in just one instruction. If a dependency has failed or has no results, null is returned instead.
	 */
	public static Iterable<IStrategoTerm> instructionCombinations(ITaskEngine taskEngine, IContext context,
		Strategy insert, IStrategoTerm instruction, Iterable<IStrategoTerm> dependencies) {
		final Collection<IStrategoTerm> instructions = new LinkedList<IStrategoTerm>();

		// TODO: prevent construction of a multimap by changing cartesianProduct to accept a list of task IDs.
		final Multimap<IStrategoTerm, IStrategoTerm> resultsMap = LinkedHashMultimap.create();
		for(IStrategoTerm resultID : dependencies) {
			final Task task = taskEngine.getTask(resultID);
			if(task.failed() || !task.hasResults())
				return null;  // If a dependency does not have any results, the term cannot be constructed.
			resultsMap.putAll(resultID, task.results());
		}

		final Collection<StrategoHashMap> resultCombinations = cartesianProduct(resultsMap);
		for(StrategoHashMap mapping : resultCombinations) {
			instructions.add(insertResults(context, insert, instruction, mapping));
		}

		return instructions;
	}

	/**
	 * Returns an iterable that only has one instruction where the results have been inserted as lists.
	 */
	public static Iterable<IStrategoTerm> combinatorCombinations(ITermFactory factory, ITaskEngine taskEngine,
		IContext context, Strategy insert, IStrategoTerm term, Iterable<IStrategoTerm> resultIDs) {
		final StrategoHashMap mapping = new StrategoHashMap();
		for(IStrategoTerm resultID : resultIDs) {
			final Task task = taskEngine.getTask(resultID);
			mapping.put(resultID, makeList(factory, task.results()));
		}

		return singletonIterable(insertResults(context, insert, term, mapping));
	}

	/**
	 * Given a multimap from task identifiers to their results, returns the cartesian product of that mapping. The
	 * product is returned as a collection of maps that map task identifiers to one result.
	 */
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

	private static IStrategoTerm insertResults(IContext context, Strategy insertResults, IStrategoTerm instruction,
		StrategoHashMap resultCombinations) {
		return invoke(context, insertResults, instruction,
			createHashtableTerm(context.getFactory(), resultCombinations));
	}

	private static IStrategoAppl createHashtableTerm(ITermFactory factory, StrategoHashMap hashMap) {
		return factory.makeAppl(factory.makeConstructor("Hashtable", 1), hashMap);
	}

	private static <T> Iterable<T> singletonIterable(final T value) {
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
