package org.metaborg.runtime.task.interop;

import java.io.IOException;

import org.metaborg.runtime.task.TaskManager;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

public class task_api_persist_0_0 extends Strategy {
	public static task_api_persist_0_0 instance = new task_api_persist_0_0();

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current) {
		try {
			TaskManager.getInstance().storeCurrent(context.getFactory());
			return current;
		} catch(IOException e) {
			e.printStackTrace();
			return null;
		}
	}
}
