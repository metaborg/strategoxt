package org.metaborg.runtime.task;

import java.util.EnumSet;

public enum TaskStorageType {
	Auto(0), List(1), Set(2);


	private TaskStorageType(int id) {
		this.id = id;
	}

	public final int id;


	private static final EnumSet<TaskStorageType> set = EnumSet.allOf(TaskStorageType.class);
	private static final TaskStorageType[] lookup = new TaskStorageType[set.size()];

	static {
		for(TaskStorageType s : set)
			lookup[s.id] = s;
	}

	public static TaskStorageType get(int id) {
		return lookup[id];
	}
}
