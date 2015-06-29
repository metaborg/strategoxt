package org.strategoxt.strj.pluto_interface;

import java.io.File;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.Serializable;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.Term;
import org.strategoxt.strj.cleardep_interface.ObjectWrapperTerm;

import build.pluto.builder.BuildRequest;
import build.pluto.builder.Builder;
import build.pluto.builder.BuilderFactory;
import build.pluto.output.Out;
import build.pluto.output.Output;
import build.pluto.output.OutputPersisted;

public class GeneratedBuilderFactory
		implements BuilderFactory<IStrategoTerm, Out<IStrategoTerm>, GeneratedBuilderFactory.GeneratedBuilder> {

	/**
	 * 
	 */
	private static final long serialVersionUID = -705279049840986577L;

	public static final int WRAPPED_TERM_TYPE = 928382;

	
	private  String name;
	
	public static IContext factoryByNameContext;
	public static Strategy factoryByNameStrategy;
	
	private transient final IContext context;
	private transient final Strategy descriptionStrategy;
	private transient final Strategy persistentPathStrategy;
	private transient final Strategy buildStrategy;
	private transient final Strategy cycleSupportStrategy;

	public GeneratedBuilderFactory(String name, IContext context, Strategy descriptionStrategy, Strategy persistentPathStrategy,
			Strategy buildStrategy, Strategy cycleSupportStrategy) {
		super();
		this.name = name;
		this.context = context;
		this.descriptionStrategy = descriptionStrategy;
		this.persistentPathStrategy = persistentPathStrategy;
		this.buildStrategy = buildStrategy;
		this.cycleSupportStrategy = cycleSupportStrategy;
	}

	private IStrategoTerm invoke(Strategy strategy, IStrategoTerm arg) {
		context.setCurrent(arg);
		try {
			boolean success = strategy.evaluate(context);
			if (!success) {
				String[] trace =context.getStackTracer().getTrace();
				String traceFormatted = "";
				for (String s : trace)
					traceFormatted += s + "\n";
				throw new InterpreterException(
						"GeneratedBuilderFactory: Could not evaluate " + strategy + " successfully. Current " + context.current() + "\n" + traceFormatted );
			}
			IStrategoTerm result = context.current();
			return result;
		} catch (InterpreterException e) {
			throw new RuntimeException(e);
		}
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
			IStrategoTerm result = invoke(buildStrategy, pairWithBuilder(input));
			return OutputPersisted.of(result);
		}

		@Override
		protected String description(IStrategoTerm input) {
			IStrategoTerm descriptionTerm = invoke(descriptionStrategy, input);
			return Term.asJavaString(descriptionTerm);
		}

		@Override
		protected File persistentPath(IStrategoTerm input) {
			IStrategoTerm fileTerm = invoke(persistentPathStrategy, input);
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

	}

	@Override
	public GeneratedBuilder makeBuilder(IStrategoTerm input) {
		return new GeneratedBuilder(input);
	}
	
	@Override
	public boolean equals(Object obj) {
		System.out.println("Factory equals: " + this + " <-> " + obj);
		return this == obj;
	}
	
	@Override
	public int hashCode() {
		return super.hashCode();
	}
	
	private void writeObject(ObjectOutputStream stream) throws IOException {
		stream.writeObject(name);
	}
	
	private void readObject(ObjectInputStream stream) throws IOException, ClassNotFoundException {
		this.name = (String)stream.readObject();
	}
	
	private Object readResolve() {
		factoryByNameContext.setCurrent(factoryByNameContext.getFactory().makeString(name));
		try {
		boolean result = factoryByNameStrategy.evaluate(factoryByNameContext);
		if (!result) {
			throw new InterpreterException("Failed to evalute");
		}
		return ObjectWrapperTerm.<GeneratedBuilderFactory>get(factoryByNameContext.current());
		} catch (InterpreterException e){
			throw new RuntimeException("Failed to load factory \"" + name +"\"", e);
		}
	}

}