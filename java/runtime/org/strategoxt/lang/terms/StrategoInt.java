/*
 * Created on 28. jan.. 2007
 *
 * Copyright (c) 2005, Karl Trygve Kalleberg <karltk near strategoxt.org>
 * 
 * Licensed under the GNU General Public License, v2
 */
package org.strategoxt.lang.terms;

import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermPrinter;


public class StrategoInt extends StrategoTerm implements IStrategoInt {

    private final int value;
    
    protected StrategoInt(int value, IStrategoList annotations) {
        super(annotations);
        this.value = value;
    }
    
    public int getStorageType() {
    	return SHARABLE;
    }
    
    protected StrategoInt(int value) {
        this(value, null);
    }
    
    public int intValue() {
        return value;
    }

    public IStrategoTerm[] getAllSubterms() {
        return TermFactory.EMPTY;
    }

    public IStrategoTerm getSubterm(int index) {
        throw new IndexOutOfBoundsException();
    }

    public int getSubtermCount() {
        return 0;
    }

    public int getTermType() {
        return IStrategoTerm.INT;
    }

    @Override
    protected boolean doSlowMatch(IStrategoTerm second, int commonStorageType) {
        if(second.getTermType() != IStrategoTerm.INT)
            return false;

        if (intValue() != ((IStrategoInt) second).intValue())
        	return false;

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
        pp.print(String.valueOf(intValue()));
        printAnnotations(pp);
    }

    @Override
    public String toString() {
        StringBuilder result = new StringBuilder();
        result.append(intValue());
        appendAnnotations(result);
        return result.toString();
    }
    
    @Override
    public int hashFunction() {
        return 449 * intValue() ^ 7841;
    }
}
