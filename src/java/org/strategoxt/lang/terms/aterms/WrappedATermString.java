package org.strategoxt.lang.terms.aterms;

import org.strategoxt.lang.terms.IStrategoString;
import org.strategoxt.lang.terms.IStrategoTerm;

import aterm.ATerm;
import aterm.ATermAppl;

class WrappedATermString extends WrappedATerm implements IStrategoString {

    private final ATermAppl value;

    WrappedATermString(WrappedATermFactory parent, ATermAppl value) {
        super(parent);
        this.value = value;
    }

    public String getValue() {
        return value.getName();
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
        return IStrategoTerm.STRING;
    }

    public boolean match(IStrategoTerm other) {
        if(other instanceof WrappedATermString) {
            WrappedATermString o = (WrappedATermString) other;
            return o.value.isEqual(value);
        }
        if(!(other instanceof IStrategoString))
            return false;
        IStrategoString o = (IStrategoString) other;
        return o.getValue().equals(getValue());
    }

    @Override
    public boolean equals(Object second) {
        if(second instanceof WrappedATerm) {
            if(second instanceof WrappedATermString)
                return ((WrappedATermString)second).value ==  value;
            return false;
        }
        return slowCompare(second);
    }

    @Override
    public ATerm getATerm() {
        return value;
    }

    @Override
    public String toString() {
        return value.getName();
    }

    @Override
    protected boolean slowCompare(Object second) {
        if(!(second instanceof IStrategoString))
            return false;
        return ((IStrategoString)second).getValue().equals(value.getName());
    }

    @Override
    public int hashCode() {
        return value.hashCode();
    }
}
