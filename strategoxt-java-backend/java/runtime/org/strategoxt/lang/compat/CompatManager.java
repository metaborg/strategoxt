package org.strategoxt.lang.compat;

import java.util.HashSet;
import java.util.Set;

import org.spoofax.interpreter.adapter.aterm.WrappedATermFactory;
import org.spoofax.interpreter.library.jsglr.JSGLRLibrary;
import org.strategoxt.lang.Context;
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
	 * Dynamically loads any compatibility library or operator registry
	 * associated with a Stratego library.
	 */
	public void activateComponent(String component) {
		if ("stratego_lib".equals(component)) {
			context.addOperatorRegistry(new CompatLibrary());
			report_failure_compat_1_0.init();
		} else if ("stratego_sglr".equals(component)) {
			WrappedATermFactory atermFactory = new WrappedATermFactory();
			context.addOperatorRegistry(new JSGLRLibrary(atermFactory));
			context.addOperatorRegistry(new SGLRCompatLibrary(atermFactory));
		}
	}
}
