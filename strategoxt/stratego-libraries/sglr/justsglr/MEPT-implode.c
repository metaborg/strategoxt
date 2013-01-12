/* $Id: implodePT.c 16971 2005-11-10 12:28:32Z jurgenv $  */

/**
 * \file
 * Parse tree implosion is a collection of homomorphisms from parse forests
 * to arbitrary less verbose, less informative ATerm representations.
 * The main function has a lot of boolean flags to tweak which information
 * is thrown away, and which is kept. This implementation is originally
 * a mirror of the tool implode-asfix from the StrategoXT toolkit.
 *
 * The decision to copy this implementation was to eventually remove the need 
 * for the implode-asfix tool. This effectively shields of other systems
 * that use imploded ATerms from evolution of the parse tree formalism.
 *
 * \todo: investigate whether implosion can be part of the parser algorithm
 * by making the tree construction functionality a parameter of the parser.
 * All the transformation/normalization phases after parsing introduce
 * a significant overhead that seems unnecessary.
 */
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include <MEPT-layout.h>
#include <MEPT-symbols.h>
#include <MEPT-productions.h>
#include <MEPT-annotations.h>
#include <MEPT-yield.h>
#include <MEPT-tree.h>

static ATbool interpret_cons = ATfalse;
static ATbool remove_layout = ATfalse;
static ATbool remove_literals = ATfalse;
static ATbool remove_injections = ATfalse;
static ATbool remove_parsetree = ATfalse;
static ATbool implode_lexicals = ATfalse;
static ATbool keep_annotations = ATtrue;
static ATbool interpret_alt = ATfalse;
static ATbool interpret_seq = ATfalse;
static ATbool interpret_opt = ATfalse;
static ATbool interpret_layout_place_holder = ATfalse;

#define DIRTY_LAYOUT_MARKER "layout-place-holder"

static ATerm implodeTerm(PT_Tree t);
static ATerm implodeLayout(PT_Tree t);
static ATerm implodeVar(PT_Tree t);
static ATerm implodeProd(PT_Production prod, ATermList args);


static ATermList implodeArgs(PT_Args args)
{
  ATerm newTerm;

  if (PT_isArgsEmpty(args)) {
    return ATempty;
  }

  newTerm = implodeTerm(PT_getArgsHead(args));
  if (newTerm) {
    return ATinsert(implodeArgs(PT_getArgsTail(args)),newTerm);
  }
  else {
    return implodeArgs(PT_getArgsTail(args));
  }
}



static PT_Production removeLayoutFromProd(PT_Production prod)
{
  if (PT_isProductionDefault(prod)) {
    PT_Symbols newSymbols = PT_makeSymbolsEmpty();
    PT_Symbols symbols = PT_getProductionLhs(prod);
    while (PT_hasSymbolsHead(symbols)) {
      PT_Symbol symbol = PT_getSymbolsHead(symbols);
      symbols = PT_getSymbolsTail(symbols);

      if (!PT_isOptLayoutSymbol(symbol)) {
        newSymbols = PT_appendSymbols(newSymbols,symbol);
      }
    }
  
    return PT_setProductionLhs(prod, newSymbols);
  }

  return prod;
}


static PT_Production removeLiteralsFromProd(PT_Production prod)
{
  if (PT_isProductionDefault(prod)) {
    PT_Symbols newSymbols = PT_makeSymbolsEmpty();
    PT_Symbols symbols = PT_getProductionLhs(prod);
    while (PT_hasSymbolsHead(symbols)) {
      PT_Symbol symbol = PT_getSymbolsHead(symbols);
      symbols = PT_getSymbolsTail(symbols);

      if (!PT_isSymbolLit(symbol)) {
        newSymbols = PT_appendSymbols(newSymbols,symbol);
      }
    }
  
    return PT_setProductionLhs(prod, newSymbols);
  }

  return prod;
}


static ATerm implodeProd(PT_Production prod, ATermList args)
{
  if (interpret_cons) {
    PT_Attributes attrs = PT_getProductionAttributes(prod);
    
    if (!PT_isAttributesNoAttrs(attrs)) {
      PT_Attrs attrList = PT_getAttributesAttrs(attrs);

      while(PT_hasAttrsHead(attrList)) {
        PT_Attr attr = PT_getAttrsHead(attrList);
        attrList = PT_getAttrsTail(attrList);

        if (PT_isAttrTerm(attr)) {
          ATerm term = PT_getAttrTerm(attr);
          char *constructor;
          if (ATmatch(term, "cons(<str>)", &constructor)) {
            AFun acons = ATmakeAFun(constructor, ATgetLength(args), ATfalse);
            return (ATerm)ATmakeApplList(acons,args);
          }
        }
      }
    }
  }



  if (remove_layout) {
    prod = removeLayoutFromProd(prod);
  }

  if (remove_literals) {
    prod = removeLiteralsFromProd(prod);
  }

  if (PT_isProductionInjection(prod) && remove_injections) {
    assert(ATgetLength(args) == 1);
    return ATgetFirst(args);
  }

  return ATmake("appl(<term>,[<list>])", 
		PT_ProductionToTerm(prod), args);
}



