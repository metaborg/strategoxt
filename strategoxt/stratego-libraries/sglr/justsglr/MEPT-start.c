#include <MEPT-start.h>
#include <MEPT-layout.h>
#include <MEPT-symbols.h>

/**
 * \file
 * Deals with the top-level nodes of parse trees, and the first
 * non-terminal generally found there: <START>.
 */

PT_ParseTree PT_makeValidParseTreeFromTree(PT_Tree tree)
{
  PT_Tree origTree = tree;
  PT_Production prod;
  PT_Symbol rhs;
  PT_Symbols lhs;

  if (PT_isTreeAmb(tree)) {
    PT_Args ambs = PT_getTreeArgs(tree);
    tree = PT_getArgsHead(ambs);
  }

  prod = PT_getTreeProd(tree);
  rhs = PT_getProductionRhs(prod);
  lhs = PT_makeSymbolsMany(PT_makeOptLayoutSymbol(),
		  PT_makeSymbolsMany(
			  rhs,
			  PT_makeSymbolsSingle(PT_makeOptLayoutSymbol())));

  return PT_makeParseTreeTree(lhs,
                              PT_makeTreeLayoutEmpty(),
                              origTree,
                              PT_makeTreeLayoutEmpty(), 0);
}


PT_ParseTree PT_makeParseTreeTree(PT_Symbols lhs, PT_Tree wsBefore, 
				  PT_Tree tree, PT_Tree wsAfter, int ambs)
{
  PT_Production prod;
  PT_Symbol rhs;
  PT_Args args;
  PT_Tree top;

  rhs = PT_makeSymbolSort("<START>");
  prod = PT_makeProductionDefault(lhs, rhs, PT_makeAttributesNoAttrs());

  args = PT_makeArgsMany(wsBefore, 
			 PT_makeArgsMany(tree,
					 PT_makeArgsSingle(wsAfter)));

  top = PT_makeTreeAppl(prod, args);

  return PT_makeParseTreeTop(top, ambs);
}


PT_Tree PT_getParseTreeTree(PT_ParseTree parsetree)
{
  PT_Tree top;
  PT_Args args;
  
  top = PT_getParseTreeTop(parsetree);
  
  if (PT_isTreeAmb(top)) {
    return top;
  }

  args = PT_getTreeArgs(top);

  return PT_getArgsTreeAt(args, 1);
}


PT_Tree PT_getParseTreeLayoutBeforeTree(PT_ParseTree parsetree)
{
  PT_Tree top = PT_getParseTreeTop(parsetree);
  PT_Args args = PT_getTreeArgs(top);

  return PT_getArgsTreeAt(args, 0);
}


PT_Tree PT_getParseTreeLayoutAfterTree(PT_ParseTree parsetree)
{
  PT_Tree top = PT_getParseTreeTop(parsetree);
  PT_Args args = PT_getTreeArgs(top);

  return PT_getArgsTreeAt(args, 2);
}


PT_ParseTree PT_setParseTreeTree(PT_ParseTree parsetree, PT_Tree tree)
{
  PT_Tree top = PT_getParseTreeTop(parsetree);
  PT_Args args = PT_getTreeArgs(top);

  args = PT_replaceArgsTreeAt(args, tree, 1);
  top = PT_setTreeArgs(top, args);

  return PT_setParseTreeTop(parsetree, top);
}


PT_ParseTree PT_setParseTreeLayoutBeforeTree(PT_ParseTree parsetree, PT_Tree tree)
{
  PT_Tree top = PT_getParseTreeTop(parsetree);
  PT_Args args = PT_getTreeArgs(top);

  args = PT_replaceArgsTreeAt(args, tree, 0);
  top = PT_setTreeArgs(top, args);

  return PT_setParseTreeTop(parsetree, top);
}


PT_ParseTree PT_setParseTreeLayoutAfterTree(PT_ParseTree parsetree, PT_Tree tree)
{
  PT_Tree top = PT_getParseTreeTop(parsetree);
  PT_Args args = PT_getTreeArgs(top);

  args = PT_replaceArgsTreeAt(args, tree, 2);
  top = PT_setTreeArgs(top, args);

  return PT_setParseTreeTop(parsetree, top);
}


