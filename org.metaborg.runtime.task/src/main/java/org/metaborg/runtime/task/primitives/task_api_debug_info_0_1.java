package org.metaborg.runtime.task.primitives;

import static org.metaborg.runtime.task.util.ListBuilder.makeList;

import org.metaborg.runtime.task.Task;
import org.metaborg.runtime.task.TaskEngine;
import org.metaborg.runtime.task.TaskManager;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.core.Tools;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoAppl;
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
			env.setCurrent(createDebugTuples(engine.getInPartition((IStrategoString) tupleOrPartitionOrID), engine,
				factory));
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
		Task task = engine.getTask(taskID);
		IStrategoList dependencies = factory.makeList(engine.getDependencies(taskID));
		IStrategoTerm results = engine.hasFailed(taskID) ? fail(factory) : makeList(factory, task.results());

		return factory.makeTuple(
			taskID, 
			task.instruction, 
			dependencies, 
			results == null ? none(factory) : results,
			task.message == null ? none(factory) : task.message, 
			factory.makeInt((int) task.time),
			factory.makeInt(task.evaluations)
		);
	}

	private IStrategoAppl fail(ITermFactory factory) {
		return factory.makeAppl(factory.makeConstructor("Fail", 0));
	}

	private IStrategoAppl none(ITermFactory factory) {
		return factory.makeAppl(factory.makeConstructor("None", 0));
	}
}
