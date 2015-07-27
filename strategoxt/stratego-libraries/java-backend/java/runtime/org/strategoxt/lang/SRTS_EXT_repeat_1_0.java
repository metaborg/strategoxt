package org.strategoxt.lang;

import java.util.HashSet;
import java.util.Set;

import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class SRTS_EXT_repeat_1_0 extends RegisteringStrategy {

	private static final int INSANE_LOOP_COUNT = 100000;
	
	private static SRTS_EXT_repeat_1_0 instance = new SRTS_EXT_repeat_1_0();
	
    public void registerImplementators(StrategyCollector collector) { 
      collector.registerStrategyImplementator("SRTS_EXT_repeat_1_0", instance);
    }
	
    public void bindExecutors(StrategyCollector collector) { 
    }
	
	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s) {
		IStrategoTerm result = current;
		IStrategoTerm next = s.invoke(context, result);
		
		int count = 0;
		
		while (next != null) {
			if (++count > INSANE_LOOP_COUNT)
				return invokeSuspiciously(context, result, s);
			result = next;
			next = s.invoke(context, result);
		}

		return result;
	}

	private IStrategoTerm invokeSuspiciously(Context context, IStrategoTerm next, Strategy s) {
		Set<IStrategoTerm> valuesSeen = new HashSet<IStrategoTerm>();
		IStrategoTerm result;
		do {
			result = next;
			next = s.invoke(context, result);
			if (!valuesSeen.add(next))
				throw new StrategoException("Infinite loop detected in repeat strategy");
		} while (next != null);
		return result;
	}
}
