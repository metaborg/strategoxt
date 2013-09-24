package org.metaborg.meta.lang.analysis.strategies;

import java.util.ArrayList;
import java.util.List;

import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoConstructor;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoReal;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

public class to_abstract_terms_0_0 extends Strategy {

	private static class TermConverter {
		private final ITermFactory factory;

		public TermConverter(ITermFactory factory) {
			this.factory = factory;
		}

		public IStrategoTerm convert(IStrategoTerm term) {
			final IStrategoTerm abstractTerm;
			switch(term.getTermType()) {
				case IStrategoTerm.APPL: {
					final IStrategoAppl appl = (IStrategoAppl) term;
					final IStrategoConstructor cons = appl.getConstructor();
					abstractTerm = factory.makeAppl(factory.makeConstructor("Appl", 2), factory.makeString(cons.getName()),
						mkSubtermList(factory, term));
					break;
				}
				case IStrategoTerm.TUPLE: {
					abstractTerm = factory.makeAppl(factory.makeConstructor("Tupl", 1), mkSubtermList(factory, term));
					break;
				}
				case IStrategoTerm.LIST: {
					abstractTerm = factory.makeAppl(factory.makeConstructor("List", 1), mkSubtermList(factory, term));
					break;
				}
				case IStrategoTerm.INT: {
					final IStrategoInt i = (IStrategoInt) term;
					abstractTerm = factory.makeAppl(factory.makeConstructor("Int", 1), factory.makeString(Integer.toString(i.intValue())));
					break;
				}
				case IStrategoTerm.REAL: {
					final IStrategoReal r = (IStrategoReal) term;
					abstractTerm = factory.makeAppl(factory.makeConstructor("Real", 1), factory.makeString(Double.toString(r.realValue())));
					break;
				}
				case IStrategoTerm.STRING: {
					final IStrategoString s = (IStrategoString) term;
					abstractTerm = factory.makeAppl(factory.makeConstructor("Str", 1), factory.makeString(s.stringValue()));
					break;
				}
				default: {
					return null;
				}
			}

			final IStrategoList annos = term.getAnnotations();
			if(!annos.isEmpty()) {
				return factory.makeAppl(factory.makeConstructor("Anno", 2), abstractTerm, mkSubtermList(factory, annos));
			}
			
			return abstractTerm;
		}
		
		private IStrategoList mkSubtermList(ITermFactory factory, IStrategoTerm term) {
			final List<IStrategoTerm> subterms = new ArrayList<IStrategoTerm>(term.getSubtermCount());
			for(final IStrategoTerm subterm : term)
				subterms.add(convert(subterm));
			return factory.makeList(subterms);
		}
	}

	public static final to_abstract_terms_0_0 instance = new to_abstract_terms_0_0();

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current) {
		final TermConverter termConverter = new TermConverter(context.getFactory());
		return termConverter.convert(current);
	}
}
