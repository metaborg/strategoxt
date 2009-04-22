package org.strategoxt.lang.compat;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.IStrategy;
import org.strategoxt.lang.Strategy;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class libstrc_compat {
	public static void init(Context context) {
		// Nothing to init
	}
	
	public static class pp_c_0_0 extends Strategy {
		public static pp_c_0_0 instance = new pp_c_0_0();
		
		@Override
		public IStrategoTerm invoke(Context context, IStrategoTerm current) {
			throw new NotImplementedException(); // TODO: pp_c_0_0
		}
	}
	
	public static class pp_c_0_0 extends Strategy {
		public static pp_c_pretty_0_0 instance = new pp_c_pretty_0_0();
		
		@Override
		public IStrategoTerm invoke(Context context, IStrategoTerm current) {
			throw new NotImplementedException(); // TODO: pp_c_pretty_0_0
		}
	}
	
	public static class strc_cgen_aterm_0_0 extends Strategy {
		public static strc_cgen_aterm_0_0 instance = new strc_cgen_aterm_0_0();
		
		@Override
		public IStrategoTerm invoke(Context context, IStrategoTerm current) {
			throw new NotImplementedException(); // TODO: strc_cgen_aterm_0_0
		}
	}
}
