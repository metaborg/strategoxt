package org.strategoxt.strj.pluto_interface;

import java.io.File;
import java.io.IOException;
import java.io.Serializable;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.strj.cleardep_interface.ObjectWrapperTerm;

import build.pluto.builder.BuildRequest;
import build.pluto.builder.Builder;
import build.pluto.builder.BuilderFactory;
import build.pluto.output.Out;
import build.pluto.output.Output;
import build.pluto.output.OutputPersisted;

public class GeneratedBuilderFactory implements BuilderFactory<IStrategoTerm, Out<IStrategoTerm>, GeneratedBuilderFactory.GeneratedBuilder> {

	public static final int WRAPPED_TERM_TYPE = 928382;
	
	private final IContext context;
	private final Strategy descriptionStrategy;
	private final Strategy persistentPathStrategy;
	private final Strategy buildStrategy;
	private final Strategy cycleSupportStrategy;
	
	
	
	
	
	public GeneratedBuilderFactory(IContext context, Strategy descriptionStrategy, Strategy persistentPathStrategy,
			Strategy buildStrategy, Strategy cycleSupportStrategy) {
		super();
		this.context = context;
		this.descriptionStrategy = descriptionStrategy;
		this.persistentPathStrategy = persistentPathStrategy;
		this.buildStrategy = buildStrategy;
		this.cycleSupportStrategy = cycleSupportStrategy;
	}

	public class GeneratedBuilder extends Builder<IStrategoTerm, Out<IStrategoTerm>> {

		public GeneratedBuilder(IStrategoTerm input) {
			super(input);
			// TODO Auto-generated constructor stub
		}
		private static final int BUILDER_TERM_TYPE = 29321;
		private final IStrategoTerm builderTerm = new ObjectWrapperTerm<>(this, BUILDER_TERM_TYPE);

		private IStrategoTerm pairWithBuilder(IStrategoTerm value) {
			return context.getFactory().makeTuple(builderTerm, value);
		}
		
		@Override
		protected Out<IStrategoTerm> build(IStrategoTerm input) throws Throwable {
			context.setCurrent(pairWithBuilder(input));
			boolean success = buildStrategy.evaluate(context);
			if (!success) {
				// throw exception
			}
			IStrategoTerm result = context.current();
			return OutputPersisted.of(result);
		}

		@Override
		protected String description(IStrategoTerm input) {
			// TODO Auto-generated method stub
			return null;
		}

		@Override
		protected File persistentPath(IStrategoTerm input) {
			// TODO Auto-generated method stub
			return null;
		}
		
		// Need to make the following methods public
		@Override
		public void provide(File file) {
			super.provide(file);
		}
		
		 public 
		//@formatter:off
		  <In_ extends Serializable,
		   Out_ extends Output, 
		   B_ extends Builder<In_, Out_>, 
		   F_ extends BuilderFactory<In_, Out_, B_>>
		//@formatter:on
		  Out_ requireBuild(BuildRequest<In_, Out_, B_, F_> req) throws IOException {
		    return super.requireBuild(req);
		  }
		
		
	}
	
	@Override
	public GeneratedBuilder makeBuilder(IStrategoTerm input) {
		return new GeneratedBuilder(input);
	}
	
}