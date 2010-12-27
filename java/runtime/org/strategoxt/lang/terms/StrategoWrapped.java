package org.strategoxt.lang.terms;

import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoConstructor;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoReal;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;
import org.spoofax.interpreter.terms.ITermPrinter;
import org.strategoxt.lang.TermWrapperException;

/**
 * A wrapped Stratego term of any type.
 * 
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public abstract class StrategoWrapped extends StrategoTerm implements IStrategoAppl, IStrategoInt, IStrategoList, IStrategoReal, IStrategoString, IStrategoTuple {
	
	private final IStrategoTerm wrapped;
	
	/**
	 * Creates a new wrapped Stratego term, copying its annotations.
	 */
	public StrategoWrapped(IStrategoTerm wrapped) {
		this(wrapped, wrapped.getAnnotations());
	}
	
	/**
	 * Creates a new wrapped Stratego term with custom annotations.
	 * Inheritor classes using this constructor should reimplement the
	 * following methods
	 * {@link #match(IStrategoTerm second)},
	 * {@link #hashFunction()},
	 * {@link #toString()}, and
	 * {@link #prettyPrint(ITermPrinter)}.
	 */
	protected StrategoWrapped(IStrategoTerm wrapped, IStrategoList annotations) {
		super(annotations);
		this.wrapped = wrapped;
	}
	
	public final IStrategoTerm getWrapped() {
		return wrapped;
	}

	public abstract int getStorageType();
	
	// Common accessors

	@Override
	protected int hashFunction() {
		return wrapped.hashCode();
	}
	
	@Override
	protected boolean doSlowMatch(IStrategoTerm second, int commonStorageType) {
		return wrapped.match(second);
	}

	public IStrategoTerm[] getAllSubterms() {
		return wrapped.getAllSubterms();
	}

	public IStrategoTerm getSubterm(int index) {
		return wrapped.getSubterm(index);
	}

	public int getSubtermCount() {
		return wrapped.getSubtermCount();
	}

	public int getTermType() {
		return wrapped.getTermType();
	}

	public void prettyPrint(ITermPrinter pp) {
		wrapped.prettyPrint(pp);
	}

	@Override
	public String toString() {
		return wrapped.toString();
	}
	
	// Semi-specialized accessors

	public final IStrategoTerm get(int index) {
		return getSubterm(index);
	}

	public final IStrategoTerm[] getArguments() {
		return wrapped.getAllSubterms();
	}
	
	// Specialized accessors

	public IStrategoTerm head() {
		if (getTermType() != LIST)
			throw new TermWrapperException("Called head() on a term that is not of type LIST");
		return ((IStrategoList) wrapped).head();
	}

	public IStrategoList tail() {
		if (getTermType() != LIST)
			throw new TermWrapperException("Called tail() on a term that is not of type LIST");
		return ((IStrategoList) wrapped).tail();
	}

	public boolean isEmpty() {
		if (getTermType() != LIST)
			throw new TermWrapperException("Called isEmpty() on a term that is not of type LIST");
		return ((IStrategoList) wrapped).isEmpty();
	}

	@Deprecated
	public IStrategoList prepend(IStrategoTerm prefix) {
		if (getTermType() != LIST)
			throw new TermWrapperException("Called prepend() on a term that is not of type LIST");
		return ((IStrategoList) wrapped).prepend(prefix);
	}

	public int size() {
		switch (getTermType()) {
			case LIST:
				return ((IStrategoList) wrapped).size();
			case TUPLE:
				return ((IStrategoTuple) wrapped).size();
			default:
				throw new TermWrapperException("Called size() on a term that is not a LIST or TUPLE");
		}
	}

	public IStrategoConstructor getConstructor() {
		if (getTermType() != APPL)
			throw new TermWrapperException("Called getConstructor() on a term that is not of type APPL");
		return ((IStrategoAppl) wrapped).getConstructor();
	}

	public int intValue() {
		if (getTermType() != INT)
			throw new TermWrapperException("Called intValue() on a term that is not of type INT");
		return ((IStrategoInt) wrapped).intValue();
	}

	public double realValue() {
		if (getTermType() != REAL)
			throw new TermWrapperException("Called realValue() on a term that is not of type REAL");
		return ((IStrategoReal) wrapped).realValue();
	}

	public String stringValue() {
		if (getTermType() != STRING)
			throw new TermWrapperException("Called stringValue() on a term that is not of type STRING");
		return ((IStrategoString) wrapped).stringValue();
	}

}