package org.strategoxt.lang;

import org.spoofax.interpreter.terms.IStrategoTerm;


/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public interface IStrategy extends IDynamicStrategy, IStrategyOverloads<IStrategy, IStrategoTerm> {}

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

	// 3 strategy arguments

	T invoke(Context context, T current, S s1, S s2, S s3);

	T invoke(Context context, T current, S s1, S s2, S s3, T t1);

	T invoke(Context context, T current, S s1, S s2, S s3, T t1, T t2);

	T invoke(Context context, T current, S s1, S s2, S s3, T t1, T t2, T t3);

	T invoke(Context context, T current, S s1, S s2, S s3, T t1, T t2, T t3, T t4);

	T invoke(Context context, T current, S s1, S s2, S s3, T t1, T t2, T t3, T t4, T t5);

	// 4 strategy arguments

	T invoke(Context context, T current, S s1, S s2, S s3, S s4);

	T invoke(Context context, T current, S s1, S s2, S s3, S s4, T t1);

	T invoke(Context context, T current, S s1, S s2, S s3, S s4, T t1, T t2);

	T invoke(Context context, T current, S s1, S s2, S s3, S s4, T t1, T t2, T t3);

	T invoke(Context context, T current, S s1, S s2, S s3, S s4, T t1, T t2, T t3, T t4);

	T invoke(Context context, T current, S s1, S s2, S s3, S s4, T t1, T t2, T t3, T t4, T t5);

	// 5 strategy arguments

	T invoke(Context context, T current, S s1, S s2, S s3, S s4, S s5);

	T invoke(Context context, T current, S s1, S s2, S s3, S s4, S s5, T t1);

	T invoke(Context context, T current, S s1, S s2, S s3, S s4, S s5, T t1, T t2);

	T invoke(Context context, T current, S s1, S s2, S s3, S s4, S s5, T t1, T t2, T t3);

	T invoke(Context context, T current, S s1, S s2, S s3, S s4, S s5, T t1, T t2, T t3, T t4);

	T invoke(Context context, T current, S s1, S s2, S s3, S s4, S s5, T t1, T t2, T t3, T t4, T t5);
}
