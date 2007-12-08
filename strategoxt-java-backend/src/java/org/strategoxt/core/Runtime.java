package org.strategoxt.core;

import aterm.pure.PureFactory;
import aterm.ATerm;

public class Runtime {
	public static PureFactory atermFactory = new PureFactory(); 
	
	public static ATerm prepareCLIArgs(String[] args) { return atermFactory.makeList(); }
}