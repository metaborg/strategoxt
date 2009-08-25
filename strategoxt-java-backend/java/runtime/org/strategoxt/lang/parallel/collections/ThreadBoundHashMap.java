package org.strategoxt.lang.parallel.collections;

import org.spoofax.interpreter.library.ssl.StrategoHashMap;
import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * A stratego hash table bound to a particular thread.
 * 
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class ThreadBoundHashMap extends StrategoHashMap implements IThreadBoundCollection {

	private static final long serialVersionUID = 964863361598769442L;
	
	private final Thread thread;

	public ThreadBoundHashMap(int initialSize, int maxLoad) {
		super(initialSize, maxLoad);
		Thread thread = null;
		assert (thread = Thread.currentThread()) != null;
		this.thread = thread;
	}
	
	@Override
	public IStrategoTerm put(IStrategoTerm key, IStrategoTerm value) {
		assert thread == Thread.currentThread();
		return super.put(key, value);
	}

}
