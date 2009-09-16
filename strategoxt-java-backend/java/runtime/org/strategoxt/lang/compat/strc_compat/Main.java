package org.strategoxt.lang.compat.strc_compat;

import org.spoofax.interpreter.library.AbstractStrategoOperatorRegistry;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.compat.StringValuePrimitive;

/**
 * Registers primitives for use by libstrc and configures
 * the strc_compat overrides.
 * 
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class Main {
	
	private Main() {
		// No instantiation
	}
	
	public static void init(Context context) {
		context.addOperatorRegistry(new OperatorRegistry());
		org.strategoxt.lang.compat.override.strc_compat.Main.init(context);
	}
	
	private static class OperatorRegistry extends AbstractStrategoOperatorRegistry {		
		public OperatorRegistry() {
			add(new StringValuePrimitive("VERSION_TERM", "x.y"));
			add(new StringValuePrimitive("SVN_REVISION_TERM", "nnnn"));
			add(new StringValuePrimitive("STRC_SYSTEM_LDFLAGS", ""));
			add(new StringValuePrimitive("STRC_SYSTEM_CFLAGS", ""));
		}

		public String getOperatorRegistryName() {
			return "strc_compat";
		}		
	}
}
