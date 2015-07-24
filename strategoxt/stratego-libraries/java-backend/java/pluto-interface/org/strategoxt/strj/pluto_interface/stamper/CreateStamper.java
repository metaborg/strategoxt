package org.strategoxt.strj.pluto_interface.stamper;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.Term;
import org.strategoxt.strj.pluto_interface.util.ObjectWrapperTerm;

public class CreateStamper extends AbstractPrimitive {

	public static final String NAME = "PlutoInterface_Stamper_CreateStamper";
	
	public CreateStamper() {
		super(NAME, 1,1);
	}

	@Override
	public boolean call(IContext arg0, Strategy[] arg1, IStrategoTerm[] arg2) throws InterpreterException {
		Strategy stamperStrategy = arg1[0];
		String stamperName = Term.asJavaString(arg2[0]);
		
		StrategoStamper stamper = new StrategoStamper(stamperName, stamperStrategy);
		arg0.setCurrent(new ObjectWrapperTerm<>(stamper, StrategoStamper.WRAPPER_TERM_TYPE));
		
		return true;
	}

}
