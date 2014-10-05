package org.strategoxt.strj.cleardep_interface;

import java.io.IOException;
import java.util.HashSet;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;

import org.sugarj.common.FileCommands;
import org.sugarj.common.cleardep.CompilationUnit;
import org.sugarj.common.cleardep.ContentHashStamper;
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
	
	@Override
	public Integer getInterfaceHash() {
		Set<Path> interfaceFiles = this.getAllInterfacesFiles();
		if (interfaceFiles == null) {
			System.out.println("Interface hash for " + this.getSourceArtifacts() + ": null");
			return null;
		}
		Set<Integer> hashesSet = new HashSet<>();
		for (Path path : interfaceFiles) {
			hashesSet.add(ContentHashStamper.instance.stampOf(path));
		}
		int hash = hashesSet.hashCode();
		System.out.println("Interface hash for " + this.getSourceArtifacts() + ": " + hash);
		return hash;
	}
	
	private Set<Path> getAllInterfacesFiles() {
		return this.visit(new ModuleVisitor<Set<Path>>() {

			@Override
			public Set<Path> visit(CompilationUnit mod, Mode mode) {
				if (mod instanceof StrategoCompilationUnit) {
					Path interfaceFile = ((StrategoCompilationUnit)mod).getInterfaceFile();
					if (interfaceFile == null) {
						return null;
					} else {
						Set<Path> set = new HashSet<>();
						set.add(interfaceFile);
						return set;
					}
				} else {
					return new HashSet<>();
				}
			}

			@Override
			public Set<Path> combine(Set<Path> t1, Set<Path> t2) {
				if (t1 == null || t2 == null)
					return null;
				t1.addAll(t2);
				return t1;
			}

			@Override
			public Set<Path> init() {
				return new HashSet<>();
			}

			@Override
			public boolean cancel(Set<Path> t) {
				return t == null;
			}
		
		});
	}
	
	private Path getInterfaceFile() {
		for (Path p : this.getGeneratedFiles()) {
			if (p.getAbsolutePath().endsWith(".sig")) {
				return p;
			}
		}
		return null;
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
	public String toString() {
		return "SC[" + super.hashCode() + "]_(" + this.getSourceArtifacts().toString() +")";
	}

}
