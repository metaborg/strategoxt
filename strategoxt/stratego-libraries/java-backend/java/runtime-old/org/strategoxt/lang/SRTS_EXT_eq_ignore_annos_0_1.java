package org.strategoxt.lang;

import static org.spoofax.interpreter.terms.IStrategoTerm.*;
import static org.strategoxt.lang.Term.*;

import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoConstructor;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoReal;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

/**
 * A strategy that tests for term equality, ignoring all annotations.
 * 
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class SRTS_EXT_eq_ignore_annos_0_1 extends RegisteringStrategy {
	
	public static SRTS_EXT_eq_ignore_annos_0_1 instance = new SRTS_EXT_eq_ignore_annos_0_1();
	
	@Override
	public void registerImplementators(StrategyCollector collector) {
		collector.registerStrategyImplementator("SRTS_EXT_eq_ignore_annos_0_1", instance);
	}
	
	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm t1, IStrategoTerm t2) {
		return equalsIgnoreAnnos(context, t1, t2) ? t1 : null;
	}
	
	private static boolean equalsIgnoreAnnos(Context context, IStrategoTerm t1, IStrategoTerm t2) {
		if (t1 == t2) return true;
		int termType = t1.getTermType();
		int type2 = t2.getTermType();
		if (termType != type2) return false;
		
		switch (termType) {
			case APPL:
				return equalsIgnoreAnnosAppl(context, (IStrategoAppl) t1, (IStrategoAppl) t2);
			case LIST: case TUPLE:
				return equalsIgnoreAnnosList(context, t1, t2);
			case INT:
				return ((IStrategoInt) t1).intValue() == ((IStrategoInt) t2).intValue();
			case REAL:
				return ((IStrategoReal) t1).realValue() == ((IStrategoReal) t2).realValue();
			case STRING:
				return ((IStrategoString) t1).stringValue().equals(((IStrategoString) t2).stringValue());
			case BLOB:
				ITermFactory factory = context.getFactory();
				IStrategoList empty = factory.makeList(NO_TERMS);
				return factory.annotateTerm(t1, empty).match(factory.annotateTerm(t2, empty));
			default:
				throw new IllegalStateException("Unknown term type: " + termType);
		}
	}

	private static boolean equalsIgnoreAnnosAppl(Context context, IStrategoAppl appl1, IStrategoAppl appl2) {
		IStrategoConstructor cons1 = appl1.getConstructor();
		IStrategoConstructor cons2 = appl2.getConstructor();
		if (cons1 != cons2 && !cons1.match(cons2))
			return false;
		return equalsIgnoreAnnosList(context, appl1, appl2);
	}

	private static boolean equalsIgnoreAnnosList(Context context, IStrategoTerm term1, IStrategoTerm term2) {
		IStrategoTerm[] children1 = term1.getAllSubterms();
		IStrategoTerm[] children2 = term2.getAllSubterms();
		if (children1.length != children2.length)
			return false;
		for (int i = 0; i < children1.length; i++) {
			if (!equalsIgnoreAnnos(context, children1[i], children2[i]))
				return false;
		}
		return true;
	}
}
