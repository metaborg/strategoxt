package org.strategoxt.lang.compat;

import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintStream;

import org.strategoxt.lang.StrategoException;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class NativeCallHelper {	
	
	public int call(String[] commandArgs, File workingDir, PrintStream outStream, PrintStream errorStream)
		throws InterruptedException, IOException {
		return call(commandArgs, null, workingDir, outStream, errorStream);
	}
	
	public int call(String[] commandArgs, String[] environment, File workingDir, PrintStream outStream, PrintStream errorStream)
			throws InterruptedException, IOException {
		
		Process process = Runtime.getRuntime().exec(commandArgs, environment, workingDir);
		Thread t1 = new StreamCopier(process.getInputStream(), outStream);
		Thread t2 = new StreamCopier(process.getErrorStream(), errorStream);
		t1.start();
		t2.start();
		
		int result = process.waitFor();
		t1.join();
		t2.join();
	
		return result;
	}

	public static class StreamCopier extends Thread {
		private final InputStream input;
		private final PrintStream output;
	
		public StreamCopier(InputStream input, PrintStream output) {
			this.input = input;
			this.output = output;
		}
	
		@Override
		public void run() {
			try {
				byte[] buffer = new byte[512];
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