package org.strategoxt.strj.cleardep_interface;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.sugarj.common.cleardep.CompilationUnit;

public class ClearDep_CompilationUnit_set_interface_hash extends AbstractPrimitive {

	public ClearDep_CompilationUnit_set_interface_hash() {
		super("ClearDep_CompilationUnit_set_interface_hash", 0, 1);
	}

	@Override
	public boolean call(IContext arg0, Strategy[] arg1, IStrategoTerm[] arg2) throws InterpreterException {
		try {
			CompilationUnit unit = ClearDepUtils.containerFromTerm(arg0.current()).get();
			int hash = arg2[0].toString().hashCode();
			unit.setInterfaceHash(hash);
		} catch(IllegalArgumentException e) {
			return false;
		}
		return true;
	}

}
