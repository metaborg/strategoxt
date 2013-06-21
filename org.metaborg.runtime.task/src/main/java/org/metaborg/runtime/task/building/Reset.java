package org.metaborg.runtime.task.building;

import org.metaborg.runtime.task.TaskEngine;
import org.metaborg.runtime.task.TaskManager;

public class Reset {
	public static void main(String[] args) {
		TaskEngine taskEngine = TaskManager.getInstance().getTaskEngine(args[0]);
		if(taskEngine != null)
			taskEngine.reset();
		else
			TaskManager.getInstance().getCurrent().reset();
	}
}
