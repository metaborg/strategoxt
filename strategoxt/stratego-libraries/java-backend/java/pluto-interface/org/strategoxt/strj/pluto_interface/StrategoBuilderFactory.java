package org.strategoxt.strj.pluto_interface;

import java.io.File;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.Serializable;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.Term;
import org.strategoxt.strj.pluto_interface.util.ObjectWrapperTerm;

import build.pluto.builder.BuildRequest;
import build.pluto.builder.Builder;
import build.pluto.builder.BuilderFactory;
import build.pluto.output.Out;
import build.pluto.output.Output;
import build.pluto.output.OutputPersisted;
import build.pluto.output.OutputStamper;

public class StrategoBuilderFactory
		implements BuilderFactory<IStrategoTerm, Out<IStrategoTerm>, StrategoBuilderFactory.GeneratedBuilder>, NamedSingleton {

	/**
	 * 
	 */
	private static final long serialVersionUID = -705279049840986577L;

	public static final int WRAPPED_TERM_TYPE = 928382;

	
	private  String name;
	
	private transient final Strategy descriptionStrategy;
	private transient final Strategy persistentPathStrategy;
	private transient final Strategy buildStrategy;

	public StrategoBuilderFactory(String name, Strategy descriptionStrategy, Strategy persistentPathStrategy,
			Strategy buildStrategy) {
		super();
		this.name = name;
		this.descriptionStrategy = descriptionStrategy;
		this.persistentPathStrategy = persistentPathStrategy;
		this.buildStrategy = buildStrategy;
	}

	public class GeneratedBuilder extends Builder<IStrategoTerm, Out<IStrategoTerm>> implements PublicBuilder {

		public GeneratedBuilder(IStrategoTerm input) {
			super(input);
			// TODO Auto-generated constructor stub
		}

		private static final int BUILDER_TERM_TYPE = 29321;
		private final IStrategoTerm builderTerm = new ObjectWrapperTerm<>(this, BUILDER_TERM_TYPE);

		private IStrategoTerm pairWithBuilder(IStrategoTerm value) {
			return PlutoIContextManager.currentContext().getFactory().makeTuple(builderTerm, value);
		}

		@Override
		protected Out<IStrategoTerm> build(IStrategoTerm input) throws Throwable {
			IStrategoTerm result = StrategoUtils.invoke(StrategoBuilderFactory.this, "build", buildStrategy, pairWithBuilder(input));
			return OutputPersisted.of(result);
		}

		@Override
		protected String description(IStrategoTerm input) {
			IStrategoTerm descriptionTerm = StrategoUtils.invoke(StrategoBuilderFactory.this,"description", descriptionStrategy, input);
			return Term.asJavaString(descriptionTerm);
		}

		@Override
		protected File persistentPath(IStrategoTerm input) {
			IStrategoTerm fileTerm = StrategoUtils.invoke(StrategoBuilderFactory.this, "persistentPath", persistentPathStrategy, input);
			File file = new File(Term.asJavaString(fileTerm));
			return file;
		}

		// Need to make the following methods public
		@Override
		public void provide(File file) {
			super.provide(file);
		}

		public <In_ extends Serializable, Out_ extends Output, B_ extends Builder<In_, Out_>, F_ extends BuilderFactory<In_, Out_, B_>> Out_ requireBuild(
				BuildRequest<In_, Out_, B_, F_> req) throws IOException {
			return super.requireBuild(req);
		}
		
		@Override
		public <In_ extends Serializable, Out_ extends Output, B_ extends Builder<In_, Out_>, F_ extends BuilderFactory<In_, Out_, B_>, SubIn_ extends In_> Out_ requireBuild(
				BuildRequest<In_, Out_, B_, F_> req, OutputStamper<? super Out_> ostamper) throws IOException {
			return super.requireBuild(req.factory, req.input, ostamper);
		}

		@Override
		public void reportMessage(String message) {
			this.report(message);
		}
		
	}

	@Override
	public GeneratedBuilder makeBuilder(IStrategoTerm input) {
		return new GeneratedBuilder(input);
	}
	
	private Object readResolve() {
		PlutoIContextManager.assertHaveContext();
		return SingletonStore.readFromSingletonStore(name);
	}

	@Override
	public String getName() {
		return this.name;
	}
	
}