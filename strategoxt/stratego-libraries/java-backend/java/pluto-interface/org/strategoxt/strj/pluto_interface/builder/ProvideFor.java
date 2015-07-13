package org.strategoxt.strj.pluto_interface.builder;

import java.io.File;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.Term;
import org.strategoxt.strj.cleardep_interface.ObjectWrapperTerm;
import org.strategoxt.strj.pluto_interface.StrategoBuildCycleAtOnceBuilderFactory.StrategoBuildAtOnceBuilder;

import build.pluto.builder.Builder;

/**
 * Wraps {@link Builder#provide(java.io.File)}.
 * 0 strategy arguments, 1 term argument: running builder
 * current: provided file
 * @author moritzlichter
 *
 */
public class ProvideFor extends AbstractPrimitive {

	public static final String NAME = "PlutoInterface_Builder_ProvideFor";
	

	public ProvideFor() {
		super(NAME,0,2);
	}
	
	@Override
	public boolean call(IContext arg0, Strategy[] arg1, IStrategoTerm[] arg2) throws InterpreterException {
		StrategoBuildAtOnceBuilder enclosingBuilder = ObjectWrapperTerm.get(arg2[0]);
		IStrategoTerm input = arg2[1];
		IStrategoTerm fileTerm = arg0.current();
		String filePath = Term.asJavaString(fileTerm);
		enclosingBuilder.provide(input, new File(filePath));
		return true;
	}

}
