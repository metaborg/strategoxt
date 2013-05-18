package org.strategoxt.lang.typesmart;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
import org.spoofax.terms.StrategoListIterator;
import org.spoofax.terms.TermFactory;
import org.spoofax.terms.TermTransformer;
import org.spoofax.terms.attachments.ParentTermFactory;
import org.strategoxt.lang.StrategoException;

/**
 * @author Sebastian Erdweg <seba at informatik uni-marburg de>
 */
public class TypeSmartATermCommands {

	// // TODO use origin factory
	public static ITermFactory factory = new ParentTermFactory(
			new TermFactory().getFactoryWithStorageType(IStrategoTerm.MUTABLE));

	public static String getString(IStrategoTerm term) {
		if (term.getTermType() == IStrategoTerm.STRING)
			return ((IStrategoString) term).stringValue();

		throw new StrategoException("Not a string: " + term);
	}

	public static List<IStrategoTerm> getList(IStrategoTerm term) {

		if (term.getTermType() == IStrategoTerm.LIST) {
			List<IStrategoTerm> l = new ArrayList<IStrategoTerm>();

			for (Iterator<IStrategoTerm> it = new StrategoListIterator(
					(IStrategoList) term); it.hasNext();)
				l.add(it.next());

			return l;
		}

		throw new StrategoException("Not a list: " + term);
	}

	private static TermTransformer idTransformer = new TermTransformer(factory,
			false) {

		@Override
		public IStrategoTerm preTransform(IStrategoTerm term) {
			return factory.annotateTerm(term, factory.makeList());
		}
	};

	public static IStrategoTerm stripAnnos(IStrategoTerm term) {
		return idTransformer.transform(term);
	}
}
