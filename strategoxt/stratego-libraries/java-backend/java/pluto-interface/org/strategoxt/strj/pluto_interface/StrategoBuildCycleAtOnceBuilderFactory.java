package org.strategoxt.strj.pluto_interface;

import java.io.File;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.Term;
import org.strategoxt.strj.cleardep_interface.ObjectWrapperTerm;

import build.pluto.builder.BuildCycleAtOnceBuilder;
import build.pluto.builder.BuildRequest;
import build.pluto.builder.Builder;
import build.pluto.builder.BuilderFactory;
import build.pluto.output.Out;
import build.pluto.output.Output;
import build.pluto.output.OutputPersisted;

public class StrategoBuildCycleAtOnceBuilderFactory
		implements BuilderFactory<ArrayList<IStrategoTerm>, Out<IStrategoTerm>, StrategoBuildCycleAtOnceBuilderFactory.StrategoBuildAtOnceBuilder> {

	/**
	 * 
	 */
	private static final long serialVersionUID = -705279049840986577L;

	public static final int WRAPPED_TERM_TYPE = 928382;

	
	private  String name;
	
	
	private transient final IContext context;
	private transient final Strategy descriptionStrategy;
	private transient final Strategy persistentPathStrategy;
	private transient final Strategy buildStrategy;
	private transient final Strategy cycleSupportStrategy;

	public StrategoBuildCycleAtOnceBuilderFactory(String name, IContext context, Strategy descriptionStrategy, Strategy persistentPathStrategy,
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
						"StrategoBuildCycleAtOnceBuilderFactory: Could not evaluate " + strategy + " successfully. Current " + context.current() + "\n" + traceFormatted );
			}
			IStrategoTerm result = context.current();
			return result;
		} catch (InterpreterException e) {
			throw new RuntimeException(e);
		}
	}

	public class StrategoBuildAtOnceBuilder extends BuildCycleAtOnceBuilder<IStrategoTerm, Out<IStrategoTerm>> implements PublicBuilder {

	
		public StrategoBuildAtOnceBuilder(ArrayList<IStrategoTerm> input,
				BuilderFactory<ArrayList<IStrategoTerm>, Out<IStrategoTerm>, ? extends BuildCycleAtOnceBuilder<IStrategoTerm, Out<IStrategoTerm>>> factory) {
			super(input, factory);
			// TODO Auto-generated constructor stub
		}

		private static final int BUILDER_TERM_TYPE = 29321;
		private final IStrategoTerm builderTerm = new ObjectWrapperTerm<>(this, BUILDER_TERM_TYPE);

		private IStrategoTerm pairWithBuilder(IStrategoTerm value) {
			return context.getFactory().makeTuple(builderTerm, value);
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
		protected List<Out<IStrategoTerm>> buildAll(ArrayList<IStrategoTerm> input) throws Throwable {
			IStrategoTerm resultList = invoke(buildStrategy, pairWithBuilder(context.getFactory().makeList(input)));
			ArrayList<Out<IStrategoTerm>> convertedList = new ArrayList<>(((IStrategoList)resultList).size());
			for (IStrategoTerm resultTerm : (IStrategoList)resultList) {
				convertedList.add(OutputPersisted.of(resultTerm));
			}
			return convertedList;
		}

		@Override
		protected File singletonPersistencePath(IStrategoTerm input) {
			IStrategoTerm fileTerm = invoke(persistentPathStrategy, input);
			File file = new File(Term.asJavaString(fileTerm));
			return file;
		}

		@Override
		protected String description(ArrayList<IStrategoTerm> input) {
			IStrategoTerm descriptionTerm = invoke(descriptionStrategy, context.getFactory().makeList(input));
			return Term.asJavaString(descriptionTerm);
		}

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
		return BuilderFactoryStore.readFactoryFromStore(name);
	}

	@Override
	public StrategoBuildAtOnceBuilder makeBuilder(ArrayList<IStrategoTerm> input) {
		return new StrategoBuildAtOnceBuilder(input, this);
	}

}