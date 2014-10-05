package org.strategoxt.strj.cleardep_interface;

import java.util.ArrayList;
import java.util.List;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.sugarj.common.cleardep.CompilationUnit;

public class ClearDep_CompilationUnit_get_module_circ_deps extends AbstractPrimitive {

	public ClearDep_CompilationUnit_get_module_circ_deps() {
		super("ClearDep_CompilationUnit_get_module_circ_deps", 0, 0);
	}

	@Override
	public boolean call(IContext arg0, Strategy[] arg1, IStrategoTerm[] arg2) throws InterpreterException {
		try {
			CompilationUnitContainer<?> container = ClearDepUtils.containerFromTerm(arg0.current());
			List<CompilationUnitContainer<?>> deps = new ArrayList<>();
			for (CompilationUnit unit : container.getUnit().getCircularModuleDependencies()) {
				deps.add(new CompilationUnitContainer<CompilationUnit>(unit));
			}
			arg0.setCurrent(arg0.getFactory().makeList(deps));
			return true;
		} catch (IllegalArgumentException e) {
			return false;
		}
	}

}
