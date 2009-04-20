package org.strategoxt.lang;

import java.util.HashMap;
import java.util.Map;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.core.InterpreterExit;
import org.spoofax.interpreter.core.StackTracer;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.library.IOAgent;
import org.spoofax.interpreter.library.IOperatorRegistry;
import org.spoofax.interpreter.library.ssl.SSLLibrary;
import org.spoofax.interpreter.stratego.CallT;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
import org.spoofax.interpreter.adapter.aterm.BAFBasicTermFactory;

/**
 * The runtime context of a compiled Stratego strategy.
 * 
 * @author Lennart Kats
 * @author Karl Trygve Kalleberg
 */
public class Context {
	private static final CallT[] EMPTY_CALLT_LIST = new CallT[0];
	
	private final ITermFactory factory;
	
	private final IContext interopContext;

    private final Map<String, IOperatorRegistry> operatorRegistries =
    	new HashMap<String, IOperatorRegistry>();
    
    private final StackTracer stackTracer = new StackTracer();
    
    public Context() {
    	this(new BAFBasicTermFactory());
    }
    
    public Context(ITermFactory factory) {
    	this.factory = factory;
        operatorRegistries.put(SSLLibrary.REGISTRY_NAME, new SSLLibrary());
        interopContext = new org.spoofax.interpreter.core.Context(factory, factory) {
        	@Override
        	public StackTracer getStackTracer() {
        		return Context.this.getStackTracer();
        	}
        };
    }
	
	public final ITermFactory getFactory() {
		return factory;
	}
	
	public StackTracer getStackTracer() {
		return stackTracer;
	}
	
    public final IOAgent getIOAgent() {
        SSLLibrary op = (SSLLibrary) getOperatorRegistry(SSLLibrary.REGISTRY_NAME);
        return op.getIOAgent();
    }
    
    public final void setIOAgent(IOAgent ioAgent) {
        SSLLibrary op = (SSLLibrary) getOperatorRegistry(SSLLibrary.REGISTRY_NAME);
        op.setIOAgent(ioAgent);
    }
	
	public final IOperatorRegistry getOperatorRegistry(String domain) {
		return operatorRegistries.get(domain);
	}

    public final void addOperatorRegistry(String domain, IOperatorRegistry or) {
        operatorRegistries.put(domain, or);
    }
    
    public IStrategoTerm invokeStrategyCLI(IStrategy strategy, String appName, String[] args) {
    	ITermFactory factory = getFactory();    	
    	IStrategoTerm[] termArgs = new IStrategoTerm[args.length + 1];
		termArgs[0] = factory.makeString(appName);
		
    	for (int i = 0; i < args.length; i++) {
    		termArgs[i+1] = factory.parseFromString(args[i]);
    	}
    	
    	IStrategoList term = factory.makeList(termArgs);
    	
    	return strategy.invoke(this, term);
    }
    
    public IStrategoTerm invokePrimitive(String name, IStrategoTerm term, IStrategy[] args, IStrategoTerm[] targs) {
    	for (IOperatorRegistry registry : operatorRegistries.values()) {
    		AbstractPrimitive primitive = registry.get(name);
    		if (primitive != null) {
    			interopContext.setCurrent(term);
    			try {
	    			if (primitive.call(interopContext, toInteropStrategies(args), targs)) {
	    				return interopContext.current();
	    			} else {
	    				return null;
	    			}
    			} catch (InterpreterExit e) {
    				throw new StrategoExit(e.getValue());
    			} catch (InterpreterException e) {
    				throw new StrategoException("Exception in execution of primitive '" + name + "'", e);
    			} catch (RuntimeException e) {
    				throw new StrategoException("Exception in execution of primitive '" + name + "'", e);
    			}
    		}
    	}
    	throw new StrategoException("Illegal primitive invoked: " + name);
    }
    
    private CallT toInteropStrategy(final IStrategy strategy) {
    	return new CallT(strategy.getName(), null, null) {
    		@Override
    		protected String getTraceName() {
    			return strategy.getName();
    		}

    		@Override
			public boolean evaluate(IContext context) throws InterpreterException {
				IStrategoTerm term = strategy.invoke(Context.this, context.current());
				if (term == null) return false;
				context.setCurrent(term);
				return true;
			}
    	};
    }
    
    private CallT[] toInteropStrategies(IStrategy[] strategies) {
    	if (strategies.length == 0) return EMPTY_CALLT_LIST;
    	
    	CallT[] results = new CallT[strategies.length];
    	for (int i = 0; i < strategies.length; i++)
    		results[i] = toInteropStrategy(strategies[i]);
    	return results;
    }
}
