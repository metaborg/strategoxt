package org.metaborg.runtime.task.primitives;

import java.io.IOException;

import org.metaborg.runtime.task.engine.TaskManager;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;

public class task_api_persist_0_0 extends AbstractPrimitive {
	public static task_api_persist_0_0 instance = new task_api_persist_0_0();

	public task_api_persist_0_0() {
		super("task_api_persist", 0, 0);
	}

	@Override
	public boolean call(IContext env, Strategy[] svars, IStrategoTerm[] tvars) throws InterpreterException {
		try {
			TaskManager.getInstance().writeCurrent(env.getFactory());
		} catch(IOException e) {
			throw new RuntimeException("Failed to persist task engine.", e);
		}
		return true;
	}
}
