package org.metaborg.runtime.task.interop;

import java.util.Map.Entry;
import java.util.Set;

import org.metaborg.runtime.task.TaskManager;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

public class task_api_get_all_results_0_0 extends Strategy {
	public static task_api_get_all_results_0_0 instance = new task_api_get_all_results_0_0();

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current) {
		final ITermFactory factory = context.getFactory();
		IStrategoList list = factory.makeList();
		Set<Entry<IStrategoInt, IStrategoList>> results = TaskManager.getInstance().getCurrent().getAllResults();
		
		for(Entry<IStrategoInt, IStrategoList> result : results) {
			list = factory.makeListCons(factory.makeTuple(result.getKey(), result.getValue()), list);
		}
		
		return list;
	}
}