static ATerm implodeLayout(PT_Tree tree)
{
  if (!remove_layout) {
    if (interpret_layout_place_holder
	&& PT_getTreeAnnotation(tree, ATparse(DIRTY_LAYOUT_MARKER)) != NULL) {
      return ATparse("layout(" DIRTY_LAYOUT_MARKER ")");
    }
    else {

      char *str = PT_yieldTreeToString(tree, ATfalse);

      if (strlen(str) > 0) {
	return ATmake("layout([<str>])>", str);
      }
      else {
	return ATmake("layout([])");
      }
    }
  }
  else {
    return NULL;
  }
}


static ATerm implodeFlatList(PT_Tree tree)
{
  PT_Args args = PT_getTreeArgs(tree);
  ATermList newList = implodeArgs(args);
  
  return ATmake("<term>", newList);
}


static ATerm implodeLexical(PT_Tree tree)
{
  if (implode_lexicals) {
    return ATmake("<str>", PT_yieldTreeToString(tree, ATfalse));
  }

  return PT_TreeToTerm(tree);
}


static ATerm implodeLiteral(PT_Tree tree)
{
  if (remove_literals) {
    return NULL;
  }

  return PT_TreeToTerm(tree);
}


static ATerm implodeAlt(PT_Tree tree)
{
  PT_Production prod = PT_getTreeProd(tree);
  PT_Symbol chosen = PT_getSymbolsHead(PT_getProductionLhs(prod));
  PT_Symbol rhs = PT_getProductionRhs(prod);
  ATerm child;
  int index;

  if (PT_isSymbolCf(rhs) || PT_isSymbolLex(rhs)) {
    rhs = PT_getSymbolSymbol(rhs);
  }
  if (PT_isSymbolCf(chosen) || PT_isSymbolLex(chosen)) {
    chosen = PT_getSymbolSymbol(chosen);
  }

  index = 1;
  do {
    if (PT_isEqualSymbol(chosen, PT_getSymbolLhs(rhs))) {
      child = implodeTerm(PT_getArgsHead(PT_getTreeArgs(tree)));
      return ATmake("alt(<int>,[<term>])", index, child);
    }

    rhs = PT_getSymbolRhs(rhs);
    index++;
  } while (PT_isSymbolAlt(rhs));

  if (PT_isEqualSymbol(chosen, rhs)) {
    child = implodeTerm(PT_getArgsHead(PT_getTreeArgs(tree)));
    return ATmake("alt(<int>,[<term>])", index, child);
  }

  return PT_TreeToTerm(tree);
}


static ATerm implodeSeqRecursive(PT_Args args)
{
  ATerm lhs;
  ATerm rhs;

  if (PT_isArgsEmpty(args)) {
    return ATparse("TNil");
  }

  lhs = implodeTerm(PT_getArgsHead(args));
  rhs = implodeSeqRecursive(PT_getArgsTail(args));

  if (lhs == NULL) {
    return rhs;
  }

  if (rhs == NULL) {
    rhs = ATparse("TNil");
  }
    
  return ATmake("TCons(<term>,<term>)", 
		implodeTerm(PT_getArgsHead(args)),
		implodeSeqRecursive(PT_getArgsTail(args)));
}


static ATerm implodeSeq(PT_Tree tree)
{
  ATerm seq = implodeSeqRecursive(PT_getTreeArgs(tree));

  return seq;
}


static ATerm implodeOpt(PT_Tree tree)
{
  PT_Args args = PT_getTreeArgs(tree);
  ATerm child;

  if (!remove_layout && PT_isTreeLayout(tree)) {
    return implodeLayout(tree);
  }

  if (PT_isArgsEmpty(args)) {
    return ATparse("None");
  }

  child = implodeTerm(PT_getArgsHead(args));

  if (child != NULL) {
    return ATmake("Some(<term>)", implodeTerm(PT_getArgsHead(args)));
  }
  else {
    return NULL;
  }
}


static ATerm implodeVar(PT_Tree tree)
{

  if (implode_lexicals) {
    return ATmake("varsym([<str>])>", PT_yieldTreeToString(tree, ATfalse));
  }

  return PT_TreeToTerm(tree);
}


static ATerm implodeApplication(PT_Tree tree)
{
  PT_Production prod = PT_getTreeProd(tree);
  PT_Args       args = PT_getTreeArgs(tree);
  ATermList     newList;

  if (PT_isOptLayoutProd(prod)) {
    return implodeLayout(tree);
  }

  if (PT_isProductionVariable(prod)) {
    return implodeVar(tree);
  }

  if (PT_isProductionList(prod)) {
    return implodeFlatList(tree);
  }

  newList = implodeArgs(args);
  return implodeProd(prod, newList);
}



