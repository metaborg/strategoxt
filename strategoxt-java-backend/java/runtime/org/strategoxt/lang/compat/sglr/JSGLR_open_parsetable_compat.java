package org.strategoxt.lang.compat.sglr;

import java.util.WeakHashMap;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.jsglr.JSGLRLibrary;
import org.spoofax.interpreter.library.jsglr.JSGLRPrimitive;
import org.spoofax.interpreter.library.jsglr.JSGLR_open_parsetable;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.jsglr.InvalidParseTableException;
import org.spoofax.jsglr.ParseTable;
import org.strategoxt.lang.ImportTerm;

import aterm.ATerm;
import aterm.ATermFactory;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class JSGLR_open_parsetable_compat extends JSGLRPrimitive {
	
	public static final String NAME = "JSGLR_open_parsetable_compat";

	// TODO: Do (non-static) caching at the IContext level
    
    private final WeakHashMap<ATerm, IStrategoInt> parseTableCache =
        new WeakHashMap<ATerm, IStrategoInt>();
    
    private final JSGLR_open_parsetable normalOpener;
    
    private final ATermFactory factory;
	
	protected JSGLR_open_parsetable_compat(ATermFactory factory) {
		super(NAME, 0, 1);
		normalOpener = new JSGLR_open_parsetable();
		this.factory = factory;
	}
	
	@Override
	public boolean call(IContext env, Strategy[] svars, IStrategoTerm[] tvars)
			throws InterpreterException {
	    
		if (tvars[0] instanceof ImportTerm) {
			return openTable(env, ((ImportTerm) tvars[0]).getATerm(factory));
		} else {
			return normalOpener.call(env, svars, tvars);
		}
	}
	
	protected boolean openTable(IContext env, ATerm table) {
	    IStrategoInt cached = parseTableCache.get(table);
	    if (cached != null) {
	        env.setCurrent(cached);
	        if (getLibrary(env).getParseTable(cached.intValue()) == null)
	        	throw new IllegalStateException("Inconsistent context: wrong JSGLR library instance");
	        return true;
	    }
		
		JSGLRLibrary lib = getLibrary(env);
		try {
			ParseTable pt = lib.getParseTableManager().loadFromTerm(table);
			IStrategoInt result = env.getFactory().makeInt(lib.addParseTable(pt));
            
			env.setCurrent(result);			
			parseTableCache.put(table, result);
		} catch (InvalidParseTableException e) {
			e.printStackTrace();
			return false;
		}
		return true;
	}

}
