package org.strategoxt.lang;

import org.spoofax.interpreter.terms.IStrategoTerm;

public class StrategyExecutor extends Strategy {

	private Strategy[] implementators;

	public StrategyExecutor(Strategy[] implementators) {
		this.implementators = implementators;
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm term) {

		IStrategoTerm term0 = term;

		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, term);
			if (term0 != null)
				return term0;
		}

		return null;

	}
	
	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm term, Strategy s1) {

		IStrategoTerm term0 = term;

		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, term, s1);
			if (term0 != null)
				return term0;
		}

		return null;

	}

	// Todo: implement invoke methods for all params
	// Question: Is that right? Can we rely on always using the same params
	// Need to handle params

}
