package org.strategoxt.lang.compat;

import org.spoofax.NotImplementedException;
import org.spoofax.interpreter.library.AbstractStrategoOperatorRegistry;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;
import org.strategoxt.lang.compat.override.strc_compat;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class libstrc_compat {
	private static boolean isInitialized;
	
	public static void init(Context context) {
		if (isInitialized) return;
		isInitialized = true;
		context.addOperatorRegistry(new OperatorRegistry());
		strc_compat.init(context);
	}
	
	private static class OperatorRegistry extends AbstractStrategoOperatorRegistry {
		
		public OperatorRegistry() {
			add(new StringValuePrimitive("VERSION_TERM", "x.y"));
			add(new StringValuePrimitive("SVN_REVISION_TERM", "nnnn"));
			add(new StringValuePrimitive("STRC_SYSTEM_LDFLAGS", ""));
			add(new StringValuePrimitive("STRC_SYSTEM_CFLAGS", ""));
		}

		public String getOperatorRegistryName() {
			return "libstrc_compat";
		}		
	}
	
	public static class pp_c_0_0 extends Strategy {
		public static pp_c_0_0 instance = new pp_c_0_0();
		
		@Override
		public IStrategoTerm invoke(Context context, IStrategoTerm current) {
			throw new NotImplementedException(); // TODO: pp_c_0_0
		}
	}
	
	public static class pp_c_pretty_0_0 extends Strategy {
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
