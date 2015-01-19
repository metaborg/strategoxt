package org.strategoxt.lang;

public class MissingLibraryException extends StrategoException {

	private static final long serialVersionUID = -3945927901665941583L;

	public MissingLibraryException(String message) {
		this(message, null);
	}

	public MissingLibraryException(String message, Throwable cause) {
		super(message, cause);
	}

}
