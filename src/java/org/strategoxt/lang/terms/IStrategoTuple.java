/*
 * Created on 17. sep.. 2006
 *
 * Copyright (c) 2006-2008, Karl Trygve Kalleberg <karltk@strategoxt.org>
 * 
 * Licensed under the GNU General Public License, v2
 */
package org.strategoxt.lang.terms;

public interface IStrategoTuple extends IStrategoTerm {

    public int size();
    public IStrategoTerm get(int index);

}
