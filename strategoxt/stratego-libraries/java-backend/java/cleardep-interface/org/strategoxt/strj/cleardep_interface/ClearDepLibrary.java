package org.strategoxt.strj.cleardep_interface;

import org.spoofax.interpreter.library.AbstractStrategoOperatorRegistry;

public class ClearDepLibrary extends AbstractStrategoOperatorRegistry {

	public ClearDepLibrary() {
		this.add(new ClearDep_CompilationUnit_create());
		this.add(new ClearDep_CompilationUnit_read());
		this.add(new ClearDep_CompilationUnit_write());
		this.add(new ClearDep_CompilationUnit_add_external_file_dep());
		this.add(new ClearDep_CompilationUnit_add_module_dep());
		this.add(new ClearDep_CompilationUnit_add_circular_module_dep());
		this.add(new ClearDep_CompilationUnit_is_consistent());
		this.add(new ClearDep_CompilationUnit_depends_on_transitivly());
		this.add(new ClearDep_CompilationUnit_depends_on_transitivly_non_circularly());
		this.add(new ClearDep_CompilationUnit_add_module_dep());
		this.add(new ClearDep_CompilationUnit_get_module_deps());
		this.add(new ClearDep_CompilationUnit_add_generated_file());
		this.add(new ClearDep_CompilationUnit_is_persisted());
	}
	
	@Override
	public String getOperatorRegistryName() {
		return "ClearDep";
	}

}
