package org.strategoxt.strj.cleardep_interface;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.sugarj.common.cleardep.BuildSchedule;

public class ClearDep_BuildTask_setState extends AbstractPrimitive {
	
	

	public ClearDep_BuildTask_setState() {
		super("ClearDep_BuildTask_setState", 0, 1);
	}

	@Override
	public boolean call(IContext arg0, Strategy[] arg1, IStrategoTerm[] arg2) throws InterpreterException {
		if (!(arg0.current() instanceof BuildTaskContainer)) {
			return false;
		}
		BuildSchedule.Task task = ((BuildTaskContainer)arg0.current()).get();
		
		if (arg2.length != 1) {
			return false;
		}
		
		try {
			BuildSchedule.TaskState state = ClearDepUtils.taskStateFromTerm(arg2[0]);
			task.setState(state);
		} catch (IllegalArgumentException e) {
			return false;
		}
		
		return true;
	}

}
