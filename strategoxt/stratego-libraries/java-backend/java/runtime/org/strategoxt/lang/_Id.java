package org.strategoxt.lang;

import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class _Id extends DynamicStrategy {
	public static final _Id instance = new _Id();
	
	private _Id() {
		// Singleton class
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current) {
		return current;
	}
	
	@Override
	public IStrategoTerm invokeDynamic(Context context, IStrategoTerm current, Strategy[] sargs, IStrategoTerm[] targs) {
		return current;
	}

	public static IStrategoTerm callStatic(Context context, IStrategoTerm current) {
		return current;
	}
}
