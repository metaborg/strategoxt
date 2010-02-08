package org.strategoxt.lang;

import java.io.File;
import java.io.InputStream;
import java.net.URL;
import java.util.zip.ZipEntry;
import java.util.zip.ZipFile;

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
		try {
			return factory.parseFromStream(openStream());
		} catch (java.io.IOException e) {
			throw new StrategoException(container.getSimpleName()
					+ ": Could not read imported term file " + name, e);
		} catch (RuntimeException e) {
			throw new StrategoException(container.getSimpleName()
					+ ": Could not read imported term file " + name, e);
		}
	}
	
	private ATerm initATerm(ATermFactory factory) {
		try {
			return factory.readFromFile(openStream());
		} catch (java.io.IOException e) {
			throw new StrategoException(container.getSimpleName()
					+ ": Could not read imported term file " + name, e);
		} catch (RuntimeException e) {
			throw new StrategoException(container.getSimpleName()
					+ ": Could not read imported term file " + name, e);
		}
	}

	private InputStream openStream() {
		InputStream result = tryOpenStreamFromJar();
		if (result == null)
			result = container.getResourceAsStream(path + name);
		if (result == null)
			result = container.getResourceAsStream("/" + name);
		if (result == null)
			throw new StrategoException(container.getSimpleName()
					+ ": Could not find imported term file " + name);
		return result;
	}

	/**
	 * Attempt to open resources in JARs using the Java ZipFile API,
	 * hopefully avoiding JVM classloader failures.
	 */
	private InputStream tryOpenStreamFromJar() {
		try {
			URL location = container.getProtectionDomain().getCodeSource().getLocation();
			if (location.getFile().endsWith(".jar")) {
				File jarFile = new File(location.toURI());
				ZipFile jar = new ZipFile(jarFile);
				ZipEntry entry = jar.getEntry(path + name);
				if (entry == null) entry = jar.getEntry("/" + name);
				if (entry == null) return null;
				return jar.getInputStream(entry);
			} else {
				return null;
			}
		} catch (Exception e) {
			return null; // be forgiving
		}
	}
}
