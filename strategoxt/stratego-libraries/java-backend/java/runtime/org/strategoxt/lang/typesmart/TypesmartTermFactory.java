package org.strategoxt.lang.typesmart;

import java.math.BigInteger;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.stratego.CallT;
import org.spoofax.interpreter.stratego.SDefT;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoConstructor;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoPlaceholder;
import org.spoofax.interpreter.terms.IStrategoReal;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;
import org.spoofax.interpreter.terms.ITermFactory;
import org.spoofax.terms.AbstractTermFactory;
import org.spoofax.terms.TermFactory;
import org.strategoxt.HybridInterpreter;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.StrategoException;

/**
 * When constructing an application term, this term factory looks for the
 * existing of a type-smart constructor. If such constructor exists, it is used
 * for the construction of the term. Otherwise, a standard build is performed
 * using the base factory.
 * 
 * @author Sebastian Erdweg
 */
public class TypesmartTermFactory extends AbstractTermFactory {

	private final static boolean DEBUG_TYPESMART = true;

	private final ITermFactory baseFactory;
	private final Context compiledContext;
	private IContext context;

	public int smartCalls = 0;
	public BigInteger totalTimeMillis = BigInteger.ZERO;


	public TypesmartTermFactory(ITermFactory baseFactory, Context compiledContext) {
		super(baseFactory.getDefaultStorageType());
		this.baseFactory = baseFactory;
		this.compiledContext = compiledContext;
	}

	@Override
	public IStrategoAppl makeAppl(IStrategoConstructor ctr,
			IStrategoTerm[] terms, IStrategoList annotations) {

		if (context == null) {
			context = HybridInterpreter.getContext(compiledContext);
			if(context == null) {
				return baseFactory.makeAppl(ctr, terms, annotations);
			}
		}

		String smartCtrName = "smart-" + ctr.getName();
		smartCtrName = smartCtrName.replace("-", "_") + "_0_" + terms.length;

		try {
			SDefT sdef = context.lookupSVar(smartCtrName);

			// no check defined
			if (sdef == null){
				return baseFactory.makeAppl(ctr, terms, annotations);
			}
			// System.out.println("Typesmart " + ctr);

			// apply smart constructor to argument terms
			rebuildEmptyLists(terms);

			CallT smartCall = new CallT(smartCtrName, new Strategy[0],
					new IStrategoTerm[0]);
			IStrategoTerm currentWas = context.current();
			IStrategoTerm t;
			try {
				context.setFactory(baseFactory);

				smartCalls++;
				long start = System.currentTimeMillis();
				boolean smartOk = smartCall.evaluateWithArgs(context,
						new Strategy[0], terms);
				long end = System.currentTimeMillis();
				totalTimeMillis = totalTimeMillis.add(BigInteger.valueOf(end
						- start));
				if (end - start > 100) {
					System.out.println(ctr.getName());
					System.out.println(end - start);
				}

				if (!smartOk) {
					IStrategoTerm failedTerm = baseFactory.makeAppl(ctr, terms,
							annotations);
					System.err.println("*****FAIL " + failedTerm);
					throw new StrategoException(
							"Smart constructor failed for: "
									+ TypeSmartATermCommands
											.stripAnnos(failedTerm));
				}

				t = context.current();
			} finally {
				context.setFactory(this);
				context.setCurrent(currentWas);
			}

			if (!(t instanceof IStrategoAppl))
				throw new StrategoException(
						"Smart constructor should have returned an application term, but was: "
								+ t);

			IStrategoAppl appl = (IStrategoAppl) t;
			if (!appl.getConstructor().equals(ctr))
				throw new StrategoException(
						"Smart constructor should have returned an application term with constructor "
								+ ctr + ", but was: " + t);

			if (DEBUG_TYPESMART
					&& TypesmartSortAttachment.getSort(appl) == null)
				throw new StrategoException(
						"Typesmart constructor failed to install syntax-sort attachment: "
								+ t);

			return appl;
		} catch (InterpreterException e) {
			throw new StrategoException("Type-unsafe constructor application "
					+ ctr, e);
		}
	}

	protected void rebuildEmptyLists(IStrategoTerm[] terms) {
		for (int i = 0; i < terms.length; i++)
			if (terms[i] instanceof IStrategoAppl
					&& TypesmartSortAttachment.getSort(terms[i]) == null) {
				IStrategoAppl appl = (IStrategoAppl) terms[i];
				terms[i] = makeAppl(appl.getConstructor(),
						appl.getAllSubterms(), appl.getAnnotations());
				if (!terms[i].toString().equals("Op(\"Nil\",[])"))
					System.err.println("unexpected  rebuilding");
			} else
				terms[i] = terms[i];
	}

	public ITermFactory getFactoryWithStorageType(int arg0) {
		return baseFactory.getFactoryWithStorageType(arg0);
	}

	/**
	 * Identical to
	 * {@link TermFactory#annotateTerm(IStrategoTerm, IStrategoList)} except
	 * that it retains sort attachments.
	 */
	public IStrategoTerm annotateTerm(IStrategoTerm term,
			IStrategoList annotations) {
		IStrategoTerm result = baseFactory.annotateTerm(term, annotations);
		TypesmartSortAttachment attach = TypesmartSortAttachment.get(term);
		if (attach != null)
			TypesmartSortAttachment.put(result, attach);

		return result;
	}

	public IStrategoInt makeInt(int arg0) {
		return baseFactory.makeInt(arg0);
	}

	public IStrategoPlaceholder makePlaceholder(IStrategoTerm arg0) {
		return baseFactory.makePlaceholder(arg0);
	}

	public IStrategoReal makeReal(double arg0) {
		return baseFactory.makeReal(arg0);
	}

	public IStrategoString makeString(String arg0) {
		return baseFactory.makeString(arg0);
	}

	public IStrategoString tryMakeUniqueString(String arg0) {
		return baseFactory.makeString(arg0);
	}

	@Override
	public IStrategoList makeList(IStrategoTerm[] arg0, IStrategoList arg1) {
		return baseFactory.makeList(arg0, arg1);
	}

	@Override
	public IStrategoList makeListCons(IStrategoTerm arg0, IStrategoList arg1,
			IStrategoList arg2) {
		return baseFactory.makeListCons(arg0, arg1, arg2);
	}

	@Override
	public IStrategoTuple makeTuple(IStrategoTerm[] arg0, IStrategoList arg1) {
		return baseFactory.makeTuple(arg0, arg1);
	}

	public ITermFactory getBaseFactory() {
		return baseFactory;
	}
}
