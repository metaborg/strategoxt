package org.metaborg.runtime.task.test;

import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;

import org.junit.Before;
import org.junit.Test;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;

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
		IStrategoTerm resolveResult = taskEngine.addTask(partition1, dependencies(), resolveInstruction);
		IStrategoTerm resolveID = resultID(resolveResult);
		IStrategoTerm resolveImportResult = taskEngine.addTask(partition1, dependencies(), resolveImportInstruction);
		IStrategoTerm resolveImportID = resultID(resolveImportResult);
		taskEngine.stopCollection(partition1);

		IStrategoTerm choiceInstruction = choice(resolveResult, resolveImportResult);
		taskEngine.startCollection(partition2);
		IStrategoTerm choiceResult = taskEngine.addTask(partition2, dependencies(resolveResult, resolveImportResult),
			choiceInstruction);
		IStrategoTerm choiceID = resultID(choiceResult);
		taskEngine.stopCollection(partition2);

		assertEquals(resolveInstruction, taskEngine.getInstruction(resolveID));
		assertEquals(resolveImportInstruction, taskEngine.getInstruction(resolveImportID));
		assertEquals(choiceInstruction, taskEngine.getInstruction(choiceID));

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

		assertEquals(0, taskEngine.getDependencies(resolveID).size());
		assertEquals(0, taskEngine.getDependencies(resolveImportID).size());
		assertTrue(assertContains(taskEngine.getDependencies(choiceID), resolveID));
		assertTrue(assertContains(taskEngine.getDependencies(choiceID), resolveImportID));

		assertTrue(assertContains(taskEngine.getDependent(resolveID), choiceID));
		assertTrue(assertContains(taskEngine.getDependent(resolveImportID), choiceID));
		assertEquals(0, taskEngine.getDependent(choiceID).size());
	}

	@Test
	public void testNoDuplicates() {
		taskEngine.startCollection(partition1);
		IStrategoTerm resolveResult = taskEngine.addTask(partition1, dependencies(), resolveInstruction);
		IStrategoTerm resolveID = resultID(resolveResult);

		IStrategoTerm resolveImportResult = taskEngine.addTask(partition1, dependencies(), resolveImportInstruction);
		IStrategoTerm resolveImportID = resultID(resolveImportResult);

		IStrategoTerm choiceInstruction = choice(resolveResult, resolveImportResult);
		IStrategoTerm choiceResult = taskEngine.addTask(partition1, dependencies(resolveResult, resolveImportResult),
			choiceInstruction);
		IStrategoTerm choiceID = resultID(choiceResult);
		taskEngine.stopCollection(partition1);

		// Add all tasks again to partition 2.
		taskEngine.startCollection(partition2);
		// Add 2 duplicates.
		resolveResult = taskEngine.addTask(partition2, dependencies(), resolveInstruction);
		resolveID = resultID(resolveResult);
		resolveResult = taskEngine.addTask(partition2, dependencies(), resolveInstruction);
		resolveID = resultID(resolveResult);
		resolveResult = taskEngine.addTask(partition2, dependencies(), resolveInstruction);
		resolveID = resultID(resolveResult);

		// Add 1 duplicate.
		resolveImportResult = taskEngine.addTask(partition2, dependencies(), resolveImportInstruction);
		resolveImportID = resultID(resolveImportResult);
		resolveImportResult = taskEngine.addTask(partition2, dependencies(), resolveImportInstruction);
		resolveImportID = resultID(resolveImportResult);

		choiceInstruction = choice(resolveResult, resolveImportResult);
		choiceResult = taskEngine.addTask(partition2, dependencies(resolveResult, resolveImportResult),
			choiceInstruction);
		choiceID = resultID(choiceResult);
		taskEngine.stopCollection(partition2);

		assertEquals(2, taskEngine.getPartitionsOf(resolveID).size());
		assertEquals(2, taskEngine.getPartitionsOf(resolveImportID).size());
		assertEquals(2, taskEngine.getPartitionsOf(choiceID).size());

		assertEquals(3, taskEngine.getInPartition(partition1).size());
		assertEquals(3, taskEngine.getInPartition(partition1).size());

		assertEquals(0, taskEngine.getDependencies(resolveID).size());
		assertEquals(0, taskEngine.getDependencies(resolveImportID).size());
		assertEquals(2, taskEngine.getDependencies(choiceID).size());

		assertEquals(1, taskEngine.getDependent(resolveID).size());
		assertEquals(1, taskEngine.getDependent(resolveImportID).size());
		assertEquals(0, taskEngine.getDependent(choiceID).size());
	}

	@Test(expected = IllegalStateException.class)
	public void testInCollection1() {
		// Adding a task without starting collection.
		taskEngine.addTask(partition1, dependencies(), resolveInstruction);
	}

	@Test(expected = IllegalStateException.class)
	public void testInCollection2() {
		// Adding a task to another partition than the one that started a collection.
		taskEngine.startCollection(partition2);
		taskEngine.addTask(partition1, dependencies(), resolveInstruction);
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
		IStrategoTerm resolveResult = taskEngine.addTask(partition1, dependencies(), resolveInstruction);
		IStrategoTerm resolveID = resultID(resolveResult);
		IStrategoTerm resolveImportResult = taskEngine.addTask(partition1, dependencies(), resolveImportInstruction);
		IStrategoTerm resolveImportID = resultID(resolveImportResult);
		taskEngine.stopCollection(partition1);

		IStrategoTerm choiceInstruction = choice(resolveResult, resolveImportResult);
		taskEngine.startCollection(partition2);
		IStrategoTerm choiceResult = taskEngine.addTask(partition2, dependencies(resolveResult, resolveImportResult),
			choiceInstruction);
		IStrategoTerm choiceID = resultID(choiceResult);
		taskEngine.stopCollection(partition2);

		assertEquals(resolveInstruction, taskEngine.getInstruction(resolveID));
		assertEquals(resolveImportInstruction, taskEngine.getInstruction(resolveImportID));
		assertEquals(choiceInstruction, taskEngine.getInstruction(choiceID));

		// Update partition1 with only the resolveImport task, removing the resolve task.
		taskEngine.startCollection(partition1);
		resolveImportResult = taskEngine.addTask(partition1, dependencies(), resolveImportInstruction);
		resolveImportID = resultID(resolveImportResult);
		taskEngine.stopCollection(partition1);

		assertEquals(null, taskEngine.getInstruction(resolveID));
		assertEquals(resolveImportInstruction, taskEngine.getInstruction(resolveImportID));
		assertEquals(choiceInstruction, taskEngine.getInstruction(choiceID));

		// Update partition2 with no tasks, removing the choice task.
		taskEngine.startCollection(partition2);
		taskEngine.stopCollection(partition2);

		assertEquals(null, taskEngine.getInstruction(resolveID));
		assertEquals(resolveImportInstruction, taskEngine.getInstruction(resolveImportID));
		assertEquals(null, taskEngine.getInstruction(choiceID));
	}

	@Test
	public void testReset() {
		taskEngine.startCollection(partition1);
		IStrategoTerm resolveResult = taskEngine.addTask(partition1, dependencies(), resolveInstruction);
		IStrategoTerm resolveID = resultID(resolveResult);
		IStrategoTerm resolveImportResult = taskEngine.addTask(partition1, dependencies(), resolveImportInstruction);
		IStrategoTerm resolveImportID = resultID(resolveImportResult);
		taskEngine.stopCollection(partition1);

		IStrategoTerm choiceInstruction = choice(resolveResult, resolveImportResult);
		taskEngine.startCollection(partition2);
		IStrategoTerm choiceResult = taskEngine.addTask(partition2, dependencies(resolveResult, resolveImportResult),
			choiceInstruction);
		IStrategoTerm choiceID = resultID(choiceResult);
		taskEngine.stopCollection(partition2);

		taskEngine.reset();

		assertEquals(null, taskEngine.getInstruction(resolveID));
		assertEquals(null, taskEngine.getInstruction(resolveImportID));
		assertEquals(null, taskEngine.getInstruction(choiceID));
	}
}
