package org.metaborg.runtime.task;

import org.spoofax.interpreter.library.AbstractStrategoOperatorRegistry;



public class TaskLibrary extends AbstractStrategoOperatorRegistry {
    public static final String REGISTRY_NAME = "INDEX";

    public TaskLibrary() {
        
        //add(new LANG_index_add(index));
    }

    public String getOperatorRegistryName() {
        return REGISTRY_NAME;
    }
}
