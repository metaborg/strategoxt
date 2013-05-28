package org.strategoxt.lang.typesmart;

import java.lang.ref.WeakReference;
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
import org.spoofax.terms.attachments.AbstractWrappedTermFactory;
import org.strategoxt.HybridInterpreter;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.StrategoException;

/**
 * When constructing an application term, this term factory looks for the existence of a type-smart
 * constructor. If such constructor exists, it is used for the construction of the term. Otherwise,
 * a standard build is performed using the base factory.
 * 
 * @author Sebastian Erdweg
 * @author Vlad Vergu
 */
public class TypesmartTermFactory extends AbstractWrappedTermFactory {

	private final static boolean DEBUG_TYPESMART = true;

	private final WeakReference<Context> compiledContext;
	private WeakReference<IContext> context;

	public int smartCalls = 0;
	public BigInteger totalTimeMillis = BigInteger.ZERO;

	public TypesmartTermFactory(Context context) {
		this(context, new TermFactory());
	}

	public TypesmartTermFactory(Context context, ITermFactory baseFactory) {
		super(baseFactory.getDefaultStorageType(), baseFactory);
		assert baseFactory.getDefaultStorageType() == IStrategoTerm.MUTABLE : "Typesmart factory needs to have a factory with MUTABLE terms";
		assert !isTypesmart(baseFactory) : "Multiply-wrapped typesmart term factories";
		this.compiledContext = new WeakReference<Context>(context);
	}

	/**
	 * Registers (creates a new) {@link TypesmartTermFactory} on the given factory. There are three
	 * modes of operation:
	 * 
	 * (A) if the <code>factory</code> is an {@link AbstractWrappedTermFactory} this method attempts
	 * to insert a {@link TypesmartTermFactory} at the deepest possible point in the chain of
	 * {@link TermFactory}s;
	 * 
	 * (B) if the <code>factory</code> is not an {@link AbstractWrappedTermFactory} then a new
	 * {@link TypesmartTermFactory} is created which wraps the given <code>factory</code>;
	 * 
	 * (C) specifically if the <code>factory</code> or a deeper base factory is a
	 * {@link TypesmartTermFactory} this method returns the unchanged <code>factory</code>.
	 * 
	 * @param factory
	 * @return A potentially modified factory. May or may not be a reference to the given factory.
	 */
	public static ITermFactory registerTypesmartFactory(Context context, ITermFactory factory) {
		if (isTypesmart(factory)) {
			return factory;
		}
		if (factory instanceof AbstractWrappedTermFactory) {
			ITermFactory oldBaseFactory = ((AbstractWrappedTermFactory) factory).getWrappedFactory(true);
			((AbstractWrappedTermFactory) factory).replaceBaseFactory(new TypesmartTermFactory(context, oldBaseFactory), true);
			return factory;
		}
		return new TypesmartTermFactory(context, factory);
	}

	public static boolean isTypesmart(ITermFactory factory) {
		if (factory instanceof AbstractWrappedTermFactory) {
			return ((AbstractWrappedTermFactory) factory).hasBaseFactory(TypesmartTermFactory.class);
		}
		return false;
	}

	public static ITermFactory getStandardFactory(ITermFactory factory) {
		if (!isTypesmart(factory)) {
			return factory;
		}
		if (factory instanceof AbstractWrappedTermFactory) {
			return getStandardFactory(((AbstractWrappedTermFactory) factory).getWrappedFactory());
		}
		// woot?
		return null;
	}

	public static TypesmartTermFactory getTypesmartInstance(ITermFactory factory) {
		if (!isTypesmart(factory)) {
			return null;
		}
		if (factory instanceof TypesmartTermFactory) {
			return (TypesmartTermFactory) factory;
		}
		if (factory instanceof AbstractWrappedTermFactory) {
			return getTypesmartInstance(((AbstractWrappedTermFactory) factory).getWrappedFactory());
		}
		return null;
	}

	public IStrategoAppl makeUnsafeAppl(IStrategoConstructor ctr, IStrategoTerm[] kids,
			IStrategoList annotations) {
		return super.makeAppl(ctr, kids, annotations);
	}

	@Override
	public IStrategoAppl makeAppl(IStrategoConstructor ctr, IStrategoTerm[] kids, IStrategoList annotations) {
		
		try {
			CallT smartCall = tryGetTypesmartConstructorCall(ctr, kids);
			// no check defined
			if (smartCall == null) {
				return makeUnsafeAppl(ctr, kids, annotations);
			}
			System.out.println("Typesmart " + ctr);

			// apply smart constructor to argument terms
			rebuildEmptyLists(kids);

			IContext context = this.context.get(); 
			if (context == null)
				throw new IllegalStateException("Term factory has already been marked for garbage collection.");

			IStrategoTerm currentWas = context.current();
			IStrategoTerm t;
			try {
				context.setFactory(TypesmartTermFactory.getStandardFactory(this));

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

	protected CallT tryGetTypesmartConstructorCall(IStrategoConstructor ctr, IStrategoTerm[] kids) throws InterpreterException {
		Context compiledContext = this.compiledContext.get();
		if (compiledContext == null)
			throw new IllegalStateException("Term factory has already been marked for garbage collection.");

		IContext context = this.context == null ? null : this.context.get();
		if (context == null)
			context = HybridInterpreter.getContext(compiledContext);
		if (context == null)
			return null;
		this.context = new WeakReference<IContext>(context);

		String smartCtrName = "smart-" + ctr.getName();
		smartCtrName = smartCtrName.replace("-", "_") + "_0_" + kids.length;
		SDefT sdef = context.lookupSVar(smartCtrName);
		if (sdef == null)
			return null;
		return new CallT(smartCtrName, new Strategy[0], new IStrategoTerm[0]);
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

	public ITermFactory getFactoryWithStorageType(int storageType) {
		if (storageType == getDefaultStorageType()) {
			return this;
		}
		assert storageType < IStrategoTerm.IMMUTABLE : "Typesmart factory cannot work with NON-MUTABLE terms";
		return getWrappedFactory().getFactoryWithStorageType(storageType);
	}

	/**
	 * Recheck invariant of typesmart constrcutor.
	 */
	@Override
	public IStrategoAppl replaceAppl(IStrategoConstructor constructor, IStrategoTerm[] kids, IStrategoAppl old) {
		return makeAppl(constructor, kids, old.getAnnotations());
	}
}
