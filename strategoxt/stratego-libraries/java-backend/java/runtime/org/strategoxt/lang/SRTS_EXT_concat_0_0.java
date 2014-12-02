package org.strategoxt.lang;

import static org.spoofax.interpreter.terms.IStrategoTerm.*;
import static org.strategoxt.lang.Term.*;

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
 * Under the assumption that {@link ITermFactory#makeList() ITermFactory.makeList}
 * method is O(n), this strategy has a complexity of O(n) where n is the
 * total number of elements in all sublists of the list term. 
 * 
 * @author Daniel Pelsmaeker <virtlink@gmail.com>
 */
public class SRTS_EXT_concat_0_0 extends Strategy {
	
	public static SRTS_EXT_concat_0_0 instance = new SRTS_EXT_concat_0_0();
	
	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current) {
		if (current.getTermType() != LIST)
			return null;
		
		ITermFactory factory = context.getFactory();
		IStrategoList list = (IStrategoList) current;
		IStrategoList annos = list.getAnnotations();
		
		int size = countSubterms(list);
		if (size == -1)
			return null; // Fail.
		
		IStrategoTerm[] newlistItems = new IStrategoTerm[size];
		copySubterms(list, newlistItems);
		
		// NOTE: The Stratego implementation of `concat` preserves the
		// wrong annotation. See: <http://yellowgrass.org/issue/StrategoXT/905>
		// This is fixed in this Java implementation, making the two
		// implementations not entirely equal.
		IStrategoList newlist = factory.makeList(newlistItems, annos);
		
		assert newlist != null;
		assert newlist.size() == size;
		return newlist;
	}
	
	/**
	 * Counts the number of terms in the sublists of the specified list.
	 * 
	 * This is an O(n) operation, where n is the number of elements
	 * in the list.
	 * 
	 * @param list The list with sublists.
	 * @return The number of terms in all sublists of the specified list;
	 * or -1 when the number of terms could not be determined (e.g. the list
	 * contains a non-list element).
	 */
	private static int countSubterms(IStrategoList list) {
		int count = 0;
		while (!list.isEmpty()) {
			IStrategoTerm head = list.head();
			
			if (head.getTermType() != LIST)
				// The head is not a list...
				return -1;
			
			IStrategoList headList = (IStrategoList)head;
			count += headList.size();
			list = list.tail();
		}
		assert count >= 0;
		return count;
	}
	
	/**
	 * Copies all the terms in the sublists of the specified list to the specified array.
	 * 
	 * This is an O(n) operation, where n is the total number of elements
	 * in the sublists of the list.
	 * 
	 * @param list The list with sublists.
	 * @param newlistItems The array to copy the terms to.
	 */
	private static void copySubterms(IStrategoList list, IStrategoTerm[] newlistItems) {
		assert list != null;
		assert newlistItems != null;
		
		int index = 0;
		while (!list.isEmpty()) {
			IStrategoList headList = (IStrategoList)list.head();
			
			while (!headList.isEmpty()) {
				IStrategoTerm headListHead = headList.head();
				assert headListHead != null;
				headList = headList.tail();
				
				newlistItems[index] = headListHead;
				index++;
			}
			
			list = list.tail();
		}
		assert index == newlistItems.length;
	}

}
