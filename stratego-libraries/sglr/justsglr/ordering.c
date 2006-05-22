#include <assert.h>
#include "MEPT-utils.h"

static int PT_compareTreeRec(PT_Tree tree1, PT_Tree tree2);

/*{{{  static int PT_compareArgs(PT_Args args1, PT_Args args2) */

static int PT_compareArgs(PT_Args args1, PT_Args args2)
{
  PT_Tree arg1;
  PT_Tree arg2;
  int result = 0;

  while (result == 0 && 
	 !PT_isArgsEmpty(args1) &&
	 !PT_isArgsEmpty(args2)) {
    arg1 = PT_getArgsHead(args1);
    arg2 = PT_getArgsHead(args2);

    /* We assume the layout is on equal positions for args1 and args2 */
    if (!PT_isTreeLayout(arg1)) {
      result = PT_compareTreeRec(arg1, arg2);
    }

    args1 = PT_getArgsTail(args1);
    args2 = PT_getArgsTail(args2);
  }

  if (result == 0) {
    if (PT_isEqualArgs(args1, args2)) {
      return 0;
    }
    if (!PT_isArgsEmpty(args1)) {
      return 1;
    }
    if (!PT_isArgsEmpty(args2)) {
      return -1;
    }
  }

  return result;
}

/*}}}  */
/*{{{  static int PT_compareProduction(PT_Production prod1, PT_Production prod2) */

static int PT_compareProduction(PT_Production prod1, PT_Production prod2)
{
  PT_Symbols syms1;
  PT_Symbols syms2;
  int result = 0;

  assert(PT_isEqualSymbol(PT_getProductionRhs(prod1),
			  PT_getProductionRhs(prod2)));

  if (PT_isProductionDefault(prod1)) {
    syms1 = PT_getProductionLhs(prod1);
    syms2 = PT_getProductionLhs(prod2);

    result = ATcompare(PT_SymbolsToTerm(syms1),
		       PT_SymbolsToTerm(syms2));

    if (result == 0) {
      PT_Attributes attributes1 = PT_getProductionAttributes(prod1);
      PT_Attributes attributes2 = PT_getProductionAttributes(prod2);

      return ATcompare(PT_AttributesToTerm(attributes1),
		       PT_AttributesToTerm(attributes2));

    }

    return result;
  }
  
  return 0;
}

/*}}}  */
/*{{{  static int PT_compareAmbs(PT_Args ambs1, PT_Args ambs2) */

static int PT_compareAmbs(PT_Args ambs1, PT_Args ambs2)
{
  PT_Tree amb1;
  PT_Tree amb2;
  int result = 0;

  while (result == 0 && !PT_isArgsEmpty(ambs1)) {
    amb1 = PT_getArgsHead(ambs1);
    amb2 = PT_getArgsHead(ambs2);

    result = PT_compareTreeRec(amb1, amb2);

    ambs1 = PT_getArgsTail(ambs1);
    ambs2 = PT_getArgsTail(ambs2);
  }

  if (result == 0) {
    if (PT_isEqualArgs(ambs1, ambs2)) {
      return 0;
    }
    if (!PT_isArgsEmpty(ambs1)) {
      return 1;
    }
    if (!PT_isArgsEmpty(ambs2)) {
      return -1;
    }
  }

  return result;
}

/*}}}  */
/*{{{  static int PT_compareTreeRec(PT_Tree tree1, PT_Tree tree2) */

static int PT_compareTreeRec(PT_Tree tree1, PT_Tree tree2)
{
   if (PT_isEqualTree(tree1, tree2)) {
     return 0;
   }

   if (PT_isTreeAppl(tree1)) {
     PT_Production prod1;
     PT_Production prod2;

     if (PT_isTreeAmb(tree2)) {
       return -1;
     }

     prod1 = PT_getTreeProd(tree1);
     prod2 = PT_getTreeProd(tree2);

     if (PT_isEqualProduction(prod1, prod2)) {
       PT_Args args1;
       PT_Args args2;

       args1 = PT_getTreeArgs(tree1);
       args2 = PT_getTreeArgs(tree2);

       return PT_compareArgs(args1, args2);
     }

     return PT_compareProduction(prod1, prod2);
   }
   else if (PT_isTreeAmb(tree1)) {
     PT_Args args1;
     PT_Args args2;

     if (PT_isTreeAppl(tree2)) {
       return 1;
     }

     args1 = PT_getTreeArgs(tree1);
     args2 = PT_getTreeArgs(tree2);

     return PT_compareAmbs(args1, args2);
   }
   else if (PT_isTreeLit(tree1) ||
	    PT_isTreeChar(tree1)) {
     return ATcompare(ATremoveAnnotations(PT_TreeToTerm(tree1)), 
		      ATremoveAnnotations(PT_TreeToTerm(tree2)));

   }

   ATabort("strange error in PT_compareTree on: %t", tree1);
   return 0;
}

/*}}}  */

/*{{{  int PT_compareTree(PT_Tree tree1, PT_Tree tree2)  */

int PT_compareTree(PT_Tree tree1, PT_Tree tree2) 
{
  PT_Production prod1 = PT_getTreeProd(tree1);
  PT_Production prod2 = PT_getTreeProd(tree2);

  assert(PT_isEqualSymbol(PT_getProductionRhs(prod1),
			  PT_getProductionRhs(prod2)));
  return PT_compareTreeRec(tree1, tree2);
}

/*}}}  */
