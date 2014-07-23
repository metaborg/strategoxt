package org.strategoxt.strj.cleardep_interface;

import java.io.IOException;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;
import org.spoofax.terms.Term;
import org.sugarj.common.cleardep.ContentHashStamper;
import org.sugarj.common.cleardep.Stamper;
import org.sugarj.common.cleardep.TimeStamper;
import org.sugarj.common.cleardep.mode.DoCompileMode;
import org.sugarj.common.cleardep.mode.ForEditorMode;
import org.sugarj.common.cleardep.mode.Mode;
import org.sugarj.common.path.Path;
import org.sugarj.common.path.RelativePath;

public class ClearDep_CompilationUnit_create extends AbstractPrimitive {

	public ClearDep_CompilationUnit_create() {
		super("ClearDep_CompilationUnit_create", 0, 0);
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
			Path compileTarget = pathFromOption(Term.termAt(argumentTuple, 2));
			Path editDepPath = pathFromOption(Term.termAt(argumentTuple, 3));
			Path editTarget = pathFromOption(Term.termAt(argumentTuple, 4));
			Set<RelativePath> sourceFiles = sourceFilesFromTerm(Term.termAt(argumentTuple, 5));
			Map<RelativePath, Integer> editedSourceFiles = editedSourceFilesFromTerm(Term.termAt(argumentTuple, 6));
			Mode mode = modeFromTerm(Term.termAt(argumentTuple, 7));
			// Last is Synthesizer, not supported, required to be None()
			if (!"None".equals(Term.tryGetName(Term.termAt(argumentTuple, 8))))
				throw new IllegalArgumentException();

			IStrategoTerm unitTerm = new CompilationUnitContainer<>(StrategoCompilationUnit.create(stamper, depPath, compileTarget, editDepPath, editTarget,
					sourceFiles, editedSourceFiles, mode, null));
			arg0.setCurrent(unitTerm);
		} catch (IllegalArgumentException e) {
			return false;
		} catch (IOException e) {
			return false;
		}
		return true;
	}

	private Stamper stamperFromTerm(IStrategoTerm t) throws IllegalArgumentException {
		String stamperName = Term.tryGetName((IStrategoAppl) t);
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
	
	private Set<RelativePath> sourceFilesFromTerm(IStrategoTerm t) throws IllegalArgumentException {
		if (!Term.isTermList(t))
			throw new IllegalArgumentException();
		IStrategoList pathList = (IStrategoList) t;
		Set<RelativePath> paths = new HashSet<>();
		for (IStrategoTerm pathTerm : pathList.getAllSubterms()) {
			Path p = ClearDepUtils.pathFromPathTerm(pathTerm);
			if (! (p instanceof RelativePath)) {
				throw new IllegalArgumentException();
			}
			paths.add((RelativePath) p);
		}
		return paths;
	}

	private Map<RelativePath, Integer> editedSourceFilesFromTerm(IStrategoTerm t) throws IllegalArgumentException {
		if (!Term.isTermList(t))
			throw new IllegalArgumentException();
		IStrategoList mapList = (IStrategoList) t;
		Map<RelativePath, Integer> map = new HashMap<>();
		for (IStrategoTerm entry : mapList.getAllSubterms()) {
			if (!Term.isTermTuple(entry) && ((IStrategoTuple) entry).getSubtermCount() == 2)
				throw new IllegalArgumentException();
			Path path = ClearDepUtils.pathFromPathTerm(entry.getSubterm(0));
			if (!(path instanceof RelativePath))
				throw new IllegalArgumentException();
			if (!Term.isTermInt(entry.getSubterm(1)))
				throw new IllegalArgumentException();
			int integer = Term.asJavaInt(entry.getSubterm(1));
			map.put((RelativePath) path, integer);
		}
		return map;
	}

	private Mode modeFromTerm(IStrategoTerm t) throws IllegalArgumentException {
		if (!Term.isTermAppl(t))
			throw new IllegalArgumentException();
		String name = Term.tryGetName(t);
		if (name.equals("Editor"))
			return new ForEditorMode(null, true);
		else if (name.equals("Compile"))
			return new DoCompileMode(null, true);
		else
			throw new IllegalArgumentException();

	}

}
