package org.strategoxt.strj.pluto_interface;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.Term;
import org.strategoxt.strj.cleardep_interface.ObjectWrapperTerm;
import org.strategoxt.strj.pluto_interface.GeneratedBuilderFactory.GeneratedBuilder;

import build.pluto.builder.BuildRequest;
import build.pluto.output.Out;

public class Conversions {

	public static BuildRequest<IStrategoTerm, Out<IStrategoTerm>, GeneratedBuilder, GeneratedBuilderFactory> convertBuildRequest(IStrategoTerm term) {
		if (!"BuildRequest".equals(Term.tryGetName(term))) {
			throw new IllegalArgumentException("Wrong term constructor for BuildRequest");
		}
		IStrategoTerm factoryTerm = Term.termAt(term, 0);
		IStrategoTerm input = Term.termAt(term, 1);
		
		GeneratedBuilderFactory factory = ObjectWrapperTerm.get(factoryTerm);
		
		return new BuildRequest<>(factory, input);
	}
	
}
