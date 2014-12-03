package org.strategoxt.lang.compat;

import static org.spoofax.interpreter.core.Tools.asJavaString;
import static org.spoofax.interpreter.core.Tools.isTermString;
import static org.spoofax.interpreter.terms.IStrategoTerm.MUTABLE;

import java.io.File;
import java.util.Map;
import java.util.WeakHashMap;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.TermConverter;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.WeakValueHashMap;
import org.strategoxt.lang.Strategy;
import org.strategoxt.lang.RegisteringStrategy;
import org.strategoxt.lang.StrategyCollector;

/**
 * Reads terms from files with caching.
 * 
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class $Read$From$File_cached_0_0 extends RegisteringStrategy {

	/**
	 * The number of milliseconds leeway to give before deciding a file is out
	 * of date. This is needed because not every file system supports tracking
	 * the last modified time to the millisecond level. 2 seconds should
	 * even be good for FAT16.
	 */
	private static long FILE_TIME_GRANULARITY = 2001;
	
	
	private static Map<File, IStrategoTerm> asyncCache =
		new WeakValueHashMap<File, IStrategoTerm>();
	
	private static Map<IStrategoTerm, FileDate> asyncCacheDates =
		new WeakHashMap<IStrategoTerm, FileDate>();
	
	
	private Strategy proceed;
	
	public static final $Read$From$File_cached_0_0 instance = new $Read$From$File_cached_0_0();
	
    public void registerImplementators(StrategyCollector collector)
    { 
      collector.registerStrategyImplementator("ReadFromFile_cached_0_0", instance);
    }
	
    public void bindExecutors(StrategyCollector collector)
    { 
      proceed = collector.getNonSpecialStrategyExecutor("ReadFromFile_0_0");
    }
	
	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm term) {
		if (!isTermString(term))
			return proceed.invoke(context, term);
		
		File file = context.getIOAgent().openFile(asJavaString(term));
		if (!file.exists())
			return proceed.invoke(context, term);
		
		FileDate cachedDate = null;
		IStrategoTerm cachedTerm = null;
		
		long now = System.currentTimeMillis();
		long fileDate = file.lastModified();
		
		synchronized (asyncCache) {
			cachedTerm = asyncCache.get(file);
			if (cachedTerm != null)
				cachedDate = asyncCacheDates.get(cachedTerm);
		}
		
		if (now < fileDate + FILE_TIME_GRANULARITY) {
			// Date stamp too recent or in the future
			return proceed.invoke(context, term);
		} else if (cachedDate != null
				&& cachedDate.accessed > fileDate + FILE_TIME_GRANULARITY
				&& cachedDate.file.equals(file)) {
			
			if (cachedTerm.getStorageType() == MUTABLE) {
				cachedTerm = TermConverter.convert(context.getFactory(), cachedTerm);
				putCache(file, now, cachedTerm);
			}
			return cachedTerm;
		} else {
			IStrategoTerm result = proceed.invoke(context, term);
			if (result != null) {
				putCache(file, now, result);
			}
			return result;
		}
	}

	private void putCache(File file, long now, IStrategoTerm result) {
		synchronized (asyncCache) {
			asyncCache.put(file, result);
			asyncCacheDates.put(result, new FileDate(file, now));
		}
	}
	
	/**
	 * @author Lennart Kats <lennart add lclnet.nl>
	 */
	private static class FileDate {
		final File file;
		final long accessed;
		
		FileDate(File file, long accessed) {
			this.file = file;
			this.accessed = accessed;
		}
	}
}
