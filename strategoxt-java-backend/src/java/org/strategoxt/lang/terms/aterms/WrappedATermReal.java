/*
 * Created on 17. sep.. 2006
 *
 * Copyright (c) 2005, Karl Trygve Kalleberg <karltk@ii.uib.no>
 * 
 * Licensed under the GNU General Public License, v2
 */
package org.strategoxt.lang.terms.aterms;

import org.strategoxt.lang.terms.IStrategoReal;
import org.strategoxt.lang.terms.IStrategoTerm;

import aterm.ATerm;
import aterm.ATermReal;

public class WrappedATermReal extends WrappedATerm implements IStrategoReal {

    private ATermReal real;
    
    WrappedATermReal(WrappedATermFactory parent, ATermReal real) {
        super(parent);
        this.real = real;
    }
    
    public double getValue() {
        return real.getReal();
    }

    public IStrategoTerm getSubterm(int index) {
        return null;
    }
    
    public IStrategoTerm[] getAllSubterms() {
        return null;
    }

    public int getSubtermCount() {
        return 0;
    }

    public int getTermType() {
        return IStrategoTerm.REAL;
    }

    public boolean match(IStrategoTerm second) {
        return equals(second);
    }

    @Override
    public boolean equals(Object second) {
        if(second instanceof WrappedATerm) {
            if(second instanceof WrappedATermReal)
                return ((WrappedATermReal)second).real == real;
            return false;
        }
        return slowCompare(second);
    }

    protected boolean slowCompare(Object second) {
        if(!(second instanceof IStrategoReal))
            return false;
        return ((IStrategoReal)second).getValue() == getValue();
    }

    @Override
    public ATerm getATerm() {
        return real;
    }
    
    @Override
    public String toString() {
        return real.toString();
    }

    @Override
    public int hashCode() {
        return real.hashCode();
    }
}
