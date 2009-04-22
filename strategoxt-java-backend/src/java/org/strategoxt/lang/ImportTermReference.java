package org.strategoxt.lang;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class ImportTermReference extends LazyTermReference {
	
	private final ITermFactory factory;
	
	private final Class<?> container;
	
	private final String path, name;
	
	public ImportTermReference(ITermFactory factory, Class<?> container, String path, String name) {
		assert path.endsWith("/");
		this.factory = factory;
		this.container = container;
		this.path = path;
		this.name = name;
	}
	
	@Override
	protected IStrategoTerm init() {
		java.io.InputStream stream = container.getResourceAsStream("/" + name);
		if (stream == null)
			stream = container.getResourceAsStream(path + name);
		if (stream == null)
			throw new StrategoException(container.getSimpleName()
					+ ": Could not find imported term file " + name);
		try {
			return factory.parseFromStream(stream);
		} catch (java.io.IOException e) {
			throw new StrategoException(container.getSimpleName()
					+ ": Could not read imported term file " + name, e);
		} catch (RuntimeException e) {
			throw new StrategoException(container.getSimpleName()
					+ ": Could not read imported term file " + name, e);
		}
	}
}
