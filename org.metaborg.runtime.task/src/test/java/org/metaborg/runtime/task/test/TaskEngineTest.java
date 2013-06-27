package org.metaborg.runtime.task.test;

import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;

import org.junit.Before;
import org.junit.Test;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;

import com.google.common.collect.Iterables;

public class TaskEngineTest extends TaskTest {
	private final IStrategoString partition1 = str("String.java");
	private final IStrategoString partition2 = str("Integer.java");

	private final IStrategoTerm resolveInstruction = resolve("Java", segment("Package", "java"),
		segment("Package", "util"), segment("Class", "String"));
	private final IStrategoTerm resolveImportInstruction = resolveImport("Java", segment("Package", "java"),
		segment("Package", "util"), segment("Class", "String"));

	@Before
	public void setUp() {
		taskEngine.reset();
	}

	@Test
	public void testAddTasks() {
		taskEngine.startCollection(partition1);
		IStrategoTerm resolveResult = taskEngine.addTask(partition1, dependencies(), resolveInstruction, false);
		IStrategoTerm resolveID = resultID(resolveResult);
		IStrategoTerm resolveImportResult =
			taskEngine.addTask(partition1, dependencies(), resolveImportInstruction, false);
		IStrategoTerm resolveImportID = resultID(resolveImportResult);
		taskEngine.stopCollection(partition1);

		IStrategoTerm choiceInstruction = choice(resolveResult, resolveImportResult);
		taskEngine.startCollection(partition2);
		IStrategoTerm choiceResult =
			taskEngine.addTask(partition2, dependencies(resolveResult, resolveImportResult), choiceInstruction, true);
		IStrategoTerm choiceID = resultID(choiceResult);
		taskEngine.stopCollection(partition2);

		assertEquals(resolveInstruction, taskEngine.getTask(resolveID).instruction);
		assertEquals(resolveImportInstruction, taskEngine.getTask(resolveImportID).instruction);
		assertEquals(choiceInstruction, taskEngine.getTask(choiceID).instruction);

		assertTrue(assertContains(taskEngine.getPartitionsOf(resolveID), partition1));
		assertFalse(assertContains(taskEngine.getPartitionsOf(resolveID), partition2));
		assertTrue(assertContains(taskEngine.getPartitionsOf(resolveImportID), partition1));
		assertFalse(assertContains(taskEngine.getPartitionsOf(resolveImportID), partition2));
		assertTrue(assertContains(taskEngine.getPartitionsOf(choiceID), partition2));
		assertFalse(assertContains(taskEngine.getPartitionsOf(choiceID), partition1));

		assertTrue(assertContains(taskEngine.getInPartition(partition1), resolveID));
		assertTrue(assertContains(taskEngine.getInPartition(partition1), resolveImportID));
		assertFalse(assertContains(taskEngine.getInPartition(partition1), choiceID));
		assertFalse(assertContains(taskEngine.getInPartition(partition2), resolveID));
		assertFalse(assertContains(taskEngine.getInPartition(partition2), resolveImportID));
		assertTrue(assertContains(taskEngine.getInPartition(partition2), choiceID));
		
		assertEquals(0, Iterables.size(taskEngine.getDependencies(resolveID)));
		assertEquals(0, Iterables.size(taskEngine.getDependencies(resolveImportID)));
		assertTrue(assertContains(taskEngine.getDependencies(choiceID), resolveID));
		assertTrue(assertContains(taskEngine.getDependencies(choiceID), resolveImportID));

		assertTrue(assertContains(taskEngine.getDependent(resolveID), choiceID));
		assertTrue(assertContains(taskEngine.getDependent(resolveImportID), choiceID));
		assertEquals(0, Iterables.size(taskEngine.getDependent(choiceID)));
	}

