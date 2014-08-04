package org.strategoxt.strj.cleardep_interface;

import java.io.IOException;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;

import org.sugarj.common.FileCommands;
import org.sugarj.common.cleardep.CompilationUnit;
import org.sugarj.common.cleardep.Stamper;
import org.sugarj.common.cleardep.Synthesizer;
import org.sugarj.common.cleardep.mode.Mode;
import org.sugarj.common.path.Path;
import org.sugarj.common.path.RelativePath;
import org.sugarj.util.Pair;

public class StrategoCompilationUnit extends CompilationUnit {

	/**
	 * 
	 */
	private static final long serialVersionUID = 3462389746235492342L;

	public static StrategoCompilationUnit create( Stamper stamper, Path compileDep, Path compileTarget, Path editedDep, Path editedTarget, Set<RelativePath> sourceFiles, Map<RelativePath, Integer> editedSourceFiles, Mode mode, Synthesizer syn) throws IOException {
		return CompilationUnit.create(StrategoCompilationUnit.class, stamper, compileDep, compileTarget, editedDep, editedTarget, sourceFiles, editedSourceFiles, mode, syn);
	}
	
	public static Pair<StrategoCompilationUnit,Boolean> read( Stamper stamper, Path compileDep, Path editedDep, Map<RelativePath, Integer> editedSourceFiles, Mode mode) throws IOException {
		return CompilationUnit.read(StrategoCompilationUnit.class, stamper, compileDep, editedDep, editedSourceFiles, mode);
	}

	@Override
	protected boolean isConsistentExtend(Mode arg0) {
		return true;
	}
	
	/*@Override
	
	public boolean isConsistentShallow(Map<RelativePath, Integer> editedSourceFiles, Mode mode) {
		System.out.println("Is consistent Shallow?");
		for (Path p : this.sourceArtifacts.keySet()) {
			System.out.println("  " + p);
		}
	    if (hasPersistentVersionChanged()) {
	    	System.out.println("Persitent version changed");
	    	return false;
	    }
	    
	    if (!isConsistentWithSourceArtifacts(editedSourceFiles, mode)) {
	    	System.out.println("Not consistent with source artifacts");
	    	return false;
	    }
	    
	    for (Entry<Path, Integer> e : generatedFiles.entrySet()) {
	      if (stamper.stampOf(e.getKey()) != e.getValue()) {
	    	  System.out.println("Generated files not consistent " + e.getKey());
	        return false;
	      }
	    }
	    
	    for (Entry<? extends Path, Integer> e : externalFileDependencies.entrySet())
	      if (stamper.stampOf(e.getKey()) != e.getValue()) {
	    	  System.out.println("Not consistent external file dependency");
	    	  return false;
	      }

	    if (!isConsistentExtend(mode)) {
	    	System.out.println("Not consistent extended");
	    	return false;
	    }

	    return true;
	  }*/
	
	@Override
	 public void addModuleDependency(CompilationUnit mod) {
		if (mod == this) {
			throw new RuntimeException("Cannot depent on it self");
		}
		if (mod.dependsOnTransitively(this) || this.dependsOnTransitively(mod)) {
			throw new RuntimeException("Closes circle");
		}
	    moduleDependencies.add(mod);
	  }
	
	@Override
	  public boolean dependsOnNoncircularly(CompilationUnit other) {
		    return this == other || moduleDependencies.contains(other);    
		  }
	
	@Override
	public boolean dependsOn(CompilationUnit other) {
	    return this == other ||  moduleDependencies.contains(other) || circularModuleDependencies.contains(other);    
	  }
	
	@Override

	  public boolean dependsOnTransitivelyNoncircularly(CompilationUnit other) {
	//	System.out.println("Depends? " + this + " on " + other);
	//	System.out.println(this.moduleDependencies);
	    if (dependsOnNoncircularly(other))
	      return true;
	    for (CompilationUnit mod : moduleDependencies)
	      if (mod.dependsOnTransitivelyNoncircularly(other))
	        return true;
	    return false;
	  }
	
	@Override
	public String toString() {
		return "SC(" + this.getSourceArtifacts().toString() +")";
	}

}
