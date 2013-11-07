package org.strategoxt.lang;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class StrategoException extends RuntimeException {
	private static final long serialVersionUID = 4363328974592977938L;
	
	public StrategoException() {}
	
	public StrategoException(String message) {
		super(message);
	}
	
	public StrategoException(String message, Throwable cause) {
		super(message, cause);
	}
}
