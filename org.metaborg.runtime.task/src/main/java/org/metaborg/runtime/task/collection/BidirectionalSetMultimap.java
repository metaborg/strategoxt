package org.metaborg.runtime.task.collection;

import java.util.Collection;
import java.util.Map;
import java.util.Set;

import com.google.common.collect.Multimap;

public interface BidirectionalSetMultimap<K, V> extends Multimap<K, V> {
	public abstract Map<V, Collection<K>> asInverseMap();

	public abstract Set<K> getInverse(V value);

	public abstract Set<K> removeAllInverse(Object value);
}