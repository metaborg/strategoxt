package org.strategoxt.lang;

import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public abstract class LazyTermReference extends TermReference {
	@Override
	public IStrategoTerm get() {
		if (super.get() == null) set(init());
		return super.get();
	}
	
	protected abstract IStrategoTerm init();
}
