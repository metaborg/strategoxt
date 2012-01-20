package org.strategoxt.lang.compat.sglr;

import java.io.IOException;
import java.util.concurrent.atomic.AtomicBoolean;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.jsglr.JSGLR_parse_string_pt;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.jsglr.client.Asfix2TreeBuilder;
import org.spoofax.jsglr.client.Disambiguator;
import org.spoofax.jsglr.client.ITreeBuilder;
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

	private final AtomicBoolean recoveryEnabled;

	protected JSGLR_parse_string_pt_compat(Disambiguator filterSettings, AtomicBoolean recoveryEnabled) {
		this(NAME, filterSettings, recoveryEnabled);
	}
	
	protected JSGLR_parse_string_pt_compat(String name, Disambiguator filterSettings, AtomicBoolean recoveryEnabled) {
		super(name, 1, 4);
		this.filterSettings = filterSettings;
		this.recoveryEnabled = recoveryEnabled;
	}
	
	protected boolean isRecoveryEnabled() {
		return recoveryEnabled.get();
	}
	
	@Override
	protected IStrategoTerm call(IContext env, IStrategoString input,
			org.spoofax.jsglr.client.ParseTable table, String startSymbol)
			throws InterpreterException, IOException,
			org.spoofax.jsglr.shared.SGLRException {
		
		// TODO: Optimize - cache tree builder...
		SGLR parser = new SGLR(createTreeBuilder(env), table);
		parser.setDisambiguator(filterSettings);
		parser.setUseStructureRecovery(isRecoveryEnabled());
		
		IStrategoTerm result = (IStrategoTerm) parser.parse(input.stringValue(), null, startSymbol);
		return result;
	}

	protected ITreeBuilder createTreeBuilder(IContext env) {
		return new Asfix2TreeBuilder(env.getFactory());
	}

}
