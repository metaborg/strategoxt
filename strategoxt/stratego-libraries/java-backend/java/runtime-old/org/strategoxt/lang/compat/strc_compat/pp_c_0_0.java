package org.strategoxt.lang.compat.strc_compat;

import org.spoofax.interpreter.library.AbstractStrategoOperatorRegistry;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.util.NotImplementedException;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;
import org.strategoxt.lang.compat.StringValuePrimitive;
import org.strategoxt.lang.RegisteringStrategy;
import org.strategoxt.lang.StrategyCollector;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
@SuppressWarnings("all")
public class pp_c_0_0 extends RegisteringStrategy {
	public static pp_c_0_0 instance = new pp_c_0_0();
	
	public void registerImplementators(StrategyCollector collector) { 
		collector.registerStrategyImplementator("pp_c_0_0", instance);
	}
	
	public void bindExecutors(StrategyCollector collector) { 
	}
	
	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current) {
		throw new NotImplementedException("pp-c"); // TODO: pp_c_0_0
	}
}