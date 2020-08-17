package org.strategoxt.lang;

import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * A strategy that tests for term equality, ignoring all annotations.
 * 
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class SRTS_EXT_eq_ignore_annos_0_1 extends Strategy {

    public static SRTS_EXT_eq_ignore_annos_0_1 instance = new SRTS_EXT_eq_ignore_annos_0_1();

    @Override public IStrategoTerm invoke(Context context, IStrategoTerm t1, IStrategoTerm t2) {
        return TermEqualityUtil.equalsIgnoreAnnos(t1, t2, context.getFactory()) ? t1 : null;
    }
}
