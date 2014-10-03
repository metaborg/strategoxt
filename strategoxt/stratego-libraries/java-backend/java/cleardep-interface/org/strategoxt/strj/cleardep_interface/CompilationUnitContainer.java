package org.strategoxt.strj.cleardep_interface;

import org.sugarj.common.cleardep.CompilationUnit;

public class CompilationUnitContainer<C extends CompilationUnit> extends ObjectWrapperTerm<C> {

	/**
	 * 
	 */
	private static final long serialVersionUID = 6092628379064210983L;
	
	private static final int TYPE = 12312;
	
	public CompilationUnitContainer(C unit) {
		super(unit, TYPE);
	}
	
	public C getUnit() {
		return this.get();
	}

}
