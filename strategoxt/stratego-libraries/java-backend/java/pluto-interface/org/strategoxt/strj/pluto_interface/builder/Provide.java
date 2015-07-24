package org.strategoxt.strj.pluto_interface.builder;

import java.io.File;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.Term;
import org.strategoxt.strj.pluto_interface.StrategoBuilderFactory.GeneratedBuilder;
import org.strategoxt.strj.pluto_interface.util.ObjectWrapperTerm;

import build.pluto.builder.Builder;

/**
 * Wraps {@link Builder#provide(java.io.File)}.
 * 0 strategy arguments, 1 term argument: running builder
 * current: provided file
 * @author moritzlichter
 *
 */
public class Provide extends AbstractPrimitive {

	public static final String NAME = "PlutoInterface_Builder_Provide";
	

	public Provide() {
		super(NAME,0,1);
	}
	
	@Override
	public boolean call(IContext arg0, Strategy[] arg1, IStrategoTerm[] arg2) throws InterpreterException {
		GeneratedBuilder enclosingBuilder = ObjectWrapperTerm.get(arg2[0]);
		IStrategoTerm fileTerm = arg0.current();
		String filePath = Term.asJavaString(fileTerm);
		enclosingBuilder.provide(new File(filePath));
		return true;
	}

}
