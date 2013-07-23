package org.metaborg.runtime.task.collection;

import java.util.Collection;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;

import com.google.common.collect.LinkedHashMultimap;
import com.google.common.collect.Multimap;
import com.google.common.collect.Multiset;
import com.google.common.collect.SetMultimap;

public class BidirectionalLinkedHashMultimap<K, V> implements BidirectionalSetMultimap<K, V> {
	private final SetMultimap<K, V> keyToValue = LinkedHashMultimap.create();
	private final SetMultimap<V, K> valueToKey = LinkedHashMultimap.create();

	public static <K, V> BidirectionalSetMultimap<K, V> create() {
		return new BidirectionalLinkedHashMultimap<K, V>();
	}

	public void clear() {
		keyToValue.clear();
		valueToKey.clear();
	}

	public boolean containsKey(Object key) {
		return keyToValue.containsKey(key);
	}

	public boolean containsValue(Object value) {
		return keyToValue.containsValue(value);
	}

	public Map<K, Collection<V>> asMap() {
		return keyToValue.asMap();
	}

	public Map<V, Collection<K>> asInverseMap() {
		return valueToKey.asMap();
	}

	public boolean containsEntry(Object key, Object value) {
		return keyToValue.containsEntry(key, value);
	}

	public Set<Entry<K, V>> entries() {
		return keyToValue.entries();
	}

	public Set<V> get(K key) {
		return keyToValue.get(key);
	}

	public Set<K> getInverse(V value) {
		return valueToKey.get(value);
	}

	public boolean isEmpty() {
		return keyToValue.isEmpty();
	}

	public Set<K> keySet() {
		return keyToValue.keySet();
	}

	public Multiset<K> keys() {
		return keyToValue.keys();
	}

	public boolean put(K key, V value) {
		return keyToValue.put(key, value) & valueToKey.put(value, key);
	}

	public boolean putAll(Multimap<? extends K, ? extends V> multimap) {
		boolean result = keyToValue.putAll(multimap);

		for (Entry<? extends K, ? extends V> entry : multimap.entries())
			result &= valueToKey.put(entry.getValue(), entry.getKey());

		return result;
	}

	public boolean putAll(K key, Iterable<? extends V> values) {
		boolean result = keyToValue.putAll(key, values);

		for (V value : values)
			result &= valueToKey.put(value, key);

		return result;
	}

	public boolean remove(Object key, Object value) {
		return keyToValue.remove(key, value) & valueToKey.remove(value, key);
	}

	public Set<V> removeAll(Object key) {
		final Set<V> removed = keyToValue.removeAll(key);
		for (V r : removed)
			valueToKey.remove(r, key);

		return removed;
	}

	public Set<K> removeAllInverse(Object value) {
		final Set<K> removed = valueToKey.removeAll(value);
		for (K r : removed)
			keyToValue.remove(r, value);

		return removed;
	}

	public Set<V> replaceValues(K key, Iterable<? extends V> values) {
		final Set<V> replaced = keyToValue.replaceValues(key, values);

		for (V r : replaced)
			valueToKey.remove(r, key);
		for (V value : values)
			valueToKey.put(value, key);

		return replaced;
	}

	public int size() {
		return keyToValue.size();
	}

	public Collection<V> values() {
		return keyToValue.values();
	}
}