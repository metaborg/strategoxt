package org.strategoxt.lang;

import org.spoofax.interpreter.adapter.aterm.WrapperException;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class TermWrapperException extends WrapperException {
	private static final long serialVersionUID = 5194285844333201169L;

	public TermWrapperException(String message) {
		super(message);
	}
}
