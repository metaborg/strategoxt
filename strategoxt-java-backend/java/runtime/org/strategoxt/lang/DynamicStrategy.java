package org.strategoxt.lang;

import static org.strategoxt.lang.Term.*;

import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * An abstract strategy class. Inheritor classes must implement invokeDynamic().
 * 
 * @see Strategy	An abstract strategy class where invoke() should be implemented.
 * 
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public abstract class DynamicStrategy extends DynamicStrategyOverloads<IStrategy, IStrategoTerm> implements IStrategy {
	
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
abstract class DynamicStrategyOverloads<S extends IStrategy, T extends IStrategoTerm>
		implements IStrategyOverloads<S, T>, IDynamicStrategyOverload<T> {
	
	public T invoke(Context context, T current) {
		return invokeDynamic(context, current, EMPTY_STRATEGY_LIST, EMPTY_TERM_LIST);
	}

	public T invoke(Context context, T current, T t1) {
		return invokeDynamic(context, current, EMPTY_STRATEGY_LIST, new IStrategoTerm[] { t1 });
	}

	public T invoke(Context context, T current, T t1, T t2) {
		return invokeDynamic(context, current, EMPTY_STRATEGY_LIST, new IStrategoTerm[] { t1, t2 });
	}

	public T invoke(Context context, T current, T t1, T t2, T t3) {
		return invokeDynamic(context, current, EMPTY_STRATEGY_LIST, new IStrategoTerm[] { t1, t2, t3 });
	}

	public T invoke(Context context, T current, T t1, T t2, T t3, T t4) {
		return invokeDynamic(context, current, EMPTY_STRATEGY_LIST, new IStrategoTerm[] { t1, t2, t3, t4 });
	}

	public T invoke(Context context, T current, T t1, T t2, T t3, T t4, T t5) {
		return invokeDynamic(context, current, EMPTY_STRATEGY_LIST, new IStrategoTerm[] { t1, t2, t3, t4, t5 });
	}

	public T invoke(Context context, T current, S s1) {
		return invokeDynamic(context, current, new IStrategy[] { s1 }, EMPTY_TERM_LIST);
	}

	public T invoke(Context context, T current, S s1, T t1) {
		return invokeDynamic(context, current, new IStrategy[] { s1 }, new IStrategoTerm[] { t1 });
	}

	public T invoke(Context context, T current, S s1, T t1, T t2) {
		return invokeDynamic(context, current, new IStrategy[] { s1 }, new IStrategoTerm[] { t1, t2 });
	}

	public T invoke(Context context, T current, S s1, T t1, T t2, T t3) {
		return invokeDynamic(context, current, new IStrategy[] { s1 }, new IStrategoTerm[] { t1, t2, t3 });
	}

	public T invoke(Context context, T current, S s1, T t1, T t2, T t3, T t4) {
		return invokeDynamic(context, current, new IStrategy[] { s1 }, new IStrategoTerm[] { t1, t2, t3, t4 });
	}

	public T invoke(Context context, T current, S s1, T t1, T t2, T t3, T t4, T t5) {
		return invokeDynamic(context, current, new IStrategy[] { s1 }, new IStrategoTerm[] { t1, t2, t3, t4, t5 });
	}

	public T invoke(Context context, T current, S s1, S s2) {
		return invokeDynamic(context, current, new IStrategy[] { s1, s2 }, EMPTY_TERM_LIST);
	}

	public T invoke(Context context, T current, S s1, S s2, T t1) {
		return invokeDynamic(context, current, new IStrategy[] { s1, s2 }, new IStrategoTerm[] { t1 });
	}

	public T invoke(Context context, T current, S s1, S s2, T t1, T t2) {
		return invokeDynamic(context, current, new IStrategy[] { s1, s2 }, new IStrategoTerm[] { t1, t2 });
	}

	public T invoke(Context context, T current, S s1, S s2, T t1, T t2, T t3) {
		return invokeDynamic(context, current, new IStrategy[] { s1, s2 }, new IStrategoTerm[] { t1, t2, t3 });
	}

	public T invoke(Context context, T current, S s1, S s2, T t1, T t2, T t3, T t4) {
		return invokeDynamic(context, current, new IStrategy[] { s1, s2 }, new IStrategoTerm[] { t1, t2, t3, t4 });
	}

	public T invoke(Context context, T current, S s1, S s2, T t1, T t2, T t3, T t4, T t5) {
		return invokeDynamic(context, current, new IStrategy[] { s1, s2 }, new IStrategoTerm[] { t1, t2, t3, t4, t5 });
	}

	public T invoke(Context context, T current, S s1, S s2, S s3) {
		return invokeDynamic(context, current, new IStrategy[] { s1, s2, s3 }, EMPTY_TERM_LIST);
	}

	public T invoke(Context context, T current, S s1, S s2, S s3, T t1) {
		return invokeDynamic(context, current, new IStrategy[] { s1, s2, s3 }, new IStrategoTerm[] { t1 });
	}

	public T invoke(Context context, T current, S s1, S s2, S s3, T t1, T t2) {
		return invokeDynamic(context, current, new IStrategy[] { s1, s2, s3 }, new IStrategoTerm[] { t1, t2 });
	}

	public T invoke(Context context, T current, S s1, S s2, S s3, T t1, T t2, T t3) {
		return invokeDynamic(context, current, new IStrategy[] { s1, s2, s3 }, new IStrategoTerm[] { t1, t2, t3 });
	}

	public T invoke(Context context, T current, S s1, S s2, S s3, T t1, T t2, T t3, T t4) {
		return invokeDynamic(context, current, new IStrategy[] { s1, s2, s3 }, new IStrategoTerm[] { t1, t2, t3, t4 });
	}

	public T invoke(Context context, T current, S s1, S s2, S s3, T t1, T t2, T t3, T t4, T t5) {
		return invokeDynamic(context, current, new IStrategy[] { s1, s2, s3 }, new IStrategoTerm[] { t1, t2, t3, t4, t5 });
	}

	public T invoke(Context context, T current, S s1, S s2, S s3, S s4) {
		return invokeDynamic(context, current, new IStrategy[] { s1, s2, s3, s4 }, EMPTY_TERM_LIST);
	}

	public T invoke(Context context, T current, S s1, S s2, S s3, S s4, T t1) {
		return invokeDynamic(context, current, new IStrategy[] { s1, s2, s3, s4 }, new IStrategoTerm[] { t1 });
	}

	public T invoke(Context context, T current, S s1, S s2, S s3, S s4, T t1, T t2) {
		return invokeDynamic(context, current, new IStrategy[] { s1, s2, s3, s4 }, new IStrategoTerm[] { t1, t2 });
	}

	public T invoke(Context context, T current, S s1, S s2, S s3, S s4, T t1, T t2, T t3) {
		return invokeDynamic(context, current, new IStrategy[] { s1, s2, s3, s4 }, new IStrategoTerm[] { t1, t2, t3 });
	}

	public T invoke(Context context, T current, S s1, S s2, S s3, S s4, T t1, T t2, T t3, T t4) {
		return invokeDynamic(context, current, new IStrategy[] { s1, s2, s3, s4 }, new IStrategoTerm[] { t1, t2, t3, t4 });
	}

	public T invoke(Context context, T current, S s1, S s2, S s3, S s4, T t1, T t2, T t3, T t4, T t5) {
		return invokeDynamic(context, current, new IStrategy[] { s1, s2, s3, s4 }, new IStrategoTerm[] { t1, t2, t3, t4, t5 });
	}

	public T invoke(Context context, T current, S s1, S s2, S s3, S s4, S s5) {
		return invokeDynamic(context, current, new IStrategy[] { s1, s2, s3, s4, s5 }, EMPTY_TERM_LIST);
	}

	public T invoke(Context context, T current, S s1, S s2, S s3, S s4, S s5, T t1) {
		return invokeDynamic(context, current, new IStrategy[] { s1, s2, s3, s4, s5 }, new IStrategoTerm[] { t1 });
	}

	public T invoke(Context context, T current, S s1, S s2, S s3, S s4, S s5, T t1, T t2) {
		return invokeDynamic(context, current, new IStrategy[] { s1, s2, s3, s4, s5 }, new IStrategoTerm[] { t1, t2 });
	}

	public T invoke(Context context, T current, S s1, S s2, S s3, S s4, S s5, T t1, T t2, T t3) {
		return invokeDynamic(context, current, new IStrategy[] { s1, s2, s3, s4, s5 }, new IStrategoTerm[] { t1, t2, t3 });
	}

	public T invoke(Context context, T current, S s1, S s2, S s3, S s4, S s5, T t1, T t2, T t3, T t4) {
		return invokeDynamic(context, current, new IStrategy[] { s1, s2, s3, s4, s5 }, new IStrategoTerm[] { t1, t2, t3, t4 });
	}

	public T invoke(Context context, T current, S s1, S s2, S s3, S s4, S s5, T t1, T t2, T t3, T t4, T t5) {
		return invokeDynamic(context, current, new IStrategy[] { s1, s2, s3, s4, s5 }, new IStrategoTerm[] { t1, t2, t3, t4, t5 });
	}
}

/**
 * Defines the invokeDynamic method with a custom, erased return type,
 * while avoiding the <code>@Override</code> requirement of abstract methods. 
 */
interface IDynamicStrategyOverload<T extends IStrategoTerm> extends IDynamicStrategy {
	public T invokeDynamic(Context context, IStrategoTerm current,
			IStrategy[] sargs, IStrategoTerm[] targs);
}