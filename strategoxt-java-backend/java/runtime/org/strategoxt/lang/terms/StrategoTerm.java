/*
 * Created on 2. feb.. 2007
 *
 * Copyright (c) 2005, Karl Trygve Kalleberg <karltk near strategoxt.org>
 * 
 * Licensed under the GNU General Public License, v2
 */
package org.strategoxt.lang.terms;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermPrinter;
import static org.strategoxt.lang.terms.TermFactory.EMPTY_LIST;;

public abstract class StrategoTerm implements IStrategoTerm, Cloneable {
	
	private static final int UNKNOWN_HASH = -1;
	
	private static final int MUTABLE_HASH = MUTABLE;
	
	private int hashCode = UNKNOWN_HASH;

    private IStrategoList annotations;
    
    protected StrategoTerm(IStrategoList annotations) {
        assert annotations == null || !annotations.isEmpty() || annotations == TermFactory.EMPTY_LIST;
    	if (annotations != TermFactory.EMPTY_LIST)
    		this.annotations = annotations;
    }
    
    protected StrategoTerm() {
    	this(null);
    }

    /**
     * Equality test.
     * 
     * @note
     *   For {@link #SHARABLE} terms if a term 'x' is matched with multiple times,
     *   it should always appear as the argument of the match calls.
     *   Likewise, longer-lived terms should appear in this position. 
     */
    public final boolean match(IStrategoTerm second) {
    	if (this == second) return true;
    	if (second == null) return false;
        
    	int storageType = getStorageType();
        
		switch (storageType) {
        	case MAXIMALLY_SHARED:
        		switch (second.getStorageType()) {
					case MAXIMALLY_SHARED:
						return false;
					case SHARABLE:
						// (common storage type is immutable, i.e. my subterms should not be overwritten)
						return hashCode() == second.hashCode() && doSlowMatch(second, IMMUTABLE);
					case IMMUTABLE:
						return hashCode() == second.hashCode() && doSlowMatch(second, IMMUTABLE);
	    			default:
	    				return doSlowMatch(second, MUTABLE);
	    		}
        	case SHARABLE:
        	case IMMUTABLE:
        		switch (second.getStorageType()) {
    				case MAXIMALLY_SHARED:
    					return hashCode() == second.hashCode() && doSlowMatch(second, storageType);
    				case SHARABLE:
    					return hashCode() == second.hashCode() && doSlowMatch(second, storageType);
    				case IMMUTABLE:
    					return hashCode() == second.hashCode() && doSlowMatch(second, IMMUTABLE);
        			default:
        				return doSlowMatch(second, MUTABLE);
        		}
        	default:
     			return doSlowMatch(second, MUTABLE);
        }
    }

    protected abstract boolean doSlowMatch(IStrategoTerm second, int commonStorageType);
    
    @Override
    public final boolean equals(Object obj) {
    	if (obj == this) return true;
        if(!(obj instanceof IStrategoTerm)) return false;
        return match((IStrategoTerm)obj);
    }
    
    @Override
    public int hashCode() {
    	int result = hashCode;
    	switch (result) {
    		case MUTABLE_HASH:
    			result = hashFunction();
    			if (annotations != null && annotations != EMPTY_LIST && !annotations.isEmpty())
    				result = result * 2423 + annotations.hashCode();
    			return result;
    		case UNKNOWN_HASH:
    			result = hashFunction();
    			if (annotations != null && annotations != EMPTY_LIST && !annotations.isEmpty())
    				result = result * 2423 + annotations.hashCode();
   				hashCode = getTermType() == MUTABLE ? MUTABLE_HASH : result;
    			return result;
    		default:
    			return result;
    	}
    }
    
    protected final void initImmutableHashCode() {
    	assert getTermType() != MUTABLE; // (avoid this virtual call here)
    	if (hashCode == UNKNOWN_HASH) {
    		int hashCode = hashFunction();
			this.hashCode = annotations == null || annotations == EMPTY_LIST || annotations.isEmpty()
				? hashCode
				: hashCode * 2423 + annotations.hashCode();
    	}
    }
    
    protected abstract int hashFunction();
    
    @Override
    public abstract String toString();
    
    protected void appendAnnotations(StringBuilder sb) {
        IStrategoList annos = getAnnotations();
        if (annos.size() == 0) return;
        
        sb.append('{');
        sb.append(annos.get(0));
        for (annos = annos.tail(); !annos.isEmpty(); annos = annos.tail()) {
            sb.append(',');
            sb.append(annos.head().toString());        	
        }
        sb.append('}');
    }
    
    protected void printAnnotations(ITermPrinter pp) {
        IStrategoList annos = getAnnotations();
        if (annos.size() == 0) return;
        
        pp.print("{");
        annos.head().prettyPrint(pp);
        for (annos = annos.tail(); !annos.isEmpty(); annos = annos.tail()) {
        	pp.print(",");
        	annos.head().prettyPrint(pp);        	
        }
        pp.print("}");
    }
    
    @Override
    protected StrategoTerm clone() {
        try {
        	assert getStorageType() != MAXIMALLY_SHARED;
            return (StrategoTerm) super.clone();
        } catch (CloneNotSupportedException e) {
            throw new RuntimeException(e); // silly checked exceptions...
        }
    }
    
    public final IStrategoList getAnnotations() {
        return annotations == null ? TermFactory.EMPTY_LIST : annotations;
    }
    
    protected final void internalSetAnnotations(IStrategoList annotations) {
        assert annotations == null || !annotations.isEmpty() || annotations == TermFactory.EMPTY_LIST;
        
    	if (annotations == TermFactory.EMPTY_LIST)
    		annotations = null; // essential for hash code calculation
    	
    	assert getTermType() != STRING || getStorageType() != MAXIMALLY_SHARED :
    		"Maximally shared, unannotated string must be created using constructor";
    	
    	if (this.annotations != annotations) {
    		this.annotations = annotations;
    		this.hashCode = UNKNOWN_HASH;
    	}
    }
}
