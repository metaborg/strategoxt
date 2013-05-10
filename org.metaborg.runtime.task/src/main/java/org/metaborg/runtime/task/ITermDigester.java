package org.metaborg.runtime.task;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

public interface ITermDigester {
	public IStrategoTerm digest(IStrategoTerm term, ITermFactory factory);
}
