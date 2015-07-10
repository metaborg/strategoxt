package org.strategoxt.strj.pluto_interface.stamper;

import java.io.File;
import java.io.IOException;
import java.io.ObjectOutputStream;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.strj.pluto_interface.NamedSingleton;
import org.strategoxt.strj.pluto_interface.SingletonStore;
import org.strategoxt.strj.pluto_interface.StrategoUtils;
import org.spoofax.interpreter.stratego.Strategy;

import build.pluto.stamp.Stamp;
import build.pluto.stamp.Stamper;

public class StrategoStamper implements Stamper, NamedSingleton {

	/**
	 * 
	 */
	private static final long serialVersionUID = 431253504815262145L;
	public static final int WRAPPER_TERM_TYPE = 1234912;

	private static class StrategoStamp implements Stamp {

		/**
		 * 
		 */
		private static final long serialVersionUID = 1834652963960638903L;
		private final IStrategoTerm stamp;
		private final String stamperName;

		private StrategoStamp(IStrategoTerm stamp, String stamperName) {
			super();
			this.stamp = stamp;
			this.stamperName = stamperName;
		}

		@Override
		public boolean equals(Stamp o) {
			if (o == null)
				return false;
			if (!(o instanceof StrategoStamp))
				return false;
			StrategoStamp otherStamp = (StrategoStamp) o;
			return stamperName.equals(otherStamp.stamperName) && stamp.match(otherStamp.stamp);
		}

		@Override
		public Stamper getStamper() {
			return SingletonStore.readFromSingletonStore(this.stamperName);
		}

	}

	private final String name;
	private final IContext context;
	private final Strategy stamperStrategy;

	public StrategoStamper(String name, IContext context, Strategy stamperStrategy) {
		super();
		this.name = name;
		this.context = context;
		this.stamperStrategy = stamperStrategy;
	}

	private void writeObject(ObjectOutputStream ostream) throws IOException {
		ostream.writeObject(name);
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
	public Stamp stampOf(File p) {
		String filePath = p.getAbsolutePath();
		IStrategoTerm stamp = StrategoUtils.invoke(this, stamperStrategy, context.getFactory().makeString(filePath));
		return new StrategoStamp(stamp, name);
	}

}
