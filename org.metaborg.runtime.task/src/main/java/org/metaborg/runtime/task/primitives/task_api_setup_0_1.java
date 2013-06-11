package org.metaborg.runtime.task.primitives;

import org.metaborg.runtime.task.TaskManager;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.core.Tools;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.library.ssl.SSLLibrary;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Strategy;

public class task_api_setup_0_1 extends AbstractPrimitive {
	public static task_api_setup_0_1 instance = new task_api_setup_0_1();

	public task_api_add_dependency_0_2() {
		super("task_api_add_dependency", 0, 2);
	}
	
	@Override
	public boolean call(IContext env, Strategy[] svars, IStrategoTerm[] tvars) throws InterpreterException {
		final IStrategoTerm projectPath = tvars[0];
		TaskManager.getInstance().loadTaskEngine(Tools.asJavaString(projectPath), env.getFactory(),
			SSLLibrary.instance(env).getIOAgent());
		return true;
	}
}