static ATerm implodeTerm(PT_Tree tree)
{
  PT_Args args;
  ATerm result = NULL;
  ATerm annos = ATgetAnnotations((ATerm)tree);

  if (PT_isTreeAmb(tree)) {
    args = PT_getTreeArgs(tree);
    result = ATmake("amb(<list>)", implodeArgs(args));
  }
  else if (PT_isTreeLexicalInjection(tree)) {
    result = implodeLexical(tree);
  }
  else if (PT_isTreeLit(tree)) { 
    result = implodeLiteral(tree);
  }                        
  else if (interpret_alt && PT_isTreeAlt(tree)) {
    result = implodeAlt(tree);
  }
  else if (interpret_seq && PT_isTreeSeq(tree)) {
    result = implodeSeq(tree);
  }
  else if (interpret_opt && PT_isTreeOpt(tree) && 
	   (remove_layout == ATfalse || !PT_isTreeLayout(tree))) {
    result = implodeOpt(tree);
  }
  else if (PT_isTreeAppl(tree)) {
    result = implodeApplication(tree);
  }
  else if (PT_isTreeCycle(tree)) {
    result = NULL;
  }
  else {
    ATerror("implodeTerm: not an application term: %t\n", tree);
    return NULL;
  }

  if (keep_annotations && result && annos) {
    result = ATsetAnnotations(result, annos);
  }

  return result;
}


/**
 * Maps a parse tree to an ATerm, leaving out arbitrary information,
 * and replacing applications of productions by direct ATerms. The
 * 'cons' attribute of productions is used to construct AFun names of 
 * new AST nodes.
 *
 * \param tree input tree
 * \param _interpret_cons if a production has a cons attribute, replace that node by an ATerm that has the cons name as AFun, and the children of the node as arguments of an ATermAppl.
 * \param _remove_layout remove all layout nodes, effectively dividing the arity of all context-free nodes by two.
 * \param _remove_literals remove all literal children, dimishing the arity of all nodes by the number of literals present.
 * \param _remove_injections remove nodes of injection productions (chain rules), simplifying the structure of the resulting tree.
 * \param _remove_parsetree removes the outermost parsetree constructor
 * \param _implode_lexials replace lexical structure by a flat string representation of the character leafs of a lexical derivation.
 * \param _keep_annotations tranplant ATerm annotations of nodes to the newly constructed nodes. This can be used to retain position information on AST nodes.
 * \param _interpret_alt Run special code for the alternative constructor, which is sometimes necessary in order to retain the exact structure. The generic pretty printer gpp uses this for example.
 * \param _interpret_opt Similar as interpret_alt.
 * \param _interpret_layout_place_holder Used to separate nodes in the resulting AST that need pretty printing (dirty) from nodes that actually have not changed. This can be used by a conservative pretty printer, merging a pretty-printed form of the new nodes in an existing static piece of source code.
 * \return An ATerm with different properties depending on the input flags.
 */
ATerm PT_implodeParseTree(PT_ParseTree tree,
			  ATbool _interpret_cons ,
			  ATbool _remove_layout ,
			  ATbool _remove_literals ,
			  ATbool _remove_injections ,
			  ATbool _remove_parsetree ,
			  ATbool _implode_lexicals ,
			  ATbool _keep_annotations ,
			  ATbool _interpret_alt ,
			  ATbool _interpret_seq ,
			  ATbool _interpret_opt ,
			  ATbool _interpret_layout_place_holder)
{
  ATerm atermTree;

  interpret_cons = _interpret_cons ;
  remove_layout = _remove_layout ;
  remove_literals = _remove_literals ;
  remove_injections = _remove_injections ;
  remove_parsetree = _remove_parsetree ;
  implode_lexicals = _implode_lexicals ;
  keep_annotations = _keep_annotations ;
  interpret_alt = _interpret_alt ;
  interpret_seq = _interpret_seq ;
  interpret_opt = _interpret_opt ;
  interpret_layout_place_holder = _interpret_layout_place_holder;

  if (PT_isParseTreeTop(tree)) {
    PT_Tree newTree = PT_getParseTreeTop(tree);
    int     ambs = PT_getParseTreeAmbCnt(tree);

    atermTree = implodeTerm(newTree);

    if (atermTree != NULL) {
      if (remove_parsetree) {
	return atermTree;
      }
      else {
	return ATmake("parsetree(<term>,<int>)", atermTree, ambs);
      }
    }
    else {
      ATerror("WARNING: No tree is left after implosion.");
      return NULL;
    }
  }

  ATerror("implodeParseTree: not a parsetree: %t\n", tree);
  return NULL;
}

