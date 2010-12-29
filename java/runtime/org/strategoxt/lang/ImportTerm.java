package org.strategoxt.lang;

import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.net.URL;
import java.util.zip.ZipEntry;
import java.util.zip.ZipFile;

import org.spoofax.interpreter.adapter.aterm.ATermConverter;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
import org.spoofax.terms.LazyTerm;
import org.spoofax.terms.io.TermReader;

import aterm.ATerm;
import aterm.ATermFactory;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class ImportTerm extends LazyTerm {
	
	private final ITermFactory factory;
	
	private final String path, name;
	
	private final Class<?> container;
	
	private ATermFactory atermFactory;
	
	private ATerm aterm;
	
	private ZipFile lastZipFile;
	
	public ImportTerm(ITermFactory factory, Class<?> container, String path, String name) {
		assert path.endsWith("/");
		this.factory = factory;
		this.container = container;
		this.path = path;
		this.name = name;
	}
	
	public ATerm getATerm(ATermFactory factory) {
		if (aterm == null) {
			aterm = initATerm(factory);
			atermFactory = factory;
		} else if (factory != atermFactory) {
			try {
				aterm = factory.importTerm(aterm);
			} catch (RuntimeException e) {
				 // factory.importTerm(aterm) may not be implemented, try again...
				aterm = initATerm(factory);
			}
			atermFactory = factory;
		}
		return aterm;
	}
	
	@Override
	protected IStrategoTerm init() {
		if (aterm != null)
			return new ATermConverter(aterm.getFactory(), factory, true).convert(aterm);
		
		InputStream stream = openStream();
		try {
			IStrategoTerm result = new TermReader(factory).parseFromStream(stream);
			return result;
		} catch (java.io.IOException e) {
			throw new StrategoException(container.getSimpleName()
					+ ": Could not read imported term file " + name, e);
		} catch (RuntimeException e) {
			throw new StrategoException(container.getSimpleName()
					+ ": Could not read imported term file " + name, e);
		} finally {
			try {
				if (stream != null)
					stream.close();
				if (lastZipFile != null)
					lastZipFile.close();
				lastZipFile = null;
			} catch (IOException e) {
				e.printStackTrace();
			}
		}
	}
	
	private ATerm initATerm(ATermFactory factory) {
		if (getWrapped(true) != null)
			return new ATermConverter(factory, this.factory, false).convert(getWrapped());
		InputStream stream = null;
		try {
			stream = openStream();
			return factory.readFromFile(stream);
		} catch (java.io.IOException e) {
			throw new StrategoException(container.getSimpleName()
					+ ": Could not read imported term file " + name, e);
		} catch (RuntimeException e) {
			throw new StrategoException(container.getSimpleName()
					+ ": Could not read imported term file " + name, e);
		} finally {
			try {
				if (stream != null) stream.close();
			} catch (IOException e) {
				e.printStackTrace(); // won't happen
			}
		}
	}

	private InputStream openStream() {
		InputStream result = tryOpenStreamFromJar();
		if (result == null)
			result = container.getResourceAsStream(removePrecedingSlash(path) + name);
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
	 * hopefully avoiding JVM classloader crashes.
	 */
	private InputStream tryOpenStreamFromJar() {
		try {
			URL location = container.getProtectionDomain().getCodeSource().getLocation();
			if (location.getFile().endsWith(".jar")) {
				File jarFile = new File(location.toURI());
				ZipFile jar = lastZipFile = new ZipFile(jarFile);
				ZipEntry entry = jar.getEntry(removePrecedingSlash(path) + name);
				if (entry == null) entry = jar.getEntry(path + name);
				if (entry == null) entry = jar.getEntry(name);
				if (entry == null) return null;
				return jar.getInputStream(entry);
			} else {
				return null;
			}
		} catch (Exception e) {
			return null; // be forgiving
		}
	}
	
	private static String removePrecedingSlash(String path) {
		return path.startsWith("/") ? path.substring(1) : path;
	}
}
