package org.strategoxt.strj.cleardep_interface;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.sugarj.common.cleardep.BuildSchedule;

public class ClearDep_BuildTask_isTaskCompleted extends AbstractPrimitive {

	
	
	public ClearDep_BuildTask_isTaskCompleted() {
		super("ClearDep_BuildTask_isTaskCompleted", 0, 0);
	}

	@Override
	public boolean call(IContext arg0, Strategy[] arg1, IStrategoTerm[] arg2) throws InterpreterException {
		if (!(arg0.current() instanceof BuildTaskContainer)) {
			return false;
		}
		
		BuildSchedule.Task task = ((BuildTaskContainer)arg0.current()).get();
		boolean completed = task.isCompleted();
		
		arg0.setCurrent(arg0.getFactory().makeInt(completed ? 1 : 0));
		
		return true;
	}

}
