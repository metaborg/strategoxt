/*
 * Created on 9. okt.. 2006
 *
 * Copyright (c) 2005, Karl Trygve Kalleberg <karltk near strategoxt.org>
 * 
 * Licensed under the GNU General Public License, v2
 */
package org.strategoxt.lang.terms;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;
import org.spoofax.interpreter.terms.ITermPrinter;

public class StrategoTuple extends StrategoTerm implements IStrategoTuple {
    
    private final int storageType;

    private IStrategoTerm[] kids;
    
    protected StrategoTuple(IStrategoTerm[] kids, IStrategoList annotations, int storageType) {
        super(annotations);
        this.kids = kids;
        this.storageType = storageType;
        
        // (not pre-initializing hash code here; tuples are mostly short-lived)
        // if (storageType != MUTABLE) initImmutableHashCode();
    }
    
    public final int getStorageType() {
    	return storageType;
    }
    
    public IStrategoTerm get(int index) {
        return kids[index];
    }

    public IStrategoTerm[] getAllSubterms() {
        IStrategoTerm[] r = new IStrategoTerm[kids.length];
        for(int i=0; i<kids.length; i++)
            r[i] = kids[i];
        return r;
    }
    
    public int size() {
        return kids.length;
    }

    public IStrategoTerm getSubterm(int index) {
        return kids[index];
    }

    public int getSubtermCount() {
        return kids.length;
    }

    public int getTermType() {
        return IStrategoTerm.TUPLE;
    }

    @Override
    protected boolean doSlowMatch(IStrategoTerm second, int commonStorageType) {
        if (second.getTermType() != IStrategoTerm.TUPLE)
            return false;

        IStrategoTuple snd = (IStrategoTuple) second;
        if (size() != snd.size())
            return false;
        
        IStrategoTerm[] kids = this.kids;
        IStrategoTerm[] secondKids = snd.getAllSubterms();
        if (kids != secondKids) {
	        for (int i = 0, sz = kids.length; i < sz; i++) {
	            IStrategoTerm kid = kids[i];
				IStrategoTerm secondKid = secondKids[i];
				if (kid != secondKid && !kid.match(secondKid)) {
	            	if (commonStorageType == SHARABLE && i != 0)
	            		System.arraycopy(secondKids, 0, kids, 0, i);
	                return false;
	            }
	        }
	        
	    	if (commonStorageType == SHARABLE)
	    		this.kids = secondKids;
        }
        
        IStrategoList annotations = getAnnotations();
        IStrategoList secondAnnotations = second.getAnnotations();
        if (annotations == secondAnnotations) {
        	return true;
        } else if (annotations.match(secondAnnotations)) {
        	if (commonStorageType == SHARABLE) internalSetAnnotations(secondAnnotations);
        	return true;
        } else {
        	return false;
        }
    }

    public void prettyPrint(ITermPrinter pp) {
        int sz = size();
        if(sz > 0) {
            pp.println("(");
            pp.indent(2);
            get(0).prettyPrint(pp);
            for(int i = 1; i < sz; i++) {
                pp.print(",");
                pp.nextIndentOff();
                get(i).prettyPrint(pp);
                pp.println("");
            }
            pp.println("");
            pp.print(")");
            pp.outdent(2);

        } else {
            pp.print("()");
        }
        printAnnotations(pp);
    }
    
    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("(");
        IStrategoTerm[] kids = getAllSubterms();
        if(kids.length > 0) {
            sb.append(kids[0].toString());
            for(int i = 1; i < kids.length; i++) {
                sb.append(",");
                sb.append(kids[i].toString());
            }
        }
        sb.append(")");
        appendAnnotations(sb);
        return sb.toString();
    }
    
    @Override
    public int hashFunction() {
        long hc = 4831;
        IStrategoTerm[] kids = getAllSubterms();
        for(int i=0; i< kids.length;i++) {
            hc *= kids[i].hashCode();
        }
        return (int)(hc >> 10);
    }

}
