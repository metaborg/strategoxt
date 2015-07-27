package org.strategoxt.lang.parallel.collections;

import org.spoofax.interpreter.library.ssl.StrategoSet;
import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * A stratego indexed set bound to a particular thread.
 * 
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class ThreadBoundSet extends StrategoSet implements IThreadBoundCollection {
	
	private static final long serialVersionUID = -2929485629069696970L;
	
	private final Thread thread;

	public ThreadBoundSet(int initialSize, int maxLoad) {
		super(initialSize, maxLoad);
		Thread thread = null;
		assert (thread = Thread.currentThread()) != null;
		this.thread = thread;
	}
	
	@Override
	public int put(IStrategoTerm value) {
		assert thread == Thread.currentThread();
		return super.put(value);
	}
	
	public Thread getThread() {
		return thread;
	}
}
