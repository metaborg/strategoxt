package org.strategoxt.lang.compat.sglr;

import java.io.IOException;
import java.util.concurrent.atomic.AtomicBoolean;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.jsglr.JSGLR_parse_string_pt;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.jsglr.Disambiguator;
import org.spoofax.jsglr.ParseTable;
import org.spoofax.jsglr.SGLR;
import org.spoofax.jsglr.SGLRException;
import org.strategoxt.lang.compat.override.jsglr_parser_compat.jsglr_parser_compat;

import aterm.ATerm;
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
	
	private final ATermFactory atermFactory;

	private final AtomicBoolean recoveryEnabled;

	protected JSGLR_parse_string_pt_compat(ATermFactory atermFactory, Disambiguator filterSettings, AtomicBoolean recoveryEnabled) {
		super(atermFactory, NAME, 1, 4);
		this.filterSettings = filterSettings;
		this.atermFactory = atermFactory;
		this.recoveryEnabled = recoveryEnabled;
	}
	
	protected boolean isRecoveryEnabled() {
		return recoveryEnabled.get();
	}
	
	@Override
	protected IStrategoTerm call(IContext env, IStrategoString input,
			ParseTable table, String startSymbol)
			throws InterpreterException, IOException, SGLRException {
		
		SGLR parser = new SGLR(atermFactory, table);
		parser.setDisambiguator(filterSettings);
		parser.setUseStructureRecovery(isRecoveryEnabled());
		
		ATerm resultATerm = parser.parse(input.stringValue(), startSymbol);
		return getATermConverter(env).convert(resultATerm);
	}

}
