package org.strategoxt.strj.cleardep_interface;

import java.io.IOException;
import java.util.Map;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.Term;
import org.sugarj.common.cleardep.ContentHashStamper;
import org.sugarj.common.cleardep.Stamper;
import org.sugarj.common.cleardep.TimeStamper;
import org.sugarj.common.cleardep.mode.Mode;
import org.sugarj.common.path.Path;
import org.sugarj.common.path.RelativePath;
import org.sugarj.util.Pair;

public class ClearDep_CompilationUnit_read extends AbstractPrimitive {

	public ClearDep_CompilationUnit_read() {
		super("ClearDep_CompilationUnit_read", 0, 0);
	}

	@Override
	public boolean call(IContext arg0, Strategy[] arg1, IStrategoTerm[] arg2) throws InterpreterException {
		if (!Term.isTermTuple(arg0.current())) {
			return false;
		}
		try {
			IStrategoTerm argumentTuple = arg0.current();
			// First argument needs to be a stamper constructor
			Stamper stamper = stamperFromTerm(Term.termAt(argumentTuple, 0));
			// Next arguments needs to be paths
			Path depPath = pathFromOption(Term.termAt(argumentTuple, 1));
			Path editDepPath = pathFromOption(Term.termAt(argumentTuple, 2));
			Map<RelativePath, Integer> editedSourceFiles = ClearDepUtils.editedSourceFilesFromTerm(Term.termAt(argumentTuple, 3));
			Mode mode = ClearDepUtils.modeFromTerm(Term.termAt(argumentTuple, 4));
			Pair<StrategoCompilationUnit,Boolean>p  = StrategoCompilationUnit.read(stamper, depPath, editDepPath, editedSourceFiles, mode);
			StrategoCompilationUnit unit = p.a;
			if (unit == null) {
				return false;
			}
			
			IStrategoTerm unitTerm = new CompilationUnitContainer<>(unit);
			arg0.setCurrent(unitTerm);
		} catch (IllegalArgumentException e) {

			throw new InterpreterException(e);
		//	return false;
		} catch (IOException e) {
			throw new InterpreterException(e);
			//return false;
		}
		return true;
	}

	private Stamper stamperFromTerm(IStrategoTerm t) throws IllegalArgumentException {
		String stamperName = Term.tryGetName(t);
		if ("TimeStamper".equals(stamperName))
			return TimeStamper.instance;
		else if ("ContentHashStamper".equals(stamperName))
			return ContentHashStamper.instance;
		else
			throw new IllegalArgumentException();
	}

	private Path pathFromOption(IStrategoTerm t) throws IllegalArgumentException {
		if (!Term.isTermAppl(t))
			throw new IllegalArgumentException();
		IStrategoAppl appl = (IStrategoAppl) t;
		if (Term.hasConstructor(appl, "None"))
			return null;
		else if (Term.hasConstructor(appl, "Some"))
			return ClearDepUtils.pathFromPathTerm(Term.termAt(t, 0));
		else
			throw new IllegalArgumentException();

	}
	
}
