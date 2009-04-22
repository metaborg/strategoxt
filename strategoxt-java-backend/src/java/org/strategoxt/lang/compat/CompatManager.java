package org.strategoxt.lang.compat;

import org.spoofax.interpreter.library.jsglr.JSGLRLibrary;
import org.spoofax.interpreter.terms.ITermFactory;
import org.strategoxt.lang.Context;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class CompatManager {
	
	private boolean initLib;
	
	private boolean initSGLR;
	
	public void postInit(Context context, String component) {
		if ("libstratego_lib".equals(component)) {
			context.addOperatorRegistry(new CompatLibrary());
		} else if ("libstratego_sglr".equals(component)) {
			context.addOperatorRegistry(new JSGLRLibrary(context.getFactory()));
			jsglr_parser.init(context);
			jsglr_parser_compat.init(context);
			initSGLR = true;
		}
	}
}
