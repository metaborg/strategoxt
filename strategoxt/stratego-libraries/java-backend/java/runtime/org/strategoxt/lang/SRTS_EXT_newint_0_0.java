package org.strategoxt.lang;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.UniqueValueTerm;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class SRTS_EXT_newint_0_0 extends RegisteringStrategy {
	public static SRTS_EXT_newint_0_0 instance = new SRTS_EXT_newint_0_0();
	
	@Override
	public void registerImplementators(StrategyCollector collector) {
		collector.registerStrategyImplementator("SRTS_EXT_newint_0_0", instance);
	}
	
	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current) {
		return new UniqueValueTerm();
	}
}
