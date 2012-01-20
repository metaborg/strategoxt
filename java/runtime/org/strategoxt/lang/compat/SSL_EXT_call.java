package org.strategoxt.lang.compat;

import static org.spoofax.interpreter.core.Tools.asJavaString;
import static org.spoofax.interpreter.core.Tools.isTermList;
import static org.spoofax.interpreter.core.Tools.isTermString;
import static org.spoofax.interpreter.core.Tools.isTermTuple;
import static org.spoofax.interpreter.core.Tools.javaString;

import java.io.File;
import java.io.IOException;
import java.io.Writer;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.library.IOAgent;
import org.spoofax.interpreter.library.ssl.SSLLibrary;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class SSL_EXT_call extends AbstractPrimitive {

	private final NativeCallHelper caller = new NativeCallHelper();
	
	public SSL_EXT_call() {
		super("SSL_EXT_call", 0, 2);
	}

	@Override
	public boolean call(IContext env, Strategy[] svars, IStrategoTerm[] tvars)
			throws InterpreterException {
		
		try {
			String program;
			String[] environment = null;
			
			if (!isTermList(tvars[1])) 
				return false;
			if (isTermTuple(tvars[0])) {
				if (tvars[0].getSubtermCount() != 2 || !isTermString(tvars[0].getSubterm(0)))
					return false;
				program = asJavaString(tvars[0].getSubterm(0));
				environment = toEnvironment(tvars[0].getSubterm(1));
				if (environment == null)
					return false;
			} else if (isTermString(tvars[0])) {
				program = asJavaString(tvars[0]);
			} else {
				return false;
			}
			
			String[] commandArgs = toCommandArgs(program, tvars[1].getAllSubterms());
			if (commandArgs == null)
				return false;
			
			// I/O setup
			SSLLibrary op = (SSLLibrary) env.getOperatorRegistry(SSLLibrary.REGISTRY_NAME);
			IOAgent io = op.getIOAgent();
			File dir = io.openFile(io.getWorkingDir());
			Writer stdout = io.getWriter(IOAgent.CONST_STDOUT);
			Writer stderr = io.getWriter(IOAgent.CONST_STDERR);
			
			// Invocation
			int returnCode = caller.call(commandArgs, environment, dir, stdout, stderr);
			env.setCurrent(env.getFactory().makeInt(returnCode));
			return true;
			
		} catch (InterruptedException e) {
			throw new InterpreterException("SSL_EXT_CALL system call interrupted", e);
		} catch (IOException e) {
			return false;
		} catch (IllegalArgumentException e) {
			return false;
		}
	}

	public static String[] toCommandArgs(String program, IStrategoTerm[] args) throws IllegalArgumentException {
		String[] results = new String[1 + args.length];
		results[0] = handleSpacesInPath(addExecutableExtension(program));
		
		for (int i = 0; i < args.length; i++) {
			if (!isTermString(args[i]))
				return null;
			results[i+1] = handleSpacesInPath(javaString(args[i]));
		}
		
		return results;
	}
	
	private static String handleSpacesInPath(String potentialPath) {
		if (potentialPath.indexOf(' ') != -1 && isWindows() && !potentialPath.startsWith("\"")) {
			return "\"" + potentialPath + "\"";
		} else {
			return potentialPath;
		}
	}
	
	private static String addExecutableExtension(String command) {
		if (!new File(command).exists() && isWindows()) {
			if (new File(command + ".exe").exists()) return command + ".exe";
		}
		return command;
	}
	
	private static boolean isWindows() {
		// Java only publishes this as a string
		return System.getProperty("os.name").toLowerCase().indexOf("win") != -1;
	}
	
	private String[] toEnvironment(IStrategoTerm env) {
		if (!isTermList(env)) return null;

		String[] results = new String[env.getSubtermCount()];
		for (int i = 0; i < results.length; i++) {
			if (!isTermString(env.getSubterm(i))) return null;
			results[i] = asJavaString(env.getSubterm(i));
		}
		
		return results;
	}
}
