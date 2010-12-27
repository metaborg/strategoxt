/*
 * Created on 28. jan.. 2007
 *
 * Copyright (c) 2005, Karl Trygve Kalleberg <karltk near strategoxt.org>
 * 
 * Licensed under the GNU General Public License, v2
 */
package org.strategoxt.lang.terms;

import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoConstructor;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
import org.spoofax.interpreter.terms.ITermPrinter;

public final class StrategoConstructor extends StrategoTerm implements IStrategoConstructor {

    private final String name;
    
    private final int arity;

    public StrategoConstructor(String name, int arity) {
        super(null);
        this.name = name;
        this.arity = arity;
        if (name == null) throw new IllegalArgumentException("name cannot be null");
    }
    
    public int getStorageType() {
    	// MAXIMALLY_SHARED causes problems before sharing with regular hash maps
    	return SHARABLE; 
    }
    
    public int getArity() {
        return arity;
    }

    public String getName() {
        return name;
    }

    public IStrategoTerm[] getAllSubterms() {
        return TermFactory.EMPTY;
    }

    public IStrategoTerm getSubterm(int index) {
        throw new UnsupportedOperationException();
    }

    public int getSubtermCount() {
        return 0;
    }

    public final int getTermType() {
        return IStrategoTerm.CTOR;
    }

    @Override
    protected boolean doSlowMatch(IStrategoTerm second, int commonStorageType) {
    	if (second == this)
    		return true;
    	if (second == null || second.getTermType() != CTOR)
    		return false;
    	
    	IStrategoConstructor other = (IStrategoConstructor) second;
    	
        return name.equals(other.getName()) && arity == other.getArity();
    }

    public void prettyPrint(ITermPrinter pp) {
        throw new UnsupportedOperationException();
    }
    
    @Override
    public String toString() {
        return name + "/" + arity;
    }    
    public IStrategoConstructor getConstructor() {
        return this;
    }
    
    @Override
    public int hashFunction() {
    	// TODO: hash code that is reproducible from Stratego
        return name.hashCode() + 5407 * arity; 
    }

    @Deprecated
	public IStrategoAppl instantiate(ITermFactory factory, IStrategoTerm... kids) {
		throw new UnsupportedOperationException();
	}

	@Deprecated
	public IStrategoAppl instantiate(ITermFactory factory, IStrategoList kids) {
		throw new UnsupportedOperationException();
	}
}
