package org.strategoxt.lang.compat;

import static org.spoofax.interpreter.core.Tools.asJavaInt;
import static org.spoofax.interpreter.core.Tools.asJavaString;
import static org.spoofax.interpreter.terms.IStrategoTerm.APPL;
import static org.spoofax.interpreter.terms.IStrategoTerm.INT;
import static org.spoofax.interpreter.terms.IStrategoTerm.STRING;

import java.io.IOException;
import java.io.Writer;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.library.ssl.SSLLibrary;
import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class SSL_EXT_topdown_fputs extends AbstractPrimitive {
	
	protected SSL_EXT_topdown_fputs() {
		super("SSL_EXT_topdown_fputs", 0, 1);
	}

	@Override
	public boolean call(IContext env,
			org.spoofax.interpreter.stratego.Strategy[] svars,
			IStrategoTerm[] tvars) throws InterpreterException {
		
		IStrategoTerm streamTerm = tvars[0];

		if (streamTerm.getTermType() != APPL || streamTerm.getSubtermCount() != 1 || streamTerm.getSubterm(0).getTermType() != INT)
			return false;
		
		int streamInt = asJavaInt(streamTerm.getSubterm(0)); 

		SSLLibrary or = SSLLibrary.instance(env);
		Writer writer = or.getIOAgent().getWriter(streamInt);
		
		try {
			invoke(env.current(), writer);
			writer.flush();
			return true;
		} catch (IOException e) {
			or.getIOAgent().printError(getName() + ": " + e.getMessage());
			return false;
		}
	}
	
	public void invoke(IStrategoTerm tree, Writer writer) throws IOException {
		for (int i = 0, size = tree.getSubtermCount(); i < size; i++) {
			IStrategoTerm child = tree.getSubterm(i);
			if (child.getSubtermCount() > 0) {
				invoke(child, writer);
			} else if (child.getTermType() == STRING) {
				writer.write(asJavaString(child));
			} 
		}
	}
}
