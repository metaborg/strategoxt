package org.strategoxt.lang.parallel.tables;

import org.spoofax.interpreter.library.AbstractStrategoOperatorRegistry;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class ParallelTableLibrary extends AbstractStrategoOperatorRegistry {

    public static final String REGISTRY_NAME = "paralleltable";
    
    private final Object syncRoot = new Object();
    
    // concurrentset?
    // private final ThreadLocal<Set<LoggedTableRead>> tableReads =
    //	new ThreadLocal<Set<LoggedTableRead>>();
    
    public ParallelTableLibrary() {
    	add(new ParallelTableDestroy(this));
    	add(new ParallelTableRemove(this));
    	add(new ParallelTableReset(this));
    	add(new ParallelTableCreate(this));
    	add(new ParallelTableGet(this));
    	add(new ParallelTableKeys(this));
    	add(new ParallelTablePut(this));
    }
    
    public Object getSyncRoot() {
		return syncRoot;
	}

	public String getOperatorRegistryName() {
		return REGISTRY_NAME;
	}

}
