package org.strategoxt.lang;

import static org.strategoxt.lang.Term.*;

import java.util.concurrent.Callable;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.FutureTask;

import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class StackSaver extends SRTS_all { // DEBUG: SRTS_all superclass
	
	public static int MAX_DEPTH = 1000;
	
	private static int activeThreadDepth; // FIXME: not thread-safe
 	
	private final Strategy strategy;
	
	public StackSaver(Strategy s) {
		strategy = s;
	}
	
	public static boolean isNeededFor(Context context) {
		int depth = context.getTraceDepth(true);
		return depth - activeThreadDepth > MAX_DEPTH;
	}
	
	// TODO: implement other invoke() overloads
	
	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current) {
		if (isNeededFor(context)) {
			return invokeStackFriendly(context, current, NO_STRATEGIES, NO_TERMS);
		} else {
			return super.invoke(context, current);
		}
	}
	
	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s) {
		if (isNeededFor(context)) {
			return invokeStackFriendly(context, current, new Strategy[] { s }, NO_TERMS);
		} else {
			return super.invoke(context, current, s);
		}
	}
	
	/**
	 * Invokes this strategy in a new thread, and then joins it waiting for the result.
	 * This way, the strategy has a clean operand stack to its disposal,
	 * reducing the risk of throwing a StackOverflowError.
	 * 
	 * @return The resulting term, or null in case of failure.
	 */
	public IStrategoTerm invokeStackFriendly(final Context context, final IStrategoTerm current, final Strategy[] s, final IStrategoTerm[] t) {
		int startDepth = context.getTraceDepth(true);
		activeThreadDepth += startDepth;
		final FutureTask<IStrategoTerm> result = new FutureTask<IStrategoTerm>(new Callable<IStrategoTerm>() {
			public IStrategoTerm call() throws Exception {
				return strategy.invokeDynamic(context, current, s, t);
			}
    	});
		new Thread(result).start();
		try {
			return result.get();
		} catch (ExecutionException e) {
			try {
				throw e.getCause();
			} catch (StrategoErrorExit f) {
				throw new StrategoErrorExit(f.getMessage(), f.getTerm(), f.getTrace(), f.getCause());
			} catch (StrategoExit f) {
				throw new StrategoExit(f.getValue(), e.getCause());
			} catch (StrategoException f) {
				throw new StrategoException(f.getMessage(), e.getCause());
			} catch (Throwable f) {
				throw new RuntimeException(e.getCause());
			}
		} catch (InterruptedException e) {
			throw new RuntimeException(e);
		} finally {
			activeThreadDepth -= startDepth;
		}
    }
}
