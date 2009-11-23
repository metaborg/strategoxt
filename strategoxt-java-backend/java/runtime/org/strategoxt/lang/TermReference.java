package org.strategoxt.lang;

import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public final class TermReference implements ITermReference {
	
	public IStrategoTerm value;
	
	public TermReference(IStrategoTerm term) {
		this.value = term;
	}
	
	public TermReference() {}
	
	public void set(IStrategoTerm term) {
		this.value = term;
	}
	
	public IStrategoTerm get() {
		return value;
	}
	
	public boolean match(IStrategoTerm term) {
		if (this.value == null) {
			this.value = term;
			return true;
		} else {
			return this.value == term || this.value.match(term);
		}
	}
	
	@Override
	public String toString() {
		return "->" + value;
	}

	@Override
	public int hashCode() {
		return value == null ? 0 : value.hashCode();
	}

	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return value == null ? false : value.equals(obj);
		TermReference other = (TermReference) obj;
		if (value == null) {
			if (other.value != null)
				return false;
		} else if (!value.equals(other.value))
			return false;
		return true;
	}
}
