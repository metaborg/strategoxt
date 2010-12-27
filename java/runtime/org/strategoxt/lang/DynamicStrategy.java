package org.strategoxt.lang;

import static org.strategoxt.lang.Term.*;

import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * An abstract strategy class. Inheritor classes must implement invokeDynamic().
 * 
 * @see Strategy	An abstract strategy class where invoke() should be implemented.
 * 
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public abstract class DynamicStrategy extends Strategy implements IDynamicStrategy {
	
	@Override
	public abstract IStrategoTerm invokeDynamic(Context context, IStrategoTerm current,
			Strategy[] sargs, IStrategoTerm[] targs);
	
	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current) {
		return invokeDynamic(context, current, NO_STRATEGIES, NO_TERMS);
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1) {
		return invokeDynamic(context, current, NO_STRATEGIES, new IStrategoTerm[] { t1 });
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1, IStrategoTerm t2) {
		return invokeDynamic(context, current, NO_STRATEGIES, new IStrategoTerm[] { t1, t2 });
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3) {
		return invokeDynamic(context, current, NO_STRATEGIES, new IStrategoTerm[] { t1, t2, t3 });
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4) {
		return invokeDynamic(context, current, NO_STRATEGIES, new IStrategoTerm[] { t1, t2, t3, t4 });
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
		return invokeDynamic(context, current, NO_STRATEGIES, new IStrategoTerm[] { t1, t2, t3, t4, t5 });
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1) {
		return invokeDynamic(context, current, new Strategy[] { s1 }, NO_TERMS);
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, IStrategoTerm t1) {
		return invokeDynamic(context, current, new Strategy[] { s1 }, new IStrategoTerm[] { t1 });
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, IStrategoTerm t1, IStrategoTerm t2) {
		return invokeDynamic(context, current, new Strategy[] { s1 }, new IStrategoTerm[] { t1, t2 });
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3) {
		return invokeDynamic(context, current, new Strategy[] { s1 }, new IStrategoTerm[] { t1, t2, t3 });
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4) {
		return invokeDynamic(context, current, new Strategy[] { s1 }, new IStrategoTerm[] { t1, t2, t3, t4 });
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
		return invokeDynamic(context, current, new Strategy[] { s1 }, new IStrategoTerm[] { t1, t2, t3, t4, t5 });
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2) {
		return invokeDynamic(context, current, new Strategy[] { s1, s2 }, NO_TERMS);
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, IStrategoTerm t1) {
		return invokeDynamic(context, current, new Strategy[] { s1, s2 }, new IStrategoTerm[] { t1 });
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, IStrategoTerm t1, IStrategoTerm t2) {
		return invokeDynamic(context, current, new Strategy[] { s1, s2 }, new IStrategoTerm[] { t1, t2 });
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3) {
		return invokeDynamic(context, current, new Strategy[] { s1, s2 }, new IStrategoTerm[] { t1, t2, t3 });
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4) {
		return invokeDynamic(context, current, new Strategy[] { s1, s2 }, new IStrategoTerm[] { t1, t2, t3, t4 });
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
		return invokeDynamic(context, current, new Strategy[] { s1, s2 }, new IStrategoTerm[] { t1, t2, t3, t4, t5 });
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3) {
		return invokeDynamic(context, current, new Strategy[] { s1, s2, s3 }, NO_TERMS);
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, IStrategoTerm t1) {
		return invokeDynamic(context, current, new Strategy[] { s1, s2, s3 }, new IStrategoTerm[] { t1 });
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, IStrategoTerm t1, IStrategoTerm t2) {
		return invokeDynamic(context, current, new Strategy[] { s1, s2, s3 }, new IStrategoTerm[] { t1, t2 });
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3) {
		return invokeDynamic(context, current, new Strategy[] { s1, s2, s3 }, new IStrategoTerm[] { t1, t2, t3 });
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4) {
		return invokeDynamic(context, current, new Strategy[] { s1, s2, s3 }, new IStrategoTerm[] { t1, t2, t3, t4 });
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
		return invokeDynamic(context, current, new Strategy[] { s1, s2, s3 }, new IStrategoTerm[] { t1, t2, t3, t4, t5 });
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4) {
		return invokeDynamic(context, current, new Strategy[] { s1, s2, s3, s4 }, NO_TERMS);
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, IStrategoTerm t1) {
		return invokeDynamic(context, current, new Strategy[] { s1, s2, s3, s4 }, new IStrategoTerm[] { t1 });
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, IStrategoTerm t1, IStrategoTerm t2) {
		return invokeDynamic(context, current, new Strategy[] { s1, s2, s3, s4 }, new IStrategoTerm[] { t1, t2 });
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3) {
		return invokeDynamic(context, current, new Strategy[] { s1, s2, s3, s4 }, new IStrategoTerm[] { t1, t2, t3 });
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4) {
		return invokeDynamic(context, current, new Strategy[] { s1, s2, s3, s4 }, new IStrategoTerm[] { t1, t2, t3, t4 });
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
		return invokeDynamic(context, current, new Strategy[] { s1, s2, s3, s4 }, new IStrategoTerm[] { t1, t2, t3, t4, t5 });
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, Strategy s5) {
		return invokeDynamic(context, current, new Strategy[] { s1, s2, s3, s4, s5 }, NO_TERMS);
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, Strategy s5, IStrategoTerm t1) {
		return invokeDynamic(context, current, new Strategy[] { s1, s2, s3, s4, s5 }, new IStrategoTerm[] { t1 });
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, Strategy s5, IStrategoTerm t1, IStrategoTerm t2) {
		return invokeDynamic(context, current, new Strategy[] { s1, s2, s3, s4, s5 }, new IStrategoTerm[] { t1, t2 });
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, Strategy s5, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3) {
		return invokeDynamic(context, current, new Strategy[] { s1, s2, s3, s4, s5 }, new IStrategoTerm[] { t1, t2, t3 });
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, Strategy s5, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4) {
		return invokeDynamic(context, current, new Strategy[] { s1, s2, s3, s4, s5 }, new IStrategoTerm[] { t1, t2, t3, t4 });
	}

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, Strategy s5, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
		return invokeDynamic(context, current, new Strategy[] { s1, s2, s3, s4, s5 }, new IStrategoTerm[] { t1, t2, t3, t4, t5 });
	}
}