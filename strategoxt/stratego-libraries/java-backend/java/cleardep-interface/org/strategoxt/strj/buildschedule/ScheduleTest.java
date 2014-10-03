package org.strategoxt.strj.buildschedule;

import java.util.Collections;

import org.strategoxt.strj.cleardep_interface.StrategoCompilationUnit;
import org.sugarj.common.cleardep.BuildSchedule;
import org.sugarj.common.cleardep.BuildScheduleBuilder;
import org.sugarj.common.cleardep.CompilationUnit;
import org.sugarj.common.cleardep.ContentHashStamper;
import org.sugarj.common.cleardep.mode.DoCompileMode;
import org.sugarj.common.cleardep.mode.Mode;
import org.sugarj.common.path.AbsolutePath;

public class ScheduleTest {

	public static void main(String[] args) throws Exception {
	
		Mode mode = new DoCompileMode(null, true);
		StrategoCompilationUnit unit = StrategoCompilationUnit.read(ContentHashStamper.instance, new AbsolutePath(
				"/Volumes/Data/Developer/Java/EclipseWorkspaces/HiwiSE/StrjTest/src/spec/stratego-lib-posix-xsi.str.dep"), null, null, mode).a;
		BuildSchedule s = new BuildScheduleBuilder(Collections.<CompilationUnit>singleton(unit),BuildSchedule.ScheduleMode.REBUILD_INCONSISTENT).createBuildSchedule( null, mode);
	//	System.out.println(s.flatten());
		
	}
}
