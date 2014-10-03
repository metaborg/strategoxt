package org.strategoxt.strj.cleardep_interface;

import java.util.ArrayList;
import java.util.List;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.sugarj.common.cleardep.BuildSchedule;
import org.sugarj.common.cleardep.CompilationUnit;

public class ClearDep_BuildTask_get_units extends AbstractPrimitive {

	public ClearDep_BuildTask_get_units() {
		super("ClearDep_BuildTask_get_units", 0, 0);
	}

	@Override
	public boolean call(IContext arg0, Strategy[] arg1, IStrategoTerm[] arg2) throws InterpreterException {
		if (!(arg0.current() instanceof BuildTaskContainer)) {
			return false;
		}
		
		BuildSchedule.Task task = ((BuildTaskContainer) arg0.current()).get();
		List<IStrategoTerm> term = new ArrayList<>();
		for (CompilationUnit u : task.getUnitsToCompile()) {
			term.add(new CompilationUnitContainer<CompilationUnit>(u));
		}
		arg0.setCurrent(arg0.getFactory().makeList(term));
		return true;
	}

}
