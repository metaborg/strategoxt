package org.strategoxt.lang;

import java.util.concurrent.atomic.AtomicInteger;

import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermPrinter;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class SRTS_EXT_newint_0_0 extends Strategy {
	public static SRTS_EXT_newint_0_0 instance = new SRTS_EXT_newint_0_0();
	
	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current) {
		return new UniqueValue();
	}
	
	private static final class UniqueValue implements IStrategoInt {
		
		private static final AtomicInteger counter = new AtomicInteger();
		
		private final int value = counter.incrementAndGet();

		public int intValue() {
			return value;
		}

		public IStrategoTerm[] getAllSubterms() {
			return Term.NO_TERMS;
		}

		public IStrategoList getAnnotations() {
			return null;
		}

		public int getStorageType() {
			return IMMUTABLE;
		}

		public IStrategoTerm getSubterm(int index) {
			throw new UnsupportedOperationException();
		}

		public int getSubtermCount() {
			return 0;
		}

		public int getTermType() {
			return INT;
		}

		public void prettyPrint(ITermPrinter pp) {
			pp.print(String.valueOf(value));
		}

		public boolean match(IStrategoTerm second) {
			return second == this;
		}
		
		@Override
		public boolean equals(Object obj) {
			return obj == this;
		}
		
		@Override
		public int hashCode() {
			// Always different from basic stratego int hash
			return (449 * value ^ 7841) + 1;
		}
		
		@Override
		public String toString() {
			return String.valueOf(value);
		}
		
	}
}
