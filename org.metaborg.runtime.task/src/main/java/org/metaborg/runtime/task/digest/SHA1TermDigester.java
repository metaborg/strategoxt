package org.metaborg.runtime.task.digest;

import java.nio.ByteBuffer;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.HashMap;
import java.util.Map;
import java.util.Map.Entry;

import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoReal;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;
import org.spoofax.interpreter.terms.ITermFactory;
import org.spoofax.terms.io.binary.SAFWriter;

public class SHA1TermDigester implements ITermDigester {
	private final MessageDigest digest;
	private final Map<IStrategoTerm, IStrategoTerm> mapping = new HashMap<IStrategoTerm, IStrategoTerm>();
	private final ByteBuffer intBuffer = ByteBuffer.allocate(4);
	private final ByteBuffer doubleBuffer = ByteBuffer.allocate(8);

	public SHA1TermDigester() throws NoSuchAlgorithmException {
		digest = MessageDigest.getInstance("SHA-1");
	}

	public IStrategoTerm digest(IStrategoTerm term, ITermFactory factory) {
		IStrategoTerm digestedTerm = mapping.get(term);
		if(digestedTerm == null) {
			digest.reset();
			digestTopSerializer(term);
			byte[] data = digest.digest();
			digestedTerm = factory.makeTuple(factory.makeInt(toInt(data, 0)), factory.makeInt(toInt(data, 4)));
			mapping.put(term, digestedTerm);
		}
		return digestedTerm;
	}

	public void undigest(IStrategoTerm term) {
		mapping.remove(term);
	}

	public boolean digested(IStrategoTerm term) {
		return mapping.containsKey(term);
	}

	public IStrategoTerm state(ITermFactory factory) {
		IStrategoList mappingTerm = factory.makeList();
		for (Entry<IStrategoTerm, IStrategoTerm> entry : mapping.entrySet())
			mappingTerm = factory.makeListCons(
					factory.makeTuple(entry.getKey(), entry.getValue()),
					mappingTerm);
		return mappingTerm;
	}

	public void setState(IStrategoTerm state) {
		mapping.clear();
		for (IStrategoTerm entry : state)
			mapping.put(entry.getSubterm(0), entry.getSubterm(1));
	}

	public void reset() {
		mapping.clear();
	}

	private void digestTopSerializer(IStrategoTerm term) {
		digest.update(SAFWriter.writeTermToSAFString(term));
	}

	private void digestTop(IStrategoTerm term) {
		digestTerm(term);
		digestTerm(term.getAnnotations());
	}

	private void digestTerm(IStrategoTerm term) {
		switch(term.getTermType()) {
		case IStrategoTerm.APPL: {
			final IStrategoAppl t = (IStrategoAppl) term;
			digest.update(t.getConstructor().getName().getBytes());
			intBuffer.position(0);
			digest.update(intBuffer.putInt(t.getConstructor().getArity()).array());

			for(IStrategoTerm subterm : t)
				digestTop(subterm);
			break;
		}
		case IStrategoTerm.TUPLE: {
			final IStrategoTuple t = (IStrategoTuple) term;
			for(IStrategoTerm subterm : t)
				digestTop(subterm);
			break;
		}
		case IStrategoTerm.LIST: {
			final IStrategoList t = (IStrategoList) term;
			for(IStrategoTerm subterm : t)
				digestTop(subterm);
			break;
		}
		case IStrategoTerm.INT: {
			final IStrategoInt t = (IStrategoInt) term;
			intBuffer.position(0);
			digest.update(intBuffer.putInt(t.intValue()).array());
			break;
		}
		case IStrategoTerm.REAL: {
			final IStrategoReal t = (IStrategoReal) term;
			doubleBuffer.position(0);
			digest.update(doubleBuffer.putDouble(t.realValue()).array());
			break;
		}
		case IStrategoTerm.STRING: {
			final IStrategoString t = (IStrategoString) term;
			digest.update(t.stringValue().getBytes());
			break;
		}
		}
	}

	private int toInt(final byte[] digest, final int offset) {
		return ((digest[offset + 0] & 0xFF) << 24) | ((digest[offset + 1] & 0xFF) << 16)
			| ((digest[offset + 2] & 0xFF) << 8) | (digest[offset + 3] & 0xFF);
	}
}
