package org.strategoxt.lang.compat;

import static org.spoofax.interpreter.core.Tools.*;

import java.lang.reflect.Field;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.library.IOAgent;
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
	
	private static Map<String,Strategy> invocationCache =
		new ConcurrentHashMap<String, Strategy>();
	
	public SSL_EXT_java_call() {
		super("SSL_EXT_java_call", 0, 3);
	}


	@Override
	public boolean call(IContext env, org.spoofax.interpreter.stratego.Strategy[] svars,
			IStrategoTerm[] tvars) throws InterpreterException {
		
		if (!isTermString(tvars[0])) return false;
		if (!isTermInt(tvars[2])) return false;
		boolean sameContext = ((IStrategoInt) tvars[2]).intValue() != 0;
		
		Strategy strategy = getStrategy(((IStrategoString) tvars[0]).stringValue());
		if (strategy == null) return false;

		Context parentContext = ((InteropContext) env).getContext();
		Context context;
		if (sameContext) {
			context = parentContext;
		} else {
			IOAgent ioAgent = parentContext.getIOAgent();
			context = new Context(parentContext.getFactory());
			context.setIOAgent(ioAgent);
		}

		IStrategoTerm result = strategy.invoke(context, tvars[1]);
		if (result == null) {
			return false;
		} else {
			env.setCurrent(result);
			return true;
		}
	}
	
	protected static Strategy getStrategy(String className) {
		Strategy cached = invocationCache.get(className);
		if (cached != null) return cached;
		
		try {
			Class<?> library = Class.forName(className);
			Field instance = library.getField("instance");

			if (!Strategy.class.isAssignableFrom(instance.getDeclaringClass()))
				return null;
			
			cached = (Strategy) instance.get(null);
			invocationCache.put(className, cached);
			return cached;
			
		} catch (StrategoExit e) {
			return null;
		} catch (ClassNotFoundException e) {
			return null;
		} catch (IllegalArgumentException e) {
			return null;
		} catch (NoSuchFieldException e) {
			return null;
		} catch (IllegalAccessException e) {
			return null;
		} catch (SecurityException e) {
			throw new StrategoException("Could not dynamically call strategy " + className, e);
		}
	}
}
