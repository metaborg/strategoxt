package org.strategoxt.lang;

import java.util.regex.Pattern;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.VarScope;
import org.strategoxt.HybridInterpreter;

/**
 * A base class for Java-based libraries of dynamically loaded strategies.
 * 
 * When included in JAR files, the strategies it lists can be dynamically
 * loaded by a {@link HybridInterpreter}. For this to work, 
 * the JAR file class *must* be named <code>InteropRegister<code>.
 * 
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class JavaInteropRegisterer extends InteropRegisterer {
	
	
	
	private final LibraryInitializer initializer;
	
	public JavaInteropRegisterer(LibraryInitializer initializer) {
		if (initializer == null)
			throw new IllegalArgumentException("Initializer is null");
		if (!getClass().getSimpleName().equals("InteropRegisterer"))
			throw new IllegalStateException("Class must be named InteropRegisterer: " + getClass().getName());
		this.initializer = initializer;
	}
	
	public LibraryInitializer getLibraryInitializer() {
		return initializer;
	}

	@Override
	public void register(IContext context, Context compiledContext) {
		initializer.registerInterop(context, compiledContext, context.getVarScope());
	}
	
	@Override
	public void registerLazy(IContext context, Context compiledContext, ClassLoader classLoader) {
		// Just eagerly load strategies; we already have them
		register(context, compiledContext);
	}
}