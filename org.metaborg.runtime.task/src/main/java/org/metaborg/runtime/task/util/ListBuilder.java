package org.metaborg.runtime.task.util;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

public final class ListBuilder {
    public static IStrategoList makeList(ITermFactory factory, Iterable<? extends IStrategoTerm> terms) {
    	IStrategoList list = factory.makeList();
    	for(IStrategoTerm term : terms)
    		list = factory.makeListCons(term, list);
    	return list;
    }
}
