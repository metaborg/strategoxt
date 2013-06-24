package org.metaborg.runtime.task.collection;

import java.util.Collection;
import java.util.Map;

import com.google.common.collect.Multimap;

public interface BidirectionalMultimap<K, V> extends Multimap<K, V> {
	public abstract Map<V, Collection<K>> asInverseMap();

	public abstract Collection<K> getInverse(V value);

	public abstract Collection<K> removeAllInverse(Object value);
}