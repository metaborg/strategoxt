package org.strategoxt.lang.compat;

import org.spoofax.interpreter.library.AbstractStrategoOperatorRegistry;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class CompatLibrary extends AbstractStrategoOperatorRegistry {
	
	public static final String REGISTRY_NAME = "compat";
	
	public CompatLibrary() {
		add(new SSL_EXT_call());
		add(new SSL_EXT_java_call());
		add(new SSL_EXT_read_text_from_stream());
		add(new SSL_EXT_topdown_fputs());
	}

	public String getOperatorRegistryName() {
		return REGISTRY_NAME;
	}
}
