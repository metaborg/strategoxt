package org.strategoxt.strj.cleardep_interface;

import java.util.HashSet;
import java.util.Set;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.Term;
import org.sugarj.common.cleardep.BuildSchedule;
import org.sugarj.common.cleardep.BuildScheduleBuilder;
import org.sugarj.common.cleardep.CompilationUnit;
import org.sugarj.common.cleardep.DependencyExtractor;
import org.sugarj.common.cleardep.BuildSchedule.ScheduleMode;
import org.sugarj.common.cleardep.mode.DoCompileMode;

public class ClearDep_BuildSchedule_createBuildSchedule extends AbstractPrimitive {

	public ClearDep_BuildSchedule_createBuildSchedule() {
		super("ClearDep_BuildSchedule_createBuildSchedule", 1, 1);
	}

	@Override
	public boolean call(IContext arg0, Strategy[] arg1, IStrategoTerm[] arg2) throws InterpreterException {
		if (!Term.isTermList(arg0.current())) {
			return false;
		}
		Set<CompilationUnit> rootUnits = new HashSet<>();
		for (IStrategoTerm term : ((IStrategoList) arg0.current())) {
			if (term instanceof CompilationUnitContainer) {
				rootUnits.add(((CompilationUnitContainer<?>) term).getUnit());
			} else {
				return false;
			}
		}
		if (!Term.isTermAppl(arg2[0])) {
			return false;
		}
		try {
			ScheduleMode mode;
			String modeString = Term.tryGetName(arg2[0]);
			if ("RebuildAll".equals(modeString)) {
				mode = ScheduleMode.REBUILD_ALL;
			} else if ("RebuildInconsistent".equals(modeString)) {
				mode = ScheduleMode.REBUILD_INCONSISTENT;
			} else {
				return false;
			}
			 BuildScheduleBuilder builder = new BuildScheduleBuilder(rootUnits,mode);
			 
			 builder.updateDependencies(new StrategoDependencyExtractor(arg1[0], arg0), null);
			 BuildSchedule schedule = builder.createBuildSchedule( null, new DoCompileMode(null, true));
			 BuildScheduleContainer container = new
			 BuildScheduleContainer(schedule);
			 arg0.setCurrent(container);
		} catch (Exception e) {
			System.out.println(java.util.Arrays.toString(e.getStackTrace()));
			e.printStackTrace();
			throw new RuntimeException("Failed", e);
			// return false;
		}

		return true;
	}

	private static class StrategoDependencyExtractor implements DependencyExtractor {

		private Strategy extractStrategy;
		private IContext context;

		public StrategoDependencyExtractor(Strategy extractStrategy, IContext context) {
			super();
			this.extractStrategy = extractStrategy;
			this.context = context;
		}

		@Override
		public Set<CompilationUnit> extractDependencies(CompilationUnit unit) {
			IStrategoTerm term = context.current();
			context.setCurrent(new CompilationUnitContainer<CompilationUnit>(unit));
			Set<CompilationUnit> result = new HashSet<>();
			try {
				boolean success = extractStrategy.evaluate(context);
				if (!success) {
					throw new IllegalArgumentException();
				}
				if (!Term.isTermList(context.current())) {
					throw new IllegalArgumentException();
				}
				for (IStrategoTerm t : (IStrategoList) context.current()) {
					result.add(ClearDepUtils.containerFromTerm(t).get());
				}
			} catch (InterpreterException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			} catch (IllegalArgumentException e) {
				e.printStackTrace();
			} finally {
				context.setCurrent(term);
			}
			return result;

			// boolean success = extractStrategy.)
		}

	}

}
