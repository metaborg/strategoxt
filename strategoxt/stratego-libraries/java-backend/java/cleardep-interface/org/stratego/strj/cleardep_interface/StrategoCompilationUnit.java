package org.stratego.strj.cleardep_interface;

import java.io.IOException;
import java.util.Map;
import java.util.Set;

import org.sugarj.common.cleardep.CompilationUnit;
import org.sugarj.common.cleardep.Stamper;
import org.sugarj.common.cleardep.Synthesizer;
import org.sugarj.common.cleardep.mode.Mode;
import org.sugarj.common.path.Path;
import org.sugarj.common.path.RelativePath;

public class StrategoCompilationUnit extends CompilationUnit {

	public static StrategoCompilationUnit create( Stamper stamper, Path compileDep, Path compileTarget, Path editedDep, Path editedTarget, Set<RelativePath> sourceFiles, Map<RelativePath, Integer> editedSourceFiles, Mode mode, Synthesizer syn) throws IOException {
		return CompilationUnit.create(StrategoCompilationUnit.class, stamper, compileDep, compileTarget, editedDep, editedTarget, sourceFiles, editedSourceFiles, mode, syn);
	}

	@Override
	protected boolean isConsistentExtend(Mode arg0) {
		return false;
	}

}
