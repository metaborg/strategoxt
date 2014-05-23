package org.metaborg.runtime.task;

import java.util.EnumSet;

public enum TaskStatus {
	Unknown(0), Success(1), Fail(2), DependencyFail(3);


	private TaskStatus(int id) {
		this.id = id;
	}

	public final int id;


	private static final EnumSet<TaskStatus> set = EnumSet.allOf(TaskStatus.class);
	private static final TaskStatus[] lookup = new TaskStatus[set.size()];

	static {
		for(TaskStatus s : set)
			lookup[s.id] = s;
	}

	public static TaskStatus get(int id) {
		return lookup[id];
	}
}
