package org.strategoxt.lang.parallel.collections;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.core.Tools;
import org.spoofax.interpreter.library.ssl.SSL_hashtable_create;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.parallel.libstratego_parallel;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class ParallelSetCreate extends SSL_hashtable_create {

	protected ParallelSetCreate() {}
	
	@Override
	public boolean call(IContext env, Strategy[] sargs, IStrategoTerm[] targs)
			throws InterpreterException {
		
		if (!libstratego_parallel.isActive()) {
	        if (!(Tools.isTermInt(targs[0])))
	            return false;
	        if (!(Tools.isTermInt(targs[1])))
	            return false;

	        int initialSize = ((IStrategoInt) targs[0]).intValue();
	        int maxLoad = ((IStrategoInt) targs[1]).intValue();

	        IStrategoTerm table = new ThreadBoundSet(initialSize, maxLoad);
	        
	        env.setCurrent(table);
	        return true;
		} else {
			return super.call(env, sargs, targs);
		}
	}
	
}
