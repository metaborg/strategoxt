package org.strategoxt.lang.compat;

import java.io.File;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.PrintStream;
import java.io.Reader;
import java.io.Writer;

import org.strategoxt.lang.StrategoException;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class NativeCallHelper {	
	
	@Deprecated
	public int call(String[] commandArgs, File workingDir, PrintStream outStream, PrintStream errorStream)
			throws InterruptedException, IOException {
		
		return call(commandArgs, null, workingDir, outStream, errorStream);
	}
	
	public int call(String[] commandArgs, File workingDir, Writer outStream, Writer errorStream)
			throws InterruptedException, IOException {
		
		return call(commandArgs, null, workingDir, outStream, errorStream);
	}
	
	@Deprecated
	public int call(String[] commandArgs, String[] environment, File workingDir, PrintStream outStream, PrintStream errorStream)
			throws InterruptedException, IOException {
		return call(commandArgs, environment, workingDir, new OutputStreamWriter(outStream), new OutputStreamWriter(errorStream));
	}
		
	public int call(String[] commandArgs, String[] environment, File workingDir, Writer outWriter, Writer errorWriter)
			throws InterruptedException, IOException {

		Process process = Runtime.getRuntime().exec(commandArgs, environment, workingDir);
		Thread t1 = new StreamCopier(new InputStreamReader(process.getInputStream()), outWriter);
		Thread t2 = new StreamCopier(new InputStreamReader(process.getErrorStream()), errorWriter);
		t1.start();
		t2.start();
		
		int result = process.waitFor();
		t1.join();
		t2.join();
	
		return result;
	}

	public static class StreamCopier extends Thread {
		private final Reader input;
		private final Writer output;
	
		public StreamCopier(Reader input, Writer output) {
			this.input = input;
			this.output = output;
		}
	
		@Override
		public void run() {
			try {
				char[] buffer = new char[512];
				int read = 0;
				while ((read = input.read(buffer, 0, 512)) != -1) {
					output.write(buffer, 0, read);
				}
				
				input.close();
				output.flush();
			} catch (IOException e) {
				throw new StrategoException("IO Exception redirecting output from Process", e);
			}
		}
	}
}