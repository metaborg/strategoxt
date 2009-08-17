package org.strategoxt.lang.parallel.tables;

import org.spoofax.NotImplementedException;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.ssl.SSL_hashtable_create;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.parallel.libstratego_parallel;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class ParallelTableCreate extends SSL_hashtable_create {

	protected ParallelTableCreate(ParallelTableLibrary library) {
		super(library.getSSLLibrary());
	}
	
	@Override
	public boolean call(IContext env, Strategy[] sargs, IStrategoTerm[] targs)
			throws InterpreterException {
		
		if (!libstratego_parallel.isActive()) {
			// TODO: new thread-bound table 
			throw new NotImplementedException();
		} else {
			return super.call(env, sargs, targs);
		}
	}
	
}
