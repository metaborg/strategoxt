package org.metaborg.runtime.task.test;

import static org.junit.Assert.*;

import org.junit.Before;
import org.junit.Test;
import org.metaborg.runtime.task.TaskStorageType;
import org.metaborg.runtime.task.TaskType;
import org.metaborg.runtime.task.engine.ITaskEngine;
import org.metaborg.runtime.task.engine.TaskEngineFactory;
import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;

import com.google.common.collect.Iterables;

public class TaskEngineTest extends TaskTest {
	private final IStrategoString partition1 = str("String.java");
	private final IStrategoString partition2 = str("Integer.java");

	private final IStrategoAppl resolveInstruction = resolve("Java", segment("Package", "java"),
		segment("Package", "util"), segment("Class", "String"));
	private final IStrategoAppl resolveImportInstruction = resolveImport("Java", segment("Package", "java"),
		segment("Package", "util"), segment("Class", "String"));

	@Before
	public void setUp() {
		taskEngine.reset();
	}

	@Test
	public void testAddTasks() {
		taskEngine.startCollection(partition1);
		IStrategoTerm resolveResult =
			taskEngine.addTask(partition1, dependencies(), resolveInstruction, TaskType.Regular, TaskStorageType.Auto,
				false);
		IStrategoTerm resolveID = resultID(resolveResult);
		IStrategoTerm resolveImportResult =
			taskEngine.addTask(partition1, dependencies(), resolveImportInstruction, TaskType.Regular,
				TaskStorageType.Auto, false);
		IStrategoTerm resolveImportID = resultID(resolveImportResult);
		taskEngine.stopCollection(partition1);

		IStrategoAppl choiceInstruction = choice(resolveResult, resolveImportResult);
		taskEngine.startCollection(partition2);
		IStrategoTerm choiceResult =
			taskEngine.addTask(partition2, dependencies(resolveResult, resolveImportResult), choiceInstruction,
				TaskType.Combinator, TaskStorageType.Auto, false);
		IStrategoTerm choiceID = resultID(choiceResult);
		taskEngine.stopCollection(partition2);

		assertEquals(resolveInstruction, taskEngine.getTask(resolveID).initialInstruction());
		assertEquals(resolveImportInstruction, taskEngine.getTask(resolveImportID).initialInstruction());
		assertEquals(choiceInstruction, taskEngine.getTask(choiceID).initialInstruction());

		assertTrue(assertContains(taskEngine.getSourcesOf(resolveID), partition1));
		assertFalse(assertContains(taskEngine.getSourcesOf(resolveID), partition2));
		assertTrue(assertContains(taskEngine.getSourcesOf(resolveImportID), partition1));
		assertFalse(assertContains(taskEngine.getSourcesOf(resolveImportID), partition2));
		assertTrue(assertContains(taskEngine.getSourcesOf(choiceID), partition2));
		assertFalse(assertContains(taskEngine.getSourcesOf(choiceID), partition1));

		assertTrue(assertContains(taskEngine.getFromSource(partition1), resolveID));
		assertTrue(assertContains(taskEngine.getFromSource(partition1), resolveImportID));
		assertFalse(assertContains(taskEngine.getFromSource(partition1), choiceID));
		assertFalse(assertContains(taskEngine.getFromSource(partition2), resolveID));
		assertFalse(assertContains(taskEngine.getFromSource(partition2), resolveImportID));
		assertTrue(assertContains(taskEngine.getFromSource(partition2), choiceID));

		assertEquals(0, Iterables.size(taskEngine.getDependencies(resolveID, false)));
		assertEquals(0, Iterables.size(taskEngine.getDependencies(resolveImportID, false)));
		assertTrue(assertContains(taskEngine.getDependencies(choiceID, false), resolveID));
		assertTrue(assertContains(taskEngine.getDependencies(choiceID, false), resolveImportID));

		assertTrue(assertContains(taskEngine.getDependents(resolveID, false), choiceID));
		assertTrue(assertContains(taskEngine.getDependents(resolveImportID, false), choiceID));
		assertEquals(0, Iterables.size(taskEngine.getDependents(choiceID, false)));
	}

	@Test
	public void testNoDuplicates() {
		taskEngine.startCollection(partition1);
		IStrategoTerm resolveResult =
			taskEngine.addTask(partition1, dependencies(), resolveInstruction, TaskType.Regular, TaskStorageType.Auto,
				false);
		IStrategoTerm resolveID = resultID(resolveResult);

		// Add a duplicate instruction but with different dependencies.
		IStrategoTerm resolveResult2 =
			taskEngine.addTask(partition1, dependencies(resolveResult), resolveInstruction, TaskType.Regular,
				TaskStorageType.Auto, false);
		IStrategoTerm resolveID2 = resultID(resolveResult2);

		IStrategoTerm resolveImportResult =
			taskEngine.addTask(partition1, dependencies(), resolveImportInstruction, TaskType.Regular,
				TaskStorageType.Auto, false);
		IStrategoTerm resolveImportID = resultID(resolveImportResult);

		IStrategoAppl choiceInstruction = choice(resolveResult, resolveImportResult);
		IStrategoTerm choiceResult =
			taskEngine.addTask(partition1, dependencies(resolveResult, resolveImportResult), choiceInstruction,
				TaskType.Combinator, TaskStorageType.Auto, false);
		IStrategoTerm choiceID = resultID(choiceResult);
		taskEngine.stopCollection(partition1);

		// Add all tasks again to partition 2.
		taskEngine.startCollection(partition2);
		// Add 2 duplicates.
		resolveResult =
			taskEngine.addTask(partition2, dependencies(), resolveInstruction, TaskType.Regular, TaskStorageType.Auto,
				false);
		resolveID = resultID(resolveResult);
		resolveResult =
			taskEngine.addTask(partition2, dependencies(), resolveInstruction, TaskType.Regular, TaskStorageType.Auto,
				false);
		resolveID = resultID(resolveResult);
		resolveResult =
			taskEngine.addTask(partition2, dependencies(), resolveInstruction, TaskType.Regular, TaskStorageType.Auto,
				false);
		resolveID = resultID(resolveResult);

		// Add 1 duplicate.
		resolveImportResult =
			taskEngine.addTask(partition2, dependencies(), resolveImportInstruction, TaskType.Regular,
				TaskStorageType.Auto, false);
		resolveImportID = resultID(resolveImportResult);
		resolveImportResult =
			taskEngine.addTask(partition2, dependencies(), resolveImportInstruction, TaskType.Regular,
				TaskStorageType.Auto, false);
		resolveImportID = resultID(resolveImportResult);

		choiceInstruction = choice(resolveResult, resolveImportResult);
		choiceResult =
			taskEngine.addTask(partition2, dependencies(resolveResult, resolveImportResult), choiceInstruction,
				TaskType.Combinator, TaskStorageType.Auto, false);
		choiceID = resultID(choiceResult);
		taskEngine.stopCollection(partition2);

		assertEquals(2, Iterables.size(taskEngine.getSourcesOf(resolveID)));
		assertEquals(1, Iterables.size(taskEngine.getSourcesOf(resolveID2)));
		assertEquals(2, Iterables.size(taskEngine.getSourcesOf(resolveImportID)));
		assertEquals(2, Iterables.size(taskEngine.getSourcesOf(choiceID)));

		assertEquals(4, Iterables.size(taskEngine.getFromSource(partition1)));
		assertEquals(3, Iterables.size(taskEngine.getFromSource(partition2)));

		assertEquals(0, Iterables.size(taskEngine.getDependencies(resolveID, false)));
		assertEquals(1, Iterables.size(taskEngine.getDependencies(resolveID2, false)));
		assertEquals(0, Iterables.size(taskEngine.getDependencies(resolveImportID, false)));
		assertEquals(2, Iterables.size(taskEngine.getDependencies(choiceID, false)));

		assertEquals(2, Iterables.size(taskEngine.getDependents(resolveID, false)));
		assertEquals(1, Iterables.size(taskEngine.getDependents(resolveImportID, false)));
		assertEquals(0, Iterables.size(taskEngine.getDependents(choiceID, false)));
	}

	// Adding a task without starting collection.
	@Test(expected = IllegalStateException.class)
	public void testInCollection1() {
		taskEngine.addTask(partition1, dependencies(), resolveInstruction, TaskType.Regular, TaskStorageType.Auto,
			false);
	}

	// Adding a task to another partition than the one that started a collection.
	@Test(expected = IllegalStateException.class)
	public void testInCollection2() {
		taskEngine.startCollection(partition2);
		taskEngine.addTask(partition1, dependencies(), resolveInstruction, TaskType.Regular, TaskStorageType.Auto,
			false);
		taskEngine.stopCollection(partition2);
	}

	// Stopping the collection of another partition than the one that started a collection.
	@Test(expected = IllegalStateException.class)
	public void testInCollection3() {
		taskEngine.startCollection(partition1);
		taskEngine.stopCollection(partition2);
	}

	// Starting collection for the same partition twice.
	@Test(expected = IllegalStateException.class)
	public void testInCollection4() {
		taskEngine.startCollection(partition2);
		taskEngine.startCollection(partition2);
	}

	@Test
	public void testRemoveTasks() {
		taskEngine.startCollection(partition1);
		IStrategoTerm resolveResult =
			taskEngine.addTask(partition1, dependencies(), resolveInstruction, TaskType.Regular, TaskStorageType.Auto,
				false);
		IStrategoTerm resolveID = resultID(resolveResult);
		IStrategoTerm resolveImportResult =
			taskEngine.addTask(partition1, dependencies(), resolveImportInstruction, TaskType.Regular,
				TaskStorageType.Auto, false);
		IStrategoTerm resolveImportID = resultID(resolveImportResult);
		taskEngine.stopCollection(partition1);

		IStrategoAppl choiceInstruction = choice(resolveResult, resolveImportResult);
		taskEngine.startCollection(partition2);
		IStrategoTerm choiceResult =
			taskEngine.addTask(partition2, dependencies(resolveResult, resolveImportResult), choiceInstruction,
				TaskType.Combinator, TaskStorageType.Auto, false);
		IStrategoTerm choiceID = resultID(choiceResult);
		taskEngine.stopCollection(partition2);

		assertEquals(resolveInstruction, taskEngine.getTask(resolveID).initialInstruction());
		assertEquals(resolveImportInstruction, taskEngine.getTask(resolveImportID).initialInstruction());
		assertEquals(choiceInstruction, taskEngine.getTask(choiceID).initialInstruction());

		// Update partition1 with only the resolveImport task, removing the resolve task.
		taskEngine.startCollection(partition1);
		resolveImportResult =
			taskEngine.addTask(partition1, dependencies(), resolveImportInstruction, TaskType.Regular,
				TaskStorageType.Auto, false);
		resolveImportID = resultID(resolveImportResult);
		taskEngine.stopCollection(partition1);

		assertEquals(null, taskEngine.getTask(resolveID));
		assertEquals(resolveImportInstruction, taskEngine.getTask(resolveImportID).initialInstruction());
		assertEquals(choiceInstruction, taskEngine.getTask(choiceID).initialInstruction());

		// Update partition2 with no tasks, removing the choice task.
		taskEngine.startCollection(partition2);
		taskEngine.stopCollection(partition2);

		assertEquals(null, taskEngine.getTask(resolveID));
		assertEquals(resolveImportInstruction, taskEngine.getTask(resolveImportID).initialInstruction());
		assertEquals(null, taskEngine.getTask(choiceID));
	}

	@Test
	public void testReset() {
		taskEngine.startCollection(partition1);
		IStrategoTerm resolveResult =
			taskEngine.addTask(partition1, dependencies(), resolveInstruction, TaskType.Regular, TaskStorageType.Auto,
				false);
		IStrategoTerm resolveID = resultID(resolveResult);
		IStrategoTerm resolveImportResult =
			taskEngine.addTask(partition1, dependencies(), resolveImportInstruction, TaskType.Regular,
				TaskStorageType.Auto, false);
		IStrategoTerm resolveImportID = resultID(resolveImportResult);
		taskEngine.stopCollection(partition1);

		IStrategoAppl choiceInstruction = choice(resolveResult, resolveImportResult);
		taskEngine.startCollection(partition2);
		IStrategoTerm choiceResult =
			taskEngine.addTask(partition2, dependencies(resolveResult, resolveImportResult), choiceInstruction,
				TaskType.Combinator, TaskStorageType.Auto, false);
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
		IStrategoTerm resolveD =
			resultID(taskEngine
				.addTask(partition1, list(), resolve("D"), TaskType.Regular, TaskStorageType.Auto, false));
		IStrategoTerm resolveC =
			resultID(taskEngine.addTask(partition1, list(resolveD), resolve("C"), TaskType.Regular,
				TaskStorageType.Auto, false));
		IStrategoTerm resolveB =
			resultID(taskEngine.addTask(partition1, list(resolveC), resolve("B"), TaskType.Regular,
				TaskStorageType.Auto, false));
		IStrategoTerm resolveA =
			resultID(taskEngine.addTask(partition1, list(resolveB), resolve("A"), TaskType.Regular,
				TaskStorageType.Auto, false));
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

	@Test
	public void testPersistance() {
		taskEngine.startCollection(partition1);
		IStrategoTerm resolveD =
			resultID(taskEngine.addTask(partition1, list(), resolve("D"), TaskType.Combinator, TaskStorageType.Auto,
				false));
		taskEngine.getTask(resolveD).setFailed();
		IStrategoTerm resolveC =
			resultID(taskEngine.addTask(partition1, list(resolveD), resolve("C"), TaskType.Regular,
				TaskStorageType.Auto, true));
		taskEngine.getTask(resolveC).results().add(factory.makeInt(42));
		IStrategoTerm resolveB =
			resultID(taskEngine.addTask(partition1, list(resolveC), resolve("B"), TaskType.Regular,
				TaskStorageType.Auto, true));
		taskEngine.getTask(resolveB).results().add(factory.makeInt(1));
		taskEngine.getTask(resolveB).results().add(factory.makeInt(2));
		IStrategoTerm resolveA =
			resultID(taskEngine.addTask(partition1, list(resolveB), resolve("A"), TaskType.Combinator,
				TaskStorageType.Auto, false));
		taskEngine.getTask(resolveA).setDependencyFailed();
		taskEngine.stopCollection(partition1);

		assertNotNull(taskEngine.getTask(resolveD));
		assertNotNull(taskEngine.getTask(resolveC));
		assertNotNull(taskEngine.getTask(resolveB));
		assertNotNull(taskEngine.getTask(resolveA));

		final TaskEngineFactory taskEngineFactory = new TaskEngineFactory();
		final IStrategoTerm persisted = taskEngineFactory.toTerm(taskEngine, factory);
		taskEngine.reset();

		assertNull(taskEngine.getTask(resolveD));
		assertNull(taskEngine.getTask(resolveC));
		assertNull(taskEngine.getTask(resolveB));
		assertNull(taskEngine.getTask(resolveA));

		taskEngineFactory.fromTerms(taskEngine, persisted, factory);

		assertNotNull(taskEngine.getTask(resolveD));
		assertNotNull(taskEngine.getTask(resolveC));
		assertNotNull(taskEngine.getTask(resolveB));
		assertNotNull(taskEngine.getTask(resolveA));


		assertTrue(taskEngine.getTask(resolveD).failed());
		assertFalse(taskEngine.getTask(resolveC).failed());
		assertFalse(taskEngine.getTask(resolveB).failed());
		assertTrue(taskEngine.getTask(resolveA).failed()); // Dependency failure implies failure.


		assertFalse(taskEngine.getTask(resolveD).dependencyFailed());
		assertFalse(taskEngine.getTask(resolveC).dependencyFailed());
		assertFalse(taskEngine.getTask(resolveB).dependencyFailed());
		assertTrue(taskEngine.getTask(resolveA).dependencyFailed());


		assertTrue(taskEngine.getTask(resolveD).results().empty());
		assertContains(taskEngine.getTask(resolveC).results(), factory.makeInt(42));
		assertContains(taskEngine.getTask(resolveB).results(), factory.makeInt(1));
		assertContains(taskEngine.getTask(resolveB).results(), factory.makeInt(2));
		assertTrue(taskEngine.getTask(resolveA).results().empty());


		assertEquals(TaskType.Combinator, taskEngine.getTask(resolveD).type());
		assertFalse(taskEngine.getTask(resolveD).shortCircuit());

		assertEquals(TaskType.Regular, taskEngine.getTask(resolveC).type());
		assertTrue(taskEngine.getTask(resolveC).shortCircuit());

		assertEquals(TaskType.Regular, taskEngine.getTask(resolveB).type());
		assertTrue(taskEngine.getTask(resolveB).shortCircuit());

		assertEquals(TaskType.Combinator, taskEngine.getTask(resolveA).type());
		assertFalse(taskEngine.getTask(resolveA).shortCircuit());
	}

	// Changes in current task engine are not visible in parent task engine.
	@Test
	public void testStackNoParentChange() {
		final ITaskEngine parent = taskEngine;
		ITaskEngine current = taskManager.pushTaskEngine(factory);
		assertNotSame(parent, current);

		current.startCollection(partition2);
		final IStrategoTerm resolveImportResult =
			current.addTask(partition2, dependencies(), resolveImportInstruction, TaskType.Regular,
				TaskStorageType.Auto, false);
		final IStrategoTerm resolveImportID = resultID(resolveImportResult);
		current.stopCollection(partition2);

		assertNull(parent.getTask(resolveImportID));
		assertNotNull(current.getTask(resolveImportID));

		current = taskManager.popTaskEngine();
		assertSame(parent, current);
	}

	// Changes in parent task engine are visible in current task engine.
	@Test
	public void testStackParentChangeVisible() {
		final ITaskEngine parent = taskEngine;
		ITaskEngine current = parent;

		current.startCollection(partition1);
		final IStrategoTerm resolveResult =
			current.addTask(partition1, dependencies(), resolveInstruction, TaskType.Regular, TaskStorageType.Auto,
				false);
		final IStrategoTerm resolveID = resultID(resolveResult);
		current.stopCollection(partition1);

		assertNotNull(current.getTask(resolveID));

		current = taskManager.pushTaskEngine(factory);
		assertNotSame(parent, current);

		current.startCollection(partition2);
		final IStrategoTerm resolveImportResult =
			current.addTask(partition2, dependencies(), resolveImportInstruction, TaskType.Regular,
				TaskStorageType.Auto, false);
		final IStrategoTerm resolveImportID = resultID(resolveImportResult);
		current.stopCollection(partition2);

		assertNotNull(parent.getTask(resolveID));
		assertNull(parent.getTask(resolveImportID));
		assertNotNull(current.getTask(resolveID));
		assertNotNull(current.getTask(resolveImportID));

		current = taskManager.popTaskEngine();
		assertSame(parent, current);
	}

	// Removing a task from current task engine makes it invisible in parent task engine.
	@Test
	public void testStackRemove() {
		final ITaskEngine parent = taskEngine;
		ITaskEngine current = parent;

		current.startCollection(partition1);
		final IStrategoTerm resolveResult =
			current.addTask(partition1, dependencies(), resolveInstruction, TaskType.Regular, TaskStorageType.Auto,
				false);
		final IStrategoTerm resolveID = resultID(resolveResult);
		final IStrategoTerm resolveImportResult =
			current.addTask(partition1, dependencies(), resolveImportInstruction, TaskType.Regular,
				TaskStorageType.Auto, false);
		final IStrategoTerm resolveImportID = resultID(resolveImportResult);
		current.stopCollection(partition1);

		assertNotNull(current.getTask(resolveID));
		assertNotNull(current.getTask(resolveImportID));

		current = taskManager.pushTaskEngine(factory);
		assertNotSame(parent, current);

		// Remove all tasks in partition 1 using an empty collect phase.
		current.startCollection(partition1);
		current.stopCollection(partition1);

		assertNotNull(parent.getTask(resolveID));
		assertNotNull(parent.getTask(resolveImportID));
		assertNull(current.getTask(resolveID));
		assertNull(current.getTask(resolveImportID));

		current = taskManager.popTaskEngine();
		assertSame(parent, current);
	}

	// Popping a task engine discards all its changes.
	@Test
	public void testStackPop() {
		final ITaskEngine parent = taskEngine;
		ITaskEngine current = parent;

		current.startCollection(partition1);
		final IStrategoTerm resolveResult =
			current.addTask(partition1, dependencies(), resolveInstruction, TaskType.Regular, TaskStorageType.Auto,
				false);
		final IStrategoTerm resolveID = resultID(resolveResult);
		final IStrategoTerm resolveImportResult =
			current.addTask(partition1, dependencies(), resolveImportInstruction, TaskType.Regular,
				TaskStorageType.Auto, false);
		final IStrategoTerm resolveImportID = resultID(resolveImportResult);
		current.stopCollection(partition1);

		assertNotNull(current.getTask(resolveID));
		assertNotNull(current.getTask(resolveImportID));

		current = taskManager.pushTaskEngine(factory);
		assertNotSame(parent, current);

		current.startCollection(partition2);
		final IStrategoAppl choiceInstruction = choice(resolveResult, resolveImportResult);
		final IStrategoTerm choiceResult =
			current.addTask(partition2, dependencies(resolveResult, resolveImportResult), choiceInstruction,
				TaskType.Combinator, TaskStorageType.Auto, false);
		final IStrategoTerm choiceID = resultID(choiceResult);
		current.stopCollection(partition2);

		// Remove all tasks in partition 1 using an empty collect phase.
		current.startCollection(partition1);
		current.stopCollection(partition1);

		assertNotNull(parent.getTask(resolveID));
		assertNotNull(parent.getTask(resolveImportID));
		assertNull(parent.getTask(choiceID));
		assertNull(current.getTask(resolveID));
		assertNull(current.getTask(resolveImportID));
		assertNotNull(current.getTask(choiceID));

		current = taskManager.popTaskEngine();
		assertSame(parent, current);

		assertNotNull(current.getTask(resolveID));
		assertNotNull(current.getTask(resolveImportID));
		assertNull(current.getTask(choiceID));
	}

	// Merging a task engine preserves all its changes.
	@Test
	public void testStackMerge() {
		final ITaskEngine parent = taskEngine;
		ITaskEngine current = parent;

		current.startCollection(partition1);
		final IStrategoTerm resolveResult =
			current.addTask(partition1, dependencies(), resolveInstruction, TaskType.Regular, TaskStorageType.Auto,
				false);
		final IStrategoTerm resolveID = resultID(resolveResult);
		final IStrategoTerm resolveImportResult =
			current.addTask(partition1, dependencies(), resolveImportInstruction, TaskType.Regular,
				TaskStorageType.Auto, false);
		final IStrategoTerm resolveImportID = resultID(resolveImportResult);
		current.stopCollection(partition1);

		assertNotNull(current.getTask(resolveID));
		assertNotNull(current.getTask(resolveImportID));

		current = taskManager.pushTaskEngine(factory);
		assertNotSame(parent, current);

		current.startCollection(partition2);
		final IStrategoAppl choiceInstruction = choice(resolveResult, resolveImportResult);
		final IStrategoTerm choiceResult =
			current.addTask(partition2, dependencies(resolveResult, resolveImportResult), choiceInstruction,
				TaskType.Combinator, TaskStorageType.Auto, false);
		final IStrategoTerm choiceID = resultID(choiceResult);
		current.stopCollection(partition2);

		// Remove all tasks in partition 1 using an empty collect phase.
		current.startCollection(partition1);
		current.stopCollection(partition1);

		assertNotNull(parent.getTask(resolveID));
		assertNotNull(parent.getTask(resolveImportID));
		assertNull(parent.getTask(choiceID));
		assertNull(current.getTask(resolveID));
		assertNull(current.getTask(resolveImportID));
		assertNotNull(current.getTask(choiceID));

		current = taskManager.mergeTaskEngine(factory);
		assertSame(parent, current);

		assertNull(current.getTask(resolveID));
		assertNull(current.getTask(resolveImportID));
		assertNotNull(current.getTask(choiceID));
	}
}
