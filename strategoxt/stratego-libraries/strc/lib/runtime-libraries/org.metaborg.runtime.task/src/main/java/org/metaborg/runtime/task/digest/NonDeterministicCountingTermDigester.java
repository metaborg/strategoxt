package org.metaborg.runtime.task.digest;

import org.spoofax.interpreter.core.Tools;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

public class NonDeterministicCountingTermDigester implements ITermDigester {
	private static int RESET_COUNT = 0;

	public int count = RESET_COUNT;

	public IStrategoTerm digest(ITermFactory factory, IStrategoTerm... terms) {
		if(count == Integer.MAX_VALUE)
			throw new IllegalStateException("Counter has reached maximum number, cannot assign new identifier.");

		return factory.makeInt(count++);
	}

	public IStrategoTerm state(ITermFactory factory) {
		return factory.makeInt(count);
	}

	public void setState(IStrategoTerm state) {
		count = Tools.asJavaInt(state);
	}

	public void reset() {
		count = RESET_COUNT;
	}
}
