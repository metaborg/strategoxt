package org.strategoxt;

import org.spoofax.interpreter.adapter.aterm.BAFBasicTermFactory;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.Interpreter;
import org.spoofax.interpreter.library.IOperatorRegistry;
import org.spoofax.interpreter.terms.ITermFactory;
import org.strategoxt.lang.Context;

/**
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
		compiledContext.addOperatorRegistry(or);
		getContext().addOperatorRegistry(or);
	}
	
	@Deprecated
	@Override
	public void addOperatorRegistry(String domainName, IOperatorRegistry or) {
		compiledContext.addOperatorRegistry(or);
	}

}
