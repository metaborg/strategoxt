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
import org.strategoxt.lang.StrategoException;
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
		IStrategoTerm arg = tvars[1];
		boolean sameContext = ((IStrategoInt) tvars[2]).intValue() != 0;
		
		Strategy strategy = getStrategy(className);
		if (strategy == null) return false;

		Context parentContext = ((InteropContext) env).getContext();
		Context context;
		if (sameContext) {
			context = parentContext;
		} else {
			context = new Context(parentContext.getFactory(), parentContext.getIOAgent());
			context = initContext(context, className);
			if (context == null) return false;
		}

		try {
			IStrategoTerm result = strategy.invoke(context, arg);
			if (result == null) {
				return false;
			} else {
				env.setCurrent(result);
				return true;
			}
		} catch (StrategoExit e) {
			if (sameContext) throw new StrategoExit(e.getValue(), e);
			
			return e.getValue() == StrategoExit.SUCCESS;
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
			throw new StrategoException("Could not dynamically call strategy " + className, e);
		} catch (InvocationTargetException e) {
			throw new StrategoException("Could not dynamically call strategy " + className, e);
		} catch (SecurityException e) {
			throw new StrategoException("Could not dynamically call strategy " + className, e);
		}
	}

	protected static Strategy getStrategy(String className) {
		Strategy cached = invocationCache.get(className);
		if (cached != null) return cached;

		String innerClassName = toInnerClassName(className);

		try {
			Class<?> library;
			try {
				library = findClass(toStrategoName(innerClassName) + "_0_0");
				
				Field instance = library.getField("instance");

				if (!Strategy.class.isAssignableFrom(instance.getDeclaringClass()))
					return null;
				
				cached = (Strategy) instance.get(null);
				
			} catch (ClassNotFoundException e) {
				library = Class.forName(toStrategoName(className));
				cached = (Strategy) library.getMethod("getMainStrategy", new Class[0]).invoke(null);
				return cached;
			}
			
			invocationCache.put(className, cached);
			return cached;
			
		} catch (ClassNotFoundException e) {
			return null;
		} catch (IllegalArgumentException e) {
			return null;
		} catch (NoSuchFieldException e) {
			return null;
		} catch (IllegalAccessException e) {
			return null;
		} catch (NoSuchMethodException e) {
			return null;
		} catch (ClassCastException e) {
			throw new StrategoException("Could not dynamically call strategy " + className, e);
		} catch (InvocationTargetException e) {
			throw new StrategoException("Could not dynamically call strategy " + className, e);
		} catch (SecurityException e) {
			throw new StrategoException("Could not dynamically call strategy " + className, e);
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
	
	private static String toInnerClassName(String className) {
		int lastDot = className.lastIndexOf('.');
		return className.substring(0, lastDot) + "$" + className.substring(lastDot + 1);
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
		
		return result.toString();
	}
}
