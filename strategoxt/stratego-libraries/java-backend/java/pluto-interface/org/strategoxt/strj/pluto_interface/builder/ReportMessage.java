package org.strategoxt.strj.pluto_interface.builder;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.Term;
import org.strategoxt.strj.pluto_interface.PlutoIContextManager;
import org.strategoxt.strj.pluto_interface.PublicBuilder;
import org.strategoxt.strj.pluto_interface.util.ObjectWrapperTerm;

import build.pluto.shaded.org.sugarj.common.Log;

public class ReportMessage extends AbstractPrimitive {

	public static final String NAME = "PlutoInterface_Builder_ReportMessage";

	public ReportMessage() {
		super(NAME, 0, 2);
	}

	@Override
	public boolean call(IContext arg0, Strategy[] arg1, IStrategoTerm[] arg2) throws InterpreterException {
		PlutoIContextManager.pushContext(arg0);
		try {
			PublicBuilder builder = ObjectWrapperTerm.get(arg2[0]);
			String message = Term.asJavaString(arg2[1]);
			builder.reportMessage(message);
			Log.out.flush();
			return true;
		} catch (Exception e) {
			return false;
		} finally {
			PlutoIContextManager.popContext();
		}
	}

}
