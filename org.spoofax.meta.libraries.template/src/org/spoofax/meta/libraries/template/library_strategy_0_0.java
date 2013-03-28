package org.spoofax.meta.libraries.template;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

public class library_strategy_0_0 extends Strategy {

	public static library_strategy_0_0 instance = new library_strategy_0_0();

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current) {
		context.getIOAgent().printError("Input for java-strategy: " + current);
		ITermFactory factory = context.getFactory();
		return factory.makeString("Regards from java-strategy");
	}

}
