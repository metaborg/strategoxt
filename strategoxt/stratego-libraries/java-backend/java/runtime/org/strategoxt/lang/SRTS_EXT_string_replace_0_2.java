package org.strategoxt.lang;

import static org.spoofax.interpreter.core.Tools.asJavaString;
import static org.spoofax.interpreter.core.Tools.isTermString;

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
        return callStatic(context, current, before, after);
    }

    public static IStrategoTerm callStatic(Context context, IStrategoTerm current, IStrategoTerm before, IStrategoTerm after) {

        if (isTermString(current) && isTermString(before) && isTermString(after)) {
            return helper(context.getFactory(), current, asJavaString(before), asJavaString(after));
        } else {
            return null;
        }
    }

    private static IStrategoTerm helper(ITermFactory factory, IStrategoTerm current,
                                        String before, String after) {
        if (before.equals("")) {
            return current;
        }

        String input = asJavaString(current);
        String result = input.replace(before, after);
        if (input.equals(result)) {
            return current;
        } else {
            return factory.makeString(result);
        }
    }
}
