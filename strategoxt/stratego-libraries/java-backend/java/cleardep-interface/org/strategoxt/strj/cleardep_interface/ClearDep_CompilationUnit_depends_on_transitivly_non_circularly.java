package org.strategoxt.strj.cleardep_interface;

import java.util.Collection;
import java.util.Collections;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;

public class ClearDep_CompilationUnit_depends_on_transitivly_non_circularly extends AbstractPrimitive {

	public ClearDep_CompilationUnit_depends_on_transitivly_non_circularly() {
		super("ClearDep_CompilationUnit_depends_on_transitivly_non_circularly", 0, 1);
	}

	@Override
	public boolean call(IContext arg0, Strategy[] arg1, IStrategoTerm[] arg2) throws InterpreterException {
		try {
			CompilationUnitContainer<?> container = ClearDepUtils.containerFromTerm(arg0.current());
			CompilationUnitContainer<?> checkAgainst = ClearDepUtils.containerFromTerm(arg2[0]);
			boolean depends = container.getUnit().dependsOnTransitivelyNoncircularly(checkAgainst.getUnit());
			if (depends) {
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
