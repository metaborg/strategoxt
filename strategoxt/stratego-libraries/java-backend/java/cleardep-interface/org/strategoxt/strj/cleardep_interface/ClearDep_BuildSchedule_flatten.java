package org.strategoxt.strj.cleardep_interface;

import java.util.ArrayList;
import java.util.List;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.sugarj.common.cleardep.BuildSchedule;

public class ClearDep_BuildSchedule_flatten extends AbstractPrimitive {

	public ClearDep_BuildSchedule_flatten() {
		super("ClearDep_BuildSchedule_flatten", 0, 0);
	}

	@Override
	public boolean call(IContext arg0, Strategy[] arg1, IStrategoTerm[] arg2) throws InterpreterException {
		if (!(arg0.current() instanceof BuildScheduleContainer)) {
			return false;
		}
		BuildSchedule schedule = ((BuildScheduleContainer) arg0.current()).get();
		List<BuildSchedule.Task> flattenedSchedule = schedule.getOrderedSchedule();
		List<BuildTaskContainer> wrappedFlattenedSchedule = new ArrayList<>(flattenedSchedule.size());
		for (BuildSchedule.Task task : flattenedSchedule) {
			wrappedFlattenedSchedule.add(new BuildTaskContainer(task));
		}
		
		arg0.setCurrent(arg0.getFactory().makeList(wrappedFlattenedSchedule));
		
		return true;
	}

}
