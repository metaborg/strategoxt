package org.metaborg.runtime.task.test;

import org.junit.AfterClass;
import org.junit.BeforeClass;
import org.metaborg.runtime.task.TaskEngine;
import org.metaborg.runtime.task.TaskManager;
import org.spoofax.interpreter.core.Interpreter;
import org.spoofax.interpreter.library.IOAgent;
import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;
import org.spoofax.interpreter.terms.ITermFactory;

public class IndexTest {
    protected static Interpreter interpreter;
    protected static ITermFactory factory;
    protected static IOAgent agent;

    protected static TaskManager taskManager;
    protected static TaskEngine taskEngine;

    @BeforeClass
    public static void setUpOnce() {
        interpreter = new Interpreter();
        factory = interpreter.getFactory();
        agent = interpreter.getIOAgent();

        taskManager = new TaskManager();
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

    public static IStrategoAppl constructor(String constructor, IStrategoTerm... terms) {
        return factory.makeAppl(factory.makeConstructor(constructor, terms.length), terms);
    }

    public static IStrategoTuple tuple(IStrategoTerm... terms) {
        return factory.makeTuple(terms);
    }

    public static IStrategoString file(String file) {
        return str(file);
    }

    public static IStrategoTuple file(String file, String namespace, String... path) {
        return factory.makeTuple(str(file), uri(namespace, path));
    }

    public static IStrategoList path(String... path) {
        IStrategoString[] strategoPath = new IStrategoString[path.length];
        for(int i = 0; i < path.length; ++i)
            // Paths are reversed in Stratego for easy appending of new names.
            strategoPath[i] = str(path[path.length - i - 1]);
        return factory.makeList(strategoPath);
    }

    public static IStrategoList uri(String namespace, String... path) {
        return factory.makeListCons(constructor(namespace), path(path));
    }

    public static IStrategoAppl def(String namespace, String... path) {
        return factory.makeAppl(factory.makeConstructor("Def", 1), uri(namespace, path));
    }

    public static IStrategoAppl use(String namespace, String... path) {
        return factory.makeAppl(factory.makeConstructor("Use", 1), uri(namespace, path));
    }

    public static IStrategoAppl read(String namespace, String... path) {
        return factory.makeAppl(factory.makeConstructor("Read", 1), uri(namespace, path));
    }

    public static IStrategoAppl readAll(String prefix, String namespace, String... path) {
        return factory.makeAppl(factory.makeConstructor("ReadAll", 2), uri(namespace, path), str(prefix));
    }

    public static IStrategoAppl type(IStrategoTerm type, String namespace, String... path) {
        return factory.makeAppl(factory.makeConstructor("Type", 2), uri(namespace, path), type);
    }

    public static IStrategoAppl defData(IStrategoTerm type, IStrategoTerm value, String namespace, String... path) {
        return factory.makeAppl(factory.makeConstructor("DefData", 3), uri(namespace, path), type, value);
    }

    public static IStrategoAppl longTerm(IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, String namespace,
        String... path) {
        return factory.makeAppl(factory.makeConstructor("LongTerm", 4), uri(namespace, path), t1, t2, t3);
    }
}
