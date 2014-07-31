package org.strategoxt.strj.cleardep_interface;

import java.io.IOException;

import org.sugarj.common.cleardep.ContentHashStamper;
import org.sugarj.common.cleardep.mode.DoCompileMode;
import org.sugarj.common.cleardep.mode.Mode;
import org.sugarj.common.path.AbsolutePath;
import org.sugarj.util.Pair;

public class StrategoCompilationUnitTest {

	public static void main(String[] args) throws IOException {
		Mode m =  new DoCompileMode(null, true);
		Pair<StrategoCompilationUnit,Boolean> unit = StrategoCompilationUnit.read(ContentHashStamper.instance, new AbsolutePath("/Volumes/Data/Developer/Java/EclipseWorkspaces/HiwiSE/StrjTest/src/test4/merged/Interpreter.str.dep"), null, null,m);
		System.out.println(unit.a);
		System.out.println(unit.b);
		System.out.println(unit.a.isConsistent(null, m));
		System.out.println(unit.a.getModuleDependencies());
	}

}
