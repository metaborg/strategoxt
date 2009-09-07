package org.strategoxt.lang.parallel.collections;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.InteropContext;
import org.strategoxt.lang.parallel.libstratego_parallel.libstratego_parallel;
import org.strategoxt.lang.parallel.libstratego_parallel.ParallelContext;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class ParallelRead extends AbstractPrimitive {
	
	private final ParallelCollectionLibrary library;
	
	private final AbstractPrimitive primitive;
	
	private final int tableIndex;
	
	public ParallelRead(ParallelCollectionLibrary library, AbstractPrimitive primitive, int tableIndex) {
		super(primitive.getName(), primitive.getSArity(), primitive.getTArity());
		this.library = library;
		this.primitive = primitive;
		this.tableIndex = tableIndex;
	}
	
	public ParallelRead(ParallelCollectionLibrary library, AbstractPrimitive primitive) {
		this(library, primitive, 0);
	}
	
	@Override
	public boolean call(IContext env, Strategy[] sargs, IStrategoTerm[] targs)
			throws InterpreterException {
		
		if (!libstratego_parallel.isActive()) {
			return primitive.call(env, sargs, targs);
		} else if (targs[tableIndex] instanceof IThreadBoundCollection) {
			return primitive.call(env, sargs, targs);
		} else {
			// TODO: Speculative reading
			ParallelContext context = (ParallelContext) ((InteropContext) env).getContext();
			if (!context.getJob().isFocusJob())
				context.waitForFocus();
			
			synchronized (library.getSyncRoot()) {
				return primitive.call(env, sargs, targs); 
			}
		}
	}

}
