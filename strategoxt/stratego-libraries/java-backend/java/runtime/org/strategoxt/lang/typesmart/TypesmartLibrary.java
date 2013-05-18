/**
 * 
 */
package org.strategoxt.lang.typesmart;

import org.spoofax.interpreter.library.AbstractStrategoOperatorRegistry;

/**
 * @author vladvergu
 * 
 */
public class TypesmartLibrary extends AbstractStrategoOperatorRegistry {

	public static final String REGISTRY_NAME = "typesmart";

	public TypesmartLibrary() {
		add(new UnsafeBuild());
		add(new GetTypesmartSort());
		add(new PutTypesmartSort());
		add(new WithoutTypesmartSyntax());
	}

	public String getOperatorRegistryName() {
		return REGISTRY_NAME;
	}

}
