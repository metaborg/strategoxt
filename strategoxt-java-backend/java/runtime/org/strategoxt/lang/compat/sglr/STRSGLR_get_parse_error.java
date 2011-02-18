package org.strategoxt.lang.compat.sglr;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.library.IOperatorRegistry;
import org.spoofax.interpreter.library.jsglr.JSGLRPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.jsglr.shared.SGLRException;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class STRSGLR_get_parse_error extends JSGLRPrimitive {

	public STRSGLR_get_parse_error() {
		super("STRSGLR_get_parse_error", 0, 0);
	}

	@Override
	public boolean call(IContext env, Strategy[] svars, IStrategoTerm[] tvars) {
		IOperatorRegistry or = env.getOperatorRegistry(SGLRCompatLibrary.REGISTRY_NAME);
		JSGLR_parse_string_pt_compat parser = (JSGLR_parse_string_pt_compat) or.get(JSGLR_parse_string_pt_compat.NAME);
		SGLRException lastException = parser.getLastException();
		if (lastException == null) return false;
		IStrategoTerm result = lastException.toTerm(parser.getLastPath());
		if (result == null) return false;
		env.setCurrent(result);
		return true;
	}
}
