package org.strategoxt.strj.cleardep_interface;

import java.util.HashMap;
import java.util.Map;

import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;
import org.spoofax.interpreter.terms.ITermFactory;
import org.spoofax.terms.Term;
import org.sugarj.common.cleardep.BuildSchedule;
import org.sugarj.common.cleardep.BuildSchedule.TaskState;
import org.sugarj.common.cleardep.mode.DoCompileMode;
import org.sugarj.common.cleardep.mode.ForEditorMode;
import org.sugarj.common.cleardep.mode.Mode;
import org.sugarj.common.path.AbsolutePath;
import org.sugarj.common.path.Path;
import org.sugarj.common.path.RelativePath;

public class ClearDepUtils {

	public static Path pathFromPathTerm(IStrategoTerm t) throws IllegalArgumentException {
		String cons = Term.tryGetName(t);
		if ("AbsolutePath".equals(cons)) {
			return new AbsolutePath(Term.asJavaString(t.getSubterm(0)));
		} else if ("RelativePath".equals(cons)) {
			return new RelativePath(pathFromPathTerm(t.getSubterm(0)), Term.asJavaString(t.getSubterm(1)));
		} else {
			throw new IllegalArgumentException();
		}
	}
	
	public static IStrategoTerm pathTermFromPath(ITermFactory factory,Path p) throws IllegalArgumentException {
		if (p instanceof RelativePath) {
			return factory.makeAppl(factory.makeConstructor("RelativePath", 2), pathTermFromPath(factory, ((RelativePath)p).getBasePath()),factory.makeString(((RelativePath)p).getRelativePath()));
		} else if (p instanceof AbsolutePath) {
			return factory.makeAppl(factory.makeConstructor("AbsolutePath", 1), factory.makeString(((AbsolutePath)p).getAbsolutePath()));
		} else {
			throw new IllegalArgumentException();
		}
	}

	public static Map<RelativePath, Integer> editedSourceFilesFromTerm(IStrategoTerm t) throws IllegalArgumentException {
		if (!Term.isTermList(t))
			throw new IllegalArgumentException();
		IStrategoList mapList = (IStrategoList) t;
		Map<RelativePath, Integer> map = new HashMap<>();
		for (IStrategoTerm entry : mapList.getAllSubterms()) {
			if (!Term.isTermTuple(entry) && ((IStrategoTuple) entry).getSubtermCount() == 2)
				throw new IllegalArgumentException();
			Path path = pathFromPathTerm(entry.getSubterm(0));
			if (!(path instanceof RelativePath))
				throw new IllegalArgumentException();
			if (!Term.isTermInt(entry.getSubterm(1)))
				throw new IllegalArgumentException();
			int integer = Term.asJavaInt(entry.getSubterm(1));
			map.put((RelativePath) path, integer);
		}
		return map;
	}

	public static Mode modeFromTerm(IStrategoTerm t) throws IllegalArgumentException {
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
	
	public static CompilationUnitContainer<?> containerFromTerm(IStrategoTerm t) throws IllegalArgumentException {
		if (!(t instanceof CompilationUnitContainer))
			throw new IllegalArgumentException();
		return (CompilationUnitContainer<?>) t;
	}
	
	public static IStrategoAppl termFromTaskState(ITermFactory factory, BuildSchedule.TaskState state) {
		String text;
		switch (state) {
		case FAILURE:
			text = "Failure";
			break;
		case IN_PROGESS:
			text ="InProgress";
			break;
		case OPEN:
			text = "Open";
			break;
		case SUCCESS:
			text = "Success";
			break;
		default:
			throw new AssertionError("Invalid TaskSTate");	
		}
		return factory.makeAppl(factory.makeConstructor(text, 0));
	}
	
	public static BuildSchedule.TaskState taskStateFromTerm(IStrategoTerm term) throws IllegalArgumentException {
		if (!Term.isTermAppl(term)) {
			throw new IllegalArgumentException();
		}
		String name = Term.tryGetName(term);
		if (name.equals("Failure")) {
			return TaskState.FAILURE;
		}
		if (name.equals("InProgress")) {
			return TaskState.IN_PROGESS;
		}
		if (name.equals("Open")) {
			return TaskState.OPEN;
		}
		if (name.equals("Success")) {
			return TaskState.SUCCESS;
		}
		throw new IllegalArgumentException();
	}

}
