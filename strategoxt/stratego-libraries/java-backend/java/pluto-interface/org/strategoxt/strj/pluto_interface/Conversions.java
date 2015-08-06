package org.strategoxt.strj.pluto_interface;

import java.util.ArrayList;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.Term;
import org.strategoxt.strj.pluto_interface.util.ObjectWrapperTerm;

import build.pluto.builder.BuildCycleAtOnceBuilder;
import build.pluto.builder.BuildRequest;
import build.pluto.builder.BuilderFactory;
import build.pluto.output.Out;

public class Conversions {

	public static BuildRequest<?, Out<IStrategoTerm>, ?, ? extends BuilderFactory<?, Out<IStrategoTerm>, ?>> convertBuildRequest(
			IStrategoTerm term) {
		String name = Term.tryGetName(term);
		if ("BuildRequest".equals(name)) {
			IStrategoTerm factoryTerm = Term.termAt(term, 0);
			IStrategoTerm input = Term.termAt(term, 1);

			StrategoBuilderFactory factory = ObjectWrapperTerm.get(factoryTerm);

			return new BuildRequest<>(factory, input);
		} else if ("BuildAtOnceBuildRequest".equals(name)) {
			IStrategoTerm factoryTerm = Term.termAt(term, 0);
			IStrategoTerm input = Term.termAt(term, 1);
			ArrayList<IStrategoTerm> inputs;
			if (Term.isTermList(input)) {
				inputs = new ArrayList<>(((IStrategoList) input).size());
				for (IStrategoTerm i : (IStrategoList) input) {
					inputs.add(i);
				}
			} else {
				inputs = BuildCycleAtOnceBuilder.singletonArrayList(input);
			}
			StrategoBuildCycleAtOnceBuilderFactory cycleBuilderfactory = ObjectWrapperTerm.get(factoryTerm);
			return new BuildRequest<>(cycleBuilderfactory, inputs);

		} else {
			throw new RuntimeException("Illegal BuildRequestTerm");
		}
	}

}
