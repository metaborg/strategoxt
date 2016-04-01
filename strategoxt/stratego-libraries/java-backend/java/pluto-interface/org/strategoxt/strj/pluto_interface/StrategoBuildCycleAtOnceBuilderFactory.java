package org.strategoxt.strj.pluto_interface;

import java.io.File;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

import javax.naming.Context;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.Term;
import org.strategoxt.strj.pluto_interface.util.ObjectWrapperTerm;

import build.pluto.builder.BuildCycleAtOnceBuilder;
import build.pluto.builder.BuildRequest;
import build.pluto.builder.Builder;
import build.pluto.builder.BuilderFactory;
import build.pluto.output.Out;
import build.pluto.output.Output;
import build.pluto.output.OutputPersisted;
import build.pluto.output.OutputStamper;

public class StrategoBuildCycleAtOnceBuilderFactory
		implements BuilderFactory<ArrayList<IStrategoTerm>, Out<IStrategoTerm>, StrategoBuildCycleAtOnceBuilderFactory.StrategoBuildAtOnceBuilder> , NamedSingleton {

	/**
	 * 
	 */
	private static final long serialVersionUID = -705279049840986577L;

	public static final int WRAPPED_TERM_TYPE = 234122;

	
	private  String name;

	private transient final Strategy descriptionStrategy;
	private transient final Strategy persistentPathStrategy;
	private transient final Strategy buildStrategy;

	public StrategoBuildCycleAtOnceBuilderFactory(String name, Strategy descriptionStrategy, Strategy persistentPathStrategy,
			Strategy buildStrategy) {
		super();
		this.name = name;
		this.descriptionStrategy = descriptionStrategy;
		this.persistentPathStrategy = persistentPathStrategy;
		this.buildStrategy = buildStrategy;
	}

	public class StrategoBuildAtOnceBuilder extends BuildCycleAtOnceBuilder<IStrategoTerm, Out<IStrategoTerm>> implements PublicBuilder {

	
		public StrategoBuildAtOnceBuilder(ArrayList<IStrategoTerm> input) {
			super(input, StrategoBuildCycleAtOnceBuilderFactory.this);
			// TODO Auto-generated constructor stub
		}

		private static final int BUILDER_TERM_TYPE = 1821931;
		private final IStrategoTerm builderTerm = new ObjectWrapperTerm<>(this, BUILDER_TERM_TYPE);

		private IStrategoTerm pairWithBuilder(IContext context, IStrategoTerm term) {
			return context.getFactory().makeTuple(builderTerm, term);
		}

		@Override
		protected List<Out<IStrategoTerm>> buildAll(ArrayList<IStrategoTerm> inputs) throws Throwable {
			IContext context = PlutoIContextManager.currentContext();
			IStrategoTerm resultList = StrategoUtils.invoke(StrategoBuildCycleAtOnceBuilderFactory.this,"buildAll", buildStrategy, context, pairWithBuilder(context, context.getFactory().makeList(inputs)));
			ArrayList<Out<IStrategoTerm>> convertedList = new ArrayList<>(((IStrategoList)resultList).size());
			for (IStrategoTerm resultTerm : (IStrategoList)resultList) {
				convertedList.add(OutputPersisted.of(resultTerm));
			}
			return convertedList;
		}

		@Override
		protected File singletonPersistencePath(IStrategoTerm input) {
			IStrategoTerm fileTerm = StrategoUtils.invoke(StrategoBuildCycleAtOnceBuilderFactory.this, "persistencePath", persistentPathStrategy, input);
			File file = new File(Term.asJavaString(fileTerm));
			return file;
		}

		@Override
		protected String description(ArrayList<IStrategoTerm> inputs) {
			IContext context = PlutoIContextManager.currentContext();
			IStrategoTerm descriptionTerm = StrategoUtils.invoke(StrategoBuildCycleAtOnceBuilderFactory.this, "description", descriptionStrategy, context, context.getFactory().makeList(inputs));
			return Term.asJavaString(descriptionTerm);
		}
		
		@Override
		public void provide(IStrategoTerm input, File p) {
			super.provide(input, p);
		}
		
		@Override
		public String toString() {
			return super.toString() + ":" + name + "@{"+ description()+"}";
		}
		
		public <In_ extends Serializable, Out_ extends Output, B_ extends Builder<In_, Out_>, F_ extends BuilderFactory<In_, Out_, B_>> Out_ requireBuild(
				BuildRequest<In_, Out_, B_, F_> req) throws IOException {
			PlutoIContextManager.assertHaveContext();
			return super.requireBuild(req);
		}
		
		@Override
		public <In_ extends Serializable, Out_ extends Output, B_ extends Builder<In_, Out_>, F_ extends BuilderFactory<In_, Out_, B_>, SubIn_ extends In_> Out_ requireBuild(
				BuildRequest<In_, Out_, B_, F_> req, OutputStamper<? super Out_> ostamper) throws IOException {
			PlutoIContextManager.assertHaveContext();
			return super.requireBuild(req.factory, req.input, ostamper);
		}
		
		@Override
		public void reportMessage(String message) {
			this.report(message);
		}

	}
	private Object readResolve() {
		return SingletonStore.readFromSingletonStore(name);
	}

	@Override
	public StrategoBuildAtOnceBuilder makeBuilder(ArrayList<IStrategoTerm> input) {
		return new StrategoBuildAtOnceBuilder(input);
	}

	@Override
	public String getName() {
		return this.name;
	}

}