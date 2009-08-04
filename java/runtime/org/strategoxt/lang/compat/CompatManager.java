package org.strategoxt.lang.compat;

import java.util.HashSet;
import java.util.Set;

import org.spoofax.interpreter.adapter.aterm.WrappedATermFactory;
import org.spoofax.interpreter.library.jsglr.JSGLRLibrary;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.compat.override.jsglr_parser;
import org.strategoxt.lang.compat.override.jsglr_parser_compat;
import org.strategoxt.lang.compat.override.performance_tweaks;
import org.strategoxt.lang.compat.override.xtc_compat;
import org.strategoxt.lang.compat.sglr.SGLRCompatLibrary;

/**
 * Handles per-context library compatibility components.
 *
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class CompatManager {
	
	private final Context context;
	
	private static Set<String> asyncComponents = new HashSet<String>();
	
	public CompatManager(Context context) {
		this.context = context;
	}
	
	public void init() {
		synchronized (asyncComponents) {
			for (String component : asyncComponents) {
				activateComponent(component);
			}
		}
	}
	
	public void registerComponent(String component) {
		synchronized (asyncComponents) {
			asyncComponents.add(component);
			activateComponent(component);
		}
	}
	
	/**
	 * Dynamically loads any compatibility library associated with a Stratego library.
	 * 
	 * (Note that some libraries need to import additional compatibility components
	 *  to implement some native functionality, such as libstratego-rtg-compat.) 
	 */
	public void activateComponent(String component) {
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
		} else if ("libstrc".equals(component)) {
			context.addOperatorRegistry(libstrc_compat.getOperatorRegistry());
			libstrc_compat.init(context);
		}
	}
}
