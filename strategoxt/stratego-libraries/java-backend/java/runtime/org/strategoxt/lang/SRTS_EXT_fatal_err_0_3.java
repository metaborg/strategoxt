package org.strategoxt.lang;

import static org.spoofax.interpreter.terms.IStrategoTerm.*;
import static org.spoofax.terms.util.TermUtils.*;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.util.TermUtils;
import org.strategoxt.stratego_lib.concat_strings_0_0;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class SRTS_EXT_fatal_err_0_3 extends Strategy {
	public static SRTS_EXT_fatal_err_0_3 instance = new SRTS_EXT_fatal_err_0_3();
	
	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm message, IStrategoTerm term, IStrategoTerm trace) {
		if (TermUtils.isList(message))
			message = concat_strings_0_0.instance.invoke(context, message);
		if (message == null || !isString(message))
			return null;
		
		context.popOnExit(false);
		if (isTuple(term) && term.getSubtermCount() == 0) {
			throw new StrategoErrorExit(toJavaString(message));
		} else {
			if(TermUtils.isList(trace)){
				throw new StrategoErrorExit(toJavaString(message), term, toList(trace));
			}else{
				throw new StrategoErrorExit(toJavaString(message), term);
			}
		}
	}
}
