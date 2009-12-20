package org.strategoxt.lang.compat;

import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.core.Tools;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.library.ssl.SSLLibrary;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class SSL_EXT_read_text_from_stream extends AbstractPrimitive {
	
	private final char[] buffer = new char[2048];

	protected SSL_EXT_read_text_from_stream() {
		super("SSL_EXT_read_text_from_stream", 0, 1);
	}

	@Override
	public boolean call(IContext env, Strategy[] svars, IStrategoTerm[] tvars)
			throws InterpreterException {
		
        if(!Tools.isTermInt(tvars[0]))
            return false;
        
        SSLLibrary or = (SSLLibrary) env.getOperatorRegistry(SSLLibrary.REGISTRY_NAME);
        InputStream input = or.getIOAgent().getInputStream(Tools.asJavaInt(tvars[0]));
        
        IStrategoString result = call(env, input);
        if (result == null) return false;
		
		env.setCurrent(result);
		return true;
	}

	protected IStrategoString call(IContext env, InputStream input) {
		StringBuilder result = new StringBuilder();
		
		try {
			InputStreamReader reader = new InputStreamReader(input);
		
			for (int read = 0; read != -1; read = reader.read(buffer))
				result.append(buffer, 0, read);
		} catch (IOException e) {
			return null;
		} finally {
			try {
				input.close();
			} catch (IOException e) {
				// Not gonna happen
			}
		}
		return env.getFactory().makeString(result.toString());
	}
}
