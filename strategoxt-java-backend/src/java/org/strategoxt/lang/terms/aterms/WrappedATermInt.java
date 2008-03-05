/*
 * Created on 17. sep.. 2006
 *
 * Copyright (c) 2005, Karl Trygve Kalleberg <karltk@ii.uib.no>
 * 
 * Licensed under the GNU General Public License, v2
 */
package org.strategoxt.lang.terms.aterms;

import org.strategoxt.lang.terms.IStrategoInt;
import org.strategoxt.lang.terms.IStrategoTerm;

import aterm.ATerm;
import aterm.ATermInt;

public class WrappedATermInt extends WrappedATerm implements IStrategoInt {

    private ATermInt integer;

    WrappedATermInt(WrappedATermFactory parent, ATermInt integer) {
        super(parent);
        this.integer = integer;
    }

    public int getValue() {
        return integer.getInt();
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
        return IStrategoTerm.INT;
    }

    public boolean match(IStrategoTerm second) {
        return equals(second);
    }

    @Override
    public boolean equals(Object second) {
        if (second instanceof WrappedATermInt)
            return ((WrappedATermInt) second).integer == integer;
        return slowCompare(second);
    }

    protected boolean slowCompare(Object second) {
        if (!(second instanceof IStrategoInt))
            return false;
        return ((IStrategoInt) second).getValue() == getValue();
    }

    @Override
    public String toString() {
        return integer.toString();
    }

    @Override
    public ATerm getATerm() {
        return integer;
    }

    @Override
    public int hashCode() {
        return integer.hashCode();
    }
}
