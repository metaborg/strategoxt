package org.strategoxt.lang;

import java.util.ArrayList;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;

/*
 * Optimization of `flatten-list'.
 *
 * If b is the size of each list and d the depth of the tree, then:
 * The runtime complexity of this strategy is : O(b^d)
 * The runtime complexity of flatten-list  is : O(d*b^d)
 *
 * The constant factor allowed by the big-O notation should be similar for
 * both implementations (examine code) so it is expected that this strategy
 * is typically d times faster than flatten-list.
 *
 * (In practice this seems to come down to a factor 3 speedup.) 
 *
 * @author Tobi Vollebregt
 */
public class SRTS_EXT_flatten_list_0_0 extends Strategy {

	public static SRTS_EXT_flatten_list_0_0 instance = new SRTS_EXT_flatten_list_0_0();

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current) {

		if (current.getTermType() != IStrategoTerm.LIST) {
			return null;
		}

		ArrayList<IStrategoTerm> newList = new ArrayList<IStrategoTerm>();
		ArrayList<IStrategoTerm> stack = new ArrayList<IStrategoTerm>();

		stack.add(current);

		while (!stack.isEmpty()) {
			current = stack.remove(stack.size() - 1);

			if (current.getTermType() == IStrategoTerm.LIST) {
				IStrategoList list = (IStrategoList)current;
				final int oldsize = stack.size();
				while (!list.isEmpty()) {
					stack.add(list.head());
					list = list.tail();
				}
				reverse(stack, oldsize, stack.size());
			}
			else {
				newList.add(current);
			}
		}

		current = context.getFactory().makeList(newList);
		return current;
	}

	private void reverse(ArrayList<IStrategoTerm> array, int start, int end) {
		final int length = (end - start) / 2;
		for (int i = 0; i < length; ++i) {
			swap(array, start + i, end - 1 - i);
		}
	}

	private void swap(ArrayList<IStrategoTerm> array, int i, int j) {
		final IStrategoTerm tmp = array.get(i);
		array.set(i, array.get(j));
		array.set(j, tmp);
	}
}
