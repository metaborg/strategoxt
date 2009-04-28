package org.strategoxt.lang;

import java.util.Collection;

import org.spoofax.NotImplementedException;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.core.StackTracer;
import org.spoofax.interpreter.core.StrategoSignature;
import org.spoofax.interpreter.core.VarScope;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.library.IOperatorRegistry;
import org.spoofax.interpreter.stratego.CallT;
import org.spoofax.interpreter.stratego.SDefT;
import org.spoofax.interpreter.stratego.Match.Results;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

/**
 * Provides interoperability with the (relatively dynamic) {@link IContext}
 * interface.
 * 
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class InteropContext implements IContext {
	
	private static final CallT[] EMPTY_CALLT_LIST = new CallT[0];
	
	private final Context context;
	
	private IStrategoTerm current;
	
	public InteropContext(Context context) {
		this.context = context;
	}
    
	public CallT[] toInteropStrategies(IStrategy[] strategies) {
    	if (strategies.length == 0) return EMPTY_CALLT_LIST;
    	
    	CallT[] results = new CallT[strategies.length];
    	for (int i = 0; i < strategies.length; i++)
    		results[i] = toInteropStrategy(strategies[i]);
    	return results;
    }

	public CallT toInteropStrategy(final IStrategy strategy) {
    	return new CallT(strategy.getName(), null, null) {
    		@Override
    		protected String getTraceName() {
    			return strategy.getName();
    		}

    		@Override
			public boolean evaluate(IContext context) throws InterpreterException {
				IStrategoTerm term = strategy.invoke(InteropContext.this.context, context.current());
				if (term == null) return false;
				context.setCurrent(term);
				return true;
			}
    	};
    }

	public boolean bindVars(Results r) {
		throw new UnsupportedOperationException();
	}

	public IStrategoTerm current() {
		return current;
	}

	public void setCurrent(IStrategoTerm value) {
		current = value;
	}

	public ITermFactory getFactory() {
		return context.getFactory();
	}

	public IOperatorRegistry getOperatorRegistry(String domain) {
		return context.getOperatorRegistry(domain);
	}

	public StackTracer getStackTracer() {
		return context.getStackTracer();
	}

	public StrategoSignature getStrategoSignature() {
		throw new UnsupportedOperationException();
	}

	public Collection<String> getStrategyNames() {
		throw new NotImplementedException();
	}

	public VarScope getVarScope() {
		throw new UnsupportedOperationException();
	}

	public AbstractPrimitive lookupOperator(String name) {
        return context.lookupOperator(name);
	}

	public SDefT lookupSVar(String n) throws InterpreterException {
		throw new NotImplementedException();
	}

	public IStrategoTerm lookupVar(String n) throws InterpreterException {
		throw new UnsupportedOperationException();
	}

	public void popVarScope() {
		throw new UnsupportedOperationException();
	}

	public void restoreVarScope(VarScope anotherVarScope) {
		throw new UnsupportedOperationException();

	}

	public void setVarScope(VarScope newVarScope) {
		throw new UnsupportedOperationException();
	}
}
