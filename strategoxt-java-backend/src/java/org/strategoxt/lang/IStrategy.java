package org.strategoxt.lang;

import org.spoofax.interpreter.terms.IStrategoTerm;


/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public interface IStrategy extends IStrategyOverloads<IStrategy, IStrategoTerm> {
	/**
	 * Invoke this strategy using a dynamic number of arguments.
	 * 
	 * @return The resulting term, or null in case of failure.
	 */
	IStrategoTerm invokeDynamic(Context context, IStrategoTerm current, IStrategy[] sargs, IStrategoTerm[] targs);

	String getName();
}

/**
 * Defines different overloads for the invoke() method.
 * 
 * @author Lennart Kats <lennart add lclnet.nl>
 */
interface IStrategyOverloads<S extends IStrategy, T extends IStrategoTerm> {
	// 0 strategy arguments
	
	T invoke(Context context, T current);
	
	T invoke(Context context, T current, T t1);

	T invoke(Context context, T current, T t1, T t2);

	T invoke(Context context, T current, T t1, T t2, T t3);

	T invoke(Context context, T current, T t1, T t2, T t3, T t4);

	T invoke(Context context, T current, T t1, T t2, T t3, T t4, T t5);
	
	// 1 strategy argument
	
	T invoke(Context context, T current, S s1);

	T invoke(Context context, T current, S s1, T t1);

	T invoke(Context context, T current, S s1, T t1, T t2);

	T invoke(Context context, T current, S s1, T t1, T t2, T t3);

	T invoke(Context context, T current, S s1, T t1, T t2, T t3, T t4);

	T invoke(Context context, T current, S s1, T t1, T t2, T t3, T t4, T t5);

	// 2 strategy arguments

	T invoke(Context context, T current, S s1, S s2);

	T invoke(Context context, T current, S s1, S s2, T t1);

	T invoke(Context context, T current, S s1, S s2, T t1, T t2);

	T invoke(Context context, T current, S s1, S s2, T t1, T t2, T t3);

	T invoke(Context context, T current, S s1, S s2, T t1, T t2, T t3, T t4);

	T invoke(Context context, T current, S s1, S s2, T t1, T t2, T t3, T t4, T t5);
}
