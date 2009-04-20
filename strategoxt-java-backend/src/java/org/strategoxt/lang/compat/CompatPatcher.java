package org.strategoxt.lang.compat;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class CompatPatcher {
	private static final String JSGLR = "org.spoofax.sglr.JSGLR";

	private static final String LIB_SGLR = "org.strategoxt.libstratego-sglr";

	private boolean appliedSGLR;
	
	public void apply() throws ClassNotFoundException {
		if (!appliedSGLR && exists(LIB_SGLR)) {
			if (exists("JSGLR")) {
				new JSGLRCompatPatcher().apply();
			}
			appliedSGLR = true;
		}
	}
	
	private void useJSGLR() {
	}
	
	private static boolean exists(String className) {
		try {
			CompatPatcher.class.getClassLoader().loadClass(className);
			return true;
		} catch (ClassNotFoundException e) {
			return false;
		}
	}
}
