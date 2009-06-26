package org.strategoxt.lang;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
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
public class Context extends StackTracer {
	
	private final InteropContext interopContext = new InteropContext(this);

    private final Map<String, IOperatorRegistry> operatorRegistryMap;

    private final List<IOperatorRegistry> operatorRegistries;
    
    private final CompatManager compat = new CompatManager();
    
    private final UncaughtExceptionHandler exceptionHandler =
    	new UncaughtExceptionHandler(this);
	
	private final ITermFactory factory;
    
    private transient String lastPrimitiveName1, lastPrimitiveName2;
    
    private transient AbstractPrimitive lastPrimitive1, lastPrimitive2;
    
    public Context() {
    	this(new BAFBasicTermFactory());
    }
    
    public Context(Context other) {
    	this(other.getFactory());
    	operatorRegistryMap.clear();
    	operatorRegistryMap.putAll(other.operatorRegistryMap);
    	operatorRegistries.addAll(other.operatorRegistries);
    }
    
    public Context(ITermFactory factory) {
    	this(factory, new HashMap<String, IOperatorRegistry>(), new ArrayList<IOperatorRegistry>());
        SSLLibrary ssl = new SSLLibrary();
		operatorRegistryMap.put(SSLLibrary.REGISTRY_NAME, ssl);
        operatorRegistries.add(ssl);
    }
    
    protected Context(ITermFactory factory, Map<String, IOperatorRegistry> operatorRegistryMap, List<IOperatorRegistry> operatorRegistries) {
    	this.factory = factory;
    	this.operatorRegistryMap = operatorRegistryMap;
    	this.operatorRegistries = operatorRegistries;
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
    
    public final IStrategoTerm invokePrimitive(String name, IStrategoTerm term, IStrategy[] sargs, IStrategoTerm[] targs) {
    	AbstractPrimitive primitive = lookupOperator(name);
    	if (primitive == null)
    		throw new StrategoException("Illegal primitive invoked: " + name);

    	return invokePrimitive(primitive, term, sargs, targs);
    }

	public IStrategoTerm invokePrimitive(AbstractPrimitive primitive, IStrategoTerm term, IStrategy[] sargs, IStrategoTerm[] targs) {
		interopContext.setCurrent(term);
		try {
			if (primitive.call(interopContext, InteropStrategy.toInteropStrategies(sargs), targs)) {
				return interopContext.current();
			} else {
				return null;
			}
		} catch (InterpreterExit e) {
			uninit();
			throw new StrategoExit(e.getValue());
		} catch (InterpreterException e) {
			throw new StrategoException("Exception in execution of primitive '" + primitive.getName() + "'", e);
		} catch (RuntimeException e) {
			throw new StrategoException("Exception in execution of primitive '" + primitive.getName() + "'", e);
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
