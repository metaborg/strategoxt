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
import org.spoofax.interpreter.stratego.SDefT;
import org.spoofax.interpreter.stratego.Match.Results;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

/**
 * Provides interoperability with the (relatively dynamic) {@link IContext}
 * interface. Its main use is calling Stratego primitives.
 * 
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class InteropContext implements IContext {
	
	private final Context context;
	
	private IStrategoTerm current;
	
	public InteropContext(Context context) {
		this.context = context;
	}
	
	public Context getContext() {
		return context;
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
	
	public void addOperatorRegistry(IOperatorRegistry registry) {
		context.addOperatorRegistry(registry);
	}

	public StackTracer getStackTracer() {
		return context;
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
        return context.lookupPrimitive(name);
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
