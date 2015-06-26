package org.strategoxt.strj.pluto_interface.buildmanager;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.strj.pluto_interface.Conversions;
import org.strategoxt.strj.pluto_interface.GeneratedBuilderFactory;
import org.strategoxt.strj.pluto_interface.GeneratedBuilderFactory.GeneratedBuilder;

import build.pluto.builder.BuildManagers;
import build.pluto.builder.BuildRequest;
import build.pluto.output.Out;

public class RequireInitially extends AbstractPrimitive {

public static final String NAME = "PlutoInterface_BuildManager_RequireInitially";
	

	public RequireInitially() {
		super(NAME,0,0);
	}
	
	@Override
	public boolean call(IContext arg0, Strategy[] arg1, IStrategoTerm[] arg2) throws InterpreterException {
		BuildRequest<IStrategoTerm, Out<IStrategoTerm>, GeneratedBuilder, GeneratedBuilderFactory> request = Conversions
				.convertBuildRequest(arg0.current());
		IStrategoTerm result = BuildManagers.build(request).val();
		arg0.setCurrent(result);
		return true;
	}

}
