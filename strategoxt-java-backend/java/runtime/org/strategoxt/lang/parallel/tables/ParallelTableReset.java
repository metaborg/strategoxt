package org.strategoxt.lang.parallel.tables;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.ssl.SSL_hashtable_reset;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.parallel.libstratego_parallel;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class ParallelTableReset extends SSL_hashtable_reset {
	
	private final ParallelTableLibrary library;

	protected ParallelTableReset(ParallelTableLibrary library) {
		this.library = library;
	}
	
	@Override
	public boolean call(IContext env, Strategy[] sargs, IStrategoTerm[] targs)
			throws InterpreterException {
		
		if (!libstratego_parallel.isActive()) {
			synchronized (library.getSyncRoot()) {
				return super.call(env, sargs, targs);
			}
		} else {
			return super.call(env, sargs, targs);
		}
	}
}
