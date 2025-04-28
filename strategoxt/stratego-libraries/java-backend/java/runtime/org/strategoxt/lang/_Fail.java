package org.strategoxt.lang;

import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class _Fail extends DynamicStrategy {
	public static final _Fail instance = new _Fail();
	
	private _Fail() {
		// Singleton class
	}
	
	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current) {
		return null;
	}
	
	@Override
	public IStrategoTerm invokeDynamic(Context context, IStrategoTerm current, Strategy[] sargs, IStrategoTerm[] targs) {
		return null;
	}

	public static IStrategoTerm callStatic(Context context, IStrategoTerm current) {
		return null;
	}
}
