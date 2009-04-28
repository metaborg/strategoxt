package org.strategoxt.lang;

import org.spoofax.NotImplementedException;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.stratego.CallT;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class InteropStrategy extends CallT {
	
	private static final CallT[] EMPTY_CALLT_LIST = new CallT[0];
	
	private static final IStrategy[] EMPTY_ISTRATEGY_LIST = new IStrategy[0];
	
	private final IStrategy strategy;
	
	public InteropStrategy(IStrategy strategy) {
		super(strategy.getName(), null, null);
		
		this.strategy = strategy;
	}
    
	public static CallT[] toInteropStrategies(IStrategy[] strategies) {
    	if (strategies.length == 0) return EMPTY_CALLT_LIST;
    	
    	CallT[] results = new CallT[strategies.length];
    	for (int i = 0; i < strategies.length; i++)
    		results[i] = new InteropStrategy(strategies[i]);
    	return results;
    }
    
	public static IStrategy[] fromInteropStrategies(Strategy[] strategies) {
		if (strategies.length == 0)
			return EMPTY_ISTRATEGY_LIST;

		IStrategy[] results = new IStrategy[strategies.length];
		for (int i = 0; i < strategies.length; i++) {
			Strategy strategy = strategies[i];
			if (!(strategy instanceof InteropStrategy))
				throw new StrategoException("Expected InteropStrategy");
			results[i] = ((InteropStrategy) strategy).strategy;
		}
		return results;
    }
	
	@Override
	protected String getTraceName() {
		return strategy.getName();
	}

	@Override
	public boolean evaluate(IContext env) throws InterpreterException {
		if (!(env instanceof InteropStrategy))
			throw new StrategoException("Expected InteropContext");
		Context context = ((InteropContext) env).getContext();	
		
		IStrategoTerm result = strategy.invoke(context, env.current());
		if (result == null) return false;
		env.setCurrent(result);
		
		return true;
	}
	
	@Override
	public boolean evaluateWithArgs(IContext env, Strategy[] sv,
			IStrategoTerm[] tv) throws InterpreterException {

		if (!(env instanceof InteropStrategy))
			throw new StrategoException("Expected InteropContext");
		Context context = ((InteropContext) env).getContext();
		
		IStrategoTerm result = strategy.invokeDynamic(context, env.current(), fromInteropStrategies(sv), tv);
		if (result == null) return false;
		env.setCurrent(result);		
		return true;		
	}
	
	@Override
	public Strategy evalWithArgs(IContext env, Strategy[] sv,
			IStrategoTerm[] actualTVars) throws InterpreterException {
		throw new NotImplementedException();
	}
}
