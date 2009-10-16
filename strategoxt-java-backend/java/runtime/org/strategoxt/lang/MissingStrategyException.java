package org.strategoxt.lang;

/**
 * An exception thrown when a dynamically invoked strategy
 * was not found or could otherwise not be used.
 * 
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class MissingStrategyException extends StrategoException {

	private static final long serialVersionUID = -3945927901665941583L;

	public MissingStrategyException(String message) {
		this(message, null);
	}

	public MissingStrategyException(String message, Throwable cause) {
		super(message, cause);
	}

}
