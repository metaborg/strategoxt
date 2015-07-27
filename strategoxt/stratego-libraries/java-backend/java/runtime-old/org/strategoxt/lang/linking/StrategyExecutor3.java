package org.strategoxt.lang.linking;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

public class StrategyExecutor3 extends Strategy {

	private final Strategy strategy1;
	private final Strategy strategy2;
	private final Strategy strategy3;

	public StrategyExecutor3(Strategy strategy1, Strategy strategy2, Strategy strategy3) {
		super();
		this.strategy1 = strategy1;
		this.strategy2 = strategy2;
		this.strategy3 = strategy3;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current) {
		IStrategoTerm term0 = current;

		term0 = strategy1.invoke(context, current);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, t1);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, t1);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, t1);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1, IStrategoTerm t2) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, t1, t2);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, t1, t2);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, t1, t2);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, t1, t2, t3);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, t1, t2, t3);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, t1, t2, t3);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, t1, t2, t3, t4);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, t1, t2, t3, t4);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, t1, t2, t3, t4);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, t1, t2, t3, t4, t5);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, t1, t2, t3, t4, t5);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, t1, t2, t3, t4, t5);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, s1);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, s1);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, s1);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, IStrategoTerm t1) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, s1, t1);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, s1, t1);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, s1, t1);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, IStrategoTerm t1, IStrategoTerm t2) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, s1, t1, t2);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, s1, t1, t2);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, s1, t1, t2);
		if (term0 != null)
			return term0;
		return null;
		
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, s1, t1, t2, t3);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, s1, t1, t2, t3);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, s1, t1, t2, t3);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, s1, t1, t2, t3, t4);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, s1, t1, t2, t3, t4);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, s1, t1, t2, t3, t4);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4,
			IStrategoTerm t5) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, s1, t1, t2, t3, t4, t5);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, s1, t1, t2, t3, t4, t5);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, s1, t1, t2, t3, t4, t5);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, s1, s2);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, s1, s2);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, s1, s2);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, IStrategoTerm t1) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, s1, s2, t1);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, s1, s2, t1);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, s1, s2, t1);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, IStrategoTerm t1, IStrategoTerm t2) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, s1, s2, t1, t2);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, s1, s2, t1, t2);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, s1, s2, t1, t2);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, s1, s2, t1, t2, t3);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, s1, s2, t1, t2, t3);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, s1, s2, t1, t2, t3);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3,
			IStrategoTerm t4) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, s1, s2, t1, t2, t3, t4);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, s1, s2, t1, t2, t3, t4);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, s1, s2, t1, t2, t3, t4);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3,
			IStrategoTerm t4, IStrategoTerm t5) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, s1, s2, t1, t2, t3, t4, t5);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, s1, s2, t1, t2, t3, t4, t5);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, s1, s2, t1, t2, t3, t4, t5);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, s1, s2, s3);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, s1, s2, s3);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, s1, s2, s3);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, IStrategoTerm t1) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, s1, s2, s3, t1);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, s1, s2, s3, t1);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, s1, s2, s3, t1);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, IStrategoTerm t1, IStrategoTerm t2) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, s1, s2, s3, t1, t2);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, s1, s2, s3, t1, t2);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, s1, s2, s3, t1, t2);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, IStrategoTerm t1, IStrategoTerm t2,
			IStrategoTerm t3) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, s1, s2, s3, t1, t2, t3);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, s1, s2, s3, t1, t2, t3);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, s1, s2, s3, t1, t2, t3);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, IStrategoTerm t1, IStrategoTerm t2,
			IStrategoTerm t3, IStrategoTerm t4) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, s1, s2, s3, t1, t2, t3, t4);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, s1, s2, s3, t1, t2, t3, t4);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, s1, s2, s3, t1, t2, t3, t4);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, IStrategoTerm t1, IStrategoTerm t2,
			IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, s1, s2, s3, t1, t2, t3, t4, t5);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, s1, s2, s3, t1, t2, t3, t4, t5);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, s1, s2, s3, t1, t2, t3, t4, t5);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, s1, s2, s3, s4);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, s1, s2, s3, s4);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, s1, s2, s3, s4);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, IStrategoTerm t1) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, s1, s2, s3, s4, t1);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, s1, s2, s3, s4, t1);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, s1, s2, s3, s4, t1);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, IStrategoTerm t1, IStrategoTerm t2) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, s1, s2, s3, s4, t1, t2);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, s1, s2, s3, s4, t1, t2);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, s1, s2, s3, s4, t1, t2);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, IStrategoTerm t1, IStrategoTerm t2,
			IStrategoTerm t3) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, s1, s2, s3, s4, t1, t2, t3);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, s1, s2, s3, s4, t1, t2, t3);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, s1, s2, s3, s4, t1, t2, t3);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, IStrategoTerm t1, IStrategoTerm t2,
			IStrategoTerm t3, IStrategoTerm t4) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, s1, s2, s3, s4, t1, t2, t3, t4);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, s1, s2, s3, s4, t1, t2, t3, t4);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, s1, s2, s3, s4, t1, t2, t3, t4);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, IStrategoTerm t1, IStrategoTerm t2,
			IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, s1, s2, s3, s4, t1, t2, t3, t4, t5);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, s1, s2, s3, s4, t1, t2, t3, t4, t5);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, s1, s2, s3, s4, t1, t2, t3, t4, t5);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, Strategy s5) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, s1, s2, s3, s4, s5);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, s1, s2, s3, s4, s5);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, s1, s2, s3, s4, s5);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, Strategy s5, IStrategoTerm t1) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, s1, s2, s3, s4, s5, t1);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, s1, s2, s3, s4, s5, t1);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, s1, s2, s3, s4, s5, t1);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, Strategy s5, IStrategoTerm t1,
			IStrategoTerm t2) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, s1, s2, s3, s4, s5, t1, t2);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, s1, s2, s3, s4, s5, t1, t2);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, s1, s2, s3, s4, s5, t1, t2);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, Strategy s5, IStrategoTerm t1,
			IStrategoTerm t2, IStrategoTerm t3) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, s1, s2, s3, s4, s5, t1, t2, t3);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, s1, s2, s3, s4, s5, t1, t2, t3);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, s1, s2, s3, s4, s5, t1, t2, t3);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, Strategy s5, IStrategoTerm t1,
			IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, s1, s2, s3, s4, s5, t1, t2, t3, t4);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, s1, s2, s3, s4, s5, t1, t2, t3, t4);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, s1, s2, s3, s4, s5, t1, t2, t3, t4);
		if (term0 != null)
			return term0;
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, Strategy s5, IStrategoTerm t1,
			IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
		IStrategoTerm term0 = current;
		term0 = strategy1.invoke(context, current, s1, s2, s3, s4, s5, t1, t2, t3, t4, t5);
		if (term0 != null)
			return term0;
		term0 = strategy2.invoke(context, current, s1, s2, s3, s4, s5, t1, t2, t3, t4, t5);
		if (term0 != null)
			return term0;
		term0 = strategy3.invoke(context, current, s1, s2, s3, s4, s5, t1, t2, t3, t4, t5);
		if (term0 != null)
			return term0;
		return null;
	}

	@Override
	public IStrategoTerm invokeDynamic(Context context, IStrategoTerm current, Strategy[] s, IStrategoTerm[] t) {
		IStrategoTerm term0 = current;

		term0 = strategy1.invokeDynamic(context, current, s, t);
		if (term0 != null)
			return term0;
		term0 = strategy2.invokeDynamic(context, current, s, t);
		if (term0 != null)
			return term0;
		term0 = strategy3.invokeDynamic(context, current, s, t);
		if (term0 != null)
			return term0;

		return null;
	}

	@Override
	public String toString() {
		return "StrategyExecutor [" + strategy1 + ", " + strategy2 +  ", " + strategy3 + "]";
	}

}
