package org.strategoxt.lang.compat.sglr;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.jsglr.client.Disambiguator;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public abstract class AbstractFilterSetting extends AbstractPrimitive {
	
	private final Disambiguator settings;

	protected AbstractFilterSetting(Disambiguator settings, String name) {
		super(name, 0, 0);
		this.settings = settings;
	}
	
	public Disambiguator getSettings() {
		return settings;
	}

	@Override
	public final boolean call(IContext env, Strategy[] svars, IStrategoTerm[] tvars) {
		return get();
	}
	
	public void set() {
		// May be implemented by inheritor
	}
	
	public boolean get() {
		set();
		return true;
	}
}