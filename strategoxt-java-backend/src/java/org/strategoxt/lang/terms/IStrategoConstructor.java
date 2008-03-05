/*
 * Created on 30. aug. 2006
 *
 * Copyright (c) 2006-2008, Karl Trygve Kalleberg <karltk@strategoxt.org>
 * 
 * Licensed under the GNU General Public License, v2
 */
package org.strategoxt.lang.terms;

public interface IStrategoConstructor extends IStrategoTerm {

    public IStrategoAppl instantiate(ITermFactory factory, IStrategoTerm... kids);
    public IStrategoAppl instantiate(ITermFactory factory, IStrategoList kids);

    public String getName();
    public int getArity();

}
