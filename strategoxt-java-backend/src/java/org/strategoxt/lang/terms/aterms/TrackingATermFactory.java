/*
 * Created on 17. sep.. 2006
 *
 * Copyright (c) 2005, Karl Trygve Kalleberg <karltk@strategoxt.org>
 * 
 * Licensed under the GNU General Public License, v2
 */
package org.strategoxt.lang.terms.aterms;

import java.util.Map;
import java.util.WeakHashMap;

import shared.SharedObject;
import aterm.AFun;
import aterm.ATermAppl;
import aterm.pure.PureFactory;

public class TrackingATermFactory extends PureFactory {

    private Map<String, Object>  seenAFuns;
    private static final Object marker = "foo";

    public TrackingATermFactory() {
        super();
        seenAFuns = new WeakHashMap<String, Object>();
    }

    @Override
    public SharedObject build(SharedObject arg0) {

        if(arg0 instanceof aterm.AFun) {
            seenAFuns.put(((AFun)arg0).getName(), marker);
        }
        
        return super.build(arg0);
    }

    public boolean hasAFun(String name, int arity) {
        return seenAFuns.get(name) != null;
    }

    public ATermAppl makeString(String s) {
        AFun f = makeAFun(s, 0, true);
        return makeAppl(f);
    }
}
