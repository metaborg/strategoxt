package org.strategoxt.lang.parallel.collections;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.core.Tools;
import org.spoofax.interpreter.library.ssl.SSL_indexedSet_create;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.parallel.stratego_parallel.stratego_parallel;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class ParallelTableCreate extends SSL_indexedSet_create {

	protected ParallelTableCreate() {}
	
	@Override
	public boolean call(IContext env, Strategy[] sargs, IStrategoTerm[] targs)
			throws InterpreterException {
		
		if (!stratego_parallel.isActive()) {
	        if (!(Tools.isTermInt(targs[0])))
	            return false;
	        if (!(Tools.isTermInt(targs[1])))
	            return false;

	        int initialSize = ((IStrategoInt) targs[0]).intValue();
	        int maxLoad = ((IStrategoInt) targs[1]).intValue();

	        IStrategoTerm table = new ThreadBoundHashMap(initialSize, maxLoad);
	        
	        env.setCurrent(table);
	        return true;
		} else {
			return super.call(env, sargs, targs);
		}
	}
	
}
