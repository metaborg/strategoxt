package org.strategoxt.strj.util;

import java.util.Comparator;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.Term;

public class Unify_and_sort_Constructors extends Abstract_Unify_and_sort {

	public Unify_and_sort_Constructors() {
		super("Unify_and_sort_Constructors");
	}

	@Override
	protected Comparator<IStrategoTerm> getComparator() {
		return new Comparator<IStrategoTerm>() {

			@Override
			public int compare(IStrategoTerm o1, IStrategoTerm o2) {
				String constructor1 = Term.tryGetName(o1);
				String constructor2 = Term.tryGetName(o2);
				int constructorComp = constructor1.compareTo(constructor2);
				if (constructorComp != 0) {
					return constructorComp;
				}
				
				int typeIndex = 1;
				if (constructor1.equals("ExtOpDeclInj")) {
					typeIndex = 0;
				}
				
				if (typeIndex == 1) {
					String name1 = Term.asJavaString(Term.termAt(o1, 0));
					String name2 = Term.asJavaString(Term.termAt(o2, 0));
					int nameComp = name1.compareTo(name2);
					if (nameComp != 0) {
						return nameComp;
					}
				}
				
				IStrategoTerm type1 = Term.termAt(o1, typeIndex);
				IStrategoTerm type2 = Term.termAt(o2, typeIndex);
				
				return Integer.compare(typeToLength(type1), typeToLength(type2));
				
				
			}
			
			private int typeToLength(IStrategoTerm type) {
				String termConstructor = Term.tryGetName(type);
				if (termConstructor.equals("ConstType")) {
					return 0;
				}
				return ((IStrategoList)Term.termAt(type, 0)).size();
			}
		};
	}

}
