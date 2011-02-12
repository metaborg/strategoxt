package org.strategoxt.lang.compat;

import static org.spoofax.interpreter.core.Tools.*;

import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.Interpreter;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.InteropContext;
import org.strategoxt.lang.MissingStrategyException;
import org.strategoxt.lang.StrategoExit;
import org.strategoxt.lang.Strategy;

/**
 * Calls another Java component, loaded using reflection.
 * 
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class SSL_EXT_java_call extends AbstractPrimitive {
	
	private static Map<String, Strategy> invocationCache =
		new ConcurrentHashMap<String, Strategy>();
	
	private static Map<String, Method> initCache =
		new ConcurrentHashMap<String, Method>();
	
	private static Set<ClassLoader> asyncClassLoaders = new HashSet<ClassLoader>();
	
	public SSL_EXT_java_call() {
		super("SSL_EXT_java_call", 0, 3);
	}
	
	/**
	 * Registers a new class loader used for dynamical class loading. 
	 * 
	 * This method is only useful in applications that employ multiple class
	 * loaders (such as Eclipse). Typically, this method is used in the form
	 * <code>registerClassLoader(C.class.getClassLoader())</code> where
	 * <code>C</code> is a class that would be dynamically loaded
	 * by a Stratego program.
	 */
	public static void registerClassLoader(ClassLoader classLoader) {
		synchronized (asyncClassLoaders) {
			asyncClassLoaders.add(classLoader);
		}
	}

	@Override
	public boolean call(IContext env, org.spoofax.interpreter.stratego.Strategy[] svars,
			IStrategoTerm[] tvars) throws InterpreterException {
		
		if (!isTermString(tvars[0])) return false;
		if (!isTermInt(tvars[2])) return false;

		String className = ((IStrategoString) tvars[0]).stringValue();
		if (className.indexOf('/') != -1) return false;
		IStrategoTerm input = tvars[1];
		Context parentContext = ((InteropContext) env).getContext();
		boolean sameContext = ((IStrategoInt) tvars[2]).intValue() != 0;
		
		IStrategoTerm result = call(parentContext, className, input, sameContext);
		if (result != null) {
			env.setCurrent(result);
			return true;
		} else {
			return false;
		}
	}

	public IStrategoTerm call(Context parentContext, String className, IStrategoTerm arg, boolean sameContext) {
		Strategy strategy = getStrategy(className);
		if (strategy == null) return null;

		Context context;
		String oldWorkingDir = null;
		if (sameContext) {
			context = parentContext;
		} else {
			if (parentContext != null) {
				oldWorkingDir = parentContext.getIOAgent().getWorkingDir();
				context = new Context(parentContext.getFactory(), parentContext.getIOAgent());
			} else {
				context = new Context();
			}
			context = initContext(context, className);
			if (context == null) return null;
		}

		try {
			IStrategoTerm result = strategy.invoke(context, arg);
			if (result == null) {
				return null;
			} else {
				return result;
			}
		} catch (StrategoExit e) {
			if (sameContext) throw new StrategoExit(e.getValue(), e);
			
			return e.getValue() == StrategoExit.SUCCESS ? arg : null;
		} finally {
			try {
				if (!sameContext) context.getIOAgent().setWorkingDir(oldWorkingDir);
			} catch (Exception e) {
				// Must ignore chdir exceptions here
			}
		}
	}
	
	protected static Context initContext(Context context, String className) {
		try {
			Method method = initCache.get(className);
			if (method == null) {
				String libraryName = toLibraryName(className);
				Class<?> library;
				try {
					library = findClass(libraryName);
				} catch (ClassNotFoundException e) {
					library = findClass(toStrategoName(libraryName));
				}
				method = library.getMethod("init", Context.class);
				initCache.put(className, method);
			}
			return (Context) method.invoke(null, context);
		} catch (ClassNotFoundException e) {
			return null;
		} catch (IllegalArgumentException e) {
			return null;
		} catch (IllegalAccessException e) {
			return null;
		} catch (NoSuchMethodException e) {
			return null;
		} catch (ClassCastException e) {
			throw new MissingStrategyException("Could not dynamically call strategy " + className, e);
		} catch (InvocationTargetException e) {
			throw new MissingStrategyException("Could not dynamically call strategy " + className, e);
		} catch (SecurityException e) {
			throw new MissingStrategyException("Could not dynamically call strategy " + className, e);
		}
	}

	protected static Strategy getStrategy(String className) {
		Strategy cached = invocationCache.get(className);
		if (cached != null) return cached;

		try {
			Class<?> library;
			try {
				library = findClass(toStrategoName(className) + "_0_0");
				
				Field instance = library.getField("instance");

				if (!Strategy.class.isAssignableFrom(instance.getDeclaringClass()))
					throw new MissingStrategyException("Unable to initialize container library for strategy: " + className);
				
				cached = (Strategy) instance.get(null);
				
			} catch (ClassNotFoundException e) {
				library = Class.forName(toStrategoName(className));
				cached = (Strategy) library.getMethod("getMainStrategy", new Class[0]).invoke(null);
				if (cached == null)
					throw new MissingStrategyException("Component has no main strategy: " + className);
			}
			
			invocationCache.put(className, cached);
			return cached;
			
		} catch (ClassNotFoundException e) {
			throw new MissingStrategyException("Could not load dynamically called strategy " + className, e);
		} catch (IllegalArgumentException e) {
			throw new MissingStrategyException("Could not dynamically call strategy " + className, e);
		} catch (NoSuchFieldException e) {
			throw new MissingStrategyException("Could not dynamically call strategy " + className, e);
		} catch (IllegalAccessException e) {
			throw new MissingStrategyException("Could not dynamically call strategy " + className, e);
		} catch (NoSuchMethodException e) {
			throw new MissingStrategyException("Could not dynamically call strategy " + className, e);
		} catch (ClassCastException e) {
			throw new MissingStrategyException("Could not dynamically call strategy " + className, e);
		} catch (InvocationTargetException e) {
			throw new MissingStrategyException("Could not dynamically call strategy " + className, e);
		} catch (SecurityException e) {
			throw new MissingStrategyException("Could not dynamically call strategy " + className, e);
		}
	}
	
	private static Class<?> findClass(String className) throws ClassNotFoundException {
		try {
			return Class.forName(className, true, SSL_EXT_java_call.class.getClassLoader());
		} catch (ClassNotFoundException e) {
			synchronized (asyncClassLoaders) {
				for (ClassLoader loader : asyncClassLoaders) {
					try {
						return Class.forName(className, true, loader);
					} catch (ClassNotFoundException ignored) {
						// Try again
					}
				}
			}
			throw e;
		}
	}
	
	private static String toStrategoName(String className) {
		StringBuilder result = new StringBuilder();
		String[] parts = className.split("\\.");
		
		result.append(Interpreter.cify(parts[0]));
		for (int i = 1; i < parts.length; i++) {
			result.append('.');
			result.append(Interpreter.cify(parts[i]));
		}
		
		return result.toString();
	}
	
	private static String toLibraryName(String className) {
		StringBuilder result = new StringBuilder();
		String[] parts = className.split("\\.");
		
		result.append(parts[0]);
		for (int i = 1, max = parts.length - 1; i < max; i++) {
			result.append('.');
			result.append(parts[i]);
		}
		result.append(".Main");
		
		return result.toString();
	}
}
