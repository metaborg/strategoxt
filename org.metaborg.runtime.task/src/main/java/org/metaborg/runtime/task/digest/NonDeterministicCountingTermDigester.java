package org.metaborg.runtime.task.digest;

import java.util.HashMap;
import java.util.Map;
import java.util.Map.Entry;

import org.spoofax.interpreter.core.Tools;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

public class NonDeterministicCountingTermDigester implements ITermDigester {
	public int count = Integer.MIN_VALUE;
	private final Map<IStrategoTerm, IStrategoTerm> mapping = new HashMap<IStrategoTerm, IStrategoTerm>();

	public IStrategoTerm digest(IStrategoTerm term, ITermFactory factory) {
		IStrategoTerm nr = mapping.get(term);
		if (nr == null) {
			if (count == Integer.MAX_VALUE)
				throw new IllegalStateException(
						"Counter has reached maximum number, cannot assign new identifier.");
			nr = factory.makeInt(count++);
			mapping.put(term, nr);
		}
		return nr;
	}

	public boolean digested(IStrategoTerm term) {
		return mapping.containsKey(term);
	}
	
	public IStrategoTerm state(ITermFactory factory) {
		final IStrategoInt countTerm = factory.makeInt(count);
		IStrategoList mappingTerm = factory.makeList();
		for (Entry<IStrategoTerm, IStrategoTerm> entry : mapping.entrySet())
			mappingTerm = factory.makeListCons(
					factory.makeTuple(entry.getKey(), entry.getValue()),
					mappingTerm);
		return factory.makeTuple(countTerm, mappingTerm);
	}

	public void setState(IStrategoTerm state) {
		count = Tools.asJavaInt(state.getSubterm(0));
		mapping.clear();
		for (IStrategoTerm entry : state.getSubterm(1))
			mapping.put(entry.getSubterm(0), entry.getSubterm(1));
	}

	public void reset() {
		count = Integer.MIN_VALUE;
		mapping.clear();
	}
}
