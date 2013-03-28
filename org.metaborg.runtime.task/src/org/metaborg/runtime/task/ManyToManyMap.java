package org.metaborg.runtime.task;

import java.util.Collection;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;

import com.google.common.collect.LinkedHashMultimap;
import com.google.common.collect.Multimap;
import com.google.common.collect.Multiset;

	
public class ManyToManyMap<K, V> implements Multimap<K, V> {
	
	private final Multimap<K, V> keyToValue = LinkedHashMultimap.create();
	private final Multimap<V, K> valueToKey = LinkedHashMultimap.create();
	
	public static <K,V> ManyToManyMap<K,V> create() {
		return new ManyToManyMap<K, V>();
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

	public Map<V, Collection<K>> asInverseMap() {
		return valueToKey.asMap();
	}

	@Override
	public boolean containsEntry(Object key, Object value) {
		return keyToValue.containsEntry(key, value);
	}

	@Override
	public Collection<Entry<K, V>> entries() {
		return keyToValue.entries();
	}

	@Override
	public Collection<V> get(K key) {
		return keyToValue.get(key);
	}

	public Collection<K> getInverse(V value) {
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
		
		for (Entry<? extends K, ? extends V> entry : multimap.entries()) 
			result &= valueToKey.put(entry.getValue(), entry.getKey());
	
		return result;
	}

	@Override
	public boolean putAll(K key, Iterable<? extends V> values) {
		
		boolean result = keyToValue.putAll(key, values);
		
		for (V value : values) 
			result &= valueToKey.put(value, key);
		
		return result;
	}

	@Override
	public boolean remove(Object key, Object value) {
		return keyToValue.remove(key, value) & valueToKey.remove(value, key);
	}

	@Override
	public Collection<V> removeAll(Object key) {
		
		Collection<V> removed = keyToValue.removeAll(key);
		for (V r : removed) 
			valueToKey.remove(r, key);
		
		return removed;
	}

	@Override
	public Collection<V> replaceValues(K key,
			Iterable<? extends V> values) {
		
		Collection<V> replaced = keyToValue.replaceValues(key, values);
		
		for (V r : replaced) 
			valueToKey.remove(r, key);
		for (V value : values) 
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
}