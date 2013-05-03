package org.metaborg.runtime.task.interop;

import java.util.Collection;

import org.metaborg.runtime.task.TaskEngine;
import org.metaborg.runtime.task.TaskManager;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

public class task_api_debug_info_0_1 extends Strategy {
	public static task_api_debug_info_0_1 instance = new task_api_debug_info_0_1();

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm partition) {
		final ITermFactory factory = context.getFactory();
		final TaskEngine engine = TaskManager.getInstance().getCurrent();
		Collection<IStrategoInt> taskIDs = engine.getInPartition((IStrategoString) partition);

		IStrategoList list = factory.makeList();
		for(IStrategoInt taskID : taskIDs) {
			IStrategoTerm instruction = engine.getInstruction(taskID);
			IStrategoTerm message = engine.getMessage(taskID);
			IStrategoTerm result =
				engine.hasFailed(taskID) ? factory.makeAppl(factory.makeConstructor("Fail", 0)) : engine
					.getResult(taskID);
			list =
				factory.makeListCons(factory.makeTuple(taskID, instruction,
					result == null ? factory.makeAppl(factory.makeConstructor("None", 0)) : result, message == null
						? factory.makeAppl(factory.makeConstructor("None", 0)) : message), list);
		}

		return list;
	}
}
