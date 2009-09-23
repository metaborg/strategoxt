package org.strategoxt.lang.parallel.stratego_parallel;

import org.strategoxt.lang.StrategoException;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class ParallelJobAbortedException extends StrategoException {

	private static final long serialVersionUID = 3832524936272309156L;

	public ParallelJobAbortedException() {
		super("Parallel running Stratego job aborted");
	}
}
