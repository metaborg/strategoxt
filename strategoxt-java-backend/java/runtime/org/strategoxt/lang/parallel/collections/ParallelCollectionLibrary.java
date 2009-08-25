package org.strategoxt.lang.parallel.collections;

import java.util.HashSet;
import java.util.IdentityHashMap;
import java.util.Set;

import org.spoofax.interpreter.library.AbstractStrategoOperatorRegistry;
import org.spoofax.interpreter.library.ssl.SSL_hashtable_destroy;
import org.spoofax.interpreter.library.ssl.SSL_hashtable_get;
import org.spoofax.interpreter.library.ssl.SSL_hashtable_keys;
import org.spoofax.interpreter.library.ssl.SSL_hashtable_put;
import org.spoofax.interpreter.library.ssl.SSL_hashtable_remove;
import org.spoofax.interpreter.library.ssl.SSL_hashtable_reset;
import org.spoofax.interpreter.library.ssl.SSL_indexedSet_destroy;
import org.spoofax.interpreter.library.ssl.SSL_indexedSet_elements;
import org.spoofax.interpreter.library.ssl.SSL_indexedSet_getIndex;
import org.spoofax.interpreter.library.ssl.SSL_indexedSet_put;
import org.spoofax.interpreter.library.ssl.SSL_indexedSet_remove;
import org.spoofax.interpreter.library.ssl.SSL_indexedSet_reset;
import org.spoofax.interpreter.library.ssl.SSL_table_fold;
import org.spoofax.interpreter.library.ssl.SSL_table_keys_fold;
import org.spoofax.interpreter.library.ssl.SSL_table_values_fold;
import org.strategoxt.lang.parallel.ParallelJob;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class ParallelCollectionLibrary extends AbstractStrategoOperatorRegistry {

	public static final String REGISTRY_NAME = "paralleltable";
	
	private final Object syncRoot = new Object();
	
	private final IdentityHashMap<Object, Set<ParallelJob>> asyncCollectionReadLog =
		new IdentityHashMap<Object, Set<ParallelJob>>();
	
	public ParallelCollectionLibrary() {
		add(new ParallelTableCreate());
		add(new ParallelWrite(this, new SSL_hashtable_destroy()));
		add(new ParallelWrite(this, new SSL_hashtable_remove()));
		add(new ParallelWrite(this, new SSL_hashtable_reset()));
		add(new ParallelWrite(this, new SSL_hashtable_put()));
		add(new ParallelRead(this, new SSL_hashtable_get()));
		add(new ParallelRead(this, new SSL_hashtable_keys()));
		add(new ParallelRead(this, new SSL_table_fold(), 1));
		add(new ParallelRead(this, new SSL_table_values_fold(), 1));
		add(new ParallelRead(this, new SSL_table_keys_fold(), 1));
		
		add(new ParallelSetCreate());
		add(new ParallelWrite(this, new SSL_indexedSet_put()));
		add(new ParallelWrite(this, new SSL_indexedSet_remove()));
		add(new ParallelRead(this, new SSL_indexedSet_getIndex()));
		add(new ParallelRead(this, new SSL_indexedSet_elements()));
		add(new ParallelRead(this, new SSL_indexedSet_reset()));
		add(new ParallelRead(this, new SSL_indexedSet_destroy()));
	}
	
	public void invalidateReads(Object collection) {
		/* TODO: invalidateReads()
		synchronized (asyncCollectionReadLog) {
			Set<ParallelJob> jobs = asyncCollectionReadLog.get(collection);
			if (jobs != null) {
				for (ParallelJob job : jobs) {
					job.restart();
				}
			}
		}
		*/
	}
	
	public void logReadOperation(Object collection, ParallelJob job) {
		synchronized (asyncCollectionReadLog) {
			Set<ParallelJob> jobs = asyncCollectionReadLog.get(collection);
			if (jobs == null) {
				jobs = new HashSet<ParallelJob>();
				asyncCollectionReadLog.put(collection, jobs);
			}
			jobs.add(job);
		}
	}
	
	public Object getSyncRoot() {
		return syncRoot;
	}

	public String getOperatorRegistryName() {
		return REGISTRY_NAME;
	}

}
