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
		
		libstratego_aterm.registerInterop(context, compiledContext);
		libstratego_lib.registerInterop(context, compiledContext);
		libstratego_rtg.registerInterop(context, compiledContext);
		libstratego_sdf.registerInterop(context, compiledContext);
		libstratego_xtc.registerInterop(context, compiledContext);
		libstratego_sglr.registerInterop(context, compiledContext);
		libstratego_tool_doc.registerInterop(context, compiledContext);
		libstratego_rtg.registerInterop(context, compiledContext);
		libstratego_gpp.registerInterop(context, compiledContext);
		libjava_front.registerInterop(context, compiledContext);
		libstrc.registerInterop(context, compiledContext);
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
