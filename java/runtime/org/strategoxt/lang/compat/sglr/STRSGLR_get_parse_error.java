package org.strategoxt.lang.compat.sglr;

import org.spoofax.interpreter.adapter.aterm.WrappedATermFactory;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.library.IOperatorRegistry;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.TermConverter;

import aterm.ATerm;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class STRSGLR_get_parse_error extends AbstractPrimitive {
	
	private final WrappedATermFactory wrappedFactory;

	public STRSGLR_get_parse_error(WrappedATermFactory wrappedFactory) {
		super("STRSGLR_get_parse_error", 0, 0);
		this.wrappedFactory = wrappedFactory;
	}

	@Override
	public boolean call(IContext env, Strategy[] svars, IStrategoTerm[] tvars) {
		IOperatorRegistry or = env.getOperatorRegistry(SGLRCompatLibrary.REGISTRY_NAME);
		JSGLR_parse_string_pt_compat parser = (JSGLR_parse_string_pt_compat) or.get(JSGLR_parse_string_pt_compat.NAME);
		ATerm result = parser.getLastException().toTerm(parser.getLastPath());
		if (result == null) return false;
		env.setCurrent(TermConverter.convert(env.getFactory(), wrappedFactory.wrapTerm(result)));
		return true;
	}
}
