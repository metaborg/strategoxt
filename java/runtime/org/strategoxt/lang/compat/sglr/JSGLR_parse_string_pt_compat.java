package org.strategoxt.lang.compat.sglr;

import java.io.IOException;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.jsglr.JSGLR_parse_string_pt;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.jsglr.client.Disambiguator;
import org.spoofax.jsglr.client.SGLR;
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

	protected JSGLR_parse_string_pt_compat(Disambiguator filterSettings) {
		super(NAME, 1, 4);
		this.filterSettings = filterSettings;
	}
	
	@Override
	protected IStrategoTerm call(IContext env, IStrategoString input,
			org.spoofax.jsglr.client.ParseTable table, String startSymbol)
			throws InterpreterException, IOException,
			org.spoofax.jsglr.shared.SGLRException {
		
		SGLR parser = new SGLR(table);
		parser.setDisambiguator(filterSettings);
		
		IStrategoTerm result = (IStrategoTerm) parser.parse(input.stringValue(), startSymbol);
		return result;
	}

}
