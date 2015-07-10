package org.strategoxt.strj.pluto_interface;

import java.util.ArrayList;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.Term;
import org.strategoxt.strj.cleardep_interface.ObjectWrapperTerm;

import build.pluto.builder.BuildCycleAtOnceBuilder;
import build.pluto.builder.BuildRequest;
import build.pluto.output.Out;

public class Conversions {

	public static BuildRequest<?, Out<IStrategoTerm>, ?, ?> convertBuildRequest(IStrategoTerm term) {
		switch (Term.tryGetName(term)) {
		case "BuildRequest":
			IStrategoTerm factoryTerm = Term.termAt(term, 0);
			IStrategoTerm input = Term.termAt(term, 1);

			StrategoBuilderFactory factory = ObjectWrapperTerm.get(factoryTerm);

			return new BuildRequest<>(factory, input);
		case "BuildAtOnceBuildRequest":
			factoryTerm = Term.termAt(term, 0);
			input = Term.termAt(term, 1);
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

		default:
			throw new RuntimeException("Illegal BuildRequestTerm");
		}
	}

}
