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
import org.spoofax.interpreter.terms.ITermPrinter;

public class StrategoAppl extends StrategoTerm implements IStrategoAppl {

    private final IStrategoConstructor ctor;
    
    private final int storageType;

    private IStrategoTerm[] kids;

    protected StrategoAppl(IStrategoConstructor ctor, IStrategoTerm[] kids, IStrategoList annotations, int storageType) {
        super(annotations);
        this.ctor = ctor;
        this.kids = kids;
        this.storageType = storageType;
        
        if (storageType != MUTABLE) initImmutableHashCode();
    }
    
    public final int getStorageType() {
        return storageType;
    }
    
    public IStrategoTerm[] getArguments() {
        return kids;
    }

    public IStrategoConstructor getConstructor() {
        return ctor;
    }

    public IStrategoTerm[] getAllSubterms() {
        return kids;
    }

    public IStrategoTerm getSubterm(int index) {
        if (index < 0 || index > kids.length)
            throw new IndexOutOfBoundsException("Index out of bounds: " + index);
        return kids[index];
    }

    public int getSubtermCount() {
        return kids.length;
    }

    public int getTermType() {
        return IStrategoTerm.APPL;
    }

    @Override
    protected boolean doSlowMatch(IStrategoTerm second, int commonStorageType) {
        if (second.getTermType() != IStrategoTerm.APPL)
            return false;
        IStrategoAppl o = (IStrategoAppl)second;
        if (ctor != o.getConstructor())
            return false;
        
        IStrategoTerm[] kids = getAllSubterms();
        IStrategoTerm[] secondKids = o.getAllSubterms();
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
        pp.print(ctor.getName());
        IStrategoTerm[] kids = getAllSubterms();
        if(kids.length > 0) {
            pp.println("(");
            pp.indent(ctor.getName().length());
            kids[0].prettyPrint(pp);
            for(int i = 1; i < kids.length; i++) {
                pp.print(",");
                kids[i].prettyPrint(pp);
            }
            pp.println(")");
            pp.outdent(ctor.getName().length());
        }
        printAnnotations(pp);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append(ctor.getName());
        IStrategoTerm[] kids = getAllSubterms();
        if(kids.length > 0) {
            sb.append("(");
            sb.append(kids[0]);
            for(int i = 1; i < kids.length; i++) {
                sb.append(",");
                sb.append(kids[i].toString());
            }
            sb.append(")");
        }
        appendAnnotations(sb);
        return sb.toString();
    }

    @Override
    public int hashFunction() {
        long r = ctor.hashCode();
        int accum = 6673;
        IStrategoTerm[] kids = getAllSubterms();
        for(int i = 0; i < kids.length; i++) {
            r += kids[i].hashCode() * accum;
            accum *= 7703;
        }
        return (int)(r >> 12);
    }
    
}
