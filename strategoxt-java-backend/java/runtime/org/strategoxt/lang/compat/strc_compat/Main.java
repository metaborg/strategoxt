package org.strategoxt.lang.compat.strc_compat;

import org.strategoxt.lang.Context;

/**
 * Configures the strc_compat overrides.
 * 
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class Main {
	
	private Main() {
		// No instantiation
	}
	
	public static void init(Context context) {
		org.strategoxt.lang.compat.override.strc_compat.Main.init(context);
	}
}
