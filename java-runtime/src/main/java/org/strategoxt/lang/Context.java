package org.strategoxt.lang;

import static org.strategoxt.lang.Term.NO_STRATEGIES;
import static org.strategoxt.lang.Term.NO_TERMS;

import java.util.Collection;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.CancellationException;

import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.core.InterpreterExit;
import org.spoofax.interpreter.core.StackTracer;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.library.IOAgent;
import org.spoofax.interpreter.library.IOperatorRegistry;
import org.spoofax.interpreter.library.PrimitiveCache;
import org.spoofax.interpreter.library.java.JFFLibrary;
import org.spoofax.interpreter.library.ssl.SSLLibrary;
import org.spoofax.interpreter.terms.IStrategoConstructor;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
import org.spoofax.interpreter.util.IAsyncCancellable;
import org.spoofax.terms.TermFactory;
import org.strategoxt.lang.compat.CompatManager;
import org.strategoxt.lang.compat.SSL_EXT_java_call;

/**
 * The runtime context of a compiled Stratego strategy.
 *
 * @author Lennart Kats
 * @author Karl Trygve Kalleberg
 */
public class Context extends StackTracer implements IAsyncCancellable {

	private final InteropContext interopContext = new InteropContext(this);

    private final Map<String, IOperatorRegistry> operatorRegistries;

    private final PrimitiveCache operatorCache;

    private final CompatManager compat = new CompatManager(this);

    private final UncaughtExceptionHandler exceptionHandler =
    	new UncaughtExceptionHandler(this);

	@SuppressWarnings("unused")
	private final UncaughtExceptionHandler.Finalizer exceptionHandlerFinalizer =
    	new UncaughtExceptionHandler.Finalizer(exceptionHandler);

	private ITermFactory factory;

	private transient volatile boolean asyncCancelled;

    public Context() {
    	this(new TermFactory());
    }

    public Context(ITermFactory factory) {
    	this(factory, null);
    }

    public Context(ITermFactory factory, IOAgent ioAgent) {
    	this.factory = factory;
    	this.operatorRegistries = new HashMap<String, IOperatorRegistry>();
        this.operatorCache = new PrimitiveCache(2, 16);

        addOperatorRegistry(new SSLLibrary());
        addOperatorRegistry(new JFFLibrary(factory));

    	if (ioAgent != null) setIOAgent(ioAgent);

        compat.init();
    }

    protected Context(ITermFactory factory, Map<String, IOperatorRegistry> operatorRegistries, boolean skipCompat) {
    	this.factory = factory;
    	this.operatorRegistries = operatorRegistries;
        this.operatorCache = new PrimitiveCache(2, 16);
    	if (!skipCompat) compat.init();
    }

	public final ITermFactory getFactory() {
        if (asyncCancelled) cancel();
		return factory;
	}

	public void setFactory(ITermFactory factory) {
		this.factory = factory;
	}

	public Map<String, IOperatorRegistry> getOperatorRegistries() {
		return operatorRegistries;
	}

	public UncaughtExceptionHandler getExceptionHandler() {
		return exceptionHandler;
	}

    @Override
	public IOAgent getIOAgent() {
		SSLLibrary op = (SSLLibrary) getOperatorRegistry(SSLLibrary.REGISTRY_NAME);
		return op == null ? null : op.getIOAgent();
    }

    @Override
    public void setIOAgent(IOAgent ioAgent) {
        SSLLibrary op = (SSLLibrary) getOperatorRegistry(SSLLibrary.REGISTRY_NAME);
        if (op == null) throw new IllegalStateException("No SSL library");
        op.setIOAgent(ioAgent);
        super.setIOAgent(ioAgent);
    }

	/**
	 * Registers a new class loader used for dynamical class loading
	 * (using {@link SSL_EXT_java_call}).
	 *
	 * This method is only useful in applications that employ multiple class
	 * loaders (such as Eclipse). Typically, this method is used in the form
	 * <code>registerClassLoader(C.class.getClassLoader())</code> where
	 * <code>C</code> is a class that would be dynamically loaded
	 * by a Stratego program.
	 */
	public void registerClassLoader(ClassLoader classLoader) {
		SSL_EXT_java_call.registerClassLoader(classLoader);
	}

	public final IOperatorRegistry getOperatorRegistry(String domain) {
		return operatorRegistries.get(domain);
	}

    public void addOperatorRegistry(IOperatorRegistry or) {
        operatorRegistries.put(or.getOperatorRegistryName(), or);
    }

    public void addConstructors(Collection<IStrategoConstructor> newConstructors) {
    	interopContext.addConstructors(newConstructors);
    }

    public void registerComponent(String componentName) {
    	compat.registerComponent(componentName);
    }

    public CompatManager getCompatManager() {
    	return compat;
    }

    public void setStandAlone(boolean isStandAlone) {
    	exceptionHandler.setEnabled(isStandAlone);
    }

    public IStrategoTerm invokeStrategyCLI(Strategy strategy, String appName, String... args)
    		throws StrategoExit, StrategoException {

    	IStrategoList input = toCLITerm(appName, args);

    	// Launch with a clean operand stack when launched from SSL_java_call, Ant, etc.
    	if (new Exception().getStackTrace().length > 20) {
    		return new StackSaver(strategy).invokeStackFriendly(this, input, NO_STRATEGIES, NO_TERMS);
    	} else {
    		return strategy.invoke(this, input);
    	}
    }

    public IStrategoTerm invokeStrategyCLI(String strategy, String appName, String... args)
    		throws MissingStrategyException, StrategoErrorExit, StrategoExit, StrategoException {

    	return invokeStrategy(strategy, toCLITerm(appName, args));
    }

	public IStrategoTerm invokeStrategy(String strategy, IStrategoTerm input)
			throws MissingStrategyException, StrategoErrorExit, StrategoExit, StrategoException {

		SSL_EXT_java_call caller = (SSL_EXT_java_call) lookupPrimitive("SSL_EXT_java_call");
    	if (caller == null) caller = new SSL_EXT_java_call();
    	return caller.call(this, strategy, input, false);
	}

	private IStrategoList toCLITerm(String appName, String... args) {
		ITermFactory factory = getFactory();
    	IStrategoTerm[] termArgs = new IStrategoTerm[args.length + 1];
		termArgs[0] = factory.makeString(appName);

    	for (int i = 0; i < args.length; i++) {
    		termArgs[i+1] = factory.makeString(args[i]);
    	}

    	IStrategoList term = factory.makeList(termArgs);
		return term;
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
        if (asyncCancelled)
            cancel();

    	interopContext.setCurrent(term);
		try {
			if (primitive.call(interopContext, InteropCallT.toInteropCallTs(sargs, this), targs)) {
				IStrategoTerm result = interopContext.current();
				// Release term after passing it to the primitive
				interopContext.setCurrent(null);
				return result;
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
        if (asyncCancelled) cancel();
        AbstractPrimitive p = null;
        if((p = operatorCache.get(name)) != null) {
            return p;
        }
        for(IOperatorRegistry or : operatorRegistries.values()) {
            if((p = or.get(name)) != null) {
                break;
            }
        }
        operatorCache.put(name, p);
        return p;
	}

    public void asyncCancel() {
        asyncCancelled = true;
    }

    public void asyncCancelReset() {
        asyncCancelled = false;
    }

	protected void cancel() {
		asyncCancelled = false;
		getIOAgent().closeAllFiles();
		throw new CancellationException("Stratego interpreter cancelled");
	}
	
    public Object contextObject() {
        return interopContext.contextObject();
    }

    public void setContextObject(Object context) {
        interopContext.setContextObject(context);
    }
}
