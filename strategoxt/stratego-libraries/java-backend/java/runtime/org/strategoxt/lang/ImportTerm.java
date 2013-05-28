package org.strategoxt.lang;

import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.net.URL;
import java.util.zip.ZipEntry;
import java.util.zip.ZipFile;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
import org.spoofax.terms.LazyTerm;
import org.spoofax.terms.io.binary.TermReader;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class ImportTerm extends LazyTerm {

	private ITermFactory factory;

	private final String path, name;

	private final Class<?> container;

	private Throwable eagerError;
	private IStrategoTerm eagerResult;

	private ZipFile lastZipFile;

	public ImportTerm(ITermFactory factory, Class<?> container, String path, String name) {
		assert path.endsWith("/");
		this.factory = factory;
		this.container = container;
		this.path = path;
		this.name = name;
		eagerInit();
	}

	public void eagerInit() {
		long now = System.currentTimeMillis();
		try{
			eagerResult = init();
		}catch(Throwable t){
			eagerError = t;
		}finally{
			this.factory = null;
		}
		long later = System.currentTimeMillis();
		System.err.println("Eager import term: " + name + " duration: " + (later - now) + " ms");
	}

	@Override
	protected IStrategoTerm init() {
		if(eagerResult != null){
			IStrategoTerm tmp = eagerResult;
			eagerResult = null;
			return tmp;
		}
		if(eagerError != null){
			throw new StrategoException("Eager import-term failed", eagerError);
		}
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
			this.factory = null;
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
	 * Attempt to open resources in JARs using the Java ZipFile API, hopefully avoiding JVM
	 * classloader crashes.
	 */
	private InputStream tryOpenStreamFromJar() {
		try {
			URL location = container.getProtectionDomain().getCodeSource().getLocation();
			if (location.getFile().endsWith(".jar")) {
				File jarFile = new File(location.toURI());
				ZipFile jar = lastZipFile = new ZipFile(jarFile);
				ZipEntry entry = jar.getEntry(removePrecedingSlash(path) + name);
				if (entry == null)
					entry = jar.getEntry(path + name);
				if (entry == null)
					entry = jar.getEntry(name);
				if (entry == null)
					return null;
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
