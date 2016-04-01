package org.strategoxt.strj.pluto_interface;

import java.util.ArrayList;
import java.util.List;

import org.spoofax.interpreter.core.IContext;

public class PlutoIContextManager {
	
	private static List<IContext> contexts = new ArrayList<>();
	
	public static void pushContext(IContext c) {
		contexts.add(c);
	}
	
	public static void popContext() {
		contexts.remove(contexts.size()-1);
	}
	
	public static IContext currentContext() {
		return contexts.get(contexts.size() -1);
	}
	
	public static void assertHaveContext() {
		if (contexts.isEmpty())
			throw new AssertionError("No current context available");
	}

}
