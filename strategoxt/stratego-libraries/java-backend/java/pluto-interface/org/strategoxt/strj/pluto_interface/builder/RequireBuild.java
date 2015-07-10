package org.strategoxt.strj.pluto_interface.builder;

import java.io.File;
import java.io.IOException;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.strj.cleardep_interface.ObjectWrapperTerm;
import org.strategoxt.strj.pluto_interface.Conversions;
import org.strategoxt.strj.pluto_interface.GeneratedBuilderFactory;
import org.strategoxt.strj.pluto_interface.PublicBuilder;
import org.strategoxt.strj.pluto_interface.GeneratedBuilderFactory.GeneratedBuilder;

import build.pluto.builder.BuildRequest;
import build.pluto.builder.Builder;
import build.pluto.output.Out;

/**
 * Wraps {@link Builder#require(java.io.File)}. 0 strategy arguments, 1 term
 * argument: running builder current: BuildRequest term
 * 
 * @author moritzlichter
 *
 */
public class RequireBuild extends AbstractPrimitive {

	public static final String NAME = "PlutoInterface_Builder_RequireBuild";

	public RequireBuild() {
		super(NAME, 0, 1);
	}

	@Override
	public boolean call(IContext arg0, Strategy[] arg1, IStrategoTerm[] arg2) throws InterpreterException {
		try {
			System.out.println("Call!");
			PublicBuilder enclosingBuilder = ObjectWrapperTerm.get(arg2[0]);
			BuildRequest<?, Out<IStrategoTerm>, ?, ?> request = Conversions
					.convertBuildRequest(arg0.current());
			if (request == null) {
				System.out.println("Build request was null");
				return false;
			}
			if (request.factory == null) {
				System.out.println("Builder factory was null");
				return false;
			}
			System.out.println("Request: " + request);
			Out<IStrategoTerm> result = enclosingBuilder.requireBuild(request);
			arg0.setCurrent(result.val());
			return true;
		} catch (Exception e) {
			e.printStackTrace();
			throw new InterpreterException(e);
		}
	}

}
