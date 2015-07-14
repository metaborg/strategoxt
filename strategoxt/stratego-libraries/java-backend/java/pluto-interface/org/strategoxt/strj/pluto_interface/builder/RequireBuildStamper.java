package org.strategoxt.strj.pluto_interface.builder;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.strj.cleardep_interface.ObjectWrapperTerm;
import org.strategoxt.strj.pluto_interface.Conversions;
import org.strategoxt.strj.pluto_interface.PlutoIContextManager;
import org.strategoxt.strj.pluto_interface.PublicBuilder;
import org.strategoxt.strj.pluto_interface.stamper.StrategoOutputStamper;

import build.pluto.builder.BuildRequest;
import build.pluto.builder.Builder;
import build.pluto.builder.BuilderFactory;
import build.pluto.output.Out;
import build.pluto.output.OutputStamper;

/**
 * Wraps {@link Builder#require(java.io.File)}. 0 strategy arguments, 1 term
 * argument: running builder current: BuildRequest term
 * 
 * @author moritzlichter
 *
 */
public class RequireBuildStamper extends AbstractPrimitive {

	public static final String NAME = "PlutoInterface_Builder_RequireBuildStamper";

	public RequireBuildStamper() {
		super(NAME, 0, 2);
	}

	@Override
	public boolean call(IContext arg0, Strategy[] arg1, IStrategoTerm[] arg2) throws InterpreterException {
		PlutoIContextManager.pushContext(arg0);
		try {
			PublicBuilder enclosingBuilder = ObjectWrapperTerm.get(arg2[0]);
			StrategoOutputStamper outputStamper = ObjectWrapperTerm.get(arg2[1]);
			BuildRequest<?, Out<IStrategoTerm>, ?,  ?> request = Conversions
					.convertBuildRequest( arg0.current());
			if (request == null) {
				System.out.println("Build request was null");
				return false;
			}
			if (request.factory == null) {
				System.out.println("Builder factory was null");
				return false;
			}
			Out<IStrategoTerm> result = enclosingBuilder.requireBuild(request, (OutputStamper<Out<IStrategoTerm>>) outputStamper);
			arg0.setCurrent(result.val());
			return true;
		} catch (Exception e) {
			throw new InterpreterException(e);
		} finally {
			PlutoIContextManager.popContext();
		}
	}

}
