package org.strategoxt.lang;

import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * An abstract strategy class. Inheritor classes should implement one
 * of the invoke() overloads or invokeDynamic() as appropriate.
 * 
 * @see DynamicStrategy
 *        An abstract strategy class where invokeDynamic() should be implemented.
 * 
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public abstract class Strategy {

	private transient String name;

	/**
	 * Invoke this strategy using a dynamic number of arguments.
	 * 
	 * Implementing classes should override this method
	 * and the corresponding <code>invoke()</code> method
	 * (if applicable).
	 * 
	 * @return The resulting term, or null in case of failure.
	 */
	public IStrategoTerm invokeDynamic(Context context, IStrategoTerm current,
			Strategy[] s, IStrategoTerm[] t) {

		switch (s.length) {
			case 0:
				switch (t.length) {
					case 0: return invoke(context, current);
					case 1: return invoke(context, current, t[0]);
					case 2: return invoke(context, current, t[0], t[1]);
					case 3: return invoke(context, current, t[0], t[1], t[2]);
					case 4: return invoke(context, current, t[0], t[1], t[2], t[3]);
					case 5: return invoke(context, current, t[0], t[1], t[2], t[3], t[4]);
				}
				break;
			case 1: 
				switch (t.length) {
					case 0: return invoke(context, current, s[0]);
					case 1: return invoke(context, current, s[0], t[0]);
					case 2: return invoke(context, current, s[0], t[0], t[1]);
					case 3: return invoke(context, current, s[0], t[0], t[1], t[2]);
					case 4: return invoke(context, current, s[0], t[0], t[1], t[2], t[3]);
					case 5: return invoke(context, current, s[0], t[0], t[1], t[2], t[3], t[4]);
				}
				break;
			case 2: 
				switch (t.length) {
					case 0: return invoke(context, current, s[0], s[1]);
					case 1: return invoke(context, current, s[0], s[1], t[0]);
					case 2: return invoke(context, current, s[0], s[1], t[0], t[1]);
					case 3: return invoke(context, current, s[0], s[1], t[0], t[1], t[2]);
					case 4: return invoke(context, current, s[0], s[1], t[0], t[1], t[2], t[3]);
					case 5: return invoke(context, current, s[0], s[1], t[0], t[1], t[2], t[3], t[4]);
				}
				break;
			case 3: 
				switch (t.length) {
					case 0: return invoke(context, current, s[0], s[1], s[2]);
					case 1: return invoke(context, current, s[0], s[1], s[2], t[0]);
					case 2: return invoke(context, current, s[0], s[1], s[2], t[0], t[1]);
					case 3: return invoke(context, current, s[0], s[1], s[2], t[0], t[1], t[2]);
					case 4: return invoke(context, current, s[0], s[1], s[2], t[0], t[1], t[2], t[3]);
					case 5: return invoke(context, current, s[0], s[1], s[2], t[0], t[1], t[2], t[3], t[4]);
				}
				break;
			case 4: 
				switch (t.length) {
					case 0: return invoke(context, current, s[0], s[1], s[2], s[3]);
					case 1: return invoke(context, current, s[0], s[1], s[2], s[3], t[0]);
					case 2: return invoke(context, current, s[0], s[1], s[2], s[3], t[0], t[1]);
					case 3: return invoke(context, current, s[0], s[1], s[2], s[3], t[0], t[1], t[2]);
					case 4: return invoke(context, current, s[0], s[1], s[2], s[3], t[0], t[1], t[2], t[3]);
					case 5: return invoke(context, current, s[0], s[1], s[2], s[3], t[0], t[1], t[2], t[3], t[4]);
				}
				break;
			case 5:
				switch (t.length) {
					case 0: return invoke(context, current, s[0], s[1], s[2], s[3], s[4]);
					case 1: return invoke(context, current, s[0], s[1], s[2], s[3], s[4], t[0]);
					case 2: return invoke(context, current, s[0], s[1], s[2], s[3], s[4], t[0], t[1]);
					case 3: return invoke(context, current, s[0], s[1], s[2], s[3], s[4], t[0], t[1], t[2]);
					case 4: return invoke(context, current, s[0], s[1], s[2], s[3], s[4], t[0], t[1], t[2], t[3]);
					case 5: return invoke(context, current, s[0], s[1], s[2], s[3], s[4], t[0], t[1], t[2], t[3], t[4]);
				}
		}
		
		throw new IllegalArgumentException(s, t);
	}
	
	public IStrategoTerm invoke(Context context, IStrategoTerm current) {
		throw new IllegalArgumentException();
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1) {
		throw new IllegalArgumentException(t1);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1, IStrategoTerm t2) {
		throw new IllegalArgumentException(t1, t2);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3) {
		throw new IllegalArgumentException(t1, t2, t3);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4) {
		throw new IllegalArgumentException(t1, t2, t3, t4);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
		throw new IllegalArgumentException(t1, t2, t3, t4, t5);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1) {
		throw new IllegalArgumentException(s1);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, IStrategoTerm t1) {
		throw new IllegalArgumentException(s1, t1);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, IStrategoTerm t1, IStrategoTerm t2) {
		throw new IllegalArgumentException(s1, t1, t2);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3) {
		throw new IllegalArgumentException(s1, t1, t2, t3);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4) {
		throw new IllegalArgumentException(s1, t1, t2, t3, t4);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
		throw new IllegalArgumentException(s1, t1, t2, t3, t4, t5);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2) {
		throw new IllegalArgumentException(s1, s2);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, IStrategoTerm t1) {
		throw new IllegalArgumentException(s1, s2, t1);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, IStrategoTerm t1, IStrategoTerm t2) {
		throw new IllegalArgumentException(s1, s2, t1, t2);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3) {
		throw new IllegalArgumentException(s1, s2, t1, t2, t3);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4) {
		throw new IllegalArgumentException(s1, s2, t1, t2, t3, t4);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
		throw new IllegalArgumentException(s1, s2, t1, t2, t3, t4, t5);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3) {
		throw new IllegalArgumentException(s1, s2, s3);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, IStrategoTerm t1) {
		throw new IllegalArgumentException(s1, s2, s3, t1);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, IStrategoTerm t1, IStrategoTerm t2) {
		throw new IllegalArgumentException(s1, s2, s3, t1, t2);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3) {
		throw new IllegalArgumentException(s1, s2, s3, t1, t2, t3);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4) {
		throw new IllegalArgumentException(s1, s2, s3, t1, t2, t3, t4);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
		throw new IllegalArgumentException(s1, s2, s3, t1, t2, t3, t4, t5);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4) {
		throw new IllegalArgumentException(s1, s2, s3, s4);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, IStrategoTerm t1) {
		throw new IllegalArgumentException(s1, s2, s3, s4, t1);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, IStrategoTerm t1, IStrategoTerm t2) {
		throw new IllegalArgumentException(s1, s2, s3, s4, t1, t2);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3) {
		throw new IllegalArgumentException(s1, s2, s3, s4, t1, t2, t3);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4) {
		throw new IllegalArgumentException(s1, s2, s3, s4, t1, t2, t3, t4);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
		throw new IllegalArgumentException(s1, s2, s3, s4, t1, t2, t3, t4, t5);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, Strategy s5) {
		throw new IllegalArgumentException(s1, s2, s3, s4, s5);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, Strategy s5, IStrategoTerm t1) {
		throw new IllegalArgumentException(s1, s2, s3, s4, s5, t1);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, Strategy s5, IStrategoTerm t1, IStrategoTerm t2) {
		throw new IllegalArgumentException(s1, s2, s3, s4, s5, t1, t2);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, Strategy s5, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3) {
		throw new IllegalArgumentException(s1, s2, s3, s4, s5, t1, t2, t3);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, Strategy s5, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4) {
		throw new IllegalArgumentException(s1, s2, s3, s4, s5, t1, t2, t3, t4);
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, Strategy s5, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
		throw new IllegalArgumentException(s1, s2, s3, s4, s5, t1, t2, t3, t4, t5);
	}
	
	public String getName() {
		if(name == null) {
			name = getClass().getSimpleName();
		}
		return name;
	}
	
	@Override
	public String toString() {
		return getName();
	}

	private static String argsToText(Object... args) {
		if (args.length == 0)
			return "(none)";
		
		StringBuilder result = new StringBuilder("(");
		boolean printedBar = false;

		if (args[0] instanceof IStrategoTerm) {
			result.append('|');
			printedBar = true;
		}
		result.append(args[0]);
		
		for (int i = 1; i < args.length; i++) {
			Object arg = args[i];
			if (!printedBar && arg instanceof IStrategoTerm) {
				result.append(" |");
				printedBar = true;
			} else {
				result.append(", ");
			}
			result.append(arg);
		}
		result.append(")");
		
		return result.toString();
	}
	
	private static Object[] concat(Object[] l1, Object[] l2) {
		Object[] results = new Object[l1.length + l2.length];
		System.arraycopy(l1, 0, results, 0, l1.length);
		System.arraycopy(l2, 0, results, l1.length, l2.length);
		return results;
	}

	/**
	 * Thrown to indicate that a strategy has been passed an illegal or
	 * inappropriate argument or arguments.
	 */
	private class IllegalArgumentException extends java.lang.IllegalArgumentException {
		private static final long serialVersionUID = 121251125123L;
		
		public IllegalArgumentException(Object... args) {
			super("Illegal arguments for " + getName() + " " + argsToText(args));
		}
		
		public IllegalArgumentException(Object[] s, Object[] t) {
			this(concat(s, t));
		}
	}
}
