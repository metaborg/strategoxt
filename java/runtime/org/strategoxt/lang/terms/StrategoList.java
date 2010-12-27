/*
 * Created on 9. okt.. 2006
 *
 * Copyright (c) 2005, Karl Trygve Kalleberg <karltk near strategoxt.org>
 * 
 * Licensed under the GNU General Public License, v2
 */
package org.strategoxt.lang.terms;

import java.util.NoSuchElementException;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermPrinter;

/**
 * A basic stratego list implementation using a linked-list data structure.
 */
public class StrategoList extends StrategoTerm implements IStrategoList {
	
	private static final int UNKNOWN_SIZE = -1;
	
	private static final int UNKNOWN_STORAGE = -1;
    
    /**
     * @see #hashFunction()
     * @see TermFactory#EMPTY_LIST  The singleton maximally shared empty list instance.
     */
    static final int EMPTY_LIST_HASH = 1 * 71 * 71;
    
    private IStrategoTerm head;
    
    private IStrategoList tail;
    
    private int storageType = UNKNOWN_STORAGE;
    
    private int size = UNKNOWN_SIZE;

    /**
     * Creates a new list.
     * 
     * @see #prepend(IStrategoTerm) Adds a new head element to a list.
     */
    protected StrategoList(IStrategoTerm head, IStrategoList tail, IStrategoList annotations, int storageType) {
        super(annotations);
        this.head = head;
        this.tail = tail;
        this.storageType = storageType;
        
        if (storageType != MUTABLE) initImmutableHashCode();
    }
    
    public final int getStorageType() {
    	return storageType;
    }
    
    public IStrategoTerm head() {
        if (head == null)
            throw new NoSuchElementException();
        return head;
    }
    
    public boolean isEmpty() {
        return head == null;
    }
    
    public IStrategoList tail() {
        if (tail == null)
            throw new IllegalStateException();
        return tail;
    }
    
    @Deprecated
    public IStrategoList prepend(IStrategoTerm prefix) {
        return new StrategoList(prefix, this, null, TermFactory.getStorageType(prefix, this));
    }
    
    public final IStrategoTerm get(int index) {
        return getSubterm(index);
    }
    
    public IStrategoTerm[] getAllSubterms() {
        int size = size();
        IStrategoTerm[] clone = new IStrategoTerm[size];
        IStrategoList list = this;
        for (int i = 0; i < size; i++) {
            clone[i] = list.head();
            list = list.tail();
        }
        return clone;
    }

    
    public final int size() {
        return getSubtermCount();
    }

    public IStrategoTerm getSubterm(int index) {
        IStrategoList list = this;
        if (index < 0) throw new IndexOutOfBoundsException("Index out of bounds: " + index);
        for (int i = 0; i < index; i++) {
        	if (list.isEmpty()) throw new IndexOutOfBoundsException("Index out of bounds: " + index);
            list = list.tail();
        }
        return list.head();
    }

    public int getSubtermCount() {
    	int result = size;
		if (result == UNKNOWN_SIZE) {
    		result = 0;
    		for (IStrategoList cur = this; !cur.isEmpty(); cur = cur.tail())
    			result++;
    		if (getStorageType() != MUTABLE)
    			size = result;
    		return result;
    	} else {
    		return result;
    	}
    }

    public int getTermType() {
        return IStrategoTerm.LIST;
    }

    @Override
    protected boolean doSlowMatch(IStrategoTerm second, int commonStorageType) {
        if (second.getTermType() != IStrategoTerm.LIST)
            return false;
        
        final IStrategoList snd = (IStrategoList) second;
        if (size() != snd.size())
            return false;
        
        if (!isEmpty()) {
        	IStrategoTerm head = head();
        	IStrategoTerm head2 = snd.head();
        	if (head != head2 && !head.match(head2))
        		return false;
        	
        	IStrategoList tail = tail();
        	IStrategoList tail2 = snd.tail();
        
        	// TODO: test equality of annos on cons nodes (see BasicStrategoList)
	        for (IStrategoList cons = tail, cons2 = tail2; !cons.isEmpty(); cons = cons.tail(), cons2 = cons2.tail()) {
	            IStrategoTerm consHead = cons.head();
				IStrategoTerm cons2Head = cons2.head();
				if (consHead != cons2Head && !consHead.match(cons2Head))
	                return false;
	        }
	        
	        if (commonStorageType == SHARABLE) {
	        	this.head = head2;
	        	this.tail = tail2;
	        }
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
        if(!isEmpty()) {
            pp.println("[");
            pp.indent(2);
            head().prettyPrint(pp);
            for (IStrategoList cur = tail(); !cur.isEmpty(); cur = cur.tail()) {
                pp.print(",");
                pp.nextIndentOff();
                cur.head().prettyPrint(pp);
                pp.println("");
            }
            pp.println("");
            pp.print("]");
            pp.outdent(2);

        } else {
            pp.print("[]");
        }
        printAnnotations(pp);
    }
    
    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("[");
        if(!isEmpty()) {
            sb.append(head().toString());
            for (IStrategoList cur = tail(); !cur.isEmpty(); cur = cur.tail()) {
                sb.append(",");
                sb.append(cur.head().toString());
            }
        }
        sb.append("]");
        appendAnnotations(sb);
        return sb.toString();
    }

    @Override
    public int hashFunction() {
    	/* UNDONE: BasicStrategoTerm hash; should use cons/nil hash instead
        long hc = 4787;
        for (IStrategoList cur = this; !cur.isEmpty(); cur = cur.tail()) {
            hc *= cur.head().hashCode();
        }
        return (int)(hc >> 2);
        */
		final int prime = 71;
		int result = 1;
		result = prime * result + ((head == null) ? 0 : head.hashCode());
		result = prime * result + ((tail == null) ? 0 : tail.hashCode());
		return result;
    }
}
