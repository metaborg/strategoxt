package org.strategoxt.lang.terms;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
import org.spoofax.interpreter.terms.ITermPrinter;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class StrategoAnnotation extends StrategoWrapped {
	
	private final int storageType;
	
	private final ITermFactory factory;
	
	public StrategoAnnotation(ITermFactory factory, IStrategoTerm term, IStrategoList annotations, int storageType) {
		super(term, annotations);
		
		if (!term.getAnnotations().isEmpty())
			throw new IllegalArgumentException("Annotated term cannot already have annotations");
		
		this.factory = factory;
		this.storageType = storageType;
		
		if (storageType != MUTABLE)
			initImmutableHashCode();
	}
	
	@Override
	protected boolean doSlowMatch(IStrategoTerm second, int commonStorageType) {
		IStrategoTerm wrapped = getWrapped();
		IStrategoList annotations = getAnnotations();
		IStrategoList secondAnnotations = second.getAnnotations();
		
		if (annotations == secondAnnotations) {
        	// Do nothing
        } else if (annotations.match(secondAnnotations)) {
        	if (commonStorageType == SHARABLE) internalSetAnnotations(secondAnnotations);
        } else {
        	return false;
        }
		
		if (annotations.isEmpty()) {
			return wrapped.match(second);
		} else {
			second = factory.annotateTerm(second, TermFactory.EMPTY_LIST);
			return wrapped.match(second);
		}
	}

	@Override
	protected int hashFunction() {
		assert getWrapped().getAnnotations().isEmpty() : "Constructor contract broken";
		return getWrapped().hashCode();
	}

	@Override
	public String toString() {
		StringBuilder result = new StringBuilder();
		result.append(getWrapped().toString());
		appendAnnotations(result);
		return result.toString();
	}
	
	@Override
	public void prettyPrint(ITermPrinter pp) {
		getWrapped().prettyPrint(pp);
		printAnnotations(pp);
	}

	@Override
	public int getStorageType() {
		return storageType;
	}

	@Override
	@Deprecated
	public IStrategoList prepend(IStrategoTerm prefix) {
		throw new UnsupportedOperationException();
	}
	
}
