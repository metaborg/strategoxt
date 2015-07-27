package org.strategoxt.strj.pluto_interface.util;

import java.io.IOException;
import java.util.Collections;
import java.util.Iterator;
import java.util.Objects;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermPrinter;
import org.spoofax.terms.StrategoTerm;

public class ObjectWrapperTerm<T> extends StrategoTerm {

	/**
	 * 
	 */
	private static final long serialVersionUID = -5000276490945060421L;
	
	private final T object;
	private final int termType;
	
	public ObjectWrapperTerm(T object, int termType) {
		super(termType);
		this.termType = termType;
		Objects.requireNonNull(object);
		this.object = object;
	}
	
	@SuppressWarnings("unchecked")
	public static <T> T get(IStrategoTerm term) {
		if (!(term instanceof ObjectWrapperTerm)) {
			throw new IllegalArgumentException("Need to get from an ObjectWrapperTerm");
		}
		return ((ObjectWrapperTerm<T>) term).get();
	}
	
	public T get() {
		return this.object;
	}
	
	@Override
	public IStrategoTerm[] getAllSubterms() {
		return null;
	}

	@Override
	public IStrategoTerm getSubterm(int arg0) {
		return null;
	}

	@Override
	public int getSubtermCount() {
		return 0;
	}

	@Override
	public int getTermType() {
		return this.termType;
	}

	@Override
	public void prettyPrint(ITermPrinter arg0) {
		arg0.print(this.object.toString());
	}

	@Override
	public void writeAsString(Appendable arg0, int arg1) throws IOException {
		arg0.append(this.object.toString());
	}

	@Override
	public Iterator<IStrategoTerm> iterator() {
		return Collections.<IStrategoTerm>emptyList().iterator();
	}

	@Override
	protected boolean doSlowMatch(IStrategoTerm arg0, int arg1) {
		if (arg0 instanceof ObjectWrapperTerm) {
			return ((ObjectWrapperTerm<?>) arg0).get() == this.object;
		}
		return false;
	}

	@Override
	protected int hashFunction() {
		return this.object.hashCode();
	}

}
