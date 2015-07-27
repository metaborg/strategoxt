/**
 * 
 */
package org.strategoxt.lang.compat;

import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
import org.spoofax.terms.StrategoAppl;
import org.spoofax.terms.TermFactory;

/**
 * @author Vlad Vergu <v.a.vergu add tudelft.nl>
 * 
 */
public class StrategoStrategyRef extends StrategoAppl {

	/**
	 * 
	 */
	private static final long serialVersionUID = -394189753710922146L;
	private final Strategy sref;

	public StrategoStrategyRef(Strategy sref, ITermFactory factory) {
		super(factory.makeConstructor("___StrategyReference___", 0), new IStrategoTerm[0], TermFactory.EMPTY_LIST, factory.getDefaultStorageType());

		this.sref = sref;
	}

	public Strategy getTargetStrategy() {
		return sref;
	}

}
