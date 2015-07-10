package org.strategoxt.strj.pluto_interface.buildmanager;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.strj.pluto_interface.Conversions;
import org.strategoxt.strj.pluto_interface.StrategoBuilderFactory;
import org.strategoxt.strj.pluto_interface.StrategoBuilderFactory.GeneratedBuilder;
import org.sugarj.common.Log;

import build.pluto.builder.BuildManager;
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
		try {
		BuildRequest<?, Out<IStrategoTerm>, ?, ?> request = Conversions
				.convertBuildRequest(arg0.current());
		System.out.println("Request: " + request);
		System.out.println("Factory: " + request.factory);
		System.out.println("Input: " + request.input);
		System.out.flush();
		BuildManager.ASSERT_SERIALIZABLE = true;
		IStrategoTerm result = BuildManagers.build(request).val();
		arg0.setCurrent(result);
		} catch (Throwable t) {
			t.printStackTrace();
			return false;
		}
		return true;
	}

}
