package org.strategoxt.strj.pluto_interface.builder;

import java.io.File;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.Term;
import org.strategoxt.strj.cleardep_interface.ObjectWrapperTerm;
import org.strategoxt.strj.pluto_interface.StrategoBuilderFactory.GeneratedBuilder;
import org.strategoxt.strj.pluto_interface.stamper.StrategoStamper;

import build.pluto.builder.Builder;

/**
 * Wraps {@link Builder#require(java.io.File)}.
 * 0 strategy arguments, 1 term argument: running builder
 * current: provided file
 * @author moritzlichter
 *
 */
public class RequireStamper extends AbstractPrimitive {

	public static final String NAME = "PlutoInterface_Builder_RequireStamper";
	

	public RequireStamper() {
		super(NAME,0,2);
	}
	
	@Override
	public boolean call(IContext arg0, Strategy[] arg1, IStrategoTerm[] arg2) throws InterpreterException {
		Builder<?, ?> enclosingBuilder = ObjectWrapperTerm.get(arg2[0]);
		StrategoStamper stamper = ObjectWrapperTerm.get(arg2[1]);
		IStrategoTerm fileTerm = arg0.current();
		String filePath = Term.asJavaString(fileTerm);
		System.out.println("Require Stamper " + filePath + " with stamper " + stamper);
		System.out.println("For builder " + enclosingBuilder);
		enclosingBuilder.require(new File(filePath), stamper);
		return true;
	}

}
