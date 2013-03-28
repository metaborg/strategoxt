package org.metaborg.runtime.task;

import java.util.Collection;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;

import com.google.common.collect.LinkedHashMultimap;
import com.google.common.collect.Multimap;
import com.google.common.collect.Multiset;

	
public class ManyToManyMap<Key, Value> implements Multimap<Key, Value> {
	
	private final Multimap<Key, Value> keyToValue = LinkedHashMultimap.create();
	private final Multimap<Value, Key> valueToKey = LinkedHashMultimap.create();
	
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
	public Map<Key, Collection<Value>> asMap() {
		return keyToValue.asMap();
	}

	@Override
	public boolean containsEntry(Object key, Object value) {
		return keyToValue.containsEntry(key, value);
	}

	@Override
	public Collection<Entry<Key, Value>> entries() {
		return keyToValue.entries();
	}

	@Override
	public Collection<Value> get(Key key) {
		return keyToValue.get(key);
	}

	@Override
	public boolean isEmpty() {
		return keyToValue.isEmpty();
	}

	@Override
	public Set<Key> keySet() {
		return keyToValue.keySet();
	}

	@Override
	public Multiset<Key> keys() {
		return keyToValue.keys();
	}

	@Override
	public boolean put(Key key, Value value) {
		return keyToValue.put(key, value) & valueToKey.put(value, key);
	}

	@Override
	public boolean putAll(Multimap<? extends Key, ? extends Value> multimap) {
	
		boolean result = keyToValue.putAll(multimap);
		
		for (Entry<? extends Key, ? extends Value> entry : multimap.entries()) 
			result &= valueToKey.put(entry.getValue(), entry.getKey());
	
		return result;
	}

	@Override
	public boolean putAll(Key key, Iterable<? extends Value> values) {
		
		boolean result = keyToValue.putAll(key, values);
		
		for (Value value : values) 
			result &= valueToKey.put(value, key);
		
		return result;
	}

	@Override
	public boolean remove(Object key, Object value) {
		return keyToValue.remove(key, value) & valueToKey.remove(value, key);
	}

	@Override
	public Collection<Value> removeAll(Object key) {
		
		Collection<Value> removed = keyToValue.removeAll(key);
		for (Value r : removed) 
			valueToKey.remove(r, key);
		
		return removed;
	}

	@Override
	public Collection<Value> replaceValues(Key key,
			Iterable<? extends Value> values) {
		
		Collection<Value> replaced = keyToValue.replaceValues(key, values);
		
		for (Value r : replaced) 
			valueToKey.remove(r, key);
		for (Value value : values) 
			valueToKey.put(value, key);
		
		return replaced;
	}

	@Override
	public int size() {
		return keyToValue.size();
	}

	@Override
	public Collection<Value> values() {
		return keyToValue.values();
	}
}