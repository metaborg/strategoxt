package org.strategoxt.lang;

import org.spoofax.NotImplementedException;
import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public abstract class Strategy extends StrategyOverloads<IStrategy, IStrategoTerm> implements IStrategy {
	
	/**
	 * Invoke this strategy using a dynamic number of arguments.
	 * 
	 * Implementing classes should implement this method
	 * and the corresponding <code>invoke()</code> method
	 * (if applicable).
	 * 
	 * @return The resulting term, or null in case of failure.
	 */
	public IStrategoTerm invokeDynamic(Context context, IStrategoTerm current,
			IStrategy[] sargs, IStrategoTerm[] targs) {
		
		// TODO: Default implementation of invokeDynamic()
		throw new NotImplementedException();
	}
	
	public String getName() {
		return getClass().getSimpleName();
	}
	
	@Override
	public String toString() {
		return getName();
	}
}

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
abstract class StrategyOverloads<S extends IStrategy, T extends IStrategoTerm> implements IStrategyOverloads<S,T> {

	public T invoke(Context context, T current) {
		throw new IllegalArgumentException("Illegal arguments for " + this);
	}

	public T invoke(Context context, T current, T t1) {
		throw new IllegalArgumentException("Illegal arguments for " + this);
	}

	public T invoke(Context context, T current, T t1, T t2) {
		throw new IllegalArgumentException("Illegal arguments for " + this);
	}

	public T invoke(Context context, T current, T t1, T t2, T t3) {
		throw new IllegalArgumentException("Illegal arguments for " + this);
	}

	public T invoke(Context context, T current, T t1, T t2, T t3, T t4) {
		throw new IllegalArgumentException("Illegal arguments for " + this);
	}

	public T invoke(Context context, T current, T t1, T t2, T t3, T t4, T t5) {
		throw new IllegalArgumentException("Illegal arguments for " + this);
	}

	public T invoke(Context context, T current, S s1) {
		throw new IllegalArgumentException("Illegal arguments for " + this);
	}

	public T invoke(Context context, T current, S s1, T t1) {
		throw new IllegalArgumentException("Illegal arguments for " + this);
	}

	public T invoke(Context context, T current, S s1, T t1, T t2) {
		throw new IllegalArgumentException("Illegal arguments for " + this);
	}

	public T invoke(Context context, T current, S s1, T t1, T t2, T t3) {
		throw new IllegalArgumentException("Illegal arguments for " + this);
	}

	public T invoke(Context context, T current, S s1, T t1, T t2, T t3, T t4) {
		throw new IllegalArgumentException("Illegal arguments for " + this);
	}

	public T invoke(Context context, T current, S s1, T t1, T t2, T t3, T t4,
			T t5) {
		throw new IllegalArgumentException("Illegal arguments for " + this);
	}

	public T invoke(Context context, T current, S s1, S s2) {
		throw new IllegalArgumentException("Illegal arguments for " + this);
	}

	public T invoke(Context context, T current, S s1, S s2, T t1) {
		throw new IllegalArgumentException("Illegal arguments for " + this);
	}

	public T invoke(Context context, T current, S s1, S s2, T t1, T t2) {
		throw new IllegalArgumentException("Illegal arguments for " + this);
	}

	public T invoke(Context context, T current, S s1, S s2, T t1, T t2, T t3) {
		throw new IllegalArgumentException("Illegal arguments for " + this);
	}

	public T invoke(Context context, T current, S s1, S s2, T t1, T t2, T t3, T t4) {
		throw new IllegalArgumentException("Illegal arguments for " + this);
	}

	public T invoke(Context context, T current, S s1, S s2, T t1, T t2, T t3, T t4, T t5) {
		throw new IllegalArgumentException("Illegal arguments for " + this);
	}
	
}