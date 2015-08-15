package org.strategoxt.strj.pluto_interface.builder;

import java.io.File;
import java.io.IOException;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.StrategoException;
import org.strategoxt.strj.pluto_interface.Conversions;
import org.strategoxt.strj.pluto_interface.NamedSingleton;
import org.strategoxt.strj.pluto_interface.PlutoIContextManager;
import org.strategoxt.strj.pluto_interface.StrategoBuilderFactory;
import org.strategoxt.strj.pluto_interface.PublicBuilder;
import org.strategoxt.strj.pluto_interface.StrategoBuilderFactory.GeneratedBuilder;
import org.strategoxt.strj.pluto_interface.util.ObjectWrapperTerm;

import build.pluto.builder.BuildCycleException;
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
		PlutoIContextManager.pushContext(arg0);
		try {
			PublicBuilder enclosingBuilder = ObjectWrapperTerm.get(arg2[0]);
			BuildRequest<?, Out<IStrategoTerm>, ?, ?> request = Conversions
					.convertBuildRequest( arg0.current());
			if (request == null) {
				System.out.println("Build request was null");
				return false;
			}
			if (request.factory == null) {
				System.out.println("Builder factory was null");
				return false;
			}
			Out<IStrategoTerm> result = enclosingBuilder.requireBuild(request);
			if (result == null) {
				System.out.println("RESULT IST NULL for " + request.factory + " with " + request.input);
			}
			arg0.setCurrent(result.val());
			return true;
		} catch (StrategoException e) {
			if (e.getCause() instanceof BuildCycleException) {
				throw (BuildCycleException) e.getCause();
			} else {
				throw e;
			}
		} catch (BuildCycleException e) {
			throw e;
		} catch (Exception e) {
			throw new InterpreterException(e);
		} finally {
			PlutoIContextManager.popContext();
		}
	}

}
