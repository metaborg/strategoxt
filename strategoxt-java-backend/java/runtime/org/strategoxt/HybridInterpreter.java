package org.strategoxt;

import java.io.IOException;
import java.net.JarURLConnection;
import java.net.URL;
import java.net.URLClassLoader;
import java.util.Enumeration;
import java.util.jar.JarEntry;
import java.util.jar.JarFile;

import org.spoofax.interpreter.adapter.aterm.BAFBasicTermFactory;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.Interpreter;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.core.InterpreterExit;
import org.spoofax.interpreter.core.StackTracer;
import org.spoofax.interpreter.library.IOperatorRegistry;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.InteropRegisterer;
import org.strategoxt.lang.StrategoException;
import org.strategoxt.lang.StrategoExit;
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
	
	private final HybridCompiledContext compiledContext;
	
	private boolean registeredLibraries;

	public HybridInterpreter() {
		this(new BAFBasicTermFactory());
	}

	public HybridInterpreter(ITermFactory factory) {
		this(factory, factory);
	}

	public HybridInterpreter(ITermFactory termFactory, ITermFactory programFactory) {
		super(termFactory, programFactory);
		
		compiledContext = new HybridCompiledContext(termFactory);
	}
	
	@Override
	protected org.spoofax.interpreter.core.Context createContext(ITermFactory termFactory, ITermFactory programFactory) {
		return new HybridContext(termFactory, programFactory);
	}
	
	@Override
	public void load(IStrategoTerm term) throws InterpreterException {
		// Lazily register library strategies
		// (since this interpreter may only be used with compiled strategies)
		if (!registeredLibraries) {
			registeredLibraries = true;
			registerLibraries();
		}
		super.load(term);
	}

	public void loadJars(URL... jars)
			throws SecurityException, IncompatibleJarException, IOException {
		
		loadJars(HybridInterpreter.class.getClassLoader(), jars);
	}
	
	public void loadJars(ClassLoader parentClassLoader, URL... jars)
			throws SecurityException, IncompatibleJarException, IOException {

		URLClassLoader classLoader = new URLClassLoader(jars, stratego_lib.class.getClassLoader());
		
		for (URL jar : jars) {
		    registerJar(classLoader, jar);
		}
	}

	private void registerJar(URLClassLoader classLoader, URL jar)
			throws SecurityException, IncompatibleJarException, IOException {

		URL protocolfulUrl = new URL("jar", "", jar + "!/");
		JarURLConnection connection = (JarURLConnection) protocolfulUrl.openConnection();
		JarFile jarFile = connection.getJarFile();
		Enumeration<JarEntry> jarEntries = jarFile.entries();
		
		while (jarEntries.hasMoreElements()) {
			String entry = jarEntries.nextElement().getName();
			if (entry.endsWith("/InteropRegisterer.class") || entry.equals("InteropRegisterer.class")) {
				final int POSTFIX = ".class".length();
				String className = entry.substring(0, entry.length() - POSTFIX);
				className = className.replace('/', '.');
				Class<?> registerClass;
				try {
					registerClass = classLoader.loadClass(className);
					Object registerObject = registerClass.newInstance();
					if (registerObject instanceof InteropRegisterer) {
						((InteropRegisterer) registerObject).registerLazy(getContext(), getCompiledContext(), classLoader);
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
	}
	
	/**
	 * Initialize the interpreter register with all standard library strategies.
	 */
	protected void registerLibraries() {
		IContext context = getContext();
		Context compiledContext = getCompiledContext();
		
		org.strategoxt.stratego_aterm.Main.registerInterop(context, compiledContext);
		org.strategoxt.stratego_lib.Main.registerInterop(context, compiledContext);
		org.strategoxt.stratego_rtg.Main.registerInterop(context, compiledContext);
		org.strategoxt.stratego_sdf.Main.registerInterop(context, compiledContext);
		org.strategoxt.stratego_xtc.Main.registerInterop(context, compiledContext);
		org.strategoxt.stratego_sglr.Main.registerInterop(context, compiledContext);
		org.strategoxt.stratego_tool_doc.Main.registerInterop(context, compiledContext);
		org.strategoxt.stratego_rtg.Main.registerInterop(context, compiledContext);
		org.strategoxt.stratego_gpp.Main.registerInterop(context, compiledContext);
		org.strategoxt.java_front.Main.registerInterop(context, compiledContext);
		org.strategoxt.strc.Main.registerInterop(context, compiledContext);
	}
	
	public final Context getCompiledContext() {
		return compiledContext;
	}
	
	@Override
	public boolean invoke(String name) throws InterpreterExit, InterpreterException {
		try {
			return super.invoke(name);
        } catch (StrategoExit e) {
            throw new InterpreterExit(e.getValue(), e);
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
