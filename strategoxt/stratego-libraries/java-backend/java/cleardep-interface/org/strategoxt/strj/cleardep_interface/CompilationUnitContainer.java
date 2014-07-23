package org.strategoxt.strj.cleardep_interface;

import java.io.IOException;
import java.util.Collections;
import java.util.Iterator;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermPrinter;
import org.spoofax.terms.StrategoTerm;
import org.sugarj.common.cleardep.CompilationUnit;

public class CompilationUnitContainer<C extends CompilationUnit> extends StrategoTerm {

	/**
	 * 
	 */
	private static final long serialVersionUID = 122398029374583475L;

	private static final int TYPE = 12312;

	private C unit;
	
	public CompilationUnitContainer(C unit) {
		super(TYPE);
		this.unit = unit;
	}
	
	public C getUnit() {
		return unit;
	}

	@Override
	public int getSubtermCount() {
		return 0;
	}

	@Override
	public IStrategoTerm getSubterm(int paramInt) {
		return null;
	}

	@Override
	public IStrategoTerm[] getAllSubterms() {
		return null;
	}

	@Override
	public int getTermType() {
		return TYPE;
	}

	@Override
	public String toString() {
		return this.unit.getName();
	}
	
	@Override
	public void prettyPrint(ITermPrinter paramITermPrinter) {
		paramITermPrinter.print(this.toString());
	}

	@Override
	public void writeAsString(Appendable paramAppendable, int paramInt) throws IOException {
		paramAppendable.append(this.toString());
	}

	@Override
	protected boolean doSlowMatch(IStrategoTerm paramIStrategoTerm, int paramInt) {
		return this == paramIStrategoTerm;
	}

	@Override
	protected int hashFunction() {
		return this.unit.hashCode();
	}
	
	@Override
	public Iterator<IStrategoTerm> iterator() {
		return Collections.<IStrategoTerm>emptyList().iterator();
	}



}
