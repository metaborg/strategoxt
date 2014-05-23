package org.metaborg.runtime.task.test;

import java.security.NoSuchAlgorithmException;

import org.junit.AfterClass;
import org.junit.BeforeClass;
import org.metaborg.runtime.task.engine.ITaskEngine;
import org.metaborg.runtime.task.engine.TaskManager;
import org.spoofax.interpreter.core.Interpreter;
import org.spoofax.interpreter.library.IOAgent;
import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;
import org.spoofax.interpreter.terms.ITermFactory;

public class TaskTest {
	protected static Interpreter interpreter;
	protected static ITermFactory factory;
	protected static IOAgent agent;

	protected static TaskManager taskManager;
	protected static ITaskEngine taskEngine;

	@BeforeClass
	public static void setUpOnce() throws NoSuchAlgorithmException {
		interpreter = new Interpreter();
		factory = interpreter.getFactory();
		agent = interpreter.getIOAgent();

		taskManager = TaskManager.getInstance();
		taskEngine = taskManager.loadTaskEngine(".", factory, agent);
	}

	@AfterClass
	public static void tearDownOnce() {
		taskEngine.reset();
		taskEngine = null;
		taskManager = null;
		interpreter.shutdown();
		interpreter = null;
		factory = null;
		agent = null;
	}

	public static IStrategoString str(String str) {
		return factory.makeString(str);
	}

	public static IStrategoInt i(int i) {
		return factory.makeInt(i);
	}

	public static IStrategoAppl constructor(String constructor, IStrategoTerm... terms) {
		return factory.makeAppl(factory.makeConstructor(constructor, terms.length), terms);
	}

	public static IStrategoList list(IStrategoTerm... terms) {
		return factory.makeList(terms);
	}

	public static IStrategoTuple tuple(IStrategoTerm... terms) {
		return factory.makeTuple(terms);
	}

	public static IStrategoString partition(String file) {
		return str(file);
	}

	public static IStrategoAppl uri(String language, IStrategoTerm... segments) {
		IStrategoTerm[] reversed = new IStrategoTerm[segments.length];
		for(int i = 0; i < reversed.length; ++i)
			// Paths are reversed in Stratego for easy appending of new names.
			reversed[i] = segments[reversed.length - i - 1];
		return constructor("URI", constructor("Language", str(language), list(reversed)));
	}

	public static IStrategoAppl segment(String namespace, String name) {
		return constructor("ID", constructor(namespace), str(name), constructor("NonUnique"));
	}

	public static IStrategoAppl segment(String namespace, String name, String unique) {
		return constructor("ID", constructor(namespace), str(name), constructor("Unique", str(unique)));
	}

	public static IStrategoTerm resultID(IStrategoTerm result) {
		return result.getSubterm(0);
	}

	public static IStrategoList dependencies(IStrategoTerm... results) {
		IStrategoTerm[] dependencies = new IStrategoTerm[results.length];
		for(int i = 0; i < results.length; ++i)
			dependencies[i] = resultID(results[i]);
		return list(dependencies);
	}

	public static IStrategoAppl resolve(String language, IStrategoTerm... segments) {
		return constructor("Resolve", uri(language, segments));
	}

	public static IStrategoAppl resolveImport(String language, IStrategoTerm... segments) {
		return constructor("ResolveImport", uri(language, segments));
	}

	public static IStrategoAppl choice(IStrategoTerm... results) {
		return constructor("Choice", list(results));
	}

	public static IStrategoAppl def(String language, IStrategoTerm... segments) {
		return constructor("Def", uri(language, segments));
	}

	public static <T> boolean assertContains(Iterable<T> iterable, T element) {
		boolean found = false;
		for(T item : iterable)
			found = found || element.equals(item);
		return found;
	}

	public static <T> boolean assertContainsAll(Iterable<T> iterable, T element) {
		if(!iterable.iterator().hasNext())
			return false;

		boolean found = true;
		for(T item : iterable)
			found = found && element.equals(item);
		return found;
	}
}
