package org.stratego.strj.cleardep_interface;

import java.io.IOException;

import org.spoofax.interpreter.terms.ISimpleTerm;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermPrinter;
import org.spoofax.terms.AbstractSimpleTerm;
import org.spoofax.terms.StrategoTerm;
import org.sugarj.common.cleardep.CompilationUnit;

public class CompilationUnitContainer extends StrategoTerm {

	private static final int TYPE = 12312;

	private CompilationUnit unit;
	
	public CompilationUnitContainer(CompilationUnit unit) {
		super(TYPE);
		this.unit = unit;
	}
	
	public CompilationUnit getUnit() {
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
		return this.hashCode();
	}



}
