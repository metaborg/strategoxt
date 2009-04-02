/*
 * Created on 23. sep.. 2006
 *
 * Copyright (c) 2005, Karl Trygve Kalleberg <karltk@strategoxt.org>
 * 
 * Licensed under the GNU General Public License, v2
 */
package org.strategoxt.lang.terms.aterms;

import org.strategoxt.lang.terms.IStrategoTerm;
import org.strategoxt.lang.terms.IStrategoTuple;

import aterm.ATerm;
import aterm.ATermAppl;

public class WrappedATermTuple extends WrappedATerm implements IStrategoTuple {

    private ATermAppl tuple;
    
    WrappedATermTuple(WrappedATermFactory parent, ATermAppl tuple) {
        super(parent);
        this.tuple = tuple;
    }
    
    @Override
    public ATerm getATerm() {
        return tuple;
    }

    public IStrategoTerm getSubterm(int index) {
        return parent.wrapTerm((ATerm)tuple.getChildAt(index));
    }
    
   public IStrategoTerm[] getAllSubterms() {
       ATerm[] as = tuple.getArgumentArray();
       final int sz = as.length;
       IStrategoTerm[] r = new IStrategoTerm[sz];
       for(int i = 0; i < sz; i++)
           r[i] = parent.wrapTerm(as[i]);
       return r;
   }

    public int getSubtermCount() {
        return tuple.getChildCount();
    }

    public int size() {
        return getSubtermCount();
    }
    
    public int getTermType() {
        return IStrategoTerm.TUPLE;
    }

    public boolean match(IStrategoTerm second) {
        return equals(second);
    }

    @Override
    public boolean equals(Object second) {
        if(second instanceof WrappedATerm) {
            if(second instanceof WrappedATermTuple) {
                return ((WrappedATermTuple)second).tuple == tuple;
            }
            return false;
        }
        return slowCompare(second);
    }
    
    @Override
    public String toString() {
        return tuple.toString();
    }

    public IStrategoTerm get(int index) {
        return getSubterm(index);
    }

    @Override
    protected boolean slowCompare(Object second) {
        if(!(second instanceof IStrategoTuple))
            return false;
        IStrategoTuple snd = (IStrategoTuple)second;
        if(snd.getSubtermCount() != getSubtermCount())
            return false;
        for(int i = 0, sz = getSubtermCount(); i < sz; i++)
            if(!getSubterm(i).equals(snd.getSubterm(i)))
                return false;
        return true;
    }
    
    @Override
    public int hashCode() {
        return tuple.hashCode();
    }
}
