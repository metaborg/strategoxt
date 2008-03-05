/*
 * Created on 23. sep.. 2006
 *
 * Copyright (c) 2005, Karl Trygve Kalleberg <karltk@ii.uib.no>
 * 
 * Licensed under the GNU General Public License, v2
 */
package org.strategoxt.lang.terms.aterms;

import org.strategoxt.lang.terms.IStrategoAppl;
import org.strategoxt.lang.terms.IStrategoConstructor;
import org.strategoxt.lang.terms.IStrategoTerm;

import aterm.ATerm;
import aterm.ATermAppl;

public class WrappedATermAppl extends WrappedATerm implements IStrategoAppl {

    private ATermAppl appl;
    
    public WrappedATermAppl(WrappedATermFactory parent, ATermAppl appl) {
        super(parent);
        this.appl = appl;
    }
    
    public IStrategoTerm[] getArguments() {
        return getAllSubterms();
    }

    public IStrategoConstructor getConstructor() {
        return parent.wrapConstructor(appl.getAFun());
    }

    public IStrategoTerm getSubterm(int index) {
        return parent.wrapTerm(appl.getArgument(index));
    }
    
    public IStrategoTerm[] getAllSubterms() {
        IStrategoTerm[] r = new IStrategoTerm[getSubtermCount()];
        ATerm[] as = appl.getArgumentArray();
        final int sz = as.length;
        for(int i = 0; i < sz; i++) 
            r[i] = parent.wrapTerm(as[i]);
        return r;
    }

    public int getSubtermCount() {
        return appl.getChildCount();
    }

    public int getTermType() {
        return IStrategoTerm.APPL;
    }

    public boolean match(IStrategoTerm second) {
        return equals(second);
    }
    
    @Override
    public boolean equals(Object second) {
        if(second instanceof WrappedATerm) {
            if(second instanceof WrappedATermAppl) {
                return ((WrappedATermAppl)second).appl == appl;
            }
            return false;
        }
        return slowCompare(second);
    }

    @Override
    public ATerm getATerm() {
        return appl;
    }

    @Override
    public String toString() {
         return appl.toString();
    }

    @Override
    protected boolean slowCompare(Object second) {
        if(!(second instanceof IStrategoAppl))
            return false;
        IStrategoAppl snd = (IStrategoAppl) second;
        if(!snd.getConstructor().equals(getConstructor()))
            return false;
        for(int i = 0, sz = getSubtermCount(); i < sz; i++) {
            if(!snd.getSubterm(i).equals(getSubterm(i)))
                return false;
        }
        return true;
    }

    @Override
    public int hashCode() {
        return appl.hashCode();
    }
}
