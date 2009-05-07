package org.strategoxt.lang;

import java.util.HashMap;
import java.util.Map;

import org.spoofax.interpreter.adapter.aterm.BAFBasicTermFactory;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.core.InterpreterExit;
import org.spoofax.interpreter.core.StackTracer;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.library.IOAgent;
import org.spoofax.interpreter.library.IOperatorRegistry;
import org.spoofax.interpreter.library.ssl.SSLLibrary;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
import org.strategoxt.lang.compat.CompatManager;

/**
 * The runtime context of a compiled Stratego strategy.
 * 
 * @author Lennart Kats
 * @author Karl Trygve Kalleberg
 */
public class Context {
	
	private final InteropContext interopContext = new InteropContext(this);

    private final Map<String, IOperatorRegistry> operatorRegistries =
    	new HashMap<String, IOperatorRegistry>();
    
    private final StackTracer stackTracer = new StackTracer();
    
    private final CompatManager compat = new CompatManager();
    
    private final UncaughtExceptionHandler exceptionHandler = new UncaughtExceptionHandler(stackTracer);
	
	private final ITermFactory factory;
    
    public Context() {
    	this(new BAFBasicTermFactory());
    }
    
    public Context(ITermFactory factory) {
    	this.factory = factory;
        operatorRegistries.put(SSLLibrary.REGISTRY_NAME, new SSLLibrary());
    }
	
	public final ITermFactory getFactory() {
		return factory;
	}
	
	public StackTracer getStackTracer() {
		return stackTracer;
	}
	
	public UncaughtExceptionHandler getExceptionHandler() {
		return exceptionHandler;
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

    public final void addOperatorRegistry(IOperatorRegistry or) {
        operatorRegistries.put(or.getOperatorRegistryName(), or);
    }
    
    public void postInit(String component) {
    	exceptionHandler.setEnabled(true);
    	compat.postInit(this, component);
    }
    
    public void uninit() {
    	exceptionHandler.setEnabled(false);
    }
    
    @Override
    protected void finalize() throws Throwable {
    	uninit();
    }
    
    public IStrategoTerm invokeStrategyCLI(IStrategy strategy, String appName, String[] args) {
    	ITermFactory factory = getFactory();    	
    	IStrategoTerm[] termArgs = new IStrategoTerm[args.length + 1];
		termArgs[0] = factory.makeString(appName);
		
    	for (int i = 0; i < args.length; i++) {
    		termArgs[i+1] = factory.makeString(args[i]);
    	}
    	
    	IStrategoList term = factory.makeList(termArgs);
    	
    	return strategy.invoke(this, term);
    }
    
    public IStrategoTerm invokePrimitive(String name, IStrategoTerm term, IStrategy[] args, IStrategoTerm[] targs) {
    	AbstractPrimitive primitive = lookupOperator(name);
    	if (primitive == null)
    		throw new StrategoException("Illegal primitive invoked: " + name);

    	interopContext.setCurrent(term);
		try {
			if (primitive.call(interopContext, InteropStrategy.toInteropStrategies(args), targs)) {
				return interopContext.current();
			} else {
				return null;
			}
		} catch (InterpreterExit e) {
			uninit();
			throw new StrategoExit(e.getValue());
		} catch (InterpreterException e) {
			throw new StrategoException("Exception in execution of primitive '" + name + "'", e);
		} catch (RuntimeException e) {
			throw new StrategoException("Exception in execution of primitive '" + name + "'", e);
		}
    }

	public AbstractPrimitive lookupOperator(String name) {
        for(IOperatorRegistry or : operatorRegistries.values()) {
            AbstractPrimitive t = or.get(name);
            if(t != null)
                return t;
        }
        return null;
	}
}
