package org.strategoxt.lang.compat.sglr;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.library.IOperatorRegistry;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class STRSGLR_clear_parse_error extends AbstractPrimitive {

	public STRSGLR_clear_parse_error() {
		super("STRSGLR_clear_parse_error", 0, 0);
	}

	@Override
	public boolean call(IContext env, Strategy[] svars, IStrategoTerm[] tvars) {
		IOperatorRegistry or = env.getOperatorRegistry(SGLRCompatLibrary.REGISTRY_NAME);
		JSGLR_parse_string_pt_compat parser = (JSGLR_parse_string_pt_compat) or.get(JSGLR_parse_string_pt_compat.NAME);
		parser.clearLastException();
		return true;
	}
}
