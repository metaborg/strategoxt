package org.strategoxt.strj.cleardep_interface;

import java.util.Map;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.Term;
import org.sugarj.common.cleardep.mode.Mode;
import org.sugarj.common.path.RelativePath;

public class ClearDep_CompilationUnit_is_consistent extends AbstractPrimitive {

	public ClearDep_CompilationUnit_is_consistent() {
		super("ClearDep_CompilationUnit_is_consistent", 0, 0);
	}

	@Override
	public boolean call(IContext arg0, Strategy[] arg1, IStrategoTerm[] arg2) throws InterpreterException {
		IStrategoTerm argumentTerm = arg0.current();
		if (!Term.isTermTuple(argumentTerm)) {
			return false;
		}
		try {
			CompilationUnitContainer<?> unitContainer = ClearDepUtils.containerFromTerm(argumentTerm.getSubterm(0));
			Map<RelativePath, Integer> editedSourceFiles = ClearDepUtils.editedSourceFilesFromTerm(argumentTerm.getSubterm(1));
			Mode mode = ClearDepUtils.modeFromTerm(argumentTerm.getSubterm(2));
			boolean isConsitent = unitContainer.getUnit().isConsistent(editedSourceFiles, mode);
			if (isConsitent) {
				arg0.setCurrent(arg0.getFactory().makeInt(1));
			} else {
				arg0.setCurrent(arg0.getFactory().makeInt(0));
			}
			return true;
		} catch (IllegalArgumentException e) {
			return false;
		}
	}

}
