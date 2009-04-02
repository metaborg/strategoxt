package org.strategoxt.lang;

import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public interface IStrategy {
	
	// DYNAMIC INVOCATION
	
	/**
	 * Invoke this strategy using a dynamic number of arguments.
	 * 
	 * @return The resulting term, or null in case of failure.
	 */
	IStrategoTerm invokeDynamic(Context context, IStrategoTerm current, IStrategy[] sargs, IStrategoTerm[] targs);
	
	// INVOCATION WITH SPECIFIC ARITIES
	
	IStrategoTerm invoke(Context context, IStrategoTerm current);
	
	IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1);

	IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategy s2);

	IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1);

	IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1, IStrategoTerm t2);

	IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategoTerm t1);

	IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategy s2, IStrategoTerm t1);

	IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategoTerm t1, IStrategoTerm t2);

	IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s1, IStrategy s2, IStrategoTerm t1, IStrategoTerm t2);

	String getName();
}
