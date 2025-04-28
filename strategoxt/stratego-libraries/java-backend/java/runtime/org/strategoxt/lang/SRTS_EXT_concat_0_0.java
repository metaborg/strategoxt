package org.strategoxt.lang;

import static org.spoofax.interpreter.terms.IStrategoTerm.*;

import java.util.LinkedList;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

/**
 * A stack-efficient version of the concat strategy, which concatenates
 * a list of lists into a single list.
 * 
 * The annotations of the input list term are preserved. The annotations
 * of the sublists are discarded. When the list contains an element that
 * is not a list, the strategy fails.
 * 
 * This method has a time complexity of O(n) (traversing the list twice)
 * and a space complexity of O(n), where n is the total number of
 * elements in all sublists of the list term.
 */
public class SRTS_EXT_concat_0_0 extends Strategy {
	
	public static SRTS_EXT_concat_0_0 instance = new SRTS_EXT_concat_0_0();
	
	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current) {
		return callStatic(context, current);
	}

	public static IStrategoTerm callStatic(Context context, IStrategoTerm current) {
	    if (current.getTermType() != LIST) {
	        return null;
	    }
	    ITermFactory factory = context.getFactory();
	    IStrategoList list = (IStrategoList)current;
	    IStrategoList annos = list.getAnnotations();
	    
	    // Build a doubly linked list with the terms. O(n)
	    LinkedList<IStrategoTerm> tempList = new LinkedList<IStrategoTerm>();
	    for (IStrategoTerm t : list) {
	    	if (t.getTermType() != LIST) {
				// The term must be a list...
				return null;
	    	}
	    	
	        IStrategoList elem_list = (IStrategoList) t;
            for (IStrategoTerm lt : elem_list) {
            	tempList.add(lt);
            }
	    }
	    
	    // Build the Stratego list from tail to head. O(n)
	    IStrategoList result = factory.makeList();
	    while (!tempList.isEmpty())
	    {
	    	IStrategoTerm lt = tempList.removeLast();
	    	result = factory.makeListCons(lt, result);
	    }

	    // NOTE: The Stratego implementation of `concat` preserves the
 		// wrong annotation. See: <http://yellowgrass.org/issue/StrategoXT/905>
 		// This is fixed in this Java implementation, making the two
 		// implementations not entirely equal.
 		return factory.annotateTerm(result, annos);
	}
}
