package org.strategoxt.lang.compat;

import java.lang.ref.WeakReference;
import java.util.HashSet;
import java.util.Set;

import org.spoofax.interpreter.library.jsglr.JSGLRLibrary;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.compat.sglr.SGLRCompatLibrary;

import aterm.ATermFactory;
import aterm.pure.PureFactory;

/**
 * Handles per-context library compatibility components.
 *
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class CompatManager {
	
	private final Context context;
	
	private static final Set<String> asyncComponents = new HashSet<String>();
	
	/**
	 * The last ATermFactory used by the CompatManager. ATermFactories are
	 * guaranteed thread-safe, and by sharing them we make sure only one
	 * instance is used by CompatManager ensuring low memory consumption and
	 * high compatibility.
	 */
	private static WeakReference<ATermFactory> lastATermFactory;
	
	private ATermFactory atermFactory;
	
	public CompatManager(Context context) {
		this.context = context;
	}
	
	public void init() {
		// We have to initialize the current context based on asyncComponents,
		// since registerComponent() is only called in the life cycle of the JVM 
		synchronized (asyncComponents) {
			for (String component : asyncComponents) {
				activateComponent(component);
			}
		}
	}

	public void registerComponent(String component) {
		synchronized (asyncComponents) {
			if (asyncComponents.add(component))
				activateComponent(component);
		}
	}
	
	public void setATermFactory(ATermFactory atermFactory) {
		this.atermFactory = atermFactory;
		lastATermFactory = new WeakReference<ATermFactory>(atermFactory);
	}
	
	private ATermFactory getATermFactory() {
		if (atermFactory == null) {
			atermFactory = lastATermFactory == null ? null : lastATermFactory.get();
			if (atermFactory == null) 
				setATermFactory(new PureFactory());
		}
		return atermFactory;
	}
	
	/**
	 * Dynamically loads any compatibility library or operator registry
	 * associated with a Stratego library.
	 */
	private void activateComponent(String component) {
		if ("stratego_lib".equals(component)) {
			context.addOperatorRegistry(new CompatLibrary());
			report_failure_compat_1_0.init();
			ReadFromFile_cached_0_0.init();
		} else if ("stratego_sglr".equals(component)) {
			ATermFactory factory = getATermFactory();
			context.addOperatorRegistry(new JSGLRLibrary(factory));
			context.addOperatorRegistry(new SGLRCompatLibrary(factory));
		}
	}
}
