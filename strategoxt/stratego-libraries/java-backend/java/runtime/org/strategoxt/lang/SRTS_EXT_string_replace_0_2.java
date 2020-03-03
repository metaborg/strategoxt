package org.strategoxt.lang;

import static org.spoofax.terms.util.TermUtils.isString;
import static org.spoofax.terms.util.TermUtils.toJavaString;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class SRTS_EXT_string_replace_0_2 extends Strategy {
	
	public static SRTS_EXT_string_replace_0_2 instance = new SRTS_EXT_string_replace_0_2();

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current,
			IStrategoTerm before, IStrategoTerm after) {
		
		if (isString(current) && isString(before) && isString(after)) {
			return invoke(context.getFactory(), current, toJavaString(before), toJavaString(after));
		} else {
			return null;
		}
	}

	private IStrategoTerm invoke(ITermFactory factory, IStrategoTerm current,
			String before, String after) {
                if(before.equals("")) {
			return current;
                }
		
		String input = toJavaString(current);
		String result = input.replace(before, after);
		if (input.equals(result)) {
			return current;
		} else {
			return factory.makeString(result);
		}
	}
}
