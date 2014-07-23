package org.strategoxt.strj.cleardep_interface;

import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.Term;
import org.sugarj.common.path.AbsolutePath;
import org.sugarj.common.path.Path;
import org.sugarj.common.path.RelativePath;

public class ClearDepUtils {

	public static Path pathFromPathTerm(IStrategoTerm t) throws IllegalArgumentException {
		String cons = Term.tryGetName(t);
		if ("AbsolutePath".equals(cons)) {
			return new AbsolutePath(Term.asJavaString(t.getSubterm(0)));
		} else if ("RelativePath".equals(cons)) {
			return new RelativePath(pathFromPathTerm(t.getSubterm(0)), Term.asJavaString(t.getSubterm(1)));
		} else {
			throw new IllegalArgumentException();
		}
	}

}
