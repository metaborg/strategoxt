/*
 * Created on 23. sep.. 2006
 *
 * Copyright (c) 2005, Karl Trygve Kalleberg <karltk@strategoxt.org>
 * 
 * Licensed under the GNU General Public License, v2
 */
package org.strategoxt.lang.terms.aterms;

import org.strategoxt.lang.terms.IStrategoAppl;
import org.strategoxt.lang.terms.IStrategoConstructor;
import org.strategoxt.lang.terms.IStrategoTerm;
import org.strategoxt.lang.terms.IStrategoList;
import org.strategoxt.lang.terms.ITermFactory;

import aterm.AFun;
import aterm.ATerm;

public class WrappedAFun extends WrappedATerm implements IStrategoConstructor {

    private AFun afun;
    
    WrappedAFun(WrappedATermFactory parent, AFun afun) {
        super(parent);
        this.afun = afun;
    }
    
    public IStrategoAppl instantiate(ITermFactory factory, IStrategoList terms) {
        ATerm[] args = new ATerm[terms.getSubtermCount()];
        for(int i = 0; i < terms.getSubtermCount(); i++)
            args[i] = ((WrappedATerm)terms.get(i)).getATerm();
        // FIXME memoize
        return new WrappedATermAppl(parent, afun.getFactory().makeAppl(afun, args));
    }
    
    public IStrategoAppl instantiate(ITermFactory factory, IStrategoTerm... terms) {
        ATerm[] args = new ATerm[terms.length];
        for(int i = 0; i < terms.length; i++) {
            args[i] = ((WrappedATerm)terms[i]).getATerm();
        }
        // FIXME memoize
        return new WrappedATermAppl(parent, afun.getFactory().makeAppl(afun, args));
    }

    @Override
    public boolean equals(Object second) {
        if(second instanceof WrappedATerm) {
            if(second instanceof WrappedAFun) {
                return ((WrappedAFun)second).afun == afun;
            }
            return false;
        }
        return slowCompare(second);
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
        return IStrategoTerm.CTOR;
    }

    public boolean match(IStrategoTerm second) {
        return equals(second);
    }

    @Override
    public ATerm getATerm() {
        return afun;
    }

    public int getArity() {
        return afun.getArity();
    }

    public String getName() {
        return afun.getName();
    }

    @Override
    public String toString() {
        return afun.toString();
    }

    @Override
    protected boolean slowCompare(Object second) {
        if(!(second instanceof IStrategoConstructor))
            return false;
        IStrategoConstructor snd = (IStrategoConstructor) second;
        if(!afun.getName().equals(snd.getName()))
            return false;
        if(afun.getArity() != snd.getArity())
            return false;
        return true;
    }

    @Override
    public int hashCode() {
        return afun.hashCode();
    }

}
