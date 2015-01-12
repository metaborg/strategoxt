package org.strategoxt.strj.cleardep_interface;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;

public class ClearDep_CompilationUnit_is_consistent_to_interfaces extends AbstractPrimitive {
	
	

	public ClearDep_CompilationUnit_is_consistent_to_interfaces() {
		super("ClearDep_CompilationUnit_is_consistent_to_interfaces", 0, 0);
	}

	@Override
	public boolean call(IContext arg0, Strategy[] arg1, IStrategoTerm[] arg2) throws InterpreterException {
		IStrategoTerm argumentTerm = arg0.current();
		try {
			CompilationUnitContainer<?> unitContainer = ClearDepUtils.containerFromTerm(argumentTerm);
			boolean isConsitent = unitContainer.getUnit().isConsistentToDependencyInterfaces();
			System.out.println("Is consistent to interfaces: "  + isConsitent);
			if (isConsitent) {
				arg0.setCurrent(arg0.getFactory().makeInt(1));
			} else {
				arg0.setCurrent(arg0.getFactory().makeInt(0));
			}
			return true;
		} catch (IllegalArgumentException e) {
			e.printStackTrace();
			return false;
		}
	}

}
