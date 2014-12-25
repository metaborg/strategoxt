package org.strategoxt.lang.linking;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

public class StrategyExecutor extends Strategy {

	private final Strategy[] implementators;

	public StrategyExecutor(Strategy[] implementators) {
		this.implementators = implementators;
	}
	
	public IStrategoTerm invoke(Context context, IStrategoTerm current) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current, t1);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1, IStrategoTerm t2) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current, t1, t2);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current, t1, t2, t3);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current, t1, t2, t3, t4);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current, t1, t2, t3, t4, t5);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current, s1);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, IStrategoTerm t1) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current, s1, t1);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, IStrategoTerm t1, IStrategoTerm t2) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current, s1, t1, t2);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current, s1, t1, t2, t3);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current,s1, t1, t2, t3, t4);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current, s1, t1, t2, t3, t4, t5);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current,s1, s2);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, IStrategoTerm t1) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current, s1, s2, t1);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, IStrategoTerm t1, IStrategoTerm t2) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current, s1, s2, t1, t2);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current, s1, s2, t1, t2, t3);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current, s1, s2, t1, t2, t3, t4);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current, s1, s2, t1, t2, t3, t4, t5);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current, s1, s2, s3);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, IStrategoTerm t1) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current, s1, s2, s3, t1);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, IStrategoTerm t1, IStrategoTerm t2) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current, s1, s2, s3, t1, t2);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current, s1, s2, s3, t1, t2, t3);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current, s1, s2, s3, t1, t2, t3, t4);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current, s1, s2, s3, t1, t2, t3, t4, t5);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current, s1, s2, s3, s4);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, IStrategoTerm t1) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current, s1, s2, s3, s4, t1);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, IStrategoTerm t1, IStrategoTerm t2) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current, s1, s2, s3, s4, t1, t2);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current, s1, s2, s3, s4, t1, t2, t3);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current, s1, s2, s3, s4, t1, t2, t3, t4);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current, s1, s2, s3, s4, t1, t2, t3, t4, t5);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, Strategy s5) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current, s1, s2, s3, s4, s5);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, Strategy s5, IStrategoTerm t1) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current, s1, s2, s3, s4, s5, t1);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, Strategy s5, IStrategoTerm t1, IStrategoTerm t2) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current, s1, s2, s3, s4, s5, t1, t2);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, Strategy s5, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current, s1, s2, s3, s4, s5, t1, t2, t3);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, Strategy s5, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current, s1, s2, s3, s4, s5, t1, t2, t3, t4);
			if (term0 != null)
				return term0;
		}
		return null;
	}

	public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s1, Strategy s2, Strategy s3, Strategy s4, Strategy s5, IStrategoTerm t1, IStrategoTerm t2, IStrategoTerm t3, IStrategoTerm t4, IStrategoTerm t5) {
		IStrategoTerm term0 = current;
		for (Strategy s : this.implementators) {
			term0 = s.invoke(context, current, s1, s2, s3, s4, s5, t1, t2, t3, t4, t5);
			if (term0 != null)
				return term0;
		}
		return null;
	}
	
	@Override
	public IStrategoTerm invokeDynamic(Context context, IStrategoTerm current, Strategy[] s, IStrategoTerm[] t) {
		IStrategoTerm term0 = current;
		for (Strategy sy : this.implementators) {
			term0 = sy.invokeDynamic(context, current, s, t);
			if (term0 != null)
				return term0;
		}
		return null;
	}
	
	
	@Override
	public String toString() {
		return "StrategyExecutor " + java.util.Arrays.toString(this.implementators);
	}
	
}
