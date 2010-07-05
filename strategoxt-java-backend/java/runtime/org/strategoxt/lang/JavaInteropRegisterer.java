package org.strategoxt.lang;

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
	
	private final Strategy[] strategies;
	
	public JavaInteropRegisterer(Strategy[] strategies) {
		if (strategies == null)
			throw new IllegalArgumentException("strategies");
		if (!this.getClass().getName().equals("InteropRegister"))
			throw new IllegalStateException("Class must be named InteropRegisterer");
		this.strategies = strategies;
	}

	@Override
	public void register(IContext context, Context compiledContext) {
		VarScope registered = context.getVarScope();
		for (Strategy strategy : strategies) {
			// Note that strategy.getName() may use getClass().getName(),
			// but for small Java libraries the performance penalty is acceptable
			registered.addSVar(strategy.getName(), new InteropSDefT(strategy, context));
		}
	}
	
	@Override
	public void registerLazy(IContext context, Context compiledContext, ClassLoader classLoader) {
		// Just eagerly load strategies; we already have them
		register(context, compiledContext);
	}
}