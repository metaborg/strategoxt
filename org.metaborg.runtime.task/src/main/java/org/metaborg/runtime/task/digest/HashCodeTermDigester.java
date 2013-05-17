package org.metaborg.runtime.task.digest;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

public class HashCodeTermDigester implements ITermDigester {
	public IStrategoTerm digest(IStrategoTerm term, ITermFactory factory) {
		return factory.makeInt(term.hashCode());
	}
	
	public IStrategoTerm state(ITermFactory factory) {
		return factory.makeInt(0);
	}
	
	public void setState(IStrategoTerm state) {
		
	}
	
	public void reset() {
		
	}
}
