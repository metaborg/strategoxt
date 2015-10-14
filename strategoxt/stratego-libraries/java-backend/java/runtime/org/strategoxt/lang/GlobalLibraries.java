package org.strategoxt.lang;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

public class GlobalLibraries {
	
	private static final Set<Class<? extends LibraryInitializer>> globalLibraries = new HashSet<>();
	
	public static void registerLibraryClass(Class<? extends LibraryInitializer> newLibrary) {
		synchronized(globalLibraries) {
			globalLibraries.add(newLibrary);
		}
	}
	
	public static List<LibraryInitializer> getGlobalLibraryInitializers() {
		List<LibraryInitializer> initializers = new ArrayList<>();
		synchronized (globalLibraries) {
			for (Class<? extends LibraryInitializer> initializerClass : globalLibraries) {
				try {
					initializers.add(initializerClass.newInstance());
				} catch (InstantiationException e) {
					throw new RuntimeException("Malformed library initializer", e);
				} catch (IllegalAccessException e) {
					throw new RuntimeException("Failed to instantiate library initializer", e);
				}
			}
		}
		return initializers;
	}

}
