package org.strategoxt.strj.cleardep_interface;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;

public class ClearDep_CompilationUnit_is_persisted extends AbstractPrimitive {

	public ClearDep_CompilationUnit_is_persisted() {
		super("ClearDep_CompilationUnit_is_persisted", 0, 0);
	}

	@Override
	public boolean call(IContext arg0, Strategy[] arg1, IStrategoTerm[] arg2) throws InterpreterException {
		try {
			CompilationUnitContainer<?> unitContainer = ClearDepUtils.containerFromTerm(arg0.current());
			boolean isPersisted = unitContainer.getUnit().isPersisted();
			if (isPersisted) {
				arg0.setCurrent(arg0.getFactory().makeInt(1));
			} else {
				arg0.setCurrent(arg0.getFactory().makeInt(0));
			}
			return true;
		} catch (IllegalArgumentException e) {
			return false;
		}
	}

}
