package org.strategoxt;

import static org.spoofax.interpreter.core.Tools.asJavaString;
import static org.spoofax.interpreter.core.Tools.isTermAppl;
import static org.spoofax.interpreter.core.Tools.termAt;

import java.io.File;
import java.io.IOException;
import java.net.JarURLConnection;
import java.net.URL;
import java.net.URLClassLoader;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Enumeration;
import java.util.HashSet;
import java.util.Set;
import java.util.jar.JarEntry;
import java.util.jar.JarFile;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.Interpreter;
import org.spoofax.interpreter.core.InterpreterErrorExit;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.core.InterpreterExit;
import org.spoofax.interpreter.core.StackTracer;
import org.spoofax.interpreter.core.UndefinedStrategyException;
import org.spoofax.interpreter.core.VarScope;
import org.spoofax.interpreter.library.IOperatorRegistry;
import org.spoofax.interpreter.library.ssl.SSLLibrary;
import org.spoofax.interpreter.stratego.SDefT;
import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoConstructor;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
import org.spoofax.interpreter.util.IAsyncCancellable;
import org.spoofax.terms.StrategoConstructor;
import org.spoofax.terms.TermFactory;
import org.spoofax.terms.TermTransformer;
import org.spoofax.terms.attachments.AbstractWrappedTermFactory;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.InteropRegisterer;
import org.strategoxt.lang.InteropSDefT;
import org.strategoxt.lang.MissingStrategyException;
import org.strategoxt.lang.StrategoErrorExit;
import org.strategoxt.lang.StrategoException;
import org.strategoxt.lang.StrategoExit;
import org.strategoxt.strc.desugar_0_0;
import org.strategoxt.strc.desugar_list_matching_0_0;
import org.strategoxt.strc.pre_desugar_0_0;
import org.strategoxt.strc.raise_annotations_0_0;
import org.strategoxt.strc.simplify_0_0;

