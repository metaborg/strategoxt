package org.metaborg.runtime.task.digest;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

public class HashCodeTermDigester implements ITermDigester {
	public IStrategoTerm digest(ITermFactory factory, IStrategoTerm... terms) {
		final int prime = 31;
		int result = 1;
		for(IStrategoTerm term : terms) {
			result = result * prime + term.hashCode();
		}
		return factory.makeInt(result);
	}

	public IStrategoTerm state(ITermFactory factory) {
		return factory.makeInt(0);
	}

	public void setState(IStrategoTerm state) {

	}

	public void reset() {

	}
}
