package org.metaborg.runtime.task.interop;

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
	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm tupleOrPartitionOrID) {
		final ITermFactory factory = context.getFactory();
		final TaskEngine engine = TaskManager.getInstance().getCurrent();

		if(Tools.isTermTuple(tupleOrPartitionOrID)) {
			return createDebugTuples(engine.getTaskIDs(), engine, factory);
		} else if(Tools.isTermString(tupleOrPartitionOrID)) {
			return createDebugTuples(engine.getInPartition((IStrategoString) tupleOrPartitionOrID), engine, factory);
		} else if(Tools.isTermInt(tupleOrPartitionOrID)) {
			return createDebugTuple(tupleOrPartitionOrID, engine, factory);
		}

		return null;
	}

	private IStrategoList createDebugTuples(Iterable<IStrategoTerm> taskIDs, TaskEngine engine, ITermFactory factory) {
		IStrategoList list = factory.makeList();
		for(IStrategoTerm taskID : taskIDs) {
			list = factory.makeListCons(createDebugTuple(taskID, engine, factory), list);
		}
		return list;
	}

	private IStrategoTuple createDebugTuple(IStrategoTerm taskID, TaskEngine engine, ITermFactory factory) {
		IStrategoTerm instruction = engine.getInstruction(taskID);
		IStrategoList dependencies = factory.makeList(engine.getDependencies(taskID));
		IStrategoTerm message = engine.getMessage(taskID);
		IStrategoTerm result =
			engine.hasFailed(taskID) ? factory.makeAppl(factory.makeConstructor("Fail", 0)) : engine.getResult(taskID);
		long time = engine.getTime(taskID);

		return factory.makeTuple(taskID, instruction, dependencies,
			result == null ? factory.makeAppl(factory.makeConstructor("None", 0)) : result,
			message == null ? factory.makeAppl(factory.makeConstructor("None", 0)) : message,
			factory.makeInt((int) time));
	}
}
