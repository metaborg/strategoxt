package org.strategoxt.lang.compat;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class StringValuePrimitive extends AbstractPrimitive {
	
	private final String value;

	public StringValuePrimitive(String name, String value) {
		super(name, 0, 0);
		this.value = value;
	}

	@Override
	public boolean call(IContext env, Strategy[] svars, IStrategoTerm[] tvars)
			throws InterpreterException {
		
		env.setCurrent(env.getFactory().makeString(value));
		
		return true;
	}

}
