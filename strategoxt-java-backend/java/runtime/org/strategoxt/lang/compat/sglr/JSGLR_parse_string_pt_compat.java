package org.strategoxt.lang.compat.sglr;

import org.spoofax.interpreter.adapter.aterm.WrappedATermFactory;
import org.spoofax.interpreter.library.jsglr.JSGLR_parse_string_pt;
import org.spoofax.jsglr.Disambiguator;
import org.spoofax.jsglr.ParseTable;
import org.spoofax.jsglr.SGLR;

import aterm.ATermFactory;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class JSGLR_parse_string_pt_compat extends JSGLR_parse_string_pt {
	
	private final Disambiguator filterSettings;

	protected JSGLR_parse_string_pt_compat(WrappedATermFactory termFactory, Disambiguator filterSettings) {
		super(termFactory);
		this.filterSettings = filterSettings;
	}
	
	@Override
	protected SGLR makeSGLR(ATermFactory factory, ParseTable table) {
		SGLR result = new SGLR(factory, table);
		result.setDisambiguator(filterSettings);
		return result;		
	}

}
