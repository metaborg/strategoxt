package org.strategoxt.lang;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.core.InterpreterExit;
import org.spoofax.interpreter.core.StackTracer;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.library.IOAgent;
import org.spoofax.interpreter.library.IOperatorRegistry;
import org.spoofax.interpreter.library.ssl.SSLLibrary;
import org.spoofax.interpreter.library.ssl.SSL_indexedSet_put;
import org.spoofax.interpreter.library.ssl.SSL_list_loop;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
import org.strategoxt.lang.compat.CompatManager;
import org.strategoxt.lang.terms.TermFactory;

/**
 * The runtime context of a compiled Stratego strategy.
 * 
 * @author Lennart Kats
 * @author Karl Trygve Kalleberg
 */
public class Context extends StackTracer {
	
	private final InteropContext interopContext = new InteropContext(this);

    private final Map<String, IOperatorRegistry> operatorRegistryMap;

    private final List<IOperatorRegistry> operatorRegistries;
    
    private final CompatManager compat = new CompatManager(this);
    
    private final UncaughtExceptionHandler exceptionHandler =
    	new UncaughtExceptionHandler(this);
	
	private final ITermFactory factory;
    
    private transient String lastPrimitiveName1, lastPrimitiveName2;
    
    private transient AbstractPrimitive lastPrimitive1, lastPrimitive2;
    
    public Context() {
    	this(new TermFactory());
    }
    
    public Context(ITermFactory factory) {
    	this(factory, null);
    }
    
    public Context(ITermFactory factory, IOAgent ioAgent) {
    	this.factory = factory;
    	this.operatorRegistryMap = new HashMap<String, IOperatorRegistry>();
    	this.operatorRegistries = new ArrayList<IOperatorRegistry>();
    	
        SSLLibrary ssl = new SSLLibrary();
		operatorRegistryMap.put(SSLLibrary.REGISTRY_NAME, ssl);
        operatorRegistries.add(ssl);

    	if (ioAgent != null) setIOAgent(ioAgent);

        compat.init();
    }
    
    protected Context(ITermFactory factory, IOAgent ioAgent, Map<String, IOperatorRegistry> operatorRegistryMap, List<IOperatorRegistry> operatorRegistries) {
    	this.factory = factory;
    	this.operatorRegistryMap = operatorRegistryMap;
    	this.operatorRegistries = operatorRegistries;
    	if (ioAgent != null) setIOAgent(ioAgent);
    	compat.init();
    }
	
	public final ITermFactory getFactory() {
		return factory;
	}
	
	public List<IOperatorRegistry> getOperatorRegistries() {
		return operatorRegistries;
	}
	
	public Map<String, IOperatorRegistry> getOperatorRegistryMap() {
		return operatorRegistryMap;
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
        if (previous == null) {
        	operatorRegistries.add(or);
        } else {
        	int i = operatorRegistries.indexOf(previous);
        	operatorRegistries.remove(previous);
        	operatorRegistries.add(i, or);
        }
        lastPrimitiveName1 = null;
        lastPrimitiveName2 = null;
    }
    
    public void registerComponent(String componentName) {
    	compat.registerComponent(componentName);
    }
    
    public void setStandAlone(boolean isStandAlone) {
    	exceptionHandler.setEnabled(isStandAlone);
    }
    
    public IStrategoTerm invokeStrategyCLI(Strategy strategy, String appName, String[] args) {
    	ITermFactory factory = getFactory();    	
    	IStrategoTerm[] termArgs = new IStrategoTerm[args.length + 1];
		termArgs[0] = factory.makeString(appName);
		
    	for (int i = 0; i < args.length; i++) {
    		termArgs[i+1] = factory.makeString(args[i]);
    	}
    	
    	IStrategoList term = factory.makeList(termArgs);
    	
    	return strategy.invoke(this, term);
    }
    
    public final IStrategoTerm invokePrimitive(String name, IStrategoTerm term, Strategy[] sargs, IStrategoTerm[] targs) {
    	AbstractPrimitive primitive = lookupPrimitive(name);
    	if (primitive == null)
    		throw new StrategoException("Primitive not defined: " + name);

    	return invokePrimitive(primitive, term, sargs, targs);
    }

	public IStrategoTerm invokePrimitive(AbstractPrimitive primitive, IStrategoTerm term, Strategy[] sargs, IStrategoTerm[] targs) {
    	if (primitive == null)
    		throw new StrategoException("Calling undefined primitive");
		
    	interopContext.setCurrent(term);
		try {
			if (primitive.call(interopContext, InteropStrategy.toInteropStrategies(sargs, this), targs)) {
				return interopContext.current();
			} else {
				return null;
			}
		} catch (InterpreterExit e) {
			throw new StrategoExit(e.getValue());
		} catch (InterpreterException e) {
			throw new StrategoException("Exception in execution of primitive '" + primitive.getName() + "'", e);
		} catch (RuntimeException e) {
			throw new StrategoException("Exception in execution of primitive '" + primitive.getName() + "'", e);
		}
	}

	public AbstractPrimitive lookupPrimitive(String name) {
		if (lastPrimitiveName1 == name) {
			return lastPrimitive1;
		} else if (lastPrimitiveName2 == name) {
			return lastPrimitive2;
		} else {
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