/**
 * An interpreter that uses STRJ-compiled versions of the Stratego standard libraries.
 *
 * This interpreter typically loads much faster than the standard interpreter.
 * Custom libraries can be added using their <code>registerInterop</code>
 * method:
 *
 * <code>
 *   HybridInterpreter i = new HybridInterpreter();
 *   mylib.registerInterop(i.getContext(), i.getCompiledContext());
 * </code>
 *
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class HybridInterpreter extends Interpreter implements IAsyncCancellable {

	protected static final String USAGE = "Uses: run [FILE.ctree | FILE.jar]... MAINCLASS [ARGUMENT]...\n" +
	                                    "      run                    PACKAGE.MAINCLASS [ARGUMENT]...";

	private final HybridCompiledContext compiledContext;

	private boolean registeredLibraries;

	private boolean loadedJars;

	private final ConstructorRecordingTermFactory recordingFactory;

	private static class ConstructorRecordingTermFactory extends AbstractWrappedTermFactory {

		private final Collection<IStrategoConstructor> constructors = new ArrayList<IStrategoConstructor>();
		private final ITermFactory theBaseFactory;

		public ConstructorRecordingTermFactory(ITermFactory baseFactory) {
			super(IStrategoTerm.MUTABLE, baseFactory);
			theBaseFactory = baseFactory;
		}

		public ITermFactory getFactoryWithStorageType(int storageType) {
			assert getDefaultStorageType() <= storageType;
			return this;
		}

		@Override
		public StrategoConstructor makeConstructor(String name, int arity) {
			StrategoConstructor r = super.makeConstructor(name, arity);
			constructors.add(r);
			return r;
		}

		public Collection<IStrategoConstructor> getAndClearConstructorRecord() {
			ArrayList<IStrategoConstructor> r = new ArrayList<IStrategoConstructor>(constructors);
			constructors.clear();
			return r;
		}

		public ITermFactory getWrappedFactory() {
			return theBaseFactory;
		}
	};

	public HybridInterpreter() {
		this(new TermFactory());
	}

	public HybridInterpreter(ITermFactory factory) {
		this(factory, factory);
	}

	public HybridInterpreter(ITermFactory termFactory, ITermFactory programFactory) {
		super(termFactory, programFactory);

		compiledContext = new HybridCompiledContext(termFactory);
		recordingFactory = new ConstructorRecordingTermFactory(termFactory);
	}

	/**
	 * Creates an interpreter that bases its definition scope on an existing instance.
	 *
	 * @param interpreter		The interpreter to base this instance on.
	 *
	 * @param reuseRegistries	The names of operator registries that should not be re-created,
	 *                       	but can be reused from the old instance.
	 */
	public HybridInterpreter(HybridInterpreter interpreter, String... reuseRegistries) {
		this(interpreter.getFactory(), ((org.spoofax.interpreter.core.Context) interpreter.getContext()).getProgramFactory());
		Set<String> reusable = asSet(reuseRegistries);

		getContext().setVarScope(new VarScope(interpreter.getContext().getVarScope()));
		interpreter.init();
		for (IOperatorRegistry registry : interpreter.getCompiledContext().getOperatorRegistries().values()) {
			IOperatorRegistry existing = getContext().getOperatorRegistry(registry.getOperatorRegistryName());
			if (existing == null || reusable.contains(registry.getOperatorRegistryName()))
				addOperatorRegistry(registry);
		}
		registeredLibraries = interpreter.registeredLibraries;
		loadedJars = interpreter.loadedJars;
		setIOAgent(interpreter.getIOAgent());
		setCurrent(interpreter.current());
	}

	public static void main(String... args) {
		if (args == null || args.length < 1) {
			System.out.println(USAGE);
			System.exit(127);
		}
		HybridInterpreter interpreter = new HybridInterpreter();
		int i = mainLoadAll(interpreter, args);
		boolean nothingLoaded = i == 0;

		String main = args[i++];

		if (nothingLoaded)
			warnUnqualifiedInvoke(interpreter, main);

		IStrategoString[] mainArgs = new IStrategoString[args.length - i + 1];
		mainArgs[0] = interpreter.getFactory().makeString(main);

		for (int j = 1; j < mainArgs.length; i++, j++) {
			mainArgs[j] = interpreter.getFactory().makeString(args[i]);
		}
		interpreter.setCurrent(interpreter.getFactory().makeList(mainArgs));
		try {
			interpreter.invoke(main);
		} catch (InterpreterExit e) {
			System.exit(e.getValue());
		} catch (UndefinedStrategyException e) {
			System.err.println(e.getMessage());
			System.exit(125);
		} catch (InterpreterException e) {
			e.printStackTrace();
			System.exit(124);
		}
	}

	private static Set<String> asSet(String... reuseRegistries) {
		Set<String> reusable = new HashSet<String>();
		if (reuseRegistries != null)
			for (String reuse : reuseRegistries) reusable.add(reuse);
		return reusable;
	}

	protected static void warnUnqualifiedInvoke(HybridInterpreter interpreter, String main) {
		interpreter.init();
		SDefT invoked = interpreter.lookupUncifiedSVar(main);
		if (invoked != null) {
			String name = ((InteropSDefT) invoked).getStrategy().getClass().getName();
			System.err.println("Warning: unqualified invocation of " + name);
		}
	}

	protected static int mainLoadAll(HybridInterpreter interpreter, String... args) {
		int i = 0;
		while (i < args.length) {
			try {
				if (args[i].endsWith(".ctree")) {
					interpreter.load(args[i++]);
				} else if (args[i].endsWith(".jar")) {
					URL[] jars = { new File(args[i++]).toURI().toURL() };
					interpreter.loadJars(jars);
				} else {
					break;
				}
			} catch (Exception e) {
				System.err.println("Could not open input file " + args[i - 1]
						+ ": " + e.getClass().getSimpleName() + " - "
						+ e.getMessage());
				System.exit(126);
			}
		}
		boolean nothingLoaded = i == 0;
		if (i == args.length) {
			System.err.println(USAGE);
			System.exit(1);
		} else if (nothingLoaded && args[i].indexOf('.') > -1) {
			mainLocalJar(args); // avoid HybridInterpreter/InteropRegisters
		}
		return i;
	}

	private static void mainLocalJar(String... args) {
		String strategy = args[0];
		String[] mainArgs = new String[args.length - 1];
		System.arraycopy(args, 1, mainArgs, 0, mainArgs.length);
		try {
			Context context = new Context();
			IStrategoTerm result;
			try {
				result = context.invokeStrategyCLI(strategy, strategy, mainArgs);
			} finally {
				context.getIOAgent().closeAllFiles();
			}
			if (result == null) {
				System.err.println(strategy + (context.getTraceDepth() != 0
								? ": rewriting failed, trace:"
								: ": rewriting failed"));
				context.printStackTrace();
				System.exit(1);
			} else {
				System.exit(0);
			}
		} catch (MissingStrategyException e) {
			System.err.println(e.getMessage());
			System.exit(125);
		} catch (StrategoExit e) {
			System.exit(e.getValue());
		}
	}

	@Override
	protected org.spoofax.interpreter.core.Context createContext(ITermFactory termFactory, ITermFactory programFactory) {
		return new HybridContext(termFactory, programFactory);
	}

	@Override
	public void load(IStrategoTerm term) throws InterpreterException {
		// Lazily register library strategies
		// (since this interpreter may be used with only compiled strategies)
		init();
		super.load(term);
	}

	public void loadJars(URL... jars)
			throws SecurityException, NoInteropRegistererJarException, IncompatibleJarException, IOException {

		loadJars(HybridInterpreter.class.getClassLoader(), jars);
	}

	public void loadJars(ClassLoader parentClassLoader, URL... jars)
			throws SecurityException, NoInteropRegistererJarException, IncompatibleJarException, IOException {

		URLClassLoader classLoader = new URLClassLoader(jars, parentClassLoader);
		boolean foundRegisterer = false;
		loadedJars = true;

		for (URL jar : jars) {
			foundRegisterer |=
				registerJar(classLoader, jar);
		}

		if (!foundRegisterer)
			throw new NoInteropRegistererJarException(jars);
	}
	
	/**
	 * Directly register a InteropRegisterer instance without the need to package it into a .jar file
	 * @param registerer InteropRegisterer instance to register
	 */
	public void registerClass(InteropRegisterer registerer){
		registerClass(registerer,this.getClass().getClassLoader());
	}
	
	/**
	 * Directly register a InteropRegisterer instance without the need to package it into a .jar file
	 * @param registerer InteropRegisterer instance to register
	 * @param classLoader ClassLoader to use for InteropRegisterer registration
	 */
	public void registerClass(InteropRegisterer registerer, ClassLoader classLoader ){
		assert recordingFactory.getWrappedFactory() == getCompiledContext().getFactory();
		getCompiledContext().setFactory(recordingFactory);
		registerer.registerLazy(getContext(), getCompiledContext(), classLoader);
		getCompiledContext().addConstructors(recordingFactory.getAndClearConstructorRecord());
		getCompiledContext().setFactory(recordingFactory.getWrappedFactory());
	}

	private boolean registerJar(URLClassLoader classLoader, URL jar)
			throws SecurityException, IncompatibleJarException, IOException {

		URL protocolfulUrl = new URL("jar", "", jar + "!/");
		JarURLConnection connection = (JarURLConnection) protocolfulUrl.openConnection();
		connection.setUseCaches(false);
		boolean foundRegisterer = false;
		JarFile jarFile = connection.getJarFile();
		try {
			Enumeration<JarEntry> jarEntries = jarFile.entries();

			while (jarEntries.hasMoreElements()) {
				String entry = jarEntries.nextElement().getName();
				if (entry.endsWith("/InteropRegisterer.class") || entry.endsWith("$InteropRegisterer.class") || entry.equals("InteropRegisterer.class")) {
					final int POSTFIX = ".class".length();
					String className = entry.substring(0, entry.length() - POSTFIX);
					className = className.replace('/', '.');
					try {
						Class<?> registerClass = classLoader.loadClass(className);
						Object registerObject = registerClass.newInstance();
						if (registerObject instanceof InteropRegisterer) {
							//register instantiated InteropRegisterer
							registerClass((InteropRegisterer)registerObject,classLoader);
							foundRegisterer = true;
						} else {
							throw new IncompatibleJarException(jar, new ClassCastException("Unknown type for InteropRegisterer"));
						}
					} catch (InstantiationException e) {
						throw new IncompatibleJarException(jar, e);
					} catch (IllegalAccessException e) {
						throw new IncompatibleJarException(jar, e);
					} catch (ClassNotFoundException e) {
						throw new IncompatibleJarException(jar, e);
					} catch (RuntimeException e) {
						throw new IncompatibleJarException(jar, e);
					} catch (Error e) {
						// e.g. thrown by Eclipse when sources could not be compiled
						throw new IncompatibleJarException(jar, e);
					}
				}
			}
		} finally {
			jarFile.close();
		}
		return foundRegisterer;
	}

	/**
	 * Eagerly initializes this interpreter, loading the standard libraries.
	 * (If not invoked, load() ensures lazy initialization.)
	 */
	public void init() {
		if (!registeredLibraries && !loadedJars) {
			registeredLibraries = true;
			registerLibraries();
		}
	}

	/**
	 * Uninitializes the interpreter, making a best-effort attempt
	 * at releasing any resources associated with it.
	 */
	public void uninit() {
		loadedJars = false;
		getContext().getVarScope().clear();
		SSLLibrary lib = SSLLibrary.instance(getContext());
		if (lib != null)
			lib.getIOAgent().closeAllFiles();
	}

	/**
	 * Initialize the interpreter register with all standard library strategies.
	 */
	protected void registerLibraries() {
		IContext context = getContext();
		Context compiledContext = getCompiledContext();

		// FIXME: HybridInterpreter loads all libs into the same namespace
		//        Which may affect interpreted code and invoke()
		org.strategoxt.tools.Main.registerInterop(context, compiledContext);
		org.strategoxt.stratego_gpp.Main.registerInterop(context, compiledContext);
		org.strategoxt.stratego_aterm.Main.registerInterop(context, compiledContext);
		org.strategoxt.stratego_rtg.Main.registerInterop(context, compiledContext);
		org.strategoxt.stratego_sdf.Main.registerInterop(context, compiledContext);
		org.strategoxt.stratego_sglr.Main.registerInterop(context, compiledContext);
		org.strategoxt.stratego_tool_doc.Main.registerInterop(context, compiledContext);
		org.strategoxt.stratego_xtc.Main.registerInterop(context, compiledContext);
		org.strategoxt.java_front.Main.registerInterop(context, compiledContext);
		org.strategoxt.stratego_lib.Main.registerInterop(context, compiledContext);
		org.strategoxt.strc.Main.registerInterop(context, compiledContext);
	}

	public final Context getCompiledContext() {
		return compiledContext;
	}

	public static Context getCompiledContext(IContext context) {
		return ((HybridContext) context).getCompiledContext();
	}

	public static IContext getContext(Context context) {
		return context instanceof HybridCompiledContext
			? ((HybridCompiledContext) context).getContext()
			: null;
	}

	public static HybridInterpreter getInterpreter(Context context) {
		return context instanceof HybridCompiledContext
			? ((HybridCompiledContext) context).getInterpreter()
			: null;
	}

	/**
	 * Invokes a compiled or interpreted strategy bound to this instance.
	 *
	 * Wraps any StrategoException into checked InterpreterException exceptions.
	 */
	@Override
	public boolean invoke(String name)
			throws InterpreterErrorExit, InterpreterExit, UndefinedStrategyException, InterpreterException {

		try {
			if (!loadedJars) init();
			return super.invoke(name);
		} catch (StrategoErrorExit e) {
			throw new InterpreterErrorExit(e.getMessage(), e.getTerm(), e.getTrace(), e.getCause());
        } catch (StrategoExit e) {
            throw new InterpreterExit(e.getValue(), e);
        } catch (MissingStrategyException e) {
        	throw new UndefinedStrategyException(e);
        } catch (StrategoException e) {
            throw new InterpreterException(e);
        }
	}

	@Override
	public boolean evaluate(IStrategoAppl s)
			throws InterpreterErrorExit, InterpreterExit, UndefinedStrategyException, InterpreterException {

		init();
		return super.evaluate(s);
	}

	/**
	 * Evaluates a stratego expression, optionally desugaring it.
     *
	 * Note that no checks whatsoever are applied during desugaring.
	 * It also does not support higher-order strategy calls
	 * or nullary constructors.
	 */
	public boolean evaluate(IStrategoAppl s, boolean desugar)
			throws InterpreterErrorExit, InterpreterExit, UndefinedStrategyException, InterpreterException {

		if (desugar) {
			init();
			// TODO: support nullary constructors? e.g. by considering all non-matched unary vars to be constructors
			s = desugar(s);
		}
		return evaluate(s);
	}

	private IStrategoAppl desugar(IStrategoAppl s) {
		final ITermFactory factory = getProgramFactory();
		final IStrategoConstructor callT = factory.makeConstructor("CallT", 3);
		final IStrategoConstructor sdefT = factory.makeConstructor("SDefT", 4);
		s = (IStrategoAppl) pre_desugar_0_0.instance.invoke(getCompiledContext(), s);
		s = (IStrategoAppl) desugar_list_matching_0_0.instance.invoke(getCompiledContext(), s);
		s = (IStrategoAppl) desugar_0_0.instance.invoke(getCompiledContext(), s);
		s = (IStrategoAppl) raise_annotations_0_0.instance.invoke(getCompiledContext(), s);
		s = (IStrategoAppl) simplify_0_0.instance.invoke(getCompiledContext(), s);
		s = (IStrategoAppl) new TermTransformer(factory, false) {
				@Override
				public IStrategoTerm preTransform(IStrategoTerm term) {
					if (isTermAppl(term)) {
						term = cifyAndAddParams(factory, callT, sdefT, (IStrategoAppl) term);
					}
					return term;
				}
			}.transform(s);
		return s;
	}

	private IStrategoTerm cifyAndAddParams(ITermFactory factory, IStrategoConstructor callT,
			IStrategoConstructor sdefT, IStrategoAppl current) {

		IStrategoConstructor cons = current.getConstructor();
		if (cons == sdefT || cons == callT) {
			IStrategoTerm s = termAt(current, 1);
			IStrategoTerm t = termAt(current, 2);
			if (cons == sdefT) {
				IStrategoString name = termAt(current, 0);
				name = factory.makeString(cify(asJavaString(name)) + "_" + s.getSubtermCount() + "_" + t.getSubtermCount());
				current = factory.makeAppl(cons, name, s, t, termAt(current, 3));
			} else {
				IStrategoAppl svar = termAt(current, 0);
				IStrategoTerm name = termAt(svar, 0);
				name = factory.makeString(cify(asJavaString(name)) + "_" + s.getSubtermCount() + "_" + t.getSubtermCount());
				name = factory.makeAppl(svar.getConstructor(), name);
				current = factory.makeAppl(cons, name, s, t);
			}
		}
		return current;
	}

	/**
	 * A hybrid interpreter context.
	 *
	 * @author Lennart Kats <lennart add lclnet.nl>
	 */
	private class HybridContext extends org.spoofax.interpreter.core.Context {

		public HybridContext(ITermFactory termFactory, ITermFactory programFactory) {
			super(termFactory, programFactory, true);
		}

		@Override
		public void addOperatorRegistry(IOperatorRegistry or) {
			super.addOperatorRegistry(or);
			compiledContext.internalAddOperatorRegistry(or);
		}

		private final void internalAddOperatorRegistryNoCompiledContext(IOperatorRegistry or) {
			super.addOperatorRegistry(or);
		}

		@Override
		public StackTracer getStackTracer() {
			return compiledContext;
		}

		public Context getCompiledContext() {
			return compiledContext;
		}

		@Override
		public void setFactory(ITermFactory factory) {
			super.setFactory(factory);
			compiledContext.setFactory(factory);
		}

		@Override
		protected void cancel() {
			getCompiledContext().asyncCancelReset();
			super.cancel();
		}
	}

	/**
	 * A hybrid compiled Stratego context.
	 *
	 * @author Lennart Kats <lennart add lclnet.nl>
	 */
	private class HybridCompiledContext extends Context {

		public HybridCompiledContext(ITermFactory factory) {
			super(factory);
		}

		public HybridInterpreter getInterpreter() {
			return HybridInterpreter.this;
		}

		public IContext getContext() {
			return getInterpreter().getContext();
		}

		@Override
		public void addOperatorRegistry(IOperatorRegistry or) {
			super.addOperatorRegistry(or);
			((HybridContext) getContext()).internalAddOperatorRegistryNoCompiledContext(or);
		}

		protected final void internalAddOperatorRegistry(IOperatorRegistry or) {
			super.addOperatorRegistry(or);
		}

		@Override
		public IStrategoTerm invokeStrategy(String strategy, IStrategoTerm input)
				throws MissingStrategyException, StrategoErrorExit, StrategoExit, StrategoException {

			IStrategoTerm oldCurrent = current();
			try {
				setCurrent(input);
				invoke(strategy);
				return current();
			} catch (InterpreterErrorExit e) {
				throw new StrategoErrorExit(e.getMessage(), e.getTerm(), e.getTrace(), e.getCause());
			} catch (InterpreterExit e) {
				throw new StrategoExit(e.getValue(), e);
			} catch (UndefinedStrategyException e) {
				throw new MissingStrategyException(e.getMessage(), e);
			} catch (InterpreterException e) {
				throw new StrategoException(e.getMessage(), e);
			} finally {
				setCurrent(oldCurrent);
			}
		}

		@Override
		protected void cancel() {
			getContext().asyncCancelReset();
			super.cancel();
		}
	}

	public void asyncCancel() {
		getCompiledContext().asyncCancel();
		getContext().asyncCancel();
	}

	public void asyncCancelReset() {
		getCompiledContext().asyncCancelReset();
		getContext().asyncCancelReset();
	}
}
