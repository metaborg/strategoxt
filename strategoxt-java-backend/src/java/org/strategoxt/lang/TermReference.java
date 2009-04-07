package org.strategoxt.lang;

import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class TermReference implements ITermReference {
	private IStrategoTerm term;
	
	public void set(IStrategoTerm term) {
		this.term = term;
	}
	
	public IStrategoTerm get() {
		return term;
	}
	
	@Override
	public String toString() {
		return "->" + term;
	}

	@Override
	public int hashCode() {
		final int prime = 31;
		int result = 1;
		result = prime * result + ((term == null) ? 0 : term.hashCode());
		return result;
	}

	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return term == null ? false : term.equals(obj);
		TermReference other = (TermReference) obj;
		if (term == null) {
			if (other.term != null)
				return false;
		} else if (!term.equals(other.term))
			return false;
		return true;
	}
}
