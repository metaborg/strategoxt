package org.strategoxt.strj.cleardep_interface;

import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;

import org.spoofax.interpreter.terms.IStrategoTerm;
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

	private Integer localInterfaceHashCode = null;
	private CompilerOptions compiledOptions =null;
	private transient CompilerOptions currentOptions =null;

	public static StrategoCompilationUnit create(Stamper stamper, Path compileDep, Path compileTarget, Path editedDep, Path editedTarget,
			Set<RelativePath> sourceFiles, Map<RelativePath, Integer> editedSourceFiles, Mode mode, Synthesizer syn) throws IOException {
		return CompilationUnit.create(StrategoCompilationUnit.class, stamper, compileDep, compileTarget, editedDep, editedTarget, sourceFiles,
				editedSourceFiles, mode, syn);
	}

	public static Pair<StrategoCompilationUnit, Boolean> read(Stamper stamper, Path compileDep, Path editedDep, Map<RelativePath, Integer> editedSourceFiles,
			Mode mode) throws IOException {
		return CompilationUnit.read(StrategoCompilationUnit.class, stamper, compileDep, editedDep, editedSourceFiles, mode);
	}

	@Override
	protected boolean isConsistentExtend(Mode arg0) {
		// Check whether a meta file for the compilation unit was added
		if (!checkNewMetaFile()) {
			return false;
		}

		// Compare compiler options
		if (!compareCompilerOptions()) {
			return false;
		}

		return true;
	}

	private boolean checkNewMetaFile() {
		// Get all source files
		Set<RelativePath> path = this.getSourceArtifacts();
		// Here is either a single str file or a str file and a meta file
		if (path.size() == 2) {
			return true;
		}
		// Only a str file, need to check whether a meta file has been created
		if (path.size() == 1) {
			RelativePath strFile = path.iterator().next();
			String fileName = strFile.getRelativePath();
			if (fileName.endsWith(".str")) {
				String metaFileName = fileName.substring(0, fileName.length() - 4) + ".meta";
				RelativePath metaPath = new RelativePath(strFile.getBasePath(), metaFileName);
				if (FileCommands.exists(metaPath)) {
					// Oh, we got a new meta file, need to recompile
					return false;
				}
			}
		}
		return true;
	}
	
	private boolean compareCompilerOptions() {
		// There are no compiler options to compare against, ignore this check
		if (this.currentOptions == null) {
			return true;
		}
		return this.currentOptions.equals(this.compiledOptions);
	}

	public void setLocalInterfaceHashCode(Integer hashCode) {
		this.localInterfaceHashCode = hashCode;
	}

	@Override
	public Integer getInterfaceHash() {
		return super.getInterfaceHash();
	}

	protected Integer calculateTransisitveInterfaceHash() {
		Set<Integer> hashesSet = this.getAllInterfacesHashes();
		Integer hash = null;
		if (hashesSet != null) {
			hash = hashesSet.hashCode();
		}
		return hash;
	}

	private Set<Integer> getAllInterfacesHashes() {
		return this.visit(new ModuleVisitor<Set<Integer>>() {

			@Override
			public Set<Integer> visit(CompilationUnit mod, Mode mode) {
				if (mod instanceof StrategoCompilationUnit) {
					if (((StrategoCompilationUnit) mod).localInterfaceHashCode == null) {
						return null;
					} else {
						Set<Integer> set = new HashSet<>();
						set.add(((StrategoCompilationUnit) mod).localInterfaceHashCode);
						return set;
					}
				} else {
					return new HashSet<>();
				}
			}

			@Override
			public Set<Integer> combine(Set<Integer> t1, Set<Integer> t2) {
				if (t1 == null || t2 == null)
					return null;
				t1.addAll(t2);
				return t1;
			}

			@Override
			public Set<Integer> init() {
				return new HashSet<>();
			}

			@Override
			public boolean cancel(Set<Integer> t) {
				return t == null;
			}

		});
	}
	
	public void setCompiledOptions(CompilerOptions options) {
		this.compiledOptions = options;
	}
	
	public void setCurrentOptions(CompilerOptions options) {
		this.currentOptions = options;
	}

	@Override
	public String toString() {
		String sourceFiles = "";
		for (RelativePath p : this.getSourceArtifacts()) {
			sourceFiles += p.getRelativePath() + ", ";
		}
		return "SC[" + super.hashCode() + "]_(" + sourceFiles + ")";
	}

	@Override
	protected void readEntity(ObjectInputStream in) throws IOException, ClassNotFoundException {
		super.readEntity(in);
		this.localInterfaceHashCode = (Integer) in.readObject();
		this.compiledOptions = (CompilerOptions) in.readObject();
	}

	@Override
	protected void writeEntity(ObjectOutputStream out) throws IOException {
		super.writeEntity(out);
		out.writeObject(this.localInterfaceHashCode);
		out.writeObject(this.compiledOptions);
	}

}
