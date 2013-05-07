package org.metaborg.runtime.task;

import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.Formatter;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
import org.spoofax.terms.io.binary.SAFWriter;

public class SHA1TermDigester implements ITermDigester {
	private final MessageDigest digest;
	private final StringBuilder stringBuilder = new StringBuilder();
	private final Formatter formatter = new Formatter(stringBuilder);
	
	public SHA1TermDigester() throws NoSuchAlgorithmException {
		digest = MessageDigest.getInstance("SHA-1");
	}
	
	@Override
	public IStrategoTerm digest(IStrategoTerm term, ITermFactory factory) {
		byte[] serialized = SAFWriter.writeTermToSAFString(term);
		return factory.makeString(byteArray2Hex(digest.digest(serialized)));
	}
	
	private String byteArray2Hex(final byte[] digest) {
		stringBuilder.setLength(0);
	    for(byte b : digest) {
	        formatter.format("%02x", b);
	    }
	    return stringBuilder.toString();
	}
}
