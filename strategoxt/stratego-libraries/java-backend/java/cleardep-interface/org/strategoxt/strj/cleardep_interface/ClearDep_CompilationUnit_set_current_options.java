package org.strategoxt.strj.cleardep_interface;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;

public class ClearDep_CompilationUnit_set_current_options extends AbstractPrimitive {
	
	public ClearDep_CompilationUnit_set_current_options() {
		super("ClearDep_CompilationUnit_set_current_options", 0, 1);
	}

	@Override
	public boolean call(IContext arg0, Strategy[] arg1, IStrategoTerm[] arg2) throws InterpreterException {
		if (!(arg0.current() instanceof CompilationUnitContainer)) {
			return false;
		}
		@SuppressWarnings("unchecked")
		StrategoCompilationUnit unit =((CompilationUnitContainer<StrategoCompilationUnit>)arg0.current()).getUnit();
		
		if (!(arg2[0] instanceof CompilerOptionsTerm)) {
			return false;
		}
		CompilerOptions currentOptions = ((CompilerOptionsTerm)arg2[0]).get();
		
		unit.setCurrentOptions(currentOptions);
		
		return true;
	}

}
