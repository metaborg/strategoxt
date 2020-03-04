package org.strategoxt.lang.compat;

import java.io.IOException;

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

	protected SSL_EXT_read_text_from_stream() {
		super("SSL_EXT_read_text_from_stream", 0, 1);
	}

	@Override
	public boolean call(IContext env, Strategy[] svars, IStrategoTerm[] tvars)
			throws InterpreterException {
		
        if(!Tools.isTermInt(tvars[0]))
            return false;
        
        try {
        	IStrategoString result = call(env, Tools.asJavaInt(tvars[0]));
			env.setCurrent(result);
			return true;
        } catch (IOException e) {
        	SSLLibrary or = (SSLLibrary) env.getOperatorRegistry(SSLLibrary.REGISTRY_NAME);
            or.getIOAgent().printError("SSL_EXT_read_text_from_stream - could not read file (" + e.getMessage() + ")");
        	return false;
        }
	}

	protected IStrategoString call(IContext env, int fd)
			throws IOException {
		
		SSLLibrary or = (SSLLibrary) env.getOperatorRegistry(SSLLibrary.REGISTRY_NAME);
		String resultString = or.getIOAgent().readString(fd);
		IStrategoString result = env.getFactory().makeString(resultString);
		return result;
	}
}
