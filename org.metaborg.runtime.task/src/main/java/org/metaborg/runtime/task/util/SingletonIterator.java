package org.metaborg.runtime.task.util;

import java.util.NoSuchElementException;

import com.google.common.collect.UnmodifiableIterator;

final public class SingletonIterator<T> extends UnmodifiableIterator<T> {
	private final T value;
	private boolean done;

	public SingletonIterator(T value) {
		this.value = value;
	}

	@Override
	public boolean hasNext() {
		return !done;
	}

	@Override
	public T next() {
		if(done) {
			throw new NoSuchElementException();
		}
		done = true;
		return value;
	}
}