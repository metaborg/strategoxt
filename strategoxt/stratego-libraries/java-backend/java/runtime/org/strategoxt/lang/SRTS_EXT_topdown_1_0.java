package org.strategoxt.lang;

import org.spoofax.interpreter.terms.*;

import java.util.*;

import static org.spoofax.interpreter.terms.IStrategoTerm.*;

/**
 * A Java call stack efficient version of topdown
 *
 * @author Jeff Smits
 */
public class SRTS_EXT_topdown_1_0 extends Strategy {
    public static SRTS_EXT_topdown_1_0 instance = new SRTS_EXT_topdown_1_0();

    /*
    This implementation uses a stack with two different kinds of elements:
    Visit for the DFS visiting of terms
    Build for the DFS postorder where visited need to be rebuilt with the visited children
    Once a visited term has been rebuilt with the visited children it goes onto the `built` list.
     */
    @Override
    public IStrategoTerm invoke(Context context, IStrategoTerm current, Strategy s) {
        Deque<StackElem> stack = new ArrayDeque<>(); // stack
        stack.push(StackElem.visit(current));

        List<IStrategoTerm> built = new ArrayList<>();

        while (!stack.isEmpty()) {
            StackElem e = stack.pop();
            switch (e.kind) {
                case Visit:
                    IStrategoTerm tv = e.term;
                    tv = s.invoke(context, tv);
                    if (tv == null) {
                        return null;
                    }
                    if (tv.getSubtermCount() == 0) {
                        built.add(tv);
                    } else {
                        stack.push(StackElem.build(tv));
                        // Note that the subterms are pushed on the stack in reverse so they are still visited left-to-right!
                        IStrategoTerm[] children = tv.getAllSubterms();
                        for (int i = children.length-1; i >= 0; i--) {
                            stack.push(StackElem.visit(children[i]));
                        }
                    }
                    break;
                case Build:
                    IStrategoTerm tb = e.term;
                    IStrategoTerm[] newChildren = splitOffEnd(built, tb.getSubtermCount());
                    built.add(buildTerm(context, tb, newChildren));
                    break;
            }
        }

        assert built.size() == 1;

        return built.get(0);
    }

    // This code is derived from SRTS_all#invoke
    private static IStrategoTerm buildTerm(Context context,
                                           IStrategoTerm original, IStrategoTerm[] newChildren) {
        switch (original.getTermType()) {
            case APPL:
                return context.getFactory().replaceAppl(
                        ((IStrategoAppl) original).getConstructor(), newChildren,
                        (IStrategoAppl) original);
            case TUPLE:
                return context.getFactory().replaceTuple(newChildren,
                        (IStrategoTuple) original);
            case LIST:
                return buildListTerm(context, (IStrategoList) original, newChildren);
            default:
                throw new IllegalStateException();
        }
    }

    /* This code is derived from SRTS_all#map etc. The list handling
     * is rather convoluted, but I don't know how import the behaviour
     * is, so I'm trying to reproduce it here.
     */
    private static IStrategoTerm buildListTerm(Context context,
                                               IStrategoList oldList, IStrategoTerm[] newChildren) {
        // SRTS_all#map
        if (oldList.getSubtermCount() == 0) {
            return oldList;
        }

        ITermFactory factory = context.getFactory();
        IStrategoList result;

        IStrategoTerm oldHead = oldList.head();
        IStrategoTerm newHead = newChildren[0];

        if (newHead == oldHead || newHead.match(oldHead)) {
            IStrategoList oldTail = oldList.tail();
            // Head remained the same; must do anno-preserving map

            // SRTS_all#mapMaintainAnnos
            IStrategoList newTail;
            if (oldTail.isEmpty()) {
                newTail = oldTail;
            } else {
                IStrategoTerm oldH2 = oldTail.head();
                IStrategoTerm newH2 = newChildren[1];
                if (newH2 != oldH2) {
                    // SRTS_all#mapIgnoreAnnos (4 arg version)
                    newTail = factory
                            .replaceList(Arrays.copyOfRange(newChildren, 1, newChildren.length), oldTail);
                } else {
                    IStrategoList oldT2 = oldTail.tail();
                    // SRTS_all#mapIgnoreAnnos (3 arg version)
                    boolean same = true;
                    IStrategoTerm curr;
                    IStrategoList currT = oldT2;
                    for (int i = 2; i < newChildren.length; i++) {
                        curr = currT.head();
                        currT = currT.tail();
                        if (curr != newChildren[i]) {
                            same = false;
                            break;
                        }
                    }
                    if (same) {
                        newTail = oldTail;
                    } else {
                        IStrategoList newT2 = factory
                                .replaceList(Arrays.copyOfRange(newChildren, 2, newChildren.length), oldT2);
                        newTail = factory.replaceListCons(oldH2, newT2, oldH2, oldT2);
                    }
                }
            }

            // SRTS_all#map
            result = factory.replaceListCons(oldHead, newTail, oldHead, oldTail);
        } else {
            // SRTS_all#mapIgnoreAnnos (4 arg version)
            result = factory.replaceList(newChildren, oldList);
        }

        // SRTS_all#map
        return factory.replaceTerm(result, oldList); // set origin for topmost Cons
    }

    private static class StackElem {
        public enum StackElemKind {
            Visit, Build
        }

        public final StackElemKind kind;
        public final IStrategoTerm term;

        private StackElem(StackElemKind kind, IStrategoTerm term) {
            this.kind = kind;
            this.term = term;
        }

        public static StackElem visit(IStrategoTerm term) {
            return new StackElem(StackElemKind.Visit, term);
        }

        public static StackElem build(IStrategoTerm term) {
            return new StackElem(StackElemKind.Build, term);
        }
    }

    private static IStrategoTerm[] splitOffEnd(List<IStrategoTerm> built, int stCount) {
        List<IStrategoTerm> childListView = built.subList(built.size() - stCount, built.size());

        IStrategoTerm[] newChildren = childListView.toArray(new IStrategoTerm[stCount]);
        childListView.clear();

        return newChildren;
    }
}
