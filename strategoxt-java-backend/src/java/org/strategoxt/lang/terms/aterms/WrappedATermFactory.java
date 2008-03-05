/*
 * Created on 29.jul.2005
 *
 * Copyright (c) 2004, Karl Trygve Kalleberg <karltk@ii.uib.no>
 * 
 * Licensed under the GNU General Public License, v2
 */
package org.strategoxt.lang.terms.aterms;

import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.util.Collection;
import java.util.WeakHashMap;

import org.strategoxt.NotImplementedException;
import org.strategoxt.lang.terms.IStrategoAppl;
import org.strategoxt.lang.terms.IStrategoConstructor;
import org.strategoxt.lang.terms.IStrategoInt;
import org.strategoxt.lang.terms.IStrategoList;
import org.strategoxt.lang.terms.IStrategoReal;
import org.strategoxt.lang.terms.IStrategoString;
import org.strategoxt.lang.terms.IStrategoTerm;
import org.strategoxt.lang.terms.IStrategoTuple;
import org.strategoxt.lang.terms.ITermFactory;

import aterm.AFun;
import aterm.ATerm;
import aterm.ATermAppl;
import aterm.ATermInt;
import aterm.ATermList;
import aterm.ATermReal;

public class WrappedATermFactory implements ITermFactory {
    private TrackingATermFactory realFactory;
    private WeakHashMap<ATerm, WrappedATerm> termCache;
    private WeakHashMap<AFun, IStrategoConstructor> ctorCache;
    
    public TrackingATermFactory getFactory() {
    	return realFactory;
    }

    public WrappedATermFactory() {
        realFactory = new TrackingATermFactory();
        termCache = new WeakHashMap<ATerm, WrappedATerm>();
        ctorCache = new WeakHashMap<AFun, IStrategoConstructor>();
    }
    
    public boolean hasConstructor(String name, int arity) {
        return realFactory.hasAFun(name, arity);
    }

    public IStrategoTerm parseFromFile(String path) throws IOException {
        ATerm t = realFactory.readFromFile(path);
        return wrapTerm(t);
    }

    public IStrategoTerm parseFromStream(InputStream inputStream) throws IOException {
        ATerm t = realFactory.readFromFile(inputStream);
        return wrapTerm(t);
    }

    public IStrategoTerm parseFromString(String text) {
        ATerm t = realFactory.parse(text);
        return wrapTerm(t);
    }

    public WrappedATerm wrapTerm(ATerm t) {
        
        WrappedATerm r = termCache.get(t);
        if(r != null)
            return r;
        
        switch(t.getType()) {
        case ATerm.AFUN:
            return memoize(t, new WrappedAFun(this, (AFun)t));
        case ATerm.REAL:
            return memoize(t, new WrappedATermReal(this, (ATermReal)t));
        case ATerm.INT:
            return memoize(t, new WrappedATermInt(this, (ATermInt)t));
        case ATerm.LIST:
            return memoize(t, new WrappedATermList(this, (ATermList)t));
        case ATerm.APPL:
            ATermAppl a = (ATermAppl)t;
            if(a.isQuoted() && a.getArity() == 0)
                return memoize(t, new WrappedATermString(this, a));
            else if(a.getName().equals("")) // FIXME use AFun
                return memoize(t, new WrappedATermTuple(this, a));
            else  
                return memoize(t, new WrappedATermAppl(this, a));
        }
        throw new WrapperException();
    }

     private <T extends WrappedATerm> T memoize(ATerm t, T wrapper) {
        termCache.put(t, wrapper);
        return wrapper;
    }

    public IStrategoAppl makeAppl(IStrategoConstructor ctr, IStrategoList kids) {
        return ctr.instantiate(this, kids);
    }

    public IStrategoAppl makeAppl(IStrategoConstructor ctr, IStrategoTerm... kids) {
        return ctr.instantiate(this, kids);
    }

    public IStrategoConstructor makeConstructor(String name, int arity) {
        return wrapConstructor(realFactory.makeAFun(name, arity, false));
    }

    public IStrategoInt makeInt(int i) {
        ATermInt x = realFactory.makeInt(i);
        return memoize(x, new WrappedATermInt(this, x));
    }

    public IStrategoList makeList(IStrategoTerm... terms) {
        ATermList l = realFactory.makeList();
        
        for(int i = terms.length - 1; i >= 0; i--) {
            IStrategoTerm t = terms[i];
            if(t instanceof WrappedATerm) {
                l = l.insert(((WrappedATerm)t).getATerm());
            } else {
                throw new WrapperException();
            }
        }

        IStrategoList r = (IStrategoList) lookupTerm(l);
        if(r != null)
            return r;

        return memoize(l, new WrappedATermList(this, l));
    }

    private IStrategoTerm lookupTerm(ATermList l) {
        return termCache.get(l);
    }

    public IStrategoList makeList(Collection<IStrategoTerm> terms) {
        return makeList(terms.toArray(new IStrategoTerm[0]));
    }

    public IStrategoReal makeReal(double d) {
        return (IStrategoReal) wrapTerm(realFactory.makeReal(d));
    }

    public IStrategoString makeString(String s) {
        return (IStrategoString) wrapTerm(realFactory.makeString(s));
    }

    public IStrategoTuple makeTuple(IStrategoTerm... terms) {
        ATerm[] args = new ATerm[terms.length];
        int pos = 0;
        for(IStrategoTerm t : terms) {
            args[pos++] = ((WrappedATerm)t).getATerm();
        }
        AFun afun = realFactory.makeAFun("", terms.length, false);
        return (IStrategoTuple) wrapTerm(realFactory.makeAppl(afun, args));
    }

    public void unparseToFile(IStrategoTerm t, OutputStream ous) throws IOException {
        if(!(t instanceof WrappedATerm)) {
            throw new NotImplementedException();
        }

    	if (!(t instanceof WrappedATerm))
    		throw new WrapperException();
    	((WrappedATerm)t).getATerm().writeToTextFile(ous);
    }

    public IStrategoConstructor wrapConstructor(AFun fun) {
        
        IStrategoConstructor c = lookupCtor(fun);
        if(c != null)
            return c;
        c = new WrappedAFun(this, fun);
        ctorCache.put(fun, c);
        return c;
    }

    private IStrategoConstructor lookupCtor(AFun fun) {
        return ctorCache.get(fun);
//        IStrategoConstructor c = (IStrategoConstructor) ctorCache.get(fun);
//        if(c == null)
//            System.out.println()
    }

    public IStrategoTerm replaceAppl(IStrategoConstructor constructor, IStrategoTerm[] kids, IStrategoTerm old) {
        return makeAppl(constructor, kids);
    }
}
