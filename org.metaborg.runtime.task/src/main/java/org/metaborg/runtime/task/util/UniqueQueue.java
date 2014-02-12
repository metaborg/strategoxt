package org.metaborg.runtime.task.util;

import java.util.Collection;
import java.util.Iterator;
import java.util.Queue;
import java.util.Set;

import com.google.common.collect.Lists;
import com.google.common.collect.Sets;

public class UniqueQueue<T> implements Queue<T>, Set<T> {
	private final Queue<T> queue;
	private final Set<T> set;

	public UniqueQueue(Queue<T> queue, Set<T> set) {
		this.queue = queue;
		this.set = set;
	}

	public UniqueQueue() {
		this.queue = Lists.newLinkedList();
		this.set = Sets.newHashSet();
	}

	@Override
	public int size() {
		return queue.size();
	}

	@Override
	public boolean isEmpty() {
		return queue.isEmpty();
	}

	@Override
	public boolean contains(Object o) {
		return set.contains(o);
	}

	@Override
	public Iterator<T> iterator() {
		return queue.iterator();
	}

	@Override
	public Object[] toArray() {
		return queue.toArray();
	}

	@Override
	public <TA> TA[] toArray(TA[] a) {
		return queue.toArray(a);
	}

	@Override
	public boolean remove(Object o) {
		set.remove(o);
		return queue.remove(o);
	}

	@Override
	public boolean containsAll(Collection<?> c) {
		return queue.containsAll(c);
	}

	@Override
	public boolean addAll(Collection<? extends T> c) {
		boolean added = false;
		for(T e : c) {
			if(set.add(e)) {
				added = true;
				queue.add(e);
			}
		}
		return added;
	}

	@Override
	public boolean removeAll(Collection<?> c) {
		set.removeAll(c);
		return queue.removeAll(c);
	}

	@Override
	public boolean retainAll(Collection<?> c) {
		set.retainAll(c);
		return queue.retainAll(c);
	}

	@Override
	public void clear() {
		queue.clear();
		set.clear();
	}

	@Override
	public boolean add(T e) {
		if(set.add(e)) {
			return queue.add(e);
		}
		return false;
	}

	@Override
	public boolean offer(T e) {
		if(set.add(e)) {
			return queue.offer(e);
		}
		return false;
	}

	@Override
	public T remove() {
		T e = queue.remove();
		set.remove(e);
		return e;
	}

	@Override
	public T poll() {
		T e = queue.poll();
		if(e != null)
			set.remove(e);
		return e;
	}

	@Override
	public T element() {
		return queue.element();
	}

	@Override
	public T peek() {
		return queue.peek();
	}
}
