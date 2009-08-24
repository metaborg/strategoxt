package org.strategoxt.lang;

import org.spoofax.NotImplementedException;
import org.spoofax.interpreter.core.IConstruct;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.stratego.CallT;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Strategy;

/**
 * Adapts an {@link Strategy} strategy to a {@link CallT},
 * making interpreter strategies and primitives with strategy arguments
 * accessible for compiled strategies.
 * 
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class InteropStrategy extends CallT {
	
	private static final CallT[] NO_CALLTS = {};
	
	private static final Strategy[] NO_ISTRATEGIES = {};
	
	private final Strategy strategy;
	
	private final Context context;
	
	/**
	 * Creates a new InteropStrategy instance.
	 * 
	 * @param strategy	The strategy to adapt.
	 */
	public InteropStrategy(Strategy strategy) {
		this(strategy, null);
	}
	
	/**
	 * Creates a new InteropStrategy instance.
	 * 
	 * @param strategy	The strategy to adapt.
	 * @param context	The compiled context, if used with an interpreter context.
	 */
	public InteropStrategy(Strategy strategy, Context context) {
		super(null, null, null);
		
		this.strategy = strategy;
		this.context = context;
	}
    
	public static CallT[] toInteropStrategies(Strategy[] strategies) {
    	if (strategies.length == 0) return NO_CALLTS;
    	
    	CallT[] results = new CallT[strategies.length];
    	for (int i = 0; i < strategies.length; i++)
    		results[i] = new InteropStrategy(strategies[i]);
    	return results;
    }
    
	public static Strategy[] fromInteropStrategies(org.spoofax.interpreter.stratego.Strategy[] strategies) {
		if (strategies.length == 0)
			return NO_ISTRATEGIES;

		Strategy[] results = new Strategy[strategies.length];
		for (int i = 0; i < strategies.length; i++) {
			org.spoofax.interpreter.stratego.Strategy strategy = strategies[i];
			if (!(strategy instanceof InteropStrategy))
				throw new StrategoException("Expected InteropStrategy");
			results[i] = ((InteropStrategy) strategy).strategy;
		}
		return results;
    }
	
	@Override
	public String getTargetStrategyName() {
		return strategy.getName();
	}
	
	@Override
	public IConstruct eval(IContext env) throws InterpreterException {
		return evaluate(env)
			? getHook().pop().onSuccess(env)
			: getHook().pop().onFailure(env);
	}

	@Override
	public boolean evaluate(IContext env) {
		IStrategoTerm result = strategy.invoke(getCompiledContext(env), env.current());
		if (result == null) return false;
		env.setCurrent(result);
		
		return true;
	}

	private Context getCompiledContext(IContext env) {
		if (context != null)
			return context;
		
		if (!(env instanceof InteropContext))
			throw new StrategoException("Expected InteropContext");
		Context context = ((InteropContext) env).getContext();
		return context;
	}
	
	@Override
	public boolean evaluateWithArgs(IContext env, org.spoofax.interpreter.stratego.Strategy[] sv, IStrategoTerm[] tv) {
		IStrategoTerm result = strategy.invokeDynamic(
				getCompiledContext(env),env.current(), fromInteropStrategies(sv), tv);
		if (result == null) return false;
		env.setCurrent(result);		
		return true;		
	}
	
	@Override
	public org.spoofax.interpreter.stratego.Strategy evalWithArgs(IContext env, org.spoofax.interpreter.stratego.Strategy[] sv,
			IStrategoTerm[] actualTVars) throws InterpreterException {
		throw new NotImplementedException();
	}
}
