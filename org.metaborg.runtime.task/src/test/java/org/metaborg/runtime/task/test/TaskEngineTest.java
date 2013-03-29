package org.metaborg.runtime.task.test;

import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;

import org.junit.Before;
import org.junit.Test;
import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;

public class TaskEngineTest extends TaskTest {
	@Before
	public void setUp() {
		taskEngine.reset();
	}

	@Test
	public void addTasks() {
		IStrategoString partition1 = str("String.java");
		IStrategoString partition2 = str("Integer.java");

		IStrategoTerm resolveInstruction =
			resolve("Java", segment("Package", "java"), segment("Package", "util"), segment("Class", "String"));
		IStrategoTerm resolveImportInstruction =
			resolveImport("Java", segment("Package", "java"), segment("Package", "util"), segment("Class", "String"));
		IStrategoTerm choiceInstruction = choice(resolveInstruction, resolveImportInstruction);

		taskEngine.startCollection(partition1);
		IStrategoAppl resolveResult = taskEngine.addTask(partition1, dependencies(), resolveInstruction);
		IStrategoInt resolveID = resultID(resolveResult);
		IStrategoAppl resolveImportResult = taskEngine.addTask(partition1, dependencies(), resolveImportInstruction);
		IStrategoInt resolveImportID = resultID(resolveImportResult);
		taskEngine.stopCollection(partition1);

		taskEngine.startCollection(partition2);
		IStrategoAppl choiceResult =
			taskEngine.addTask(partition2, dependencies(resolveResult, resolveImportResult), choiceInstruction);
		IStrategoInt choiceID = resultID(choiceResult);
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
}
