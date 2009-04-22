package org.strategoxt.lang.compat;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.IStrategy;
import org.strategoxt.lang.Strategy;
import org.spoofax.NotImplementedException;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class libstratego_rtg_compat {
	public static void preInit(ITermFactory factory) {
		// Nothing to init
	}
	
	public static class strrtg_list_loop1_1_0 extends Strategy {
		public static strrtg_list_loop1_1_0 instance = new strrtg_list_loop1_1_0();
		
		@Override
		public IStrategoTerm invoke(Context context, IStrategoTerm current,
				IStrategy s1) {
			// TODO Auto-generated method stub
			throw new NotImplementedException();
		}
	}

	public static class strrtg_repeat_1_0 extends Strategy {
		public static strrtg_repeat_1_0 instance = new strrtg_repeat_1_0();
		
		@Override
		public IStrategoTerm invoke(Context context, IStrategoTerm current,
				IStrategy s1) {
			// TODO Auto-generated method stub
			throw new NotImplementedException();
		}
	}
}
