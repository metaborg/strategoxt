package org.strategoxt.lang.typesmart;

import java.math.BigInteger;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.stratego.CallT;
import org.spoofax.interpreter.stratego.SDefT;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoConstructor;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
import org.spoofax.terms.TermFactory;
import org.strategoxt.HybridInterpreter;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.StrategoException;

/**
 * When constructing an application term, this term factory looks for the existing of a type-smart
 * constructor. If such constructor exists, it is used for the construction of the term. Otherwise,
 * a standard build is performed using the base factory.
 * 
 * @author Sebastian Erdweg
 * @author Vlad Vergu
 */
public class TypesmartTermFactory extends AWrappedTermFactory {

    private final static boolean DEBUG_TYPESMART = true;

    private final Context compiledContext;
    private IContext context;

    public int smartCalls = 0;
    public BigInteger totalTimeMillis = BigInteger.ZERO;

    public TypesmartTermFactory(ITermFactory baseFactory, Context compiledContext) {
	super(baseFactory.getDefaultStorageType(), getStandardFactory(baseFactory));
	this.compiledContext = compiledContext;
    }

    private static ITermFactory getStandardFactory(ITermFactory baseFactory) {
	if (baseFactory instanceof TypesmartTermFactory)
	    return getStandardFactory(((TypesmartTermFactory) baseFactory).getWrappedFactory());
	return baseFactory;
    }

    public IStrategoAppl makeUnsafeAppl(IStrategoConstructor ctr, IStrategoTerm[] kids,
	    IStrategoList annotations) {
	return super.makeAppl(ctr, kids, annotations);
    }

    @Override
    public IStrategoAppl makeAppl(IStrategoConstructor ctr, IStrategoTerm[] kids,
	    IStrategoList annotations) {
	if (context == null) {
	    context = HybridInterpreter.getContext(compiledContext);
	    if (context == null) {
		return makeUnsafeAppl(ctr, kids, annotations);
	    }
	}

	String smartCtrName = "smart-" + ctr.getName();
	smartCtrName = smartCtrName.replace("-", "_") + "_0_" + kids.length;

	try {
	    SDefT sdef = context.lookupSVar(smartCtrName);
	    // no check defined
	    if (sdef == null) {
		return makeUnsafeAppl(ctr, kids, annotations);
	    }
	    System.out.println("Typesmart " + ctr);

	    // apply smart constructor to argument terms
	    rebuildEmptyLists(kids);

	    CallT smartCall = new CallT(smartCtrName, new Strategy[0], new IStrategoTerm[0]);
	    IStrategoTerm currentWas = context.current();
	    IStrategoTerm t;
	    try {
		context.setFactory(getWrappedFactory());

		smartCalls++;
		long start = System.currentTimeMillis();
		boolean smartOk = smartCall.evaluateWithArgs(context, new Strategy[0], kids);
		long end = System.currentTimeMillis();
		totalTimeMillis = totalTimeMillis.add(BigInteger.valueOf(end - start));
		if (end - start > 100) {
		    System.out.println(ctr.getName());
		    System.out.println(end - start);
		}

		if (!smartOk) {
		    IStrategoTerm failedTerm = makeUnsafeAppl(ctr, kids, annotations);
		    System.err.println("*****FAIL " + failedTerm);
		    throw new StrategoException("Smart constructor failed for: "
			    + annotateTerm(failedTerm, makeList()));
		}

		t = context.current();
	    } finally {
		context.setFactory(this);
		context.setCurrent(currentWas);
	    }

	    if (!(t instanceof IStrategoAppl))
		throw new StrategoException(
			"Smart constructor should have returned an application term, but was: " + t);

	    IStrategoAppl appl = (IStrategoAppl) t;
	    if (!appl.getConstructor().equals(ctr))
		throw new StrategoException(
			"Smart constructor should have returned an application term with constructor "
				+ ctr + ", but was: " + t);

	    if (DEBUG_TYPESMART && TypesmartSortAttachment.getSort(appl) == null)
		throw new StrategoException(
			"Typesmart constructor failed to install syntax-sort attachment: " + t);

	    return appl;
	} catch (InterpreterException e) {
	    throw new StrategoException("Type-unsafe constructor application " + ctr, e);
	}
    }

    protected void rebuildEmptyLists(IStrategoTerm[] terms) {
	for (int i = 0; i < terms.length; i++)
	    if (terms[i] instanceof IStrategoAppl
		    && TypesmartSortAttachment.getSort(terms[i]) == null) {
		IStrategoAppl appl = (IStrategoAppl) terms[i];
		terms[i] = makeAppl(appl.getConstructor(), appl.getAllSubterms(),
			appl.getAnnotations());
		if (!terms[i].toString().equals("Op(\"Nil\",[])"))
		    System.err.println("unexpected  rebuilding");
	    } else
		terms[i] = terms[i];
    }

    /**
     * Identical to {@link TermFactory#annotateTerm(IStrategoTerm, IStrategoList)} except that it
     * retains sort attachments.
     */
    @Override
    public IStrategoTerm annotateTerm(IStrategoTerm term, IStrategoList annotations) {
	IStrategoTerm result = super.annotateTerm(term, annotations);
	TypesmartSortAttachment attach = TypesmartSortAttachment.get(term);
	if (attach != null)
	    TypesmartSortAttachment.put(result, attach);

	return result;
    }

    /**
     * 
     * @deprecated Use {@link #getWrappedFactory()} instead.
     */
    @Deprecated
    public ITermFactory getBaseFactory() {
	return getWrappedFactory();
    }

    public ITermFactory getFactoryWithStorageType(int storageType) {
	assert getDefaultStorageType() <= storageType;
	return this;
    }

}
