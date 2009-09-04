package org.strategoxt.lang.compat.sglr;

import org.spoofax.interpreter.adapter.aterm.WrappedATermFactory;
import org.spoofax.interpreter.library.jsglr.JSGLR_parse_string_pt;
import org.spoofax.jsglr.Disambiguator;
import org.spoofax.jsglr.ParseTable;
import org.spoofax.jsglr.SGLR;
import org.strategoxt.lang.compat.override.jsglr_parser_compat.jsglr_parser_compat;

import aterm.ATermFactory;

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

	protected JSGLR_parse_string_pt_compat(WrappedATermFactory factory, Disambiguator filterSettings) {
		super(factory, NAME, 0, 0);
		this.filterSettings = filterSettings;
	}

	@Override
	protected SGLR makeSGLR(ATermFactory factory, ParseTable table) {
		SGLR result = new SGLR(factory, table);
		result.setDisambiguator(JSGLR_parse_string_pt_compat.this.filterSettings);
		return result;		
	}

}
