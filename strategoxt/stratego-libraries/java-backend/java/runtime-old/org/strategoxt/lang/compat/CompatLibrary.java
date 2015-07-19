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
		add(new SSL_EXT_catch_with_0_2());
		add(new SSL_EXT_to_sref_1_0());
		add(new SSL_EXT_apply_sref_0_1());
	}

	public String getOperatorRegistryName() {
		return REGISTRY_NAME;
	}
}
