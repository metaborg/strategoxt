package org.strategoxt;

import java.net.URL;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class NoInteropRegistererJarException extends IncompatibleJarException {

	private static final long serialVersionUID = 6326660901768281135L;

	private final URL[] jars;

	public NoInteropRegistererJarException(URL[] jars) {
		super(jars.length == 0 ? null : jars[0],
				"No STRJ InteropRegisterer classes found in JAR files: " + jars);
		this.jars = jars;
	}

	public URL[] getJars() {
		return jars;
	}
	
	@Override @Deprecated
	/**
	 * @deprecated Use getJars() instead to get all jar files
	 *             this exception applies to.
	 */
	public URL getJar() {
		return super.getJar();
	}
}