	@Test
	public void testNoDuplicates() {
		taskEngine.startCollection(partition1);
		IStrategoTerm resolveResult = taskEngine.addTask(partition1, dependencies(), resolveInstruction, false);
		IStrategoTerm resolveID = resultID(resolveResult);

		IStrategoTerm resolveImportResult = taskEngine.addTask(partition1, dependencies(), resolveImportInstruction, false);
		IStrategoTerm resolveImportID = resultID(resolveImportResult);

		IStrategoTerm choiceInstruction = choice(resolveResult, resolveImportResult);
		IStrategoTerm choiceResult =
			taskEngine.addTask(partition1, dependencies(resolveResult, resolveImportResult), choiceInstruction, true);
		IStrategoTerm choiceID = resultID(choiceResult);
		taskEngine.stopCollection(partition1);

		// Add all tasks again to partition 2.
		taskEngine.startCollection(partition2);
		// Add 2 duplicates.
		resolveResult = taskEngine.addTask(partition2, dependencies(), resolveInstruction, false);
		resolveID = resultID(resolveResult);
		resolveResult = taskEngine.addTask(partition2, dependencies(), resolveInstruction, false);
		resolveID = resultID(resolveResult);
		resolveResult = taskEngine.addTask(partition2, dependencies(), resolveInstruction, false);
		resolveID = resultID(resolveResult);

		// Add 1 duplicate.
		resolveImportResult = taskEngine.addTask(partition2, dependencies(), resolveImportInstruction, false);
		resolveImportID = resultID(resolveImportResult);
		resolveImportResult = taskEngine.addTask(partition2, dependencies(), resolveImportInstruction, false);
		resolveImportID = resultID(resolveImportResult);

		choiceInstruction = choice(resolveResult, resolveImportResult);
		choiceResult =
			taskEngine.addTask(partition2, dependencies(resolveResult, resolveImportResult), choiceInstruction, true);
		choiceID = resultID(choiceResult);
		taskEngine.stopCollection(partition2);

		assertEquals(2, Iterables.size(taskEngine.getPartitionsOf(resolveID)));
		assertEquals(2, Iterables.size(taskEngine.getPartitionsOf(resolveImportID)));
		assertEquals(2, Iterables.size(taskEngine.getPartitionsOf(choiceID)));

		assertEquals(3, Iterables.size(taskEngine.getInPartition(partition1)));
		assertEquals(3, Iterables.size(taskEngine.getInPartition(partition1)));

		assertEquals(0, Iterables.size(taskEngine.getDependencies(resolveID)));
		assertEquals(0, Iterables.size(taskEngine.getDependencies(resolveImportID)));
		assertEquals(2, Iterables.size(taskEngine.getDependencies(choiceID)));

		assertEquals(1, Iterables.size(taskEngine.getDependent(resolveID)));
		assertEquals(1, Iterables.size(taskEngine.getDependent(resolveImportID)));
		assertEquals(0, Iterables.size(taskEngine.getDependent(choiceID)));
	}

	@Test(expected = IllegalStateException.class)
	public void testInCollection1() {
		// Adding a task without starting collection.
		taskEngine.addTask(partition1, dependencies(), resolveInstruction, false);
	}

	@Test(expected = IllegalStateException.class)
	public void testInCollection2() {
		// Adding a task to another partition than the one that started a collection.
		taskEngine.startCollection(partition2);
		taskEngine.addTask(partition1, dependencies(), resolveInstruction, false);
		taskEngine.stopCollection(partition2);
	}

	@Test(expected = IllegalStateException.class)
	public void testInCollection3() {
		// Stopping the collection of another partition than the one that started a collection.
		taskEngine.startCollection(partition1);
		taskEngine.stopCollection(partition2);
	}

	@Test(expected = IllegalStateException.class)
	public void testInCollection4() {
		// Starting collection for the same partition twice.
		taskEngine.startCollection(partition2);
		taskEngine.startCollection(partition2);
	}

