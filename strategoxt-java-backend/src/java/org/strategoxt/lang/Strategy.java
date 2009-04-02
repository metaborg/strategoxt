package org.strategoxt.lang;

import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public abstract class Strategy implements IStrategy {
	
	/**
	 * Invoke this strategy using a dynamic number of arguments.
	 * 
	 * Inheritor classes should implement this method
	 * and the corresponding <code>invoke()</code> method
	 * (if applicable).
	 * 
	 * 
	 * @return The resulting term, or null in case of failure.
	 */
	public abstract IStrategoTerm invokeDynamic(Context context, IStrategoTerm current,
			IStrategy[] sargs, IStrategoTerm[] targs);
	
	public IStrategoTerm invoke(Context context, IStrategoTerm current) {
		throw new IllegalArgumentException("Illegal arguments for " + this);
	}
	
	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1) {
		throw new IllegalArgumentException("Illegal arguments for " + this);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategy s2) {
		throw new IllegalArgumentException("Illegal arguments for " + this);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1) {
		throw new IllegalArgumentException("Illegal arguments for " + this);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1, IStrategoTerm t2) {
		throw new IllegalArgumentException("Illegal arguments for " + this);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategoTerm t1) {
		throw new IllegalArgumentException("Illegal arguments for " + this);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategy s2, IStrategoTerm t1) {
		throw new IllegalArgumentException("Illegal arguments for " + this);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategoTerm t1, IStrategoTerm t2) {
		throw new IllegalArgumentException("Illegal arguments for " + this);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategy s2, IStrategoTerm t1, IStrategoTerm t2) {
		throw new IllegalArgumentException("Illegal arguments for " + this);
	}
	
	public String getName() {
		return getClass().getSimpleName();
	}
	
	@Override
	public String toString() {
		return getName();
	}
}