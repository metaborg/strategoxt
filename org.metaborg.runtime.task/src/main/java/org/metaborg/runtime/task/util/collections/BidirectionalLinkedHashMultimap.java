package org.metaborg.runtime.task.util.collections;

import java.util.Collection;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;

import com.google.common.collect.LinkedHashMultimap;
import com.google.common.collect.Multimap;
import com.google.common.collect.Multiset;
import com.google.common.collect.SetMultimap;

public class BidirectionalLinkedHashMultimap<K, V> implements BidirectionalSetMultimap<K, V> {
	private final SetMultimap<K, V> keyToValue;
	private final SetMultimap<V, K> valueToKey;

	public static <K, V> BidirectionalSetMultimap<K, V> create() {
		return new BidirectionalLinkedHashMultimap<K, V>();
	}

	public static <K, V> BidirectionalSetMultimap<K, V> create(BidirectionalSetMultimap<K, V> map) {
		return new BidirectionalLinkedHashMultimap<K, V>(map);
	}


	public BidirectionalLinkedHashMultimap() {
		keyToValue = LinkedHashMultimap.create();
		valueToKey = LinkedHashMultimap.create();
	}

	public BidirectionalLinkedHashMultimap(BidirectionalSetMultimap<K, V> map) {
		keyToValue = LinkedHashMultimap.create(map.keyToValue());
		valueToKey = LinkedHashMultimap.create(map.valueToKey());
	}


	@Override
	public void clear() {
		keyToValue.clear();
		valueToKey.clear();
	}

	@Override
	public boolean containsKey(Object key) {
		return keyToValue.containsKey(key);
	}

	@Override
	public boolean containsValue(Object value) {
		return keyToValue.containsValue(value);
	}

	@Override
	public Map<K, Collection<V>> asMap() {
		return keyToValue.asMap();
	}

	@Override
	public Map<V, Collection<K>> asInverseMap() {
		return valueToKey.asMap();
	}

	@Override
	public boolean containsEntry(Object key, Object value) {
		return keyToValue.containsEntry(key, value);
	}

	@Override
	public Set<Entry<K, V>> entries() {
		return keyToValue.entries();
	}

	@Override
	public Set<V> get(K key) {
		return keyToValue.get(key);
	}

	@Override
	public Set<K> getInverse(V value) {
		return valueToKey.get(value);
	}

	@Override
	public boolean isEmpty() {
		return keyToValue.isEmpty();
	}

	@Override
	public Set<K> keySet() {
		return keyToValue.keySet();
	}

	@Override
	public Multiset<K> keys() {
		return keyToValue.keys();
	}

	@Override
	public boolean put(K key, V value) {
		return keyToValue.put(key, value) & valueToKey.put(value, key);
	}

	@Override
	public boolean putAll(Multimap<? extends K, ? extends V> multimap) {
		boolean result = keyToValue.putAll(multimap);

		for(Entry<? extends K, ? extends V> entry : multimap.entries())
			result &= valueToKey.put(entry.getValue(), entry.getKey());

		return result;
	}

	@Override
	public boolean putAll(K key, Iterable<? extends V> values) {
		boolean result = keyToValue.putAll(key, values);

		for(V value : values)
			result &= valueToKey.put(value, key);

		return result;
	}

	@Override
	public boolean remove(Object key, Object value) {
		return keyToValue.remove(key, value) & valueToKey.remove(value, key);
	}

	@Override
	public Set<V> removeAll(Object key) {
		final Set<V> removed = keyToValue.removeAll(key);
		for(V r : removed)
			valueToKey.remove(r, key);

		return removed;
	}

	@Override
	public Set<K> removeAllInverse(Object value) {
		final Set<K> removed = valueToKey.removeAll(value);
		for(K r : removed)
			keyToValue.remove(r, value);

		return removed;
	}

	@Override
	public Set<V> replaceValues(K key, Iterable<? extends V> values) {
		final Set<V> replaced = keyToValue.replaceValues(key, values);

		for(V r : replaced)
			valueToKey.remove(r, key);
		for(V value : values)
			valueToKey.put(value, key);

		return replaced;
	}

	@Override
	public int size() {
		return keyToValue.size();
	}

	@Override
	public Collection<V> values() {
		return keyToValue.values();
	}

	@Override
	public SetMultimap<K, V> keyToValue() {
		return keyToValue;
	}

	@Override
	public SetMultimap<V, K> valueToKey() {
		return valueToKey;
	}
}