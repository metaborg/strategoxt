package org.strategoxt.lang.terms;

public interface ITermPrinter {

	public String getString();

	public void print(String string);

	public void println(String string, boolean b);

	public void indent(int i);

	public void nextIndentOff();

	public void println(String string);

	public void outdent(int i);

}