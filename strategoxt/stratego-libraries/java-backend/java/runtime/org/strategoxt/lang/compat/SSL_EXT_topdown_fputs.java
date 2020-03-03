package org.strategoxt.lang.compat;

import static org.spoofax.interpreter.terms.IStrategoTerm.APPL;
import static org.spoofax.interpreter.terms.IStrategoTerm.INT;
import static org.spoofax.interpreter.terms.IStrategoTerm.STRING;
import static org.spoofax.terms.util.TermUtils.toJavaInt;
import static org.spoofax.terms.util.TermUtils.toJavaString;

import java.io.IOException;
import java.io.Writer;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.library.ssl.SSLLibrary;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.util.TermUtils;

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

		if (!TermUtils.isAppl(streamTerm) || streamTerm.getSubtermCount() != 1 || !TermUtils.isInt(streamTerm.getSubterm(0)))
			return false;
		
		int streamInt = toJavaInt(streamTerm.getSubterm(0));

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
			} else if (TermUtils.isString(child)) {
				writer.write(toJavaString(child));
			} 
		}
	}
}
