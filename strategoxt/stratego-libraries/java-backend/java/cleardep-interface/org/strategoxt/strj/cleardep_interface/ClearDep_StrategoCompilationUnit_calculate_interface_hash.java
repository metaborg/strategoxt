package org.strategoxt.strj.cleardep_interface;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.sugarj.common.cleardep.CompilationUnit;

public class ClearDep_StrategoCompilationUnit_calculate_interface_hash extends AbstractPrimitive {

	public ClearDep_StrategoCompilationUnit_calculate_interface_hash() {
		super("ClearDep_StrategoCompilationUnit_calculate_interface_hash", 0, 0);
		// TODO Auto-generated constructor stub
	}

	@Override
	public boolean call(IContext arg0, Strategy[] arg1, IStrategoTerm[] arg2) throws InterpreterException {
		try {
			CompilationUnit unit = ClearDepUtils.containerFromTerm(arg0.current()).get();
			if (!(unit instanceof StrategoCompilationUnit)) {
				throw new IllegalArgumentException("Given unit is not a stratego compilation unit");
			}
			unit.setInterfaceHash(((StrategoCompilationUnit)unit).calculateTransisitveInterfaceHash());
		} catch (IllegalArgumentException e) {
			return false;
		}
		return true;
	}

}
