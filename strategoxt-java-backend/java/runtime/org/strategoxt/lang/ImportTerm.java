package org.strategoxt.lang;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

import aterm.ATerm;
import aterm.ATermFactory;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class ImportTerm extends LazyTerm {
	
	private final ITermFactory factory;
	
	private final Class<?> container;
	
	private final String path, name;
	
	private ATermFactory atermFactory;
	
	private ATerm aterm;
	
	public ImportTerm(ITermFactory factory, Class<?> container, String path, String name) {
		assert path.endsWith("/");
		this.factory = factory;
		this.container = container;
		this.path = path;
		this.name = name;
	}
	
	public ATerm getATerm(ATermFactory factory) {
		if (aterm == null) {
			return aterm = initATerm(factory);
		} else if (factory != atermFactory) {
			try {
				return initATerm(factory);
			} catch (RuntimeException e) {
				 // factory.importTerm(aterm) may not be implemented, try again...
				return initATerm(factory);
			}
		} else {
			return aterm;
		}
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
	
	private ATerm initATerm(ATermFactory factory) {
		java.io.InputStream stream = container.getResourceAsStream("/" + name);
		if (stream == null)
			stream = container.getResourceAsStream(path + name);
		if (stream == null)
			throw new StrategoException(container.getSimpleName()
					+ ": Could not find imported term file " + name);
		try {
			return factory.readFromFile(stream);
		} catch (java.io.IOException e) {
			throw new StrategoException(container.getSimpleName()
					+ ": Could not read imported term file " + name, e);
		} catch (RuntimeException e) {
			throw new StrategoException(container.getSimpleName()
					+ ": Could not read imported term file " + name, e);
		}
	}
}
