package org.strategoxt.lang;

import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public interface IDynamicStrategy {
	/**
	 * Invoke this strategy using a dynamic number of arguments.
	 * 
	 * @return The resulting term, or null in case of failure.
	 */
	IStrategoTerm invokeDynamic(Context context, IStrategoTerm current, Strategy[] sargs, IStrategoTerm[] targs);

	String getName();
}
