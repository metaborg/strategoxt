/**
 * \file
 * applyFunction constructs a fresh production on-the-fly and applies
 * is to a number of children. The types of the children are used to 
 * construct the symbols of the left-hand side of the production.
 *
 * This functionality is needed to apply a function to a parse tree without
 * the overhead of reparsing an entire input string.
 */
#include <MEPT-apply.h>
#include <MEPT-symbols.h>
#include <MEPT-start.h>
#include <MEPT-layout.h>
#include <MEPT-tree.h>

static PT_Symbols makeNewLhs(const char *sort)
{
  return  PT_makeSymbolsMany(PT_makeOptLayoutSymbol(),
            PT_makeSymbolsMany(PT_makeSymbolCf(
			         PT_makeSymbolSort(sort)), 
              PT_makeSymbolsSingle(PT_makeOptLayoutSymbol())));
}



PT_ParseTree PT_applyFunctionToArgsParseTree(const char *function, const char *sort, 
					     PT_Args args)
{
  PT_Tree tree = PT_applyFunctionToArgs(function, sort, args);
  PT_Symbols lhs = makeNewLhs(sort);

  return PT_makeParseTreeTree(lhs,
			      PT_makeTreeLayoutEmpty(),
			      tree,
			      PT_makeTreeLayoutEmpty(), 0);
}



PT_Tree PT_applyFunction(const char* function, PT_Symbol rhs, PT_Args args,
			 PT_Attributes attributes)
{
  PT_Tree   layoutTree   = PT_makeTreeLayoutEmpty();
  PT_Symbol layoutSymbol = PT_makeOptLayoutSymbol();
  PT_Tree   commaTree   = PT_makeTreeLit(",");
  PT_Symbol commaSymbol = PT_makeSymbolLit(",");
  PT_Tree   boTree   = PT_makeTreeLit("(");
  PT_Symbol boSymbol = PT_makeSymbolLit("(");
  PT_Tree   bcTree   = PT_makeTreeLit(")");
  PT_Symbol bcSymbol = PT_makeSymbolLit(")");
  PT_Tree   functionTree   = PT_makeTreeLit((char*) function);
  PT_Symbol functionSymbol = PT_makeSymbolLit((char*) function);
  PT_Production prod;
  int arity = PT_getArgsLength(args);

  /* initialize with empty symbols and trees */
  PT_Args argList = PT_makeArgsEmpty();
  PT_Symbols symbolList = PT_makeSymbolsEmpty();

  /* make symbols and trees for args, inserting layout nodes */
  while(PT_hasArgsHead(args)) {
    PT_Tree arg = PT_getArgsHead(args);
    PT_Symbol symbol = PT_getProductionRhs(PT_getTreeProd(arg));

    /* add layout sep layout if needed */
    if (!PT_isArgsEmpty(argList)) {
      argList = PT_appendArgs(argList, layoutTree);
      symbolList = PT_appendSymbols(symbolList, layoutSymbol);
      argList = PT_appendArgs(argList, commaTree);
      symbolList = PT_appendSymbols(symbolList, commaSymbol);
      argList = PT_appendArgs(argList, layoutTree);
      symbolList = PT_appendSymbols(symbolList, layoutSymbol);
    }

    argList = PT_appendArgs(argList, arg);
    symbolList = PT_appendSymbols(symbolList, symbol);

    args = PT_getArgsTail(args);
  }

  if (arity > 0) {
    /* append closing bracket to symbols and trees */
    argList = PT_appendArgs(argList, layoutTree);
    symbolList = PT_appendSymbols(symbolList, layoutSymbol);
    argList = PT_appendArgs(argList, bcTree);
    symbolList = PT_appendSymbols(symbolList, bcSymbol);

    /* insert opening bracket before symbols and trees */
    argList = PT_makeArgsMany(layoutTree, argList);
    symbolList = PT_makeSymbolsMany(layoutSymbol, symbolList);

    argList = PT_makeArgsMany(boTree, argList);
    symbolList = PT_makeSymbolsMany(boSymbol, symbolList);

    argList = PT_makeArgsMany(layoutTree, argList);
    symbolList = PT_makeSymbolsMany(layoutSymbol, symbolList);
  }

  /* insert function literal before symbols and trees */
  argList = PT_makeArgsMany(functionTree, argList);
  symbolList = PT_makeSymbolsMany(functionSymbol, symbolList);

  prod = PT_makeProductionDefault(symbolList, rhs, attributes);

  return PT_makeTreeAppl(prod, argList);
}


PT_Tree PT_applyFunctionToArgs(const char *function, const char* sort, PT_Args args) 
{
  PT_Symbol rhs = PT_makeSymbolCf(PT_makeSymbolSort((char*) sort));
  PT_Attributes attributes = PT_makeAttributesNoAttrs();

  return PT_applyFunction(function, rhs, args, attributes);
}



PT_Tree
PT_applyFunctionToTree(const char *function, const char* sort, int nArgs, ...)
{
  PT_Args ptArgs = PT_makeArgsEmpty();
  va_list args;

  va_start(args, nArgs);

  while(nArgs-- > 0) {
    PT_Tree arg = va_arg(args, PT_Tree);
    ptArgs = PT_appendArgs(ptArgs, arg);
  }

  va_end(args);

  return PT_applyFunctionToArgs(function, sort, ptArgs);
}



