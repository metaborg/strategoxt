package org.strategoxt.lang;

import static org.strategoxt.lang.Term.NO_TERMS;

import org.spoofax.interpreter.terms.*;

public class TermEqualityUtil {

    /**
     * Check if the two terms are equal (value wise), ignoring annotations.
     * 
     * @param factory
     *            used to annotate blobs with an empty list before using the blob's match function to test equality.
     * @return true if the two terms are equal, regardless of what they are annotated with.
     */
    public static boolean equalsIgnoreAnnos(IStrategoTerm t1, IStrategoTerm t2, ITermFactory factory) {
        if(t1 == t2)
            return true;
        TermType termType = t1.getType();
        TermType type2 = t2.getType();
        if(termType != type2)
            return false;

        switch(termType) {
            case APPL:
                return equalsIgnoreAnnosAppl((IStrategoAppl) t1, (IStrategoAppl) t2, factory);
            case LIST:
            case TUPLE:
                return equalsIgnoreAnnosList(t1, t2, factory);
            case INT:
                return ((IStrategoInt) t1).intValue() == ((IStrategoInt) t2).intValue();
            case REAL:
                return ((IStrategoReal) t1).realValue() == ((IStrategoReal) t2).realValue();
            case STRING:
                return ((IStrategoString) t1).stringValue().equals(((IStrategoString) t2).stringValue());
            case BLOB:
                IStrategoList empty = factory.makeList(NO_TERMS);
                return factory.annotateTerm(t1, empty).match(factory.annotateTerm(t2, empty));
            default:
                throw new IllegalStateException("Unknown term type: " + termType);
        }
    }

    private static boolean equalsIgnoreAnnosAppl(IStrategoAppl appl1, IStrategoAppl appl2, ITermFactory factory) {
        IStrategoConstructor cons1 = appl1.getConstructor();
        IStrategoConstructor cons2 = appl2.getConstructor();
        if(cons1 != cons2 && !cons1.match(cons2))
            return false;
        return equalsIgnoreAnnosList(appl1, appl2, factory);
    }

    private static boolean equalsIgnoreAnnosList(IStrategoTerm term1, IStrategoTerm term2, ITermFactory factory) {
        IStrategoTerm[] children1 = term1.getAllSubterms();
        IStrategoTerm[] children2 = term2.getAllSubterms();
        if(children1.length != children2.length)
            return false;
        for(int i = 0; i < children1.length; i++) {
            if(!equalsIgnoreAnnos(children1[i], children2[i], factory))
                return false;
        }
        return true;
    }
}
