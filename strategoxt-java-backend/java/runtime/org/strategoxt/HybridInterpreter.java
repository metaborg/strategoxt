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
	
	private final Context compiledContext;

	public HybridInterpreter() {
		this(new BAFBasicTermFactory());
	}

	public HybridInterpreter(ITermFactory factory) {
		this(factory, factory);
	}

	public HybridInterpreter(ITermFactory termFactory, ITermFactory programFactory) {
		super(termFactory, programFactory);
		
		compiledContext = new Context(termFactory);
		registerLibraries();
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
	
	public Context getCompiledContext() {
		return compiledContext;
	}
	
	@Override
	public void addOperatorRegistry(IOperatorRegistry or) {
		getCompiledContext().addOperatorRegistry(or);
		getContext().addOperatorRegistry(or);
	}
	
	@Deprecated
	@Override
	public void addOperatorRegistry(String domainName, IOperatorRegistry or) {
		getCompiledContext().addOperatorRegistry(or);
		getContext().addOperatorRegistry(or);
	}
}
