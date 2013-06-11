package org.metaborg.runtime.task.primitives;

import java.util.Collection;

import org.metaborg.runtime.task.TaskEngine;
import org.metaborg.runtime.task.TaskManager;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.core.Tools;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;
import org.spoofax.interpreter.terms.ITermFactory;
import org.strategoxt.lang.Strategy;

public class task_api_debug_info_0_1 extends AbstractPrimitive {
	public static task_api_debug_info_0_1 instance = new task_api_debug_info_0_1();

	public task_api_debug_info_0_1() {
		super("task_api_debug_info_0_1", 0, 2);
	}
	
	@Override
	public boolean call(IContext env, Strategy[] svars, IStrategoTerm[] tvars) throws InterpreterException {
		final ITermFactory factory = env.getFactory();
		final TaskEngine engine = TaskManager.getInstance().getCurrent();
		final IStrategoTerm partitionOrID = tvars[0];

		if(Tools.isTermString(partitionOrID)) {
			Collection<IStrategoTerm> taskIDs = engine.getInPartition((IStrategoString) partitionOrID);
			IStrategoList list = factory.makeList();
			for(IStrategoTerm taskID : taskIDs) {
				list = factory.makeListCons(createDebugTuple(taskID, engine, factory), list);
			}

			env.setCurrent(list);
		} else if(Tools.isTermInt(partitionOrID)) {
			env.setCurrent(createDebugTuple(partitionOrID, engine, factory));
		}

		return true;
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
