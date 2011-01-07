package org.strategoxt.lang.terms;

import static java.lang.Math.min;
import static org.spoofax.interpreter.terms.IStrategoTerm.MAXIMALLY_SHARED;
import static org.spoofax.interpreter.terms.IStrategoTerm.SHARABLE;
import static org.spoofax.interpreter.terms.IStrategoTerm.STRING;

import java.io.BufferedInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.lang.ref.WeakReference;
import java.util.Collection;
import java.util.HashMap;
import java.util.WeakHashMap;

import org.spoofax.interpreter.terms.BasicTermFactory;
import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoConstructor;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoReal;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;
import org.spoofax.interpreter.terms.ITermFactory;
import org.spoofax.interpreter.terms.saf.BinaryReader;
import org.strategoxt.lang.StrategoException;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class TermFactory extends BasicTermFactory implements ITermFactory {

    public static final IStrategoTerm[] EMPTY = BasicTermFactory.EMPTY;
    
    private static final int MY_STORAGE_TYPE = SHARABLE;
    
    // Strings should be MAXIMALLY_SHARED, but we use
    // a weaker assumption instead to be safe (StrategoXT/834)
    private static final int STRING_STORAGE_TYPE = SHARABLE;
    
    public static final int MAX_POOLED_STRING_LENGTH = 100;
    
    private static final IStrategoInt[] intCache = initIntCache();

    /**
     * The singleton maximally shared empty list instance.
     * 
     * Other empty lists may exists, but this is the only one
     * that may be marked maximally shared.
     */
    public static final StrategoList EMPTY_LIST =
    	new StrategoList(null, null, null, MAXIMALLY_SHARED); 

    private static final HashMap<StrategoConstructor, StrategoConstructor> asyncCtorCache =
        new HashMap<StrategoConstructor, StrategoConstructor>();
    
    // StrategoXT/801: must use weak keys and values, and must maintain maximal sharing to avoid early collection
    private static final WeakHashMap<String, WeakReference<StrategoString>> asyncStringPool =
        new WeakHashMap<String, WeakReference<StrategoString>>();
    
    @Override
    public boolean hasConstructor(String name, int arity) {
        synchronized (TermFactory.class) {
        	if (arity == 0) {
            	if (asyncStringPool.containsKey(name)) {
            		return true;
            	} else if (name.length() > MAX_POOLED_STRING_LENGTH) {
            		throw new StrategoException("String too long to be pooled (newname not allowed): " + name);
            	} else {
                	// HACK: pre-allocating strings to avoid race condition 
            		asyncStringPool.put(name, new WeakReference<StrategoString>(new StrategoString(name, null, STRING_STORAGE_TYPE)));
            		return false;
            	}
        	} else {
        		// UNDONE: requires zeroary constructors to be registered in the string pool 
        		// return asyncCtorCache.get(new StrategoConstructor(name, arity)) != null;
        		throw new UnsupportedOperationException();
        	}
        }
    }
    
    @Override
    public IStrategoTerm parseFromStream(InputStream inputStream) throws IOException {
        /*
    	BufferedInputStream bis;
        if (inputStream instanceof BufferedInputStream) {
            bis = (BufferedInputStream) inputStream;
        } else if (inputStream instanceof FileInputStream) {
        	FileChannel channel = ((FileInputStream) inputStream).getChannel();
			ChannelPushbackInputStream pis = new ChannelPushbackInputStream(channel);
			if (BAFReader.isBinaryATerm(pis)) {
				return new BAFReader(this, pis).readFromBinaryFile(true);
			} else {
				return super.parseFromStream(pis);
			}
        } else {
            bis = new BufferedInputStream(inputStream);
        }
        if (BAFReader.isBinaryATerm(bis)) {
            return new BAFReader(this, bis).readFromBinaryFile(true);
        } else {
            return super.parseFromStream(bis);
        }
        */
    	BufferedInputStream bis;
        if (inputStream instanceof BufferedInputStream)
            bis = (BufferedInputStream) inputStream;
        else
            bis = new BufferedInputStream(inputStream);
        
        if (BAFReader.isBinaryATerm(bis)) {
            return new BAFReader(this, bis).readFromBinaryFile(true);
        } else if (BinaryReader.isStreamingATerm(bis)) {
        	return BinaryReader.readTermFromSAFStream(this, bis);
        } else {
            return super.parseFromStream(bis);
        }
    }

    @Override
    public IStrategoAppl makeAppl(IStrategoConstructor ctr,
            IStrategoTerm[] terms, IStrategoList annotations) {
    	int storageType = MY_STORAGE_TYPE;
		storageType = min(storageType, getStorageType(terms));
    	if (storageType != 0)
        	storageType = min(storageType, getStorageType(annotations));
        return new StrategoAppl(ctr, terms, annotations, storageType);
    }

    @Override
    public StrategoConstructor makeConstructor(String name, int arity) {
        StrategoConstructor result = new StrategoConstructor(name, arity);
        synchronized (TermFactory.class) {
	        StrategoConstructor cached = asyncCtorCache.get(result);
	        if (cached == null) {
	            asyncCtorCache.put(result, result);
	        } else {
	            result = cached;
	        }
        }
        return result;
    }

    @Override
    public IStrategoInt makeInt(int i) {
    	if (0 <= i && i <= 255)
    		return intCache[i];
    	return new StrategoInt(i, null);
    }

    private static final IStrategoInt[] initIntCache() {
    	IStrategoInt[] results = new IStrategoInt[256];
    	for (int i = 0; i < results.length; i++) {
    		results[i] = new StrategoInt(i);
    	}
    	return results;
    }
    
    @Override
    public IStrategoList makeList(IStrategoTerm[] terms, IStrategoList outerAnnos) {
        StrategoList result = EMPTY_LIST;
        int storageType = MY_STORAGE_TYPE;
        int i = terms.length - 1;
        while (i > 0) {
        	IStrategoTerm head = terms[i--];
            storageType = min(storageType, getStorageType(head));
			result = new StrategoList(head, result, null, storageType);
        }
        if (i == 0) {
        	IStrategoTerm head = terms[0];
            storageType = min(storageType, getStorageType(head));
			result = new StrategoList(head, result, outerAnnos, storageType);
        } else {
        	if (outerAnnos == null || outerAnnos.isEmpty()) {
        		return EMPTY_LIST;
        	} else {
        		return new StrategoList(null, null, outerAnnos, MY_STORAGE_TYPE);
        	}
        }
        return result;
    }

    @Override
    public IStrategoList makeList(Collection<IStrategoTerm> terms) {
        return makeList(terms.toArray(EMPTY));
    }
    
    @Override
    public IStrategoList makeListCons(IStrategoTerm head, IStrategoList tail, IStrategoList annotations) {
    	int storageType = min(MY_STORAGE_TYPE, getStorageType(head, tail));
    	
    	if (head == null) return EMPTY_LIST;
    	return new StrategoList(head, tail, annotations, storageType);
    }

    @Override
    public IStrategoReal makeReal(double d) {
        return new StrategoReal(d, null);
    }

    @Override
    public IStrategoString makeString(String s) {
    	if (s.length() > MAX_POOLED_STRING_LENGTH)
    		return new StrategoString(s, null, MY_STORAGE_TYPE);
    	
    	synchronized (TermFactory.class) {
	    	WeakReference<StrategoString> resultRef = asyncStringPool.get(s);
	    	StrategoString result = resultRef == null ? null : resultRef.get();
	    	if (result == null) {
	        	result = new StrategoString(s, null, STRING_STORAGE_TYPE);
	        	asyncStringPool.put(s, new WeakReference<StrategoString>(result));
	    	}
	    	return result;
    	}
    }

    @Override
    public IStrategoTuple makeTuple(IStrategoTerm[] terms, IStrategoList annos) {
        int storageType = min(MY_STORAGE_TYPE, getStorageType(terms));
		return new StrategoTuple(terms, annos, storageType);
    }
    
    protected static int getStorageType(IStrategoTerm term) {
    	return term == null ? MAXIMALLY_SHARED : term.getStorageType();
    }
    
    protected static int getStorageType(IStrategoTerm term1, IStrategoTerm term2) {
    	int result = term1.getStorageType();
    	if (result == 0) return 0;
    	return min(result, term2.getStorageType());
    }
    
    protected static int getStorageType(IStrategoTerm[] terms) {
    	int result = MY_STORAGE_TYPE;
    	for (IStrategoTerm term : terms) {
    		int type = term.getStorageType();
    		if (type < result) { 
        		if (type == 0) return 0;
    			result = type;
    		}
    	}
    	return result;
    }
    
    @Override
    public IStrategoTerm annotateTerm(IStrategoTerm term, IStrategoList annotations) {
        if (term.getAnnotations() == annotations) { // cheap check
            return term;
        } else if (term.getStorageType() == MAXIMALLY_SHARED) {
			if (term == EMPTY_LIST) {
				if (annotations == EMPTY_LIST || annotations.isEmpty()) {
					return EMPTY_LIST;
				} else {
					return new StrategoList(null, null, annotations, MY_STORAGE_TYPE);
				}
			} else if (term.getTermType() == STRING) {
				String value = ((IStrategoString) term).stringValue();
				if (annotations == EMPTY_LIST || annotations.isEmpty()) {
					return makeString(value);
				} else {
					return new StrategoString(value, annotations, MY_STORAGE_TYPE);
				}
			} else if (term.getAnnotations() == EMPTY_LIST) {
				return new StrategoAnnotation(this, term, annotations, MY_STORAGE_TYPE);
			} else if (term instanceof StrategoAnnotation) {
				term = ((StrategoAnnotation) term).getWrapped();
				int storageType = min(MY_STORAGE_TYPE, getStorageType(term));
				return new StrategoAnnotation(this, term, annotations, storageType);
			} else {
				throw new UnsupportedOperationException("Unable to annotate term of type " + term.getClass().getName());
			}
        } else if ((annotations == EMPTY_LIST || annotations.isEmpty()) && term.getTermType() == STRING) {
    		return makeString(((IStrategoString) term).stringValue());
        } else if (term instanceof StrategoTerm) {
        	StrategoTerm result = ((StrategoTerm) term).clone();
    	    result.internalSetAnnotations(annotations);
    	    assert result.getStorageType() != MAXIMALLY_SHARED;
    	    return result;
    	} else {
            throw new UnsupportedOperationException("Unable to annotate term of type " + term.getClass().getName() + " in " + getClass().getName());
        }
    }

}
