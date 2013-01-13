package org.strategoxt.lang;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public abstract class InteropRegisterer {
	public abstract void register(org.spoofax.interpreter.core.IContext context, Context compiledContext);

	public abstract void registerLazy(org.spoofax.interpreter.core.IContext context, Context compiledContext, ClassLoader classLoader);
}
