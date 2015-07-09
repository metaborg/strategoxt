package org.strategoxt.strj.pluto_interface;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.Term;
import org.strategoxt.strj.cleardep_interface.ObjectWrapperTerm;

public class MakeBuildCycleAtOnceBuilderFactory extends AbstractPrimitive {
	
	public static final String NAME = "PlutoInterface_MakeBuildCycleAtOnceBuilderFactory";

	public MakeBuildCycleAtOnceBuilderFactory() {
		super(NAME, 3, 1);
	}

	@Override
	public boolean call(IContext arg0, Strategy[] arg1, IStrategoTerm[] arg2) throws InterpreterException {
		
		final String name = Term.asJavaString(arg2[0]);
		final Strategy descriptionStrategy = arg1[0];
		final Strategy singlePersistentPathStrategy = arg1[1];
		final Strategy buildAllStrategy = arg1[2];
		final Strategy cycleSupportStrategy = null;
		
		final IStrategoTerm factoryTerm = new ObjectWrapperTerm<>(new StrategoBuildCycleAtOnceBuilderFactory(name, arg0, descriptionStrategy, singlePersistentPathStrategy, buildAllStrategy, cycleSupportStrategy), GeneratedBuilderFactory.WRAPPED_TERM_TYPE);
		arg0.setCurrent(factoryTerm);
		return true;
	}

}
