package org.metaborg.runtime.task.util.collections;

import java.util.Collection;
import java.util.Map;
import java.util.Set;

import com.google.common.collect.SetMultimap;

public interface BidirectionalSetMultimap<K, V> extends SetMultimap<K, V> {
	public abstract Map<V, Collection<K>> asInverseMap();

	public abstract Set<K> getInverse(V value);

	public abstract Set<K> removeAllInverse(Object value);

	public abstract SetMultimap<K, V> keyToValue();

	public abstract SetMultimap<V, K> valueToKey();
}