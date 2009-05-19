package org.strategoxt.lang.compat.sglr;

import org.spoofax.interpreter.adapter.aterm.WrappedATermFactory;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.library.jsglr.JSGLR_parse_string_pt;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.jsglr.Disambiguator;
import org.spoofax.jsglr.ParseTable;
import org.spoofax.jsglr.SGLR;
import org.spoofax.jsglr.SGLRException;

import aterm.ATermFactory;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class JSGLR_parse_string_pt_compat extends AbstractPrimitive {
	
	public static final String NAME = "JSGLR_parse_string_pt_compat"; 
	
	private final Disambiguator filterSettings;
	
	private final JSGLR_parse_string_pt parser;	
	
	public SGLRException getLastException() {
		return parser.getLastException();
	}
	
	public void clearLastException() {
		parser.clearLastException();
	}
	
	public String getLastPath() {
		return parser.getLastPath();
	}

	protected JSGLR_parse_string_pt_compat(WrappedATermFactory termFactory, Disambiguator filterSettings) {
		super(NAME, 0, 0);
		
		this.filterSettings = filterSettings;
		parser = new JSGLR_parse_string_pt(termFactory) {
			@Override
			protected SGLR makeSGLR(ATermFactory factory, ParseTable table) {
				SGLR result = new SGLR(factory, table);
				result.setDisambiguator(JSGLR_parse_string_pt_compat.this.filterSettings);
				return result;		
			}
		};
	}

	@Override
	public boolean call(IContext env, Strategy[] svars, IStrategoTerm[] tvars) throws InterpreterException {
		return parser.call(env, svars, tvars);
	}

}
