#include <MEPT-tree.h>
#include <MEPT-layout.h>
#include <MEPT-productions.h>
#include <assert.h>

/*@{ manipulations */

PT_Tree PT_getTreeBracketTree(PT_Tree tree)
{
  if (PT_isTreeBracket(tree)) {
    return PT_getArgsTreeAt(PT_getTreeArgs(tree),2);
  }
  return NULL;
}




static ATermTable findParentCache = NULL;
static ATerm NeedleNotHere = NULL;

PT_Tree PT_findTreeParentRecursive(PT_Tree needle, PT_Tree haystack)
{
  assert(needle != NULL);
  assert(haystack != NULL);
  assert(needle != haystack);

  if (ATtableGet(findParentCache, (ATerm) haystack) != NULL) {
	  return NULL;
  }

  if (PT_hasTreeArgs(haystack)) {
    PT_Args children = PT_getTreeArgs(haystack);
    while (!PT_isArgsEmpty(children)) {
      PT_Tree child = PT_getArgsHead(children);
      if (PT_isEqualTree(child, needle)) {
	return haystack;
      }
      else {
	PT_Tree suspect = PT_findTreeParentRecursive(needle, child);
	if (suspect != NULL) {
	  return suspect;
	}
      }
      children = PT_getArgsTail(children);
    }
  }

  ATtablePut(findParentCache, (ATerm) haystack, (ATerm) NeedleNotHere);
  return NULL;
}

PT_Tree PT_findTreeParent(PT_Tree needle, PT_Tree haystack) 
{
	PT_Tree result;
	if (findParentCache == NULL) {
		findParentCache = ATtableCreate(1024, 75);
		NeedleNotHere = ATparse("needle-not-here");
		ATprotect(&NeedleNotHere);
	}
	result = PT_findTreeParentRecursive(needle, haystack);
	ATtableReset(findParentCache);
	return result;
}


/*@}*/

/*@{ predicates */


ATbool PT_isTreeAlt(PT_Tree tree)
{
  PT_Production prod;
  PT_Symbol rhs;

  if (PT_hasTreeProd(tree)) {
    prod = PT_getTreeProd(tree);
    rhs = PT_getProductionRhs(prod);
    if (PT_isSymbolCf(rhs) || PT_isSymbolLex(rhs)) {
      rhs = PT_getSymbolSymbol(rhs);
    }

    if (PT_isSymbolAlt(rhs)) {
      return ATtrue;
    }
  }

  return ATfalse;
}


ATbool PT_isTreeSeq(PT_Tree tree)
{
  PT_Production prod;
  PT_Symbol rhs;

  if (PT_hasTreeProd(tree)) {
    prod = PT_getTreeProd(tree);
    rhs = PT_getProductionRhs(prod);

    if (PT_isSymbolCf(rhs) || PT_isSymbolLex(rhs)) {
      rhs = PT_getSymbolSymbol(rhs);
    }

    if (PT_isSymbolSeq(rhs)) {
      return ATtrue;
    }
  }

  return ATfalse;
}


ATbool PT_isTreeOpt(PT_Tree tree)
{
  PT_Production prod;
  PT_Symbol rhs;

  if (PT_hasTreeProd(tree)) {
    prod = PT_getTreeProd(tree);
    rhs = PT_getProductionRhs(prod);

    if (PT_isSymbolCf(rhs) || PT_isSymbolLex(rhs)) {
      rhs = PT_getSymbolSymbol(rhs);
    }

    if (PT_isSymbolOpt(rhs)) {
      return ATtrue;
    }
  }

  return ATfalse;
}


ATbool PT_isTreeApplList(PT_Tree tree)
{
  if (PT_isTreeAppl(tree)) {
    PT_Production prod = PT_getTreeProd(tree);
    return PT_isProductionList(prod);
  }
  return ATfalse;
}


ATbool PT_isTreeLit(PT_Tree tree)
{
  if (PT_hasTreeProd(tree)) {
    return PT_isSymbolLit(PT_getProductionRhs(PT_getTreeProd(tree)));
  }
  else {
    return ATfalse;
  }
}


ATbool PT_isTreeCilit(PT_Tree tree)
{
  if (PT_hasTreeProd(tree)) {
    return PT_isSymbolCilit(PT_getProductionRhs(PT_getTreeProd(tree)));
  }
  else {
    return ATfalse;
  }
}



ATbool PT_isTreeVar(PT_Tree tree) 
{
  if (PT_isTreeAppl(tree)) {
    PT_Production prod = PT_getTreeProd(tree);
    if (PT_isProductionVariable(prod)) {
      return ATtrue;
    }
  }
  return ATfalse;
}


ATbool PT_isTreeVarList(PT_Tree tree)
{
  if (PT_isTreeAppl(tree)) {
    PT_Production prod = PT_getTreeProd(tree);
    if (PT_isProductionVariable(prod)) {
      PT_Symbol rhssym = PT_getProductionRhs(prod);
      if (PT_isSymbolCf(rhssym) || PT_isSymbolLex(rhssym)) {
        PT_Symbol sym = PT_getSymbolSymbol(rhssym);
        return PT_isSymbolIterPlus(sym) 
               || PT_isSymbolIterStar(sym)
               || PT_isSymbolIterPlusSep(sym) 
               || PT_isSymbolIterStarSep(sym);
      }
    }
  }
  return ATfalse;
}


ATbool PT_isTreeVarListStar(PT_Tree tree)
{
  if (PT_isTreeAppl(tree)) {
    PT_Production prod = PT_getTreeProd(tree);
    if (PT_isProductionVariable(prod)) {
      PT_Symbol rhssym = PT_getProductionRhs(prod);
      if (PT_isSymbolCf(rhssym) || PT_isSymbolLex(rhssym)) {
        PT_Symbol sym = PT_getSymbolSymbol(rhssym);

	if (PT_isSymbolIterStar(sym) || PT_isSymbolIterStarSep(sym)) {
	  return ATtrue;
	}
      }
    }
  }
  return ATfalse;
}              


ATbool PT_isTreeVarListPlus(PT_Tree tree)
{
  if (PT_isTreeAppl(tree)) {
    PT_Production prod = PT_getTreeProd(tree);
    if (PT_isProductionVariable(prod)) {
      PT_Symbol rhssym = PT_getProductionRhs(prod);
      if (PT_isSymbolCf(rhssym) || PT_isSymbolLex(rhssym)) {
        PT_Symbol sym = PT_getSymbolSymbol(rhssym);
        return PT_isSymbolIterPlus(sym) 
               || PT_isSymbolIterPlusSep(sym);
      }
    }
  }
  return ATfalse;
}


ATbool PT_isTreeBracket(PT_Tree tree)
{
  if (PT_isTreeAppl(tree)) {
    PT_Production prod = PT_getTreeProd(tree);
    if (PT_isProductionDefault(prod)) {
      return PT_hasProductionBracketAttr(prod);
    }
  }
  return ATfalse;
}


ATbool PT_isTreeLayout(PT_Tree tree)
{
  if (PT_isTreeAppl(tree)) {
    PT_Production prod = PT_getTreeProd(tree);
    return PT_isOptLayoutProd(prod);
  }

  return ATfalse;
}


ATbool PT_isTreeLexical(PT_Tree tree)
{
  if (PT_isTreeAppl(tree)) {
    PT_Production prod = PT_getTreeProd(tree);
    PT_Symbol rhs = PT_getProductionRhs(prod);

    return PT_isSymbolLex(rhs);
  }
  return ATfalse;
}


ATbool PT_isTreeLexicalInjection(PT_Tree tree)
{
  if (PT_hasTreeProd(tree)) {
    PT_Production prod = PT_getTreeProd(tree);

    return PT_isLexicalInjectionProd(prod);
  }

  return ATfalse;
}



/*@}*/
/*@{ constructors */
/* This function does not support the full SDF literal notation */

PT_Tree PT_makeTreeLit(const char* string)
{
  int len = strlen(string);
  int i;
  PT_Args args = PT_makeArgsEmpty();
  PT_Symbols symbols = PT_makeSymbolsEmpty();
  PT_Symbol symbol = PT_makeSymbolLit(string);
  PT_Attributes attrs = PT_makeAttributesNoAttrs();
  PT_Production prod;

  for (i = len - 1; i >= 0; i--) {
    PT_Tree arg;
    PT_Symbol symbol;

    arg = PT_makeTreeChar(string[i]);
    args = PT_makeArgsMany(arg, args);

    symbol = PT_makeSymbolCharClass(
	      PT_makeCharRangesSingle(
	        PT_makeCharRangeCharacter(string[i])));
    symbols = PT_makeSymbolsMany(symbol, symbols);
  }

  prod = PT_makeProductionDefault(symbols, symbol, attrs);

  return PT_makeTreeAppl(prod, args);
}


PT_Tree PT_makeTreeCilit(const char* string)
{
  int len = strlen(string);
  int i;
  PT_Args args = PT_makeArgsEmpty();
  PT_Symbols symbols = PT_makeSymbolsEmpty();
  PT_Symbol symbol = PT_makeSymbolCilit(string);
  PT_Attributes attrs = PT_makeAttributesNoAttrs();
  PT_Production prod;

  for (i = len - 1; i >= 0; i--) {
    PT_Tree arg;
    PT_Symbol symbol;

    arg = PT_makeTreeChar(string[i]);
    args = PT_makeArgsMany(arg, args);

    if (string[i] >= 'A' && string[i] <= 'Z') {
      PT_CharRanges range1 =  PT_makeCharRangesSingle(              
	                         PT_makeCharRangeCharacter(string[i]));
      PT_CharRanges range2 =  PT_makeCharRangesSingle(              
	                         PT_makeCharRangeCharacter(string[i]+
							   ('a' - 'A')));
      symbol = PT_makeSymbolCharClass(PT_concatCharRanges(range1,range2));
    }
    else if (string[i] >= 'a' && string[i] <= 'z') {
      PT_CharRanges range1 =  PT_makeCharRangesSingle(              
	                         PT_makeCharRangeCharacter(string[i]));
      PT_CharRanges range2 =  PT_makeCharRangesSingle(              
	                         PT_makeCharRangeCharacter(string[i]-
							   ('a' - 'A')));
      symbol = PT_makeSymbolCharClass(PT_concatCharRanges(range2,range1));
    }
    else {
      symbol = PT_makeSymbolCharClass(
	         PT_makeCharRangesSingle(
	           PT_makeCharRangeCharacter(string[i])));
    }

    symbols = PT_makeSymbolsMany(symbol, symbols);
  }

  prod = PT_makeProductionDefault(symbols, symbol, attrs);

  return PT_makeTreeAppl(prod, args);
}




PT_Tree PT_makeTreeLexToCf(PT_Symbol sym, PT_Tree tree)
{
  PT_Symbol lexSymbol = PT_makeSymbolLex(sym);
  PT_Symbol cfSymbol = PT_makeSymbolCf(sym);
  PT_Symbols lhs = PT_makeSymbolsSingle(lexSymbol);
  PT_Attributes noattrs = PT_makeAttributesNoAttrs();
  PT_Production prod = PT_makeProductionDefault(lhs, cfSymbol, noattrs);
  PT_Args args = PT_makeArgsSingle(tree);

  return PT_makeTreeAppl(prod, args);
}

/*@} */
