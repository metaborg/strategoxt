package org.strategoxt.lang.compat;

import org.spoofax.interpreter.adapter.aterm.WrappedATermFactory;
import org.spoofax.interpreter.library.jsglr.JSGLRLibrary;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.compat.override.jsglr_parser;
import org.strategoxt.lang.compat.override.jsglr_parser_compat;
import org.strategoxt.lang.compat.override.performance_tweaks;
import org.strategoxt.lang.compat.override.xtc_compat;
import org.strategoxt.lang.compat.sglr.SGLRCompatLibrary;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class CompatManager {
	
	public void postInit(Context context, String component) {
		if ("libstratego_lib".equals(component)) {
			context.addOperatorRegistry(new CompatLibrary());
			performance_tweaks.init(context);
			xtc_compat.init(context); // also deals with native calls for libstratego-lib
		} else if ("libstratego_sglr".equals(component)) {
			WrappedATermFactory atermFactory = new WrappedATermFactory();
			context.addOperatorRegistry(new JSGLRLibrary(atermFactory));
			context.addOperatorRegistry(new SGLRCompatLibrary(atermFactory));
			jsglr_parser.init(context);
			jsglr_parser_compat.init(context);
		}
	}
}
