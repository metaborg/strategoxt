package org.strategoxt.strj.cleardep_interface;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.Term;

public class ClearDep_create_compiler_options extends AbstractPrimitive {
	
	public ClearDep_create_compiler_options() {
		super("ClearDep_create_compiler_options", 0, 0);
	}

	@Override
	public boolean call(IContext arg0, Strategy[] arg1, IStrategoTerm[] arg2) throws InterpreterException {
		if (!Term.isTermList(arg0.current())) {
			return false;
		}
		CompilerOptions options = new CompilerOptions();
		IStrategoList optionsList = (IStrategoList) arg0.current();
		for (IStrategoTerm option : optionsList) {
			if (!Term.isTermTuple(option)) {
				return false;
			}
			if (option.getSubtermCount() != 2) {
				return false;
			}
			if (!Term.isTermString(option.getSubterm(0))) {
				return false;
			}
			options.setOption(Term.asJavaString(option.getSubterm(0)), option.getSubterm(1));
		}
		
		arg0.setCurrent(new CompilerOptionsTerm(options));
		
		return true;
	}

}
