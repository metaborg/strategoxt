package org.strategoxt.lang.compat;

import static org.spoofax.interpreter.core.Tools.asJavaString;
import static org.spoofax.interpreter.core.Tools.isTermString;
import static org.spoofax.interpreter.terms.IStrategoTerm.MAXIMALLY_SHARED;
import static org.spoofax.interpreter.terms.IStrategoTerm.SHARABLE;

import java.io.File;
import java.util.Map;
import java.util.WeakHashMap;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.WeakValueHashMap;
import org.strategoxt.stratego_lib.$Read$From$File_0_0;

/**
 * Reads terms from files with caching.
 * 
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class ReadFromFile_cached_0_0 extends $Read$From$File_0_0 {
	
	private static volatile boolean isInited;
	
	private static Map<File, IStrategoTerm> asyncCache =
		new WeakValueHashMap<File, IStrategoTerm>();
	
	private static Map<IStrategoTerm, FileDate> asyncCacheDates =
		new WeakHashMap<IStrategoTerm, FileDate>();
	
	public static void init() {
		if (!isInited) {
			$Read$From$File_0_0.instance = new ReadFromFile_cached_0_0();
			isInited = true;
		}
	}
	
	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm term) {
		if (!isTermString(term))
			return super.invoke(context, term);
		
		File file = context.getIOAgent().openFile(asJavaString(term));
		if (!file.exists())
			return super.invoke(context, term);
		
		FileDate cachedDate = null;
		IStrategoTerm cachedTerm = null;
		
		synchronized (asyncCache) {
			cachedTerm = asyncCache.get(file);
			if (cachedTerm != null)
				cachedDate = asyncCacheDates.get(cachedTerm);
		}
		
		long date = file.lastModified();
		if (cachedDate != null && cachedDate.date < date && cachedDate.file.equals(file)) {
			return cachedTerm;
		} else {
			IStrategoTerm result = super.invoke(context, term);
			if (result != null &&
					(result.getStorageType() == SHARABLE || result.getStorageType() == MAXIMALLY_SHARED)) {
				synchronized (asyncCache) {
					asyncCache.put(file, result);
					asyncCacheDates.put(result, new FileDate(file, date));
				}
			}
			return result;
		}
	}
	
	/**
	 * @author Lennart Kats <lennart add lclnet.nl>
	 */
	private static class FileDate {
		final File file;
		final long date;
		
		FileDate(File file, long date) {
			this.file = file;
			this.date = date;
		}
	}
}
