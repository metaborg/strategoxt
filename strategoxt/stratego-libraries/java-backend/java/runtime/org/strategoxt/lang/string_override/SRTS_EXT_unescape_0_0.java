package org.strategoxt.lang.string_override;

import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

import static org.spoofax.interpreter.core.Tools.asJavaString;
import static org.spoofax.interpreter.core.Tools.isTermString;

/**
 * @author Jeff Smits <j.smits@tudelft.nl>
 */
@SuppressWarnings("unused")
public class SRTS_EXT_unescape_0_0 extends Strategy {

    public static SRTS_EXT_unescape_0_0 instance = new SRTS_EXT_unescape_0_0();

    @Override
    public IStrategoTerm invoke(Context context, IStrategoTerm current) {

        if (isTermString(current)) {
            return invoke(context.getFactory(), (IStrategoString) current);
        } else {
            return null;
        }
    }

    private IStrategoTerm invoke(ITermFactory factory, IStrategoString current) {
        String input = asJavaString(current);
        String result = input
                .replaceAll("\\\\([\"'\\\\])", "$1")
                .replace("\\r", "\r")
                .replace("\\n", "\n")
                .replace("\\t", "\t");
        //noinspection StringEquality
        if (input == result) {
            return current;
        } else {
            return factory.makeString(result);
        }
    }
}
