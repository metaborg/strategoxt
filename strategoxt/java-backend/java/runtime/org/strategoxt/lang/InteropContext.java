/* Licensed under the GNU Lesser General Public License, v2.1 */
package org.strategoxt.lang;

import java.util.Collection;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.Set;

import org.spoofax.NotImplementedException;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.core.StackTracer;
import org.spoofax.interpreter.core.StrategoSignature;
import org.spoofax.interpreter.core.VarScope;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.library.IOperatorRegistry;
import org.spoofax.interpreter.stratego.Match.Results;
import org.spoofax.interpreter.stratego.OpDecl;
import org.spoofax.interpreter.stratego.SDefT;
import org.spoofax.interpreter.stratego.SDefT.ArgType;
import org.spoofax.interpreter.stratego.SDefT.ConstType;
import org.spoofax.interpreter.stratego.SDefT.FunType;
import org.spoofax.interpreter.terms.IStrategoConstructor;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

/**
 * Provides interoperability with the (relatively dynamic) {@link IContext}
 * interface. Its main use is calling Stratego primitives.
 *
 * @author Lennart Kats <lennart add lclnet.nl>
 * @author Karl Trygve Kalleberg <karltk near strategoxt dot org>
 */
public class InteropContext implements IContext {

	private final Context context;

	private ThreadLocal<IStrategoTerm> current = new ThreadLocal<IStrategoTerm>();

	private final Set<IStrategoConstructor> constructors = new HashSet<IStrategoConstructor>();

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
		return current.get();
	}

	public void setCurrent(IStrategoTerm value) {
		current.set(value);
	}

	public ITermFactory getFactory() {
		return context.getFactory();
	}

	public void setFactory(ITermFactory factory) {
		context.setFactory(factory);
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

	public void asyncCancel() {
		context.asyncCancel();
	}

	public void asyncCancelReset() {
		context.asyncCancelReset();
	}

	public Collection<OpDecl> getOperatorDeclarations() {
		LinkedList<OpDecl> r = new LinkedList<OpDecl>();

		for(IStrategoConstructor ctor : constructors) {
			if(ctor.getArity() == 0) {
				r.addFirst(new OpDecl(ctor.getName(), ConstType.INSTANCE));
			} else {
				LinkedList<ArgType> args = new LinkedList<ArgType>();
				for(int i = 0; i < ctor.getArity(); i++) {
					args.addFirst(ConstType.INSTANCE);
				}
				r.addFirst(new OpDecl(ctor.getName(), new FunType(args)));
			}
		}
		return r;
	}

	void addConstructors(Collection<IStrategoConstructor> newConstructors) {
		constructors.addAll(newConstructors);
	}
}
