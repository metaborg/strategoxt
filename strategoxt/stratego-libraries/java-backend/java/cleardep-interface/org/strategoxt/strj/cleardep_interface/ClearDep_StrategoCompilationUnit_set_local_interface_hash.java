package org.strategoxt.strj.cleardep_interface;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.sugarj.common.cleardep.CompilationUnit;

public class ClearDep_StrategoCompilationUnit_set_local_interface_hash extends AbstractPrimitive {

	public ClearDep_StrategoCompilationUnit_set_local_interface_hash() {
		super("ClearDep_StrategoCompilationUnit_set_interface_hash", 0, 1);
	}

	@Override
	public boolean call(IContext arg0, Strategy[] arg1, IStrategoTerm[] arg2) throws InterpreterException {
		try {
			CompilationUnit unit = ClearDepUtils.containerFromTerm(arg0.current()).get();
			if (!(unit instanceof StrategoCompilationUnit)) {
				throw new IllegalArgumentException("Unit is not a stratego compilation unit");
			}
			int hash = arg2[0].toString().hashCode();
			((StrategoCompilationUnit)unit).setLocalInterfaceHashCode(hash);
		} catch(IllegalArgumentException e) {
			return false;
		}
		return true;
	}

}
