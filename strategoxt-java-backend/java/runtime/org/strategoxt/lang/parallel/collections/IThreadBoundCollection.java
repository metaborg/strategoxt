package org.strategoxt.lang.parallel.collections;

/**
 * A marker interface for thread-bound collections.
 * 
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public interface IThreadBoundCollection {
	Thread getThread();
}
