package org.metaborg.runtime.task.test;

import static org.junit.Assert.*;

import java.util.AbstractMap;
import java.util.Collection;
import java.util.Map.Entry;

import org.junit.Test;
import org.metaborg.runtime.task.TaskInsertion;
import org.spoofax.interpreter.library.ssl.StrategoHashMap;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoTerm;

import com.google.common.collect.LinkedHashMultimap;
import com.google.common.collect.Multimap;

public class UtilsTest extends TaskTest {
	@SuppressWarnings("unchecked")
	@Test
	public void testCartesianProduct1() {
		IStrategoTerm a = def("Java", segment("Class", "A"));
		IStrategoTerm b = def("Java", segment("Class", "B"));
		IStrategoTerm c = def("Java", segment("Class", "C"));
		IStrategoTerm d = def("Java", segment("Class", "D"));
		IStrategoTerm e = def("Java", segment("Class", "E"));

		Multimap<IStrategoTerm, IStrategoTerm> results = LinkedHashMultimap.create();
		results.put(i(1), a);
		results.put(i(1), b);
		results.put(i(2), c);
		results.put(i(2), d);
		results.put(i(2), e);

		Collection<StrategoHashMap> product = TaskInsertion.cartesianProduct(results);

		assertEquals(6, product.size());

		assertTrue(containsMapping(product, entry(1, a), entry(2, c)));
		assertTrue(containsMapping(product, entry(1, a), entry(2, d)));
		assertTrue(containsMapping(product, entry(1, a), entry(2, e)));
		assertTrue(containsMapping(product, entry(1, b), entry(2, c)));
		assertTrue(containsMapping(product, entry(1, b), entry(2, d)));
		assertTrue(containsMapping(product, entry(1, b), entry(2, e)));

		assertFalse(containsMapping(product, entry(1, c)));
		assertFalse(containsMapping(product, entry(1, d)));
		assertFalse(containsMapping(product, entry(1, e)));
		assertFalse(containsMapping(product, entry(2, a)));
		assertFalse(containsMapping(product, entry(2, b)));
	}

	@SuppressWarnings("unchecked")
	@Test
	public void testCartesianProduct2() {
		IStrategoTerm a = def("Java", segment("Class", "A"));
		IStrategoTerm b = def("Java", segment("Class", "B"));
		IStrategoTerm c = def("Java", segment("Class", "C"));
		IStrategoTerm d = def("Java", segment("Class", "D"));
		IStrategoTerm e = def("Java", segment("Class", "E"));
		IStrategoTerm f = def("Java", segment("Class", "F"));

		Multimap<IStrategoTerm, IStrategoTerm> results = LinkedHashMultimap.create();
		results.put(i(1), a);
		results.put(i(1), b);
		results.put(i(2), c);
		results.put(i(2), d);
		results.put(i(3), e);
		results.put(i(3), f);

		Collection<StrategoHashMap> product = TaskInsertion.cartesianProduct(results);

		assertEquals(8, product.size());

		assertTrue(containsMapping(product, entry(1, a), entry(2, c), entry(3, e)));
		assertTrue(containsMapping(product, entry(1, a), entry(2, c), entry(3, f)));
		assertTrue(containsMapping(product, entry(1, b), entry(2, d), entry(3, e)));
		assertTrue(containsMapping(product, entry(1, b), entry(2, d), entry(3, f)));
		assertTrue(containsMapping(product, entry(1, a), entry(2, c), entry(3, e)));
		assertTrue(containsMapping(product, entry(1, a), entry(2, c), entry(3, f)));
		assertTrue(containsMapping(product, entry(1, b), entry(2, d), entry(3, e)));
		assertTrue(containsMapping(product, entry(1, b), entry(2, d), entry(3, f)));

		assertFalse(containsMapping(product, entry(1, c)));
		assertFalse(containsMapping(product, entry(1, d)));
		assertFalse(containsMapping(product, entry(1, e)));
		assertFalse(containsMapping(product, entry(1, f)));

		assertFalse(containsMapping(product, entry(2, a)));
		assertFalse(containsMapping(product, entry(2, b)));
		assertFalse(containsMapping(product, entry(2, e)));
		assertFalse(containsMapping(product, entry(2, f)));

		assertFalse(containsMapping(product, entry(3, a)));
		assertFalse(containsMapping(product, entry(3, b)));
		assertFalse(containsMapping(product, entry(3, c)));
		assertFalse(containsMapping(product, entry(3, d)));
	}

	@SuppressWarnings("unchecked")
	@Test
	public void testCartesianProduct3() {
		IStrategoTerm a = def("Java", segment("Class", "A"));
		IStrategoTerm b = def("Java", segment("Class", "B"));

		Multimap<IStrategoTerm, IStrategoTerm> results = LinkedHashMultimap.create();
		results.put(i(1), a);
		results.put(i(2), b);

		Collection<StrategoHashMap> product = TaskInsertion.cartesianProduct(results);

		assertEquals(1, product.size());
		assertTrue(containsMapping(product, entry(1, a), entry(2, b)));
		assertFalse(containsMapping(product, entry(1, b)));
		assertFalse(containsMapping(product, entry(2, a)));
	}

	@Test
	public void testCartesianProduct4() {
		Multimap<IStrategoTerm, IStrategoTerm> results = LinkedHashMultimap.create();
		Collection<StrategoHashMap> product = TaskInsertion.cartesianProduct(results);
		assertEquals(0, product.size());
	}

	private boolean containsMapping(Collection<StrategoHashMap> maps,
		@SuppressWarnings("unchecked") Entry<IStrategoInt, IStrategoTerm>... mappings) {
		for(StrategoHashMap map : maps) {
			boolean found = mappings.length == 0 ? false : true;
			for(Entry<IStrategoInt, IStrategoTerm> mapping : mappings) {
				if(!map.entrySet().contains(mapping))
					found = false;
			}
			if(found)
				return true;
		}
		return false;
	}

	private Entry<IStrategoInt, IStrategoTerm> entry(int key, IStrategoTerm value) {
		return new AbstractMap.SimpleEntry<IStrategoInt, IStrategoTerm>(i(key), value);
	}
}
