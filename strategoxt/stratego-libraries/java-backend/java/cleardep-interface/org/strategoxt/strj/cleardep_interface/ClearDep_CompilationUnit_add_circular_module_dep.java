package org.strategoxt.strj.cleardep_interface;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;

public class ClearDep_CompilationUnit_add_circular_module_dep extends AbstractPrimitive {

	public ClearDep_CompilationUnit_add_circular_module_dep() {
		super("ClearDep_CompilationUnit_add_circular_module_dep", 0, 1);
	}

	@Override
	public boolean call(IContext arg0, Strategy[] arg1, IStrategoTerm[] arg2) throws InterpreterException {
		try {
			CompilationUnitContainer<?> container = ClearDepUtils.containerFromTerm(arg2[0]);
			CompilationUnitContainer<?> dependency = ClearDepUtils.containerFromTerm(arg0.current());
			container.getUnit().addCircularModuleDependency(dependency.getUnit());
		} catch (IllegalArgumentException e) {
			return false;
		}
		return true;
	}

}
