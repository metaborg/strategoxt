package org.strategoxt.compiler.tests;

import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

import aterm.ATerm;
import aterm.ATermFactory;
import aterm.pure.PureFactory;

import junit.framework.TestCase;

public class LanguageTestSuite extends TestCase {

	protected void expect(String testFile, String from, String to) throws ClassNotFoundException, SecurityException, NoSuchMethodException, IllegalArgumentException, IllegalAccessException, InvocationTargetException {
		ClassLoader cl = ClassLoader.getSystemClassLoader();
		
		Class<?> c = cl.loadClass("org.strategoxt.compiler.tests.cases." + testFile);
		Method m = c.getMethod("testMain", String.class);
		
		Object s = m.invoke(null, from);
		ATermFactory af = new PureFactory();
		System.out.println("result = " + s + ", expected = " + to);
		ATerm got = af.parse((String)s);
		ATerm wanted = af.parse(to);
		assertTrue(got.equals(wanted));
	}
	
	protected void fail(String testFile, String from) throws ClassNotFoundException, SecurityException, NoSuchMethodException, IllegalArgumentException, IllegalAccessException, InvocationTargetException {
		ClassLoader cl = ClassLoader.getSystemClassLoader();
		
		Class<?> c = cl.loadClass("org.strategoxt.compiler.tests.cases." + testFile);
		Method m = c.getMethod("testMain", String.class);
		
		Object s = m.invoke(null, from);
		System.out.println("result = " + s + ", expected = null");
		assertNull(s);
	}
}
