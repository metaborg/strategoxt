package org.metaborg.runtime.task.interop;

import java.util.Collection;

import org.metaborg.runtime.task.TaskEngine;
import org.metaborg.runtime.task.TaskManager;
import org.spoofax.interpreter.core.Tools;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;
import org.spoofax.interpreter.terms.ITermFactory;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

public class task_api_debug_info_0_1 extends Strategy {
	public static task_api_debug_info_0_1 instance = new task_api_debug_info_0_1();

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm partitionOrID) {
		final ITermFactory factory = context.getFactory();
		final TaskEngine engine = TaskManager.getInstance().getCurrent();
		
		if(Tools.isTermString(partitionOrID)) {
			Collection<IStrategoTerm> taskIDs = engine.getInPartition((IStrategoString) partitionOrID);
			IStrategoList list = factory.makeList();
			for(IStrategoTerm taskID : taskIDs) {
				list = factory.makeListCons(createDebugTuple(taskID, engine, factory), list);
			}

			return list;
		} else if(Tools.isTermInt(partitionOrID)) {
			return createDebugTuple(partitionOrID, engine, factory);
		}
		
		return null;
	}

	private IStrategoTuple createDebugTuple(IStrategoTerm taskID, TaskEngine engine, ITermFactory factory) {
		IStrategoTerm instruction = engine.getInstruction(taskID);
		IStrategoList dependencies = factory.makeList(engine.getDependencies(taskID));
		IStrategoTerm message = engine.getMessage(taskID);
		IStrategoTerm result =
			engine.hasFailed(taskID) ? factory.makeAppl(factory.makeConstructor("Fail", 0)) : engine.getResult(taskID);

		return factory.makeTuple(taskID, instruction, dependencies,
			result == null ? factory.makeAppl(factory.makeConstructor("None", 0)) : result,
			message == null ? factory.makeAppl(factory.makeConstructor("None", 0)) : message);
	}
}
