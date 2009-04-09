package org.strategoxt.lang;

import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public abstract class Strategy extends StrategyOverloads<IStrategy, IStrategoTerm> implements IStrategy {
	/**
	 * Invoke this strategy using a dynamic number of arguments.
	 * 
	 * Implementing classes should override this method
	 * and the corresponding <code>invoke()</code> method
	 * (if applicable).
	 * 
	 * @return The resulting term, or null in case of failure.
	 */
	public IStrategoTerm invokeDynamic(Context context, IStrategoTerm current,
			IStrategy[] s, IStrategoTerm[] t) {

		switch (s.length) {
			case 0:
				switch (t.length) {
					case 0: return invoke(context, current);
					case 1: return invoke(context, current, t[0]);
					case 2: return invoke(context, current, t[0], t[1]);
					case 3: return invoke(context, current, t[0], t[1], t[2]);
					case 4: return invoke(context, current, t[0], t[1], t[2], t[3]);
					case 5: return invoke(context, current, t[0], t[1], t[2], t[3], t[4]);
				}
				break;
			case 1: 
				switch (t.length) {
					case 0: return invoke(context, current, s[0]);
					case 1: return invoke(context, current, s[0], t[0]);
					case 2: return invoke(context, current, s[0], t[0], t[1]);
					case 3: return invoke(context, current, s[0], t[0], t[1], t[2]);
					case 4: return invoke(context, current, s[0], t[0], t[1], t[2], t[3]);
					case 5: return invoke(context, current, s[0], t[0], t[1], t[2], t[3], t[4]);
				}
				break;
			case 2: 
				switch (t.length) {
					case 0: return invoke(context, current, s[0], s[1]);
					case 1: return invoke(context, current, s[0], s[1], t[0]);
					case 2: return invoke(context, current, s[0], s[1], t[0], t[1]);
					case 3: return invoke(context, current, s[0], s[1], t[0], t[1], t[2]);
					case 4: return invoke(context, current, s[0], s[1], t[0], t[1], t[2], t[3]);
					case 5: return invoke(context, current, s[0], s[1], t[0], t[1], t[2], t[3], t[4]);
				}
		}
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}
	
	@Override
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
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public T invoke(Context context, T current, T t1) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public T invoke(Context context, T current, T t1, T t2) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public T invoke(Context context, T current, T t1, T t2, T t3) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public T invoke(Context context, T current, T t1, T t2, T t3, T t4) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public T invoke(Context context, T current, T t1, T t2, T t3, T t4, T t5) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public T invoke(Context context, T current, S s1) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public T invoke(Context context, T current, S s1, T t1) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public T invoke(Context context, T current, S s1, T t1, T t2) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public T invoke(Context context, T current, S s1, T t1, T t2, T t3) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public T invoke(Context context, T current, S s1, T t1, T t2, T t3, T t4) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public T invoke(Context context, T current, S s1, T t1, T t2, T t3, T t4, T t5) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public T invoke(Context context, T current, S s1, S s2) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public T invoke(Context context, T current, S s1, S s2, T t1) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public T invoke(Context context, T current, S s1, S s2, T t1, T t2) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public T invoke(Context context, T current, S s1, S s2, T t1, T t2, T t3) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public T invoke(Context context, T current, S s1, S s2, T t1, T t2, T t3, T t4) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}

	public T invoke(Context context, T current, S s1, S s2, T t1, T t2, T t3, T t4, T t5) {
		throw new IllegalArgumentException("Illegal arguments for " + getName());
	}
	
	public abstract String getName();
}