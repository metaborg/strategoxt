#include <MEPT-renaming.h>
#include <MEPT-tree.h>
#include <MEPT-symbols.h>
#include <string.h>

static
PT_Symbol renameInSymbol(PT_Symbol symbol,
                         PT_Symbol formalParam,
                         PT_Symbol actualParam);


static
PT_Symbols renameInSymbols(PT_Symbols symbols,
                           PT_Symbol formalParam,
                           PT_Symbol actualParam)
{
  if (PT_isSymbolsEmpty(symbols)) {
    return symbols;
  }
  else {
    PT_Symbol head = PT_getSymbolsHead(symbols);
    PT_Symbols tail = PT_getSymbolsTail(symbols);
   
    PT_Symbol newHead = renameInSymbol(head, formalParam, actualParam);
    PT_Symbols newTail = renameInSymbols(tail, formalParam, actualParam);
    return PT_setSymbolsHead(PT_setSymbolsTail(symbols, newTail), newHead);
  }
}


static 
PT_Symbol renameInSymbol(PT_Symbol symbol,
                         PT_Symbol formalParam,
                         PT_Symbol actualParam)
{
  if (PT_isEqualSymbol(symbol, formalParam)) {
    return actualParam;
  }
  if (PT_hasSymbolSymbols(symbol)) {
    PT_Symbols args = PT_getSymbolSymbols(symbol);

    PT_Symbols newArgs = renameInSymbols(args, formalParam, actualParam);
 
    symbol = PT_setSymbolSymbols(symbol, newArgs);
  }
  if (PT_hasSymbolParameters(symbol)) {
    PT_Symbols args = PT_getSymbolParameters(symbol);

    PT_Symbols newArgs = renameInSymbols(args, formalParam, actualParam);
 
    symbol = PT_setSymbolParameters(symbol, newArgs);
  }
  if (PT_hasSymbolSymbol(symbol)) {
    PT_Symbol arg = PT_getSymbolSymbol(symbol);

    PT_Symbol newArg = renameInSymbol(arg, formalParam, actualParam);

    symbol = PT_setSymbolSymbol(symbol, newArg);
  }
  if (PT_hasSymbolLhs(symbol)) {
    PT_Symbol arg = PT_getSymbolLhs(symbol);

    PT_Symbol newArg = renameInSymbol(arg, formalParam, actualParam);
 
    symbol = PT_setSymbolLhs(symbol, newArg);
  }
  if (PT_hasSymbolRhs(symbol)) {
    PT_Symbol arg = PT_getSymbolRhs(symbol);

    PT_Symbol newArg = renameInSymbol(arg, formalParam, actualParam);
 
    symbol = PT_setSymbolRhs(symbol, newArg);
  }
  if (PT_hasSymbolHead(symbol)) {
    PT_Symbol arg = PT_getSymbolHead(symbol);

    PT_Symbol newArg = renameInSymbol(arg, formalParam, actualParam);
 
    symbol = PT_setSymbolHead(symbol, newArg);
  }
  if (PT_hasSymbolRest(symbol)) {
    PT_Symbols args = PT_getSymbolRest(symbol);

    PT_Symbols newArgs = renameInSymbols(args, formalParam, actualParam);
 
    symbol = PT_setSymbolRest(symbol, newArgs);
  }
  if (PT_hasSymbolSeparator(symbol)) {
    PT_Symbol arg = PT_getSymbolSeparator(symbol);

    PT_Symbol newArg = renameInSymbol(arg, formalParam, actualParam);
 
    symbol = PT_setSymbolSeparator(symbol, newArg);
  }
  return symbol;
}


static
PT_Args renameInArgs(PT_Args trees,
                     PT_Symbol formalParam,
                     PT_Symbol actualParam)
{
  if (PT_isArgsEmpty(trees)) {
    return trees;
  }
  else {
    PT_Tree head = PT_getArgsHead(trees);
    PT_Args tail = PT_getArgsTail(trees);
    PT_Tree newHead;
    PT_Args newTail;
  
    newHead = PT_renameInTree(head, formalParam, actualParam);
    newTail = renameInArgs(tail, formalParam, actualParam);

    return PT_setArgsHead(PT_setArgsTail(trees, newTail), newHead);
  }
}


static
PT_Production renameInProduction(PT_Production prod,
                                 PT_Symbol formalParam,
                                 PT_Symbol actualParam)
{
  if (PT_isProductionDefault(prod)) {
    PT_Symbols lhs = PT_getProductionLhs(prod);
    PT_Symbol  rhs = PT_getProductionRhs(prod);
  
    PT_Symbols newLhs = renameInSymbols(lhs, formalParam, actualParam);
    PT_Symbol newRhs = renameInSymbol(rhs, formalParam, actualParam);

    return PT_setProductionRhs(PT_setProductionLhs(prod, newLhs), newRhs);
  }
  else {
    PT_Symbol  rhs = PT_getProductionRhs(prod);

    PT_Symbol newRhs = renameInSymbol(rhs, formalParam, actualParam);

    return PT_setProductionRhs(prod, newRhs);
  }
}



PT_Tree PT_renameInTree(PT_Tree tree,
                     PT_Symbol formalParam,
                     PT_Symbol actualParam)
{
  if (PT_isTreeAppl(tree)) {
    PT_Production prod = PT_getTreeProd(tree);
    PT_Symbol     rhs = PT_getProductionRhs(prod);
    PT_Tree       newTree;

    if (PT_isEqualSymbol(rhs, formalParam) && PT_isSymbolLit(actualParam)) {
      newTree = PT_makeTreeLit(PT_getSymbolString(actualParam));
    }
    else if (PT_isEqualSymbol(rhs, formalParam) && PT_isSymbolCilit(actualParam)) 
    {
      newTree = PT_makeTreeCilit(PT_getSymbolString(actualParam));
    }
    else {
      PT_Args       args = PT_getTreeArgs(tree);
      PT_Production newProd = renameInProduction(prod, formalParam, 
						 actualParam);
      PT_Args newArgs = renameInArgs(args, formalParam, actualParam);
      PT_Symbol newRhs  = PT_getProductionRhs(newProd);

      newTree = PT_setTreeArgs(PT_setTreeProd(tree, newProd), newArgs);
    
      /* Wrap new variable lists in a proper list production */

      if (PT_isTreeVar(newTree) &&
	  (PT_isIterSymbol(newRhs) || PT_isIterSepSymbol(newRhs)) && 
	  !(PT_isIterSymbol(rhs) || PT_isIterSepSymbol(rhs))) {
	PT_Production listProd = PT_makeProductionList(newRhs);
	PT_Tree listTree = PT_makeTreeAppl(listProd,
					   PT_makeArgsSingle(newTree));
	newTree = listTree;
      }
    }

    return newTree;
  }
  else {
    return tree;
  }
}


PT_ParseTree PT_renameInParseTree(PT_ParseTree parsetree, PT_Symbol formalParam,
                                  PT_Symbol actualParam)
{
  PT_Tree tree = PT_getParseTreeTop(parsetree);

  tree = PT_renameInTree(tree, formalParam, actualParam);

  return PT_setParseTreeTop(parsetree, tree);
}

