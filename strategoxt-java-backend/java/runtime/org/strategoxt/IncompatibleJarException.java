package org.strategoxt;

import java.net.URL;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class IncompatibleJarException extends Exception {

	private static final long serialVersionUID = 34468635613246L;
	
	private final URL jar;

	public IncompatibleJarException(URL jar) {
		this(jar, (Throwable) null);
	}

	public IncompatibleJarException(URL jar, Throwable cause) {
		super("Incompatible jar:" + jar, cause);
		this.jar = jar;
	}

	public IncompatibleJarException(URL jar, String message) {
		super(message + ":" + jar);
		this.jar = jar;
	}

	public URL getJar() {
		return jar;
	}
}
