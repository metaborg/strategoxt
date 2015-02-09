package org.strategoxt.strj.util;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.Term;

public abstract class Abstract_Unify_and_sort extends AbstractPrimitive {

	public Abstract_Unify_and_sort(String name) {
		super(name, 0, 0);
	}

	protected abstract Comparator<IStrategoTerm> getSortComparator();
	protected Comparator<IStrategoTerm> getUnifyComparator() {
		return getSortComparator();
	}
	
	@Override
	public boolean call(IContext arg0, Strategy[] arg1, IStrategoTerm[] arg2) throws InterpreterException {
		if (!Term.isTermList(arg0.current())) {
			return false;
		}
		final IStrategoList list = (IStrategoList) arg0.current();
		
		if (list.isEmpty()) {
			return true;
		}
		
		
		final ArrayList<IStrategoTerm> newList = new ArrayList<IStrategoTerm>(list.size());
		for (IStrategoTerm term : list) {
			newList.add(term);
		}
		
		
		Collections.sort(newList, this.getSortComparator());
		
		final ArrayList<IStrategoTerm> singletonList = new ArrayList<IStrategoTerm>(newList.size());
		singletonList.add(newList.get(0));
		
		final Comparator<IStrategoTerm> unifyComparator = this.getUnifyComparator();
		
		int index = 0;
		for (int i = 1; i < newList.size(); i++) {
			if (unifyComparator.compare(newList.get(index), newList.get(i)) != 0) {
				singletonList.add(newList.get(i));
				index = i;
			}
		}
		
		arg0.setCurrent(arg0.getFactory().makeList(singletonList));
		return true;
	}

}
