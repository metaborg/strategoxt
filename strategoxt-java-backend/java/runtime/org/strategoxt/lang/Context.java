package org.strategoxt.lang;

import java.util.ArrayList;
import java.util.HashMap;

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
import org.strategoxt.lang.terms.BAFTermFactory;

/**
 * The runtime context of a compiled Stratego strategy.
 * 
 * @author Lennart Kats
 * @author Karl Trygve Kalleberg
 */
public class Context extends StackTracer {
	
	private final InteropContext interopContext = new InteropContext(this);

    private final HashMap<String, IOperatorRegistry> operatorRegistryMap =
    	new HashMap<String, IOperatorRegistry>();

    private final ArrayList<IOperatorRegistry> operatorRegistries =
    	new ArrayList<IOperatorRegistry>();
    
    private final CompatManager compat = new CompatManager();
    
    private final UncaughtExceptionHandler exceptionHandler =
    	new UncaughtExceptionHandler(this);
	
	private final ITermFactory factory;
    
    private String lastPrimitiveName1, lastPrimitiveName2;
    
    private AbstractPrimitive lastPrimitive1, lastPrimitive2;
    
    public Context() {
    	this(new BAFTermFactory());
    }
    
    public Context(ITermFactory factory) {
    	this.factory = factory;
        SSLLibrary ssl = new SSLLibrary();
		operatorRegistryMap.put(SSLLibrary.REGISTRY_NAME, ssl);
        operatorRegistries.add(ssl);
    }
	
	public final ITermFactory getFactory() {
		return factory;
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
		return operatorRegistryMap.get(domain);
	}

    public final void addOperatorRegistry(IOperatorRegistry or) {
        IOperatorRegistry previous = operatorRegistryMap.put(or.getOperatorRegistryName(), or);
        if (previous != null) operatorRegistries.remove(previous);
        operatorRegistries.add(or);
    }
    
    public void postInit(String componentName) {
    	exceptionHandler.setEnabled(true);
    	compat.postInit(this, componentName);
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
		if (lastPrimitiveName1 == name) {
			return lastPrimitive1;
		} else if (lastPrimitiveName2 == name) {
			return lastPrimitive2;
		} else {;
			for (int i = 0, size = operatorRegistries.size(); i < size; i++) {
	            AbstractPrimitive p = operatorRegistries.get(i).get(name);
	            if (p != null) {
	            	lastPrimitiveName2 = lastPrimitiveName1;
	            	lastPrimitive2 = lastPrimitive1;
	            	lastPrimitiveName1 = name;
	                return lastPrimitive1 = p;
	            }
	        }
	        return null;
		}
	}
}
