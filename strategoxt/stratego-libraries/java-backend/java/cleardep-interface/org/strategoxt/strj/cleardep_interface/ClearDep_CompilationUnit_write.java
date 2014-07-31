package org.strategoxt.strj.cleardep_interface;

import java.io.IOException;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.sugarj.common.cleardep.CompilationUnit;

public class ClearDep_CompilationUnit_write extends AbstractPrimitive {
	
	

	public ClearDep_CompilationUnit_write() {
		super("ClearDep_CompilationUnit_write", 0, 0);
	}

	@Override
	public boolean call(IContext arg0, Strategy[] arg1, IStrategoTerm[] arg2) throws InterpreterException {
		if (!(arg0.current() instanceof CompilationUnitContainer)) {
			return false;
		}
		CompilationUnit unit =((CompilationUnitContainer<?>)arg0.current()).getUnit();
		try {
			unit.write();
		} catch (IOException e) {
			e.printStackTrace();
			throw new InterpreterException(e);
	//		return false;
		}
		return true;
	}

}
