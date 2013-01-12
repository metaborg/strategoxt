
/** 
 * \file
 * File that deals with issues regarding the special LAYOUT symbol.
 */
#include <MEPT-layout.h>
#include <MEPT-annotations.h>

/**
 * Replaces, recursively, all layout of a list of trees by a certain
 * fixed layout node.
 * \param args input tree list
 * \param layout the new layout node
 * \return a list of args with ALL layout nodes replace by #layout
 */
PT_Args PT_replaceArgsLayout(PT_Args args, PT_Tree layout)
{
  PT_Args result = PT_makeArgsEmpty();

  for ( ; !PT_isArgsEmpty(args); args = PT_getArgsTail(args)) {
    PT_Tree head = PT_getArgsHead(args);

    if (PT_isTreeLayout(head)) {
      head = layout;
    }
    else {
      head = PT_replaceTreeLayout(head, layout);
    }



    result = PT_makeArgsMany(head, result);
  }

  return PT_reverseArgs(result);
}

/**
 * Replaces, recursively, all layout of a tree by a certain
 * fixed layout node.
 * \param tree input tree 
 * \param layout the new layout node
 * \return a list of args with ALL layout nodes replace by #layout
 */
PT_Tree PT_replaceTreeLayout(PT_Tree tree, PT_Tree layout)
{
  if (PT_hasTreeArgs(tree)) {
    PT_Args args = PT_getTreeArgs(tree);

    args = PT_replaceArgsLayout(args, layout);

    tree = PT_setTreeArgs(tree, args);
  }

  return tree;
}


/**
 * Replaces, recursively, all layout of a parse tree by a certain
 * fixed layout node.
 * \param tree input parse tree 
 * \param layout the new layout node
 * \return a list of args with ALL layout nodes replace by #layout
 */
PT_ParseTree PT_replaceParseTreeLayout(PT_ParseTree tree, PT_Tree layout)
{
  PT_Tree top = PT_getParseTreeTop(tree);

  top = PT_replaceTreeLayout(top, layout);

  return PT_setParseTreeTop(tree, top);
}

/**
 * Constructs a derivation for an empty layout tree. This is possible since 
 * there is a unique LAYOUT non-terminal in SDF. In the future we intend
 * to parameterize this, and this function may become more complex.
 */
PT_Tree PT_makeTreeLayoutEmpty()
{
  PT_Symbol layoutSymbol = PT_makeSymbolCf(
                             PT_makeSymbolOpt(PT_makeSymbolLayout()));
  PT_Production optLayoutProd = PT_makeProductionDefault(
                                  PT_makeSymbolsEmpty(),
                                  layoutSymbol,
                                  PT_makeAttributesNoAttrs());
  return PT_makeTreeAppl(optLayoutProd, PT_makeArgsEmpty());
}

/**
 * Constructs a derivation of a layout tree, with the proper outermost
 * productions, effectively mimicking the effect of the SDF normalizer.
 * \todo I doubt this currently constructs a correct tree.
 */
PT_Tree PT_makeTreeLayoutNonEmpty(PT_Args args)
{
  PT_Symbol layoutSymbolRhs = PT_makeSymbolCf(
                                PT_makeSymbolOpt(PT_makeSymbolLayout()));
  PT_Symbol layoutSymbolLhs = PT_makeSymbolCf(PT_makeSymbolLayout());
  PT_Symbols layoutLhs = PT_makeSymbolsSingle(layoutSymbolLhs);
  PT_Production optLayoutProd = PT_makeProductionDefault(
                                  layoutLhs,
                                  layoutSymbolRhs,
                                  PT_makeAttributesNoAttrs());
  return PT_makeTreeAppl(optLayoutProd, args);
}

/**
 * Constructs a derivation of a layout string from an input string. 
 * \todo I doubt that this actually constructs a correct tree.
 */
PT_Tree PT_makeTreeLayoutFromString(const char *str)
{
  PT_Args args = PT_makeArgsEmpty();
  int i;

  for (i = strlen(str) -1; i >= 0; i--) {
    args = PT_makeArgsMany(PT_makeTreeChar((int) str[i]), args);
  }

  return PT_makeTreeLayoutNonEmpty(args);
}

PT_Args PT_removeArgsAllLayoutAndAnnotations(PT_Args args)
{
  PT_Args new = PT_makeArgsEmpty();

  for (; !PT_isArgsEmpty(args); args = PT_getArgsTail(args)) {
    new = PT_makeArgsMany(PT_removeTreeAllLayoutAndAnnotations(
		       PT_getArgsHead(args)),
		       new);
  }

  return PT_reverseArgs(new);
}

/** 
 * Removes all layout nodes and annotations from a tree. This is an
 * operation that normally precedes testing for equality, after removing
 * the layout and annotations, 'structural equivalence modulo layout
 * and annotations' may be tested by pointer equality. This is obviously
 * NOT an efficient implementation. It needs memory allocation for one
 * thing, and grows with the number of nodes in a tree.
 */
PT_Tree PT_removeTreeAllLayoutAndAnnotations(PT_Tree tree)
{
  if (PT_isTreeLayout(tree)) {
    return PT_makeTreeLayoutEmpty();
  }
  else if (PT_isTreeAmb(tree)) {
    return PT_makeTreeAmb(PT_removeArgsAllLayoutAndAnnotations(
			       PT_getTreeArgs(tree)));
  }
  else if (PT_isTreeAppl(tree)) {
    return PT_makeTreeAppl(PT_getTreeProd(tree),
			   PT_removeArgsAllLayoutAndAnnotations(
				PT_getTreeArgs(tree)));
  }
  else {
    return PT_removeTreeAnnotations(tree);
  }
}

