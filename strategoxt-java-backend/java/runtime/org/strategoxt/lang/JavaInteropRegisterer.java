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
	
	private static final Pattern BINARY_STRATEGY_NAME =
		Pattern.compile("[A-Za-z_$]+_[0-9]+_[0-9+]");
	
	private final Strategy[] strategies;
	
	public JavaInteropRegisterer(Strategy[] strategies) {
		if (strategies == null)
			throw new IllegalArgumentException("strategies");
		if (!getClass().getSimpleName().equals("InteropRegisterer"))
			throw new IllegalStateException("Class must be named InteropRegisterer: " + getClass().getSimpleName());
		this.strategies = strategies;
	}

	@Override
	public void register(IContext context, Context compiledContext) {
		VarScope registered = context.getVarScope();
		for (Strategy strategy : strategies) {
			// Note that strategy.getName() usually uses getClass().getName(),
			// but for small Java libraries the performance penalty is acceptable
			String className = strategy.getClass().getSimpleName();
			String givenName = strategy.getName();
			if (!BINARY_STRATEGY_NAME.matcher(className).matches())
				throw new IllegalArgumentException("Strategy class must encode number of strategy and term arguments in name (e.g. foo_0_0): " + className);
			if (!BINARY_STRATEGY_NAME.matcher(givenName).matches())
				throw new IllegalArgumentException("Strategy name must encode number of strategy and term arguments in name (e.g. foo_0_0): " + givenName);
			registered.addSVar(givenName, new InteropSDefT(strategy, context));
		}
	}
	
	@Override
	public void registerLazy(IContext context, Context compiledContext, ClassLoader classLoader) {
		// Just eagerly load strategies; we already have them
		register(context, compiledContext);
	}
}