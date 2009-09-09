package org.strategoxt.lang.compat.sglr;

import java.io.IOException;

import org.spoofax.interpreter.adapter.aterm.WrappedATermFactory;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.jsglr.JSGLR_parse_string_pt;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.TermConverter;
import org.spoofax.jsglr.Disambiguator;
import org.spoofax.jsglr.ParseTable;
import org.spoofax.jsglr.SGLR;
import org.spoofax.jsglr.SGLRException;
import org.strategoxt.lang.compat.override.jsglr_parser_compat.jsglr_parser_compat;

/**
 * Extends the JSGLR_parse_string_pt primitive with support
 * for filter settings.
 * 
 * @see jsglr_parser_compat
 * 
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class JSGLR_parse_string_pt_compat extends JSGLR_parse_string_pt {
	
	public static final String NAME = "JSGLR_parse_string_pt_compat"; 
	
	private final Disambiguator filterSettings;
	
	private final WrappedATermFactory factory;

	protected JSGLR_parse_string_pt_compat(WrappedATermFactory factory, Disambiguator filterSettings) {
		super(factory, NAME, 1, 4);
		this.filterSettings = filterSettings;
		this.factory = factory;
	}
	
	@Override
	public IStrategoTerm call(IContext env, String input,
			ParseTable table, String startSymbol, boolean outputWrappedATerm)
			throws InterpreterException, IOException, SGLRException {
		
		SGLR parser = new SGLR(factory.getFactory(), table);
		parser.setDisambiguator(filterSettings);
		
		IStrategoTerm result = factory.wrapTerm(parser.parse(input, startSymbol));
		if (!outputWrappedATerm)
			result = TermConverter.convert(env.getFactory(), result);
		
		return result;
	}

}
