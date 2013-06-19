package org.metaborg.runtime.task.primitives;

import org.metaborg.runtime.task.TaskEngine;
import org.metaborg.runtime.task.TaskManager;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.core.Tools;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;
import org.spoofax.interpreter.terms.ITermFactory;

public class task_api_debug_info_0_1 extends AbstractPrimitive {
	public static task_api_debug_info_0_1 instance = new task_api_debug_info_0_1();

	public task_api_debug_info_0_1() {
		super("task_api_debug_info", 0, 2);
	}
	
	@Override
	public boolean call(IContext env, Strategy[] svars, IStrategoTerm[] tvars) throws InterpreterException {
		final ITermFactory factory = env.getFactory();
		final TaskEngine engine = TaskManager.getInstance().getCurrent();
		final IStrategoTerm tupleOrPartitionOrID = tvars[0];

		if(Tools.isTermTuple(tupleOrPartitionOrID) && tupleOrPartitionOrID.getSubtermCount() == 0) {
			env.setCurrent(createDebugTuples(engine.getTaskIDs(), engine, factory));
		} else if(Tools.isTermString(tupleOrPartitionOrID)) {
			env.setCurrent(createDebugTuples(engine.getInPartition((IStrategoString) tupleOrPartitionOrID), engine, factory));
		} else {
			env.setCurrent(createDebugTuple(tupleOrPartitionOrID, engine, factory));
		}

		return true;
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
		Long timeBox = engine.getTime(taskID);
		long time = timeBox == null ? -1 : timeBox;
		Long evaluationsBox = engine.getEvaluations(taskID);
		long evaluations = evaluationsBox == null ? 0 : evaluationsBox;
		
		return factory.makeTuple(taskID, instruction, dependencies,
			result == null ? factory.makeAppl(factory.makeConstructor("None", 0)) : result,
			message == null ? factory.makeAppl(factory.makeConstructor("None", 0)) : message,
			factory.makeInt((int)time), factory.makeInt((int)evaluations));
	}
}
