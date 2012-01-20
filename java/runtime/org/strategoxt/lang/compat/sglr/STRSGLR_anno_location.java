package org.strategoxt.lang.compat.sglr;

import static org.spoofax.interpreter.core.Tools.*;
import static org.spoofax.interpreter.terms.IStrategoTerm.*;

import java.util.LinkedList;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoConstructor;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

/**
 * Asfix location annotation.
 */
public class STRSGLR_anno_location extends AbstractPrimitive {

	private static final String NAME = "STRSGLR_anno_location";

	private static final int FIRST_LINE = 1;

	private static final int FIRST_COLUMN = 1;

	protected STRSGLR_anno_location() {
		super(NAME, 0, 1);
	}

	@Override
	public boolean call(IContext env, Strategy[] svars, IStrategoTerm[] tvars)
			throws InterpreterException {

		if (tvars[0].getTermType() != APPL
				|| !"parsetree".equals(((IStrategoAppl) tvars[0]).getConstructor().getName())
				|| tvars[0].getSubtermCount() != 2)
			return false;

		env.setCurrent(annoLocation(env.getFactory(), (IStrategoAppl) tvars[0]));
		return true;
	}

	public IStrategoTerm annoLocation(ITermFactory factory, IStrategoAppl parseTree) {
		IStrategoTerm top = termAt(parseTree, 0);
		IStrategoTerm metadata = termAt(parseTree, 1);
		top = new AsfixAnnoLocation(factory).traverse(top);
		return factory.makeAppl(factory.makeConstructor("parsetree", 2), top, metadata);
	}

	/**
	 * Stateful asfix annotation traversal class.
	 */
	private class AsfixAnnoLocation {

		private int line = FIRST_LINE;

		private int column = FIRST_COLUMN;

		private final ITermFactory factory;

		private final IStrategoTerm layout;

		private final IStrategoConstructor appl;

		private final IStrategoConstructor amb;

		private final IStrategoConstructor location;

		public AsfixAnnoLocation(ITermFactory factory) {
			this.factory = factory;
			layout = factory.makeAppl(factory.makeConstructor("cf", 1), factory
					.makeAppl(factory.makeConstructor("opt", 1), factory
							.makeAppl(factory.makeConstructor("layout", 0))));
			appl = factory.makeConstructor("appl", 2);
			amb = factory.makeConstructor("amb", 1);
			location = factory.makeConstructor("Location", 4);
		}

		private boolean isTreeChar(IStrategoTerm t) {
			return t.getTermType() == INT;
		}

		private boolean isTreeAppl(IStrategoTerm t) {
			return t.getTermType() == APPL
					&& ((IStrategoAppl) t).getConstructor() == appl;
		}

		private boolean isTreeLayout(IStrategoTerm t) {
			return t.getTermType() == APPL
					&& termAt(termAt(t, 0), 1).equals(layout);
		}

		private IStrategoAppl makeTreeAppl(IStrategoTerm prod,
				IStrategoList args) {
			return factory.makeAppl(appl, prod, args);
		}

		private boolean isTreeAmb(IStrategoTerm t) {
			return t.getTermType() == APPL
					&& ((IStrategoAppl) t).getConstructor() == amb;
		}

		private IStrategoTerm makeTreeAmb(IStrategoTerm[] ts) {
			return factory.makeAppl(amb, factory.makeList(ts));
		}

		private int getTreeChar(IStrategoTerm tree) {
			return asJavaInt(tree);
		}

		private IStrategoTerm setLocation(IStrategoTerm t, int firstLine,
				int firstColumn, int lastLine, int lastColumn) {

			IStrategoList annos = t.getAnnotations();
			assert annos != null;
			IStrategoTerm anno = factory.makeAppl(location, factory
					.makeInt(firstLine), factory.makeInt(firstColumn), factory
					.makeInt(lastLine), factory.makeInt(lastColumn));
			annos = factory.makeListCons(anno, annos);

			return factory.annotateTerm(t, annos);
		}

		private void scan(IStrategoTerm t) {
			if (isTreeChar(t)) {
				if (getTreeChar(t) == '\n') {
					column = FIRST_COLUMN;
					line++;
				} else {
					column++;
				}
			} else if (isTreeAppl(t)) {
				IStrategoList args = termAt(t, 1);
				while (!args.isEmpty()) {
					scan(args.head());
					args = args.tail();
				}
			} else if (isTreeAmb(t)) {
				scan(termAt(termAt(t, 0), 0));
			} else {
				System.err.println(NAME + ": unhandled tree - " + t);
			}
		}

		private IStrategoList traverseArgs(IStrategoList args) {
			if (args.isEmpty()) {
				return args;
			} else {
				IStrategoTerm arg = traverse(args.head());
				return factory.makeListCons(arg, traverseArgs(args.tail()));
			}
		}

		public IStrategoTerm traverse(IStrategoTerm t) {
			int firstLine = line;
			int firstColumn = column;

			if (isTreeChar(t)) {
				if (getTreeChar(t) == '\n') {
					column = FIRST_COLUMN;
					line++;
				} else {
					column++;
				}
				return t;
			} else if (isTreeLayout(t)) {
				scan(t);
				return t;
			} else if (isTreeAppl(t)) {
				IStrategoList args = traverseArgs((IStrategoList) termAt(t, 1));
				t = makeTreeAppl(termAt(t, 0), args);
			} else if (isTreeAmb(t)) {
				IStrategoList args = (IStrategoList) termAt(t, 0);
				LinkedList<IStrategoTerm> newArgs = new LinkedList<IStrategoTerm>();
				int line = this.line;
				int column = this.column;

				while (!args.isEmpty()) {
					this.line = line;
					this.column = column;
					newArgs.addFirst(traverse(args.head()));
					args = args.tail();
				}

				t = makeTreeAmb(newArgs.toArray(new IStrategoTerm[newArgs.size()]));
			} else {
				System.err.println(NAME + ": unhandled tree - " + t);
			}

			return setLocation(t, firstLine, firstColumn, line, column);
		}
	}

}
