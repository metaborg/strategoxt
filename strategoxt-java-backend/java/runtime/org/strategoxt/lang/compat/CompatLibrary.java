package org.strategoxt.lang.compat;

import org.spoofax.interpreter.library.AbstractStrategoOperatorRegistry;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class CompatLibrary extends AbstractStrategoOperatorRegistry {
	
	private static final String REGISTRY_NAME = "compat";
	
	public CompatLibrary() {
		add(new SSL_EXT_call());
		add(new SSL_EXT_read_text_from_stream());
	}

	public String getOperatorRegistryName() {
		return REGISTRY_NAME;
	}
}
