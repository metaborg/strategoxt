package org.strategoxt.lang;

import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class _Id extends Strategy {
	public static final _Id instance = new _Id();

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current) {
		return current;
	}
}
