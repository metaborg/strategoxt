/*
 * Created on 08.aug.2005
 *
 * Copyright (c) 2005-2008, Karl Trygve Kalleberg <karltk@strategoxt.org>
 * 
 * Licensed under the GNU General Public License, v2
 */
package org.strategoxt.lang.terms;

import java.util.Collection;


public interface IStrategoTermBuilder {
    
    public IStrategoConstructor makeConstructor(String string, int arity);

    public IStrategoAppl makeAppl(IStrategoConstructor ctr, IStrategoList kids);
    public IStrategoAppl makeAppl(IStrategoConstructor ctr, IStrategoTerm... terms);

    public IStrategoInt makeInt(int i);
    public IStrategoReal makeReal(double d);
    public IStrategoTuple makeTuple(IStrategoTerm... terms);
    public IStrategoString makeString(String s);
    public IStrategoList makeList(IStrategoTerm... terms);
    public IStrategoList makeList(Collection<IStrategoTerm> terms);

    public boolean hasConstructor(String ctorName, int arity);
    
}


