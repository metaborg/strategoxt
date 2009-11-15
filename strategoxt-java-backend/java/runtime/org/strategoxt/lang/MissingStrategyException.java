package org.strategoxt.lang;

import org.spoofax.interpreter.core.UndefinedStrategyException;
import org.strategoxt.lang.compat.SSL_EXT_java_call;

/**
 * An exception thrown when a dynamically invoked strategy
 * was not found or could otherwise not be used.
 * 
 * Only relates to strategies called with {@link SSL_EXT_java_call};
 * for unloaded interpreter strategies see {@link UndefinedStrategyException}.
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
