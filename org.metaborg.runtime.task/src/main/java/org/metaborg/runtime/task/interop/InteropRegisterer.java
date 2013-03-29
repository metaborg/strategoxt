package org.metaborg.runtime.task.interop;

import org.metaborg.runtime.task.TaskManager;
import org.strategoxt.lang.JavaInteropRegisterer;
import org.strategoxt.lang.Strategy;

public class InteropRegisterer extends JavaInteropRegisterer {
	private static final TaskManager taskManager = new TaskManager();
	
	public InteropRegisterer() {
		super(new Strategy[] { new task_setup_0_1(taskManager) });
	}
}
