package org.metaborg.runtime.task.digest;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

public interface ITermDigester {
	public IStrategoTerm digest(IStrategoTerm term, ITermFactory factory);
	
	public IStrategoTerm state(ITermFactory factory);
	public void setState(IStrategoTerm state);
	public void reset();
}
