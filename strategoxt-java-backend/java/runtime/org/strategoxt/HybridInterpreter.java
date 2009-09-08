package org.strategoxt;

import org.spoofax.interpreter.adapter.aterm.BAFBasicTermFactory;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.Interpreter;
import org.spoofax.interpreter.library.IOperatorRegistry;
import org.spoofax.interpreter.terms.ITermFactory;
import org.strategoxt.lang.Context;

/**
 * An interpreter that uses STRJ-compiled versions of the Stratego standard libraries.
 * 
 * This interpreter typically loads much faster than the standard interpreter.
 * Custom libraries can be added using their <code>registerInterop</code>
 * method:
 * 
 * <code>
 *   HybridInterpreter i = new HybridInterpreter();
 *   mylib.registerInterop(i.getContext(), i.getCompiledContext());
 * </code
 * 
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class HybridInterpreter extends Interpreter {
	
	private final HybridCompiledContext compiledContext;

	public HybridInterpreter() {
		this(new BAFBasicTermFactory());
	}

	public HybridInterpreter(ITermFactory factory) {
		this(factory, factory);
	}

	public HybridInterpreter(ITermFactory termFactory, ITermFactory programFactory) {
		super(termFactory, programFactory);
		
		compiledContext = new HybridCompiledContext(termFactory);
		registerLibraries();
	}
	
	@Override
	protected org.spoofax.interpreter.core.Context createContext(ITermFactory termFactory, ITermFactory programFactory) {
		return new HybridContext(termFactory, programFactory);
	}
	
	protected void registerLibraries() {
		IContext context = getContext();
		Context compiledContext = getCompiledContext();
		
		org.strategoxt.libstratego_aterm.Main.registerInterop(context, compiledContext);
		org.strategoxt.libstratego_lib.Main.registerInterop(context, compiledContext);
		org.strategoxt.libstratego_rtg.Main.registerInterop(context, compiledContext);
		org.strategoxt.libstratego_sdf.Main.registerInterop(context, compiledContext);
		org.strategoxt.libstratego_xtc.Main.registerInterop(context, compiledContext);
		org.strategoxt.libstratego_sglr.Main.registerInterop(context, compiledContext);
		org.strategoxt.libstratego_tool_doc.Main.registerInterop(context, compiledContext);
		org.strategoxt.libstratego_rtg.Main.registerInterop(context, compiledContext);
		org.strategoxt.libstratego_gpp.Main.registerInterop(context, compiledContext);
		org.strategoxt.libjava_front.Main.registerInterop(context, compiledContext);
		org.strategoxt.libstrc.Main.registerInterop(context, compiledContext);
	}
	
	public final Context getCompiledContext() {
		return compiledContext;
	}
	
	/**
	 * A hybrid interpreter context.
	 * 
	 * @author Lennart Kats <lennart add lclnet.nl>
	 */
	private class HybridContext extends org.spoofax.interpreter.core.Context {
		
		public HybridContext(ITermFactory termFactory, ITermFactory programFactory) {
			super(termFactory, programFactory);
		}
		
		@Override
		public void addOperatorRegistry(IOperatorRegistry or) {
			super.addOperatorRegistry(or);
			compiledContext.internalAddOperatorRegistry(or);
		}
		
		@Override @Deprecated
		public void addOperatorRegistry(String domain, IOperatorRegistry or) {
			super.addOperatorRegistry(domain, or);
			compiledContext.internalAddOperatorRegistry(or);
		}
		
		protected void internalAddOperatorRegistry(IOperatorRegistry or) {
			super.addOperatorRegistry(or);
		}
	}
	
	/**
	 * A hybrid compiled Stratego context.
	 * 
	 * @author Lennart Kats <lennart add lclnet.nl>
	 */
	private class HybridCompiledContext extends Context {
		
		public HybridCompiledContext(ITermFactory factory) {
			super(factory);
		}
		
		@Override
		public void addOperatorRegistry(IOperatorRegistry or) {
			super.addOperatorRegistry(or);
			((HybridContext) getContext()).internalAddOperatorRegistry(or);
		}
		
		protected void internalAddOperatorRegistry(IOperatorRegistry or) {
			super.addOperatorRegistry(or);
		}
	}
}
