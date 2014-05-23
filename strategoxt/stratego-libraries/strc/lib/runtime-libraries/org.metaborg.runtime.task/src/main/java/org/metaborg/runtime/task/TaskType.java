package org.metaborg.runtime.task;

import java.util.EnumSet;

public enum TaskType {
	Regular(0), Combinator(1), Raw(2);


	private TaskType(int id) {
		this.id = id;
	}

	public final int id;


	private static final EnumSet<TaskType> set = EnumSet.allOf(TaskType.class);
	private static final TaskType[] lookup = new TaskType[set.size()];

	static {
		for(TaskType s : set)
			lookup[s.id] = s;
	}

	public static TaskType get(int id) {
		return lookup[id];
	}
}
