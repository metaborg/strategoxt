package org.metaborg.runtime.task.util;

import java.util.Iterator;

final public class SingletonIterable<T> implements Iterable<T> {
	private final T value;

	public SingletonIterable(T value) {
		this.value = value;
	}

	@Override
	public Iterator<T> iterator() {
		return new SingletonIterator<T>(value);
	}

	@Override
	public String toString() {
		return value.toString();
	}
}