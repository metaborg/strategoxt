/**
 * 
 */
package org.strategoxt.lang.typesmart;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.library.AbstractStrategoOperatorRegistry;

/**
 * @author vladvergu
 * 
 */
public class TypesmartLibrary extends AbstractStrategoOperatorRegistry {

	public static final String REGISTRY_NAME = "typesmart";

	/**
	 * Auto-register of {@link TypesmartLibrary} and
	 * {@link TypesmartTermFactory} in the given context.
	 * 
	 * @param ctx
	 */
	public static void register(IContext ctx) {
		// skip if there's already a typesmart library registered
		if (ctx.getOperatorRegistry(REGISTRY_NAME) != null) {
			return;
		}
		TypesmartTermFactory smartFactory = new TypesmartTermFactory(ctx);
		ctx.setFactory(smartFactory);

		TypesmartLibrary lib = new TypesmartLibrary();
		lib.add(new UnsafeBuild(smartFactory.getBaseFactory()));
		ctx.addOperatorRegistry(lib);
	}

	private TypesmartLibrary() {
		add(new GetTypesmartSort());
		add(new PutTypesmartSort());
		add(new WithoutTypesmartSyntax());
	}

	public String getOperatorRegistryName() {
		return REGISTRY_NAME;
	}

}
