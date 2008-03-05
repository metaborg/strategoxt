/*
 * Created on 23. sep.. 2006
 *
 * Copyright (c) 2005, Karl Trygve Kalleberg <karltk@ii.uib.no>
 * 
 * Licensed under the GNU General Public License, v2
 */
package org.strategoxt.lang.terms.aterms;

import org.strategoxt.lang.terms.IStrategoTerm;
import org.strategoxt.lang.terms.IStrategoList;

import aterm.ATerm;
import aterm.ATermList;

public class WrappedATermList extends WrappedATerm implements IStrategoList {

    private ATermList list;
    
    WrappedATermList(WrappedATermFactory parent, ATermList list) {
        super(parent);
        this.list = list;
    }
    
    public IStrategoTerm get(int i) {
        return parent.wrapTerm((ATerm)list.getChildAt(i));
    }

    public IStrategoList prepend(IStrategoTerm prefix) {
        if(prefix instanceof WrappedATerm) {
            return (IStrategoList) parent.wrapTerm((list.insert(((WrappedATerm)prefix).getATerm())));
        }
        throw new WrapperException("Is " + prefix.getClass());    
       }

    public int size() {
        return list.getChildCount();
    }

    public IStrategoTerm getSubterm(int index) {
        return parent.wrapTerm((ATerm)list.getChildAt(index));
    }
    
    public IStrategoTerm[] getAllSubterms() {
        final int sz = list.getLength();
        IStrategoTerm[] r = new IStrategoTerm[sz];
        int i = 0;
        ATermList cur = list;
        while(!cur.isEmpty()) {
            r[i++] = parent.wrapTerm(cur.getFirst());
            cur = cur.getNext();
        }
        return r;
    }
    
    public int getSubtermCount() {
        return list.getChildCount();
    }

    public int getTermType() {
        return IStrategoTerm.LIST;
    }

    public boolean match(IStrategoTerm second) {
        return equals(second);
    }

    @Override
    public boolean equals(Object second) {
        if(second instanceof WrappedATerm) {
            if(second instanceof WrappedATermList) {
                return ((WrappedATermList)second).list == list;
            }
            return false;
        }
        return slowCompare(second);
    }

    @Override
    public ATermList getATerm() {
        return list;
    }

    @Override
    public String toString() {
        return list.toString();
    }

    public IStrategoTerm head() {
        // FIXME should have a null check
        return parent.wrapTerm(list.getFirst());
    }

    public IStrategoList tail() {
        return (IStrategoList) parent.wrapTerm(list.getNext());
    }

    @Override
    protected boolean slowCompare(Object second) {
        if(!(second instanceof IStrategoList))
            return false;
        IStrategoList snd = (IStrategoList) second;
        if(snd.getSubtermCount() != getSubtermCount())
            return false;
        for(int i = 0, sz = getSubtermCount(); i < sz; i++)
            if(!getSubterm(i).equals(snd.getSubterm(i)))
                return false;
        return true;
    }
    
    @Override
    public int hashCode() {
        return list.hashCode();
    }

    public boolean isEmpty() {
        return list.isEmpty();
    }
}
