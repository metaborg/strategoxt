package org.strategoxt.lang.compat;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class libstratego_rtg_compat {
	public static void init(Context context) {
		// Nothing to init
	}
	
	public static class strrtg_list_loop1_1_0 extends Strategy {
		public static strrtg_list_loop1_1_0 instance = new strrtg_list_loop1_1_0();
		
		@Override
		public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s) {
			if (current.getTermType() != IStrategoTerm.LIST)
				return null;
			
			boolean success = false;			
			IStrategoList list = (IStrategoList) current;
			
			for (int i = 0; i < list.size(); i++) {
				IStrategoTerm term = list.get(i);
				IStrategoTerm term2 = s.invoke(context, term);
				if (term2 != null) success = true;
			}
			
			return success ? current : null;
		}
	}

	public static class strrtg_repeat_1_0 extends Strategy {
		public static strrtg_repeat_1_0 instance = new strrtg_repeat_1_0();
		
		@Override
		public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s) {
			IStrategoTerm result = current;
			IStrategoTerm next = s.invoke(context, result);
			
			while (next != null) {
				result = next;
				next = s.invoke(context, result);
			}

			return result;
		}
	}
}
