package org.metaborg.runtime.task.util;

import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

import com.google.common.collect.ImmutableList;

public final class TermTools {
	public static IStrategoList makeList(ITermFactory factory, Iterable<? extends IStrategoTerm> terms) {
		IStrategoList list = factory.makeList();
		for(IStrategoTerm term : ImmutableList.copyOf(terms).reverse())
			list = factory.makeListCons(term, list);
		return list;
	}


	public static IStrategoTerm makeBool(ITermFactory factory, boolean bool) {
		return bool ? factory.makeInt(1) : factory.makeInt(0);
	}

	public static boolean takeBool(IStrategoTerm term) {
		return term.getTermType() == IStrategoTerm.INT && ((IStrategoInt) term).intValue() != 0;
	}


	public static IStrategoTerm makeNullable(ITermFactory factory, IStrategoTerm term) {
		return term == null ? factory.makeTuple() : term;
	}

	public static IStrategoTerm takeNullable(IStrategoTerm term) {
		if(isNull(term))
			return null;
		return term;
	}

	public static boolean isNull(IStrategoTerm term) {
		return term.getTermType() == IStrategoTerm.TUPLE && term.getSubtermCount() == 0;
	}


	public static IStrategoInt makeShort(ITermFactory factory, short num) {
		return factory.makeInt(num);
	}

	public static short takeShort(IStrategoTerm term) {
		if(term.getTermType() != IStrategoTerm.INT)
			return 0;
		return (short) ((IStrategoInt) term).intValue();
	}


	public static IStrategoInt makeLong(ITermFactory factory, long num) {
		// TODO: this can loose information
		return factory.makeInt((int) num);
	}

	public static long takeLong(IStrategoTerm term) {
		if(term.getTermType() != IStrategoTerm.INT)
			return 0;
		return ((IStrategoInt) term).intValue();
	}
}
