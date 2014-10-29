package org.strategoxt.strj.cleardep_interface;

import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;

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
		return true;
	}

	public void setLocalInterfaceHashCode(Integer hashCode) {
		System.out.println("Set local interface hash for " + this + ": " + hashCode);
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

	/*
	 * @Override
	 * 
	 * public boolean isConsistentShallow(Map<RelativePath, Integer>
	 * editedSourceFiles, Mode mode) {
	 * System.out.println("Is consistent Shallow?"); for (Path p :
	 * this.sourceArtifacts.keySet()) { System.out.println("  " + p); } if
	 * (hasPersistentVersionChanged()) {
	 * System.out.println("Persitent version changed"); return false; }
	 * 
	 * if (!isConsistentWithSourceArtifacts(editedSourceFiles, mode)) {
	 * System.out.println("Not consistent with source artifacts"); return false;
	 * }
	 * 
	 * for (Entry<Path, Integer> e : generatedFiles.entrySet()) { if
	 * (stamper.stampOf(e.getKey()) != e.getValue()) {
	 * System.out.println("Generated files not consistent " + e.getKey());
	 * return false; } }
	 * 
	 * for (Entry<? extends Path, Integer> e :
	 * externalFileDependencies.entrySet()) if (stamper.stampOf(e.getKey()) !=
	 * e.getValue()) {
	 * System.out.println("Not consistent external file dependency"); return
	 * false; }
	 * 
	 * if (!isConsistentExtend(mode)) {
	 * System.out.println("Not consistent extended"); return false; }
	 * 
	 * return true; }
	 */

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
	}

	@Override
	protected void writeEntity(ObjectOutputStream out) throws IOException {
		super.writeEntity(out);
		out.writeObject(this.localInterfaceHashCode);
	}

}
