package org.strategoxt;

import java.io.File;
import java.io.IOException;
import java.net.JarURLConnection;
import java.net.URL;
import java.net.URLClassLoader;
import java.util.Enumeration;
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
import org.spoofax.interpreter.stratego.SDefT;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.InteropRegisterer;
import org.strategoxt.lang.InteropSDefT;
import org.strategoxt.lang.MissingStrategyException;
import org.strategoxt.lang.StrategoErrorExit;
import org.strategoxt.lang.StrategoException;
import org.strategoxt.lang.StrategoExit;
import org.strategoxt.lang.terms.TermFactory;
import org.strategoxt.stratego_lib.stratego_lib;

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
public class HybridInterpreter extends Interpreter {
	
	private static final String USAGE = "Uses: run [FILE.ctree | FILE.jar]... MAINCLASS [ARGUMENT]...\n" +
	                                    "      run                    PACKAGE.MAINCLASS [ARGUMENT]...";

	private final HybridCompiledContext compiledContext;
	
	private boolean registeredLibraries;
	
	private boolean loadedJars;

	public HybridInterpreter() {
		this(new TermFactory());
	}

	public HybridInterpreter(ITermFactory factory) {
		this(factory, factory);
	}

	public HybridInterpreter(ITermFactory termFactory, ITermFactory programFactory) {
		super(termFactory, programFactory);
		
		compiledContext = new HybridCompiledContext(termFactory);
	}
	
	/**
	 * Creates an interpreter that bases its definition scope on an existing instance.
	 */
	public HybridInterpreter(HybridInterpreter interpreter) {
		this(interpreter.getFactory(), ((org.spoofax.interpreter.core.Context) interpreter.getContext()).getProgramFactory());
		getContext().setVarScope(new VarScope(interpreter.getContext().getVarScope()));
		interpreter.init();
		for (IOperatorRegistry registry : interpreter.getCompiledContext().getOperatorRegistries()) {
			if (getContext().getOperatorRegistry(registry.getOperatorRegistryName()) == null)
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

	private static void warnUnqualifiedInvoke(HybridInterpreter interpreter, String main) {
		interpreter.init();
		SDefT invoked = interpreter.lookupUncifiedSVar(main);
		if (invoked != null) {
			String name = ((InteropSDefT) invoked).getStrategy().getClass().getName();
			System.err.println("Warning: unqualified invocation of " + name);
		}
	}

	private static int mainLoadAll(HybridInterpreter interpreter, String... args) {
		int i = 0;
		while (i < args.length) {
			try {
				if (args[i].endsWith(".ctree")) {
					interpreter.load(args[i++]);
				} else if (args[i].endsWith(".jar")) {
					URL[] jars = { new File(args[i++]).toURL() };
					interpreter.loadJars(jars);
				} else {
					break;
				}
			} catch (Exception e) {
				System.err.println("Could not open input file " + args[i]
						+ ": " + e.getClass().getSimpleName() + " - "
						+ e.getMessage());
				System.exit(126);
			}
		}
		boolean nothingLoaded = i == 0;
		if (i == args.length || (!nothingLoaded && args[i].indexOf('.') > -1)) {
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
		// (since this interpreter may only be used with compiled strategies)
		init();
		super.load(term);
	}

	public void loadJars(URL... jars)
			throws SecurityException, IncompatibleJarException, IOException {
		
		loadJars(HybridInterpreter.class.getClassLoader(), jars);
	}
	
	public void loadJars(ClassLoader parentClassLoader, URL... jars)
			throws SecurityException, IncompatibleJarException, IOException {

		URLClassLoader classLoader = new URLClassLoader(jars, stratego_lib.class.getClassLoader());
		loadedJars = true;
		
		for (URL jar : jars) {
		    registerJar(classLoader, jar);
		}
	}

	private void registerJar(URLClassLoader classLoader, URL jar)
			throws SecurityException, IncompatibleJarException, IOException {

		URL protocolfulUrl = new URL("jar", "", jar + "!/");
		JarURLConnection connection = (JarURLConnection) protocolfulUrl.openConnection();
		connection.setUseCaches(false);
		JarFile jarFile = connection.getJarFile();
		Enumeration<JarEntry> jarEntries = jarFile.entries();		
		boolean foundRegisterer = false;
		
		while (jarEntries.hasMoreElements()) {
			String entry = jarEntries.nextElement().getName();
			if (entry.endsWith("/InteropRegisterer.class") || entry.endsWith("$InteropRegisterer.class") || entry.equals("InteropRegisterer.class")) {
				final int POSTFIX = ".class".length();
				String className = entry.substring(0, entry.length() - POSTFIX);
				className = className.replace('/', '.');
				Class<?> registerClass;
				try {
					registerClass = classLoader.loadClass(className);
					Object registerObject = registerClass.newInstance();
					if (registerObject instanceof InteropRegisterer) {
						((InteropRegisterer) registerObject).registerLazy(getContext(), getCompiledContext(), classLoader);
						foundRegisterer = true;
					} else {
						throw new IncompatibleJarException(jar, new ClassCastException("Unknown type for InteropRegisterer"));
					}
				} catch (InstantiationException e) {
					throw new IncompatibleJarException(jar, e);
				} catch (IllegalAccessException e) {
					throw new IncompatibleJarException(jar, e);
				} catch (ClassNotFoundException e) {
					throw new RuntimeException("Could not load listed class", e);
				}
			}
		}
		
		if (!foundRegisterer)
			throw new IncompatibleJarException(jar, "No STRJ InteropRegisterer classes found");
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
		return ((HybridCompiledContext) context).getContext();
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
			throw new InterpreterErrorExit(e.getMessage(), e.getTerm(), e);
        } catch (StrategoExit e) {
            throw new InterpreterExit(e.getValue(), e);
        } catch (MissingStrategyException e) {
        	throw new UndefinedStrategyException(e);
        } catch (StrategoException e) {
            throw new InterpreterException(e);
        }
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
		
		@Override @Deprecated
		public void addOperatorRegistry(String domain, IOperatorRegistry or) {
			super.addOperatorRegistry(domain, or);
			compiledContext.internalAddOperatorRegistry(or);
		}
		
		protected void internalAddOperatorRegistry(IOperatorRegistry or) {
			super.addOperatorRegistry(or);
		}
		
		@Override
		public StackTracer getStackTracer() {
			return compiledContext;
		}
		
		public Context getCompiledContext() {
			return compiledContext;
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
		
		public IContext getContext() {
			return HybridInterpreter.this.getContext();
		}

		@Override
		public void addOperatorRegistry(IOperatorRegistry or) {
			super.addOperatorRegistry(or);
			((HybridContext) getContext()).internalAddOperatorRegistry(or);
		}
		
		protected void internalAddOperatorRegistry(IOperatorRegistry or) {
			super.addOperatorRegistry(or);
		}
	}
}
