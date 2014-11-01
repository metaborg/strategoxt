package org.strategoxt.strj.cleardep_interface;

import org.spoofax.interpreter.library.AbstractStrategoOperatorRegistry;
import org.strategoxt.strj.util.Unify_and_sort_Constructors;
import org.strategoxt.strj.util.Unify_and_sort_Signatures;

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
		this.add(new ClearDep_CompilationUnit_get_module_circ_deps());
		this.add(new ClearDep_CompilationUnit_add_generated_file());
		this.add(new ClearDep_CompilationUnit_is_persisted());
		this.add(new ClearDep_BuildSchedule_createBuildSchedule());
		this.add(new ClearDep_BuildSchedule_flatten());
		this.add(new ClearDep_BuildTask_getState());
		this.add(new ClearDep_BuildTask_isTaskCompleted());
		this.add(new ClearDep_BuildTask_needsToBeBuild());
		this.add(new ClearDep_BuildTask_setState());
		this.add(new ClearDep_BuildTask_get_units());
		this.add(new ClearDep_CompilationUnit_get_source_files());
		this.add(new ClearDep_CompilationUnit_is_consistent_shallow());
		this.add(new ClearDep_CompilationUnit_is_consistent_to_interfaces());
		this.add(new ClearDep_CompilationUnit_update_module_dependency_interface());
		this.add(new ClearDep_CompilationUnit_get_generated_files());
		this.add(new ClearDep_CompilationUnit_set_interface_hash());
		this.add(new Unify_and_sort_Signatures());
		this.add(new Unify_and_sort_Constructors());
	}
	
	@Override
	public String getOperatorRegistryName() {
		return "ClearDep";
	}

}
