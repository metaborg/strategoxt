package org.strategoxt.lang;

import static org.spoofax.interpreter.core.Tools.*;
import static org.spoofax.interpreter.terms.IStrategoTerm.*;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.stratego_lib.concat_strings_0_0;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class SRTS_EXT_fatal_err_0_3 extends Strategy {
	public static SRTS_EXT_fatal_err_0_3 instance = new SRTS_EXT_fatal_err_0_3();
	
	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm message, IStrategoTerm term, IStrategoTerm trace) {
		return callStatic(context, current, message, term, trace);
	}

	public static IStrategoTerm callStatic(Context context, IStrategoTerm current, IStrategoTerm message, IStrategoTerm term, IStrategoTerm trace) {
		if (message.getTermType() == LIST)
			message = concat_strings_0_0.instance.invoke(context, message);
		if (message == null || message.getTermType() != STRING)
			return null;
		
		context.popOnExit(false);
		if (term.getTermType() == TUPLE && term.getSubtermCount() == 0) {
			throw new StrategoErrorExit(asJavaString(message));
		} else {
			if(trace.getTermType() == LIST){
				throw new StrategoErrorExit(asJavaString(message), term, (IStrategoList) trace);
			}else{
				throw new StrategoErrorExit(asJavaString(message), term);
			}
		}
	}
}