	@Test
	public void testRemoveTasks() {
		taskEngine.startCollection(partition1);
		IStrategoTerm resolveResult = taskEngine.addTask(partition1, dependencies(), resolveInstruction, false);
		IStrategoTerm resolveID = resultID(resolveResult);
		IStrategoTerm resolveImportResult = taskEngine.addTask(partition1, dependencies(), resolveImportInstruction, false);
		IStrategoTerm resolveImportID = resultID(resolveImportResult);
		taskEngine.stopCollection(partition1);

		IStrategoTerm choiceInstruction = choice(resolveResult, resolveImportResult);
		taskEngine.startCollection(partition2);
		IStrategoTerm choiceResult =
			taskEngine.addTask(partition2, dependencies(resolveResult, resolveImportResult), choiceInstruction, true);
		IStrategoTerm choiceID = resultID(choiceResult);
		taskEngine.stopCollection(partition2);

		assertEquals(resolveInstruction, taskEngine.getTask(resolveID).instruction);
		assertEquals(resolveImportInstruction, taskEngine.getTask(resolveImportID).instruction);
		assertEquals(choiceInstruction, taskEngine.getTask(choiceID).instruction);

		// Update partition1 with only the resolveImport task, removing the resolve task.
		taskEngine.startCollection(partition1);
		resolveImportResult = taskEngine.addTask(partition1, dependencies(), resolveImportInstruction, false);
		resolveImportID = resultID(resolveImportResult);
		taskEngine.stopCollection(partition1);

		assertEquals(null, taskEngine.getTask(resolveID));
		assertEquals(resolveImportInstruction, taskEngine.getTask(resolveImportID).instruction);
		assertEquals(choiceInstruction, taskEngine.getTask(choiceID).instruction);

		// Update partition2 with no tasks, removing the choice task.
		taskEngine.startCollection(partition2);
		taskEngine.stopCollection(partition2);

		assertEquals(null, taskEngine.getTask(resolveID));
		assertEquals(resolveImportInstruction, taskEngine.getTask(resolveImportID).instruction);
		assertEquals(null, taskEngine.getTask(choiceID));
	}

	@Test
	public void testReset() {
		taskEngine.startCollection(partition1);
		IStrategoTerm resolveResult = taskEngine.addTask(partition1, dependencies(), resolveInstruction, false);
		IStrategoTerm resolveID = resultID(resolveResult);
		IStrategoTerm resolveImportResult = taskEngine.addTask(partition1, dependencies(), resolveImportInstruction, false);
		IStrategoTerm resolveImportID = resultID(resolveImportResult);
		taskEngine.stopCollection(partition1);

		IStrategoTerm choiceInstruction = choice(resolveResult, resolveImportResult);
		taskEngine.startCollection(partition2);
		IStrategoTerm choiceResult =
			taskEngine.addTask(partition2, dependencies(resolveResult, resolveImportResult), choiceInstruction, true);
		IStrategoTerm choiceID = resultID(choiceResult);
		taskEngine.stopCollection(partition2);

		taskEngine.reset();

		assertEquals(null, taskEngine.getTask(resolveID));
		assertEquals(null, taskEngine.getTask(resolveImportID));
		assertEquals(null, taskEngine.getTask(choiceID));
	}

	@Test
	public void testBecomesCyclic() {
		taskEngine.startCollection(partition1);
		IStrategoTerm resolveD = resultID(taskEngine.addTask(partition1, list(), resolve("D"), false));
		IStrategoTerm resolveC = resultID(taskEngine.addTask(partition1, list(resolveD), resolve("C"), false));
		IStrategoTerm resolveB = resultID(taskEngine.addTask(partition1, list(resolveC), resolve("B"), false));
		IStrategoTerm resolveA = resultID(taskEngine.addTask(partition1, list(resolveB), resolve("A"), false));
		taskEngine.stopCollection(partition1);

		assertTrue(taskEngine.becomesCyclic(resolveD, resolveA));
		assertTrue(taskEngine.becomesCyclic(resolveD, resolveB));
		assertTrue(taskEngine.becomesCyclic(resolveD, resolveC));
		assertTrue(taskEngine.becomesCyclic(resolveC, resolveA));
		assertTrue(taskEngine.becomesCyclic(resolveC, resolveB));
		assertTrue(taskEngine.becomesCyclic(resolveB, resolveA));
		assertFalse(taskEngine.becomesCyclic(resolveD, resolveD));
		assertFalse(taskEngine.becomesCyclic(resolveA, resolveD));
		assertFalse(taskEngine.becomesCyclic(resolveB, resolveD));
		assertFalse(taskEngine.becomesCyclic(resolveC, resolveD));
		assertFalse(taskEngine.becomesCyclic(resolveA, resolveC));
		assertFalse(taskEngine.becomesCyclic(resolveB, resolveC));
		assertFalse(taskEngine.becomesCyclic(resolveA, resolveB));
	}
}
