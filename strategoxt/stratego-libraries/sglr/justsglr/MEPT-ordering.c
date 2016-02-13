#include <assert.h>
#include <MEPT-ordering.h>
#include <MEPT-layout.h>

/** 
 * \file
 * Contains the implementation of a generic full ordering on parse trees.
 */
static int PT_compareTreeRec(PT_Tree tree1, PT_Tree tree2);

static ATbool moduloAmbOrdering;
static ATbool moduloLayout;


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
    if (!moduloLayout || !PT_isTreeLayout(arg1)) {
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



static int ambiguityOrdering(const ATerm t1, const ATerm t2) 
{
  if (t1 < t2) {
    return -1;
  } else if (t2 < t1) {
    return 1;
  }

  return 0;
}



static int PT_compareAmbs(PT_Args ambs1, PT_Args ambs2)
{
  PT_Tree amb1;
  PT_Tree amb2;
  int result = 0;

  if (moduloAmbOrdering == ATtrue) {
    ambs1 = (PT_Args) ATsort((ATermList) ambs1, ambiguityOrdering);
    ambs2 = (PT_Args) ATsort((ATermList) ambs2, ambiguityOrdering);
  }

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


static int PT_compareTreeRec(PT_Tree tree1, PT_Tree tree2)
{
   if (PT_isEqualTree(tree1, tree2)) {
     return 0;
   }

   if (PT_isTreeAppl(tree1)) {
     PT_Production prod1;
     PT_Production prod2;

     if (PT_isTreeAmb(tree2) || PT_isTreeCycle(tree2)) {
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
     else if (PT_isTreeCycle(tree2)) {
       return -1;
     }

     args1 = PT_getTreeArgs(tree1);
     args2 = PT_getTreeArgs(tree2);

     return PT_compareAmbs(args1, args2);
   }
   else if (PT_isTreeCycle(tree1)) {
     PT_Production prod1;
     PT_Production prod2;

     if (PT_isTreeAmb(tree2) || PT_isTreeAppl(tree2)) {
       return 1;
     }

     prod1 = PT_getTreeProd(tree1);
     prod2 = PT_getTreeProd(tree2);
     
     return PT_compareProduction(prod1, prod2);

   }
   else if (PT_isTreeChar(tree1)) {
     return ATcompare(ATremoveAnnotations(PT_TreeToTerm(tree1)), 
		      ATremoveAnnotations(PT_TreeToTerm(tree2)));

   }

   ATabort("strange error in PT_compareTree on: %t", tree1);
   return 0;
}


/**
 * Compares two trees according to an arbitrary ordering on parse trees.
 * The algorithm is equivalent to a lexicographic ordering on the prefix 
 * representation of the tree, with an arbitrary order on the four types of
 * tree nodes. Depending on the arguments the ordering is either partial
 * or full.
 *
 * \param tree1 first tree
 * \param tree2 second tree
 * \param modAmbOrdering order ambiguity clusters first before comparing.
 * \param modLayout ignore layout during the comparision (results in partial order)
 * \returns 0 if trees are equal, -1 of tree1 < tree2, 1 if tree1 > tree2
 */
int PT_compareTree(PT_Tree tree1, PT_Tree tree2, ATbool modAmbOrdering, ATbool modLayout) 
{
  moduloAmbOrdering = modAmbOrdering;
  moduloLayout = modLayout;

  assert(PT_isEqualSymbol(PT_getProductionRhs(PT_getTreeProd(tree1)),
			  PT_getProductionRhs(PT_getTreeProd(tree2))));

  return PT_compareTreeRec(tree1, tree2);
}

