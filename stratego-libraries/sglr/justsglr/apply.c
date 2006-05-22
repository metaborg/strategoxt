#include <MEPT-utils.h>

/*{{{  static PT_Symbols makeNewLhs(const char *sort) */

static PT_Symbols makeNewLhs(const char *sort)
{
  return  PT_makeSymbolsList(PT_makeOptLayoutSymbol(),
            PT_makeSymbolsList(PT_makeSymbolCf(
			         PT_makeSymbolSort((char*) sort)), 
              PT_makeSymbolsList(PT_makeOptLayoutSymbol(),
                PT_makeSymbolsEmpty())));
}

/*}}}  */

/*{{{  PT_ParseTree PT_applyFunctionToArgsParseTree(const char *function, const char *sort,  */

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

/*}}}  */


/*{{{  PT_Tree PT_applyFunctionToArgs(char *function, char* sort, PT_Args args) */

PT_Tree PT_applyFunctionToArgs(const char *function, const char* sort, PT_Args args)
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
  PT_Symbol rhs = PT_makeSymbolCf(PT_makeSymbolSort((char*) sort));
  PT_Production prod;
  PT_Attributes attributes = PT_makeAttributesNoAttrs();
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
    argList = PT_makeArgsList(layoutTree, argList);
    symbolList = PT_makeSymbolsList(layoutSymbol, symbolList);

    argList = PT_makeArgsList(boTree, argList);
    symbolList = PT_makeSymbolsList(boSymbol, symbolList);

    argList = PT_makeArgsList(layoutTree, argList);
    symbolList = PT_makeSymbolsList(layoutSymbol, symbolList);
  }

  /* insert function literal before symbols and trees */
  argList = PT_makeArgsList(functionTree, argList);
  symbolList = PT_makeSymbolsList(functionSymbol, symbolList);

  prod = PT_makeProductionDefault(symbolList, rhs, attributes);

  return PT_makeTreeAppl(prod, argList);
}

/*}}}  */

/*{{{  PT_applyFunctionToTree(char *function, char* sort, int nArgs, ...) */

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

/*}}}  */


