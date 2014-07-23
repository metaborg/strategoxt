package org.strategoxt.strj.cleardep_interface;

import org.spoofax.interpreter.library.AbstractStrategoOperatorRegistry;

public class ClearDepLibrary extends AbstractStrategoOperatorRegistry {

	public ClearDepLibrary() {
		this.add(new ClearDep_CompilationUnit_create());
		this.add(new ClearDep_CompilationUnit_write());
		this.add(new ClearDep_CompilationUnit_add_external_file_dep());
	}
	
	@Override
	public String getOperatorRegistryName() {
		return "ClearDep";
	}

}
