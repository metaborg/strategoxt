package org.strategoxt.strj.cleardep_interface;

import java.util.ArrayList;
import java.util.List;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.sugarj.common.path.RelativePath;

public class ClearDep_CompilationUnit_get_source_files extends AbstractPrimitive {

	public ClearDep_CompilationUnit_get_source_files() {
		super("ClearDep_CompilationUnit_get_source_files", 0, 0);
	}

	@Override
	public boolean call(IContext arg0, Strategy[] arg1, IStrategoTerm[] arg2) throws InterpreterException {
		CompilationUnitContainer<?> unit = ClearDepUtils.containerFromTerm(arg0.current());
		List<IStrategoTerm> sourceFiles = new ArrayList<>();
		for(RelativePath p : unit.get().getSourceArtifacts()) {
			sourceFiles.add(ClearDepUtils.pathTermFromPath(arg0.getFactory(), p));
		}
		arg0.setCurrent(arg0.getFactory().makeList(sourceFiles));
		return true;
	}

}
