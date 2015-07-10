package org.strategoxt.strj.pluto_interface;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.Term;
import org.strategoxt.strj.cleardep_interface.ObjectWrapperTerm;

public class MakeBuilderFactory extends AbstractPrimitive {
	
	public static final String NAME = "PlutoInterface_MakeBuilderFactory";

	public MakeBuilderFactory() {
		super(NAME, 3, 1);
	}

	@Override
	public boolean call(IContext arg0, Strategy[] arg1, IStrategoTerm[] arg2) throws InterpreterException {
		
		final String name = Term.asJavaString(arg2[0]);
		final Strategy descriptionStrategy = arg1[0];
		final Strategy persistentPathStrategy = arg1[1];
		final Strategy buildStrategy = arg1[2];
		
		final IStrategoTerm factoryTerm = new ObjectWrapperTerm<>(new StrategoBuilderFactory(name, arg0, descriptionStrategy, persistentPathStrategy, buildStrategy), StrategoBuilderFactory.WRAPPED_TERM_TYPE);
		arg0.setCurrent(factoryTerm);
		return true;
	}

}
