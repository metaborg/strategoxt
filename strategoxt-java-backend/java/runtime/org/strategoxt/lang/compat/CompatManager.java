package org.strategoxt.lang.compat;

import static org.strategoxt.lang.Term.*;

import java.util.HashSet;
import java.util.Map;
import java.util.Set;

import org.spoofax.interpreter.adapter.aterm.WrappedATermFactory;
import org.spoofax.interpreter.library.jsglr.JSGLRLibrary;
import org.spoofax.interpreter.library.ssl.SSLLibrary;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
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
			initConfig();
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

	private void initConfig() {
		ITermFactory factory = context.getFactory();
		Map<IStrategoTerm, IStrategoTerm> config = getConfigTable();
		
		config.put(factory.makeString("JAVA_PLATFORM"), factory.makeInt(1));
	}

	private Map<IStrategoTerm, IStrategoTerm> getConfigTable() {
		ITermFactory factory = context.getFactory();
		SSLLibrary library = (SSLLibrary) context.getOperatorRegistry(SSLLibrary.REGISTRY_NAME);
		if (library == null) throw new IllegalStateException("Standard operator registry not found");
		Map<IStrategoTerm, IStrategoTerm> allTables = library.getHashtable(library.getTableTableRef());
		
		IStrategoTerm configTerm = allTables.get(factory.makeString("config"));
		IStrategoInt configRef; 
		if (configTerm == null) {
			IStrategoTerm[] config = { factory.makeInt(117), factory.makeInt(75) };
			configRef = (IStrategoInt) context.invokePrimitive("SSL_hashtable_create", config[0], NO_STRATEGIES, config);
			configTerm = factory.makeAppl(factory.makeConstructor("Hashtable", 1), configRef);
			allTables.put(factory.makeString("config"), configTerm);
		} else {
			configRef = (IStrategoInt) configTerm.getSubterm(0);
		}
		
		return library.getHashtable(configRef.intValue());
	}
}
