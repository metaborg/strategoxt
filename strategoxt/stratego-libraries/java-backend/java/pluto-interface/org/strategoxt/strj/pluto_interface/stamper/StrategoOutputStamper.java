package org.strategoxt.strj.pluto_interface.stamper;

import java.io.IOException;
import java.io.ObjectOutputStream;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.strj.pluto_interface.NamedSingleton;
import org.strategoxt.strj.pluto_interface.SingletonStore;
import org.strategoxt.strj.pluto_interface.StrategoUtils;

import build.pluto.output.Out;
import build.pluto.output.OutputStamp;
import build.pluto.output.OutputStamper;

public class StrategoOutputStamper implements OutputStamper<Out<IStrategoTerm>>, NamedSingleton {

	/**
	 * 
	 */
	private static final long serialVersionUID = 2009584416084194758L;
	public static final int WRAPPER_TERM_TYPE = 23423212;

	private static class StrategoOutputStamp implements OutputStamp<Out<IStrategoTerm>> {

		/**
		 * 
		 */
		private static final long serialVersionUID = -7107171777361598442L;
		private final IStrategoTerm stamp;
		private final String stamperName;

		private StrategoOutputStamp(IStrategoTerm stamp, String stamperName) {
			super();
			this.stamp = stamp;
			this.stamperName = stamperName;
		}

		@Override
		public boolean equals(OutputStamp<?> o) {
			if (o == null)
				return false;
			if (!(o instanceof StrategoOutputStamp))
				return false;
			StrategoOutputStamp otherStamp = (StrategoOutputStamp) o;
			return stamperName.equals(otherStamp.stamperName) && stamp.match(otherStamp.stamp);
		}

		@Override
		public OutputStamper<Out<IStrategoTerm>> getStamper() {
			return SingletonStore.readFromSingletonStore(this.stamperName);
		}

	}

	private final String name;
	private transient final IContext context;
	private transient final Strategy stamperStrategy;

	public StrategoOutputStamper(String name, IContext context, Strategy stamperStrategy) {
		super();
		this.name = name;
		this.context = context;
		this.stamperStrategy = stamperStrategy;
	}

	private Object readResolve() {
		return SingletonStore.readFromSingletonStore(name);
	}

	@Override
	public IContext getContext() {
		return context;
	}
	
	@Override
	public String getName() {
		return name;
	}

	@Override
	public OutputStamp<Out<IStrategoTerm>> stampOf(Out<IStrategoTerm> p) {
		IStrategoTerm output = p.val();
		IStrategoTerm stamp = StrategoUtils.invoke(this, stamperStrategy, output);
		return new StrategoOutputStamp(stamp, name);
	}

}
