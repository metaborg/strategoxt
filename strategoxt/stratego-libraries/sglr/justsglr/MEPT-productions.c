#include <MEPT-productions.h>
#include <MEPT-symbols.h>
#include <MEPT-visitors.h>

/*@{ predicates */


ATbool PT_prodHasLitAsRhs(PT_Production prod)
{
  /* This implements: "prod([<list>],lit(<str>),no-attrs)" */
  if (PT_isProductionDefault(prod)) {
    PT_Symbol rhs = PT_getProductionRhs(prod);

    return PT_isSymbolLit(rhs);
  }

  return ATfalse;
}


ATbool PT_isLexicalProd(PT_Production prod)
{
  /* This implements: "prod([<list>],lex(sort(<term>)),<term>)" */
  if (PT_isProductionDefault(prod)) {
    PT_Symbol rhs = PT_getProductionRhs(prod);

    if (PT_isSymbolLex(rhs)) {
      PT_Symbol symbol = PT_getSymbolSymbol(rhs);
      return PT_isSymbolSort(symbol);
    }
    return ATfalse;
  }

  return ATfalse;
}


ATbool PT_isProductionInjection(PT_Production prod)
{
  PT_Symbols lhs = PT_getProductionLhs(prod);

  if (PT_getSymbolsLength(lhs) == 1) {
    PT_Symbol symbol = PT_getSymbolsHead(lhs);

    if (!PT_isSymbolLit(symbol)) {
      return ATtrue;
    }
  }

  return ATfalse;
}


ATbool PT_prodHasLexLayoutAsRhs(PT_Production  prod)
{
  /* This implements: "prod([<list>],lex(layout),<term>)" */
  if (PT_isProductionDefault(prod)) {
    PT_Symbol rhs = PT_getProductionRhs(prod);

    if (PT_isSymbolLex(rhs)) {
      PT_Symbol symbol = PT_getSymbolSymbol(rhs);
      return PT_isSymbolLayout(symbol);
    }
    return ATfalse;
  }

  return ATfalse;
}


ATbool PT_prodHasCfLayoutAsRhs(PT_Production prod)
{
  /* This implements: "prod([<list>],cf(layout),<term>)" */
  if (PT_isProductionDefault(prod)) {
    PT_Symbol rhs = PT_getProductionRhs(prod);

    if (PT_isSymbolCf(rhs)) {
      PT_Symbol symbol = PT_getSymbolSymbol(rhs);
      return PT_isSymbolLayout(symbol);
    }
    return ATfalse;
  }

  return ATfalse;
}


ATbool PT_isOptLayoutProd(PT_Production  prod)
{
  /* This implements: "prod([<list>],cf(opt(layout)),<term>)" */
  if (PT_isProductionDefault(prod)) {
    PT_Symbol rhs = PT_getProductionRhs(prod);
    return PT_isOptLayoutSymbol(rhs);
  }

  return ATfalse;
}


ATbool PT_prodHasVarSymAsRhs(PT_Production prod)
{
  /* This implements: "prod([<list>],varsym(<str>),no-attrs)" */
  if (PT_isProductionDefault(prod)) {
    PT_Symbol rhs = PT_getProductionRhs(prod);
    return PT_isSymbolVarSym(rhs);
  }

  return ATfalse;
}


ATbool PT_isProductionVariable(PT_Production prod)
{
  /* This implements: "prod([varsym(<term>)],<term>,<term>)" */

  if (PT_isProductionDefault(prod)) {
    PT_Symbols lhs = PT_getProductionLhs(prod);

    if (PT_hasSymbolsHead(lhs)) {
      PT_Symbol lhssym = PT_getSymbolsHead(lhs);
      PT_Symbols tail = PT_getSymbolsTail(lhs);

      if (PT_isSymbolsEmpty(tail)) {
	if (PT_isSymbolCf(lhssym) || PT_isSymbolLex(lhssym)) {
	  lhssym = PT_getSymbolSymbol(lhssym);
	}

	return PT_isSymbolVarSym(lhssym);
      }
    }
  }

  return ATfalse;
}


ATbool PT_isLexicalInjectionProd(PT_Production prod)
{
  /* This implements: "prod([lex(<term>)],cf(<term>),<term>)" */
  if (PT_isProductionDefault(prod)) {
    PT_Symbols lhs = PT_getProductionLhs(prod);
    PT_Symbol rhs = PT_getProductionRhs(prod);

    if (PT_isSymbolCf(rhs) && PT_hasSymbolsHead(lhs)) {
      PT_Symbol rhsNestedSymbol = PT_getSymbolSymbol(rhs);
      PT_Symbol lhssym = PT_getSymbolsHead(lhs);
      PT_Symbols tail = PT_getSymbolsTail(lhs);
      if (PT_isSymbolsEmpty(tail) && PT_isSymbolLex(lhssym)) {
        PT_Symbol lhsNestedSymbol = PT_getSymbolSymbol(lhssym);
        return PT_isEqualSymbol(rhsNestedSymbol, lhsNestedSymbol);
      }
    }
    return ATfalse;
  }

  return ATfalse;
}


ATbool PT_prodHasIterSepAsRhs(PT_Production prod)
{
  /* This implements: 
   * "prod([<list>],cf(iter-star-sep(<term>,lit(<str>))),<term>)" and
   * "prod([<list>],cf(iter-sep(<term>,lit(<str>))),<term>)" 
   */
  if (PT_isProductionDefault(prod)) {
    PT_Symbol rhs = PT_getProductionRhs(prod);
    return PT_isIterSepSymbol(rhs);
  }

  return ATfalse;
}


ATbool PT_prodHasIterAsRhs(PT_Production prod)
{
  /* This implements: 
   * "prod([<list>],cf(iter-star(<term>,lit(<str>))),<term>)"
   * "prod([<list>],cf(iter(<term>,lit(<str>))),<term>)"
   */
  if (PT_isProductionDefault(prod)) {
    PT_Symbol rhs = PT_getProductionRhs(prod);
    return PT_isIterSymbol(rhs);
  }

  return ATfalse;
}


ATbool PT_prodHasSTARTAsRhs(PT_Production prod)
{
  /* This implements: 
   * "prod([<list>],sort(\"<START>\"),no-attrs)"
   */
  if (PT_isProductionDefault(prod)) {
    PT_Symbol rhs = PT_getProductionRhs(prod);
    if (PT_isSymbolSort(rhs)) {
      char *startsym = PT_getSymbolString(rhs);
      return strcmp(startsym,"<START>") == 0;
    }
  }

  return ATfalse;
}


/*@}*/

/*@{ attributes */


typedef struct PT_BoolAttrTuple_Tag {
  ATbool bool;
  PT_Attr attr;
} PT_BoolAttrTuple;



static PT_Attr PT_matchAttr(PT_Attr attr, PT_AttrVisitorData data)
{
  if (PT_isEqualAttr(((PT_BoolAttrTuple*)data)->attr,attr)) {
    ((PT_BoolAttrTuple*)data)->bool = ATtrue;
  }

  return attr;
}           


ATbool PT_hasProductionCertainAttr(PT_Production prod, PT_Attr attr)
{
  PT_Attributes attributes = PT_getProductionAttributes(prod);
  PT_Attrs attrs;
  PT_BoolAttrTuple data;

  if (PT_isProductionDefault(prod)) {
    if (PT_isAttributesNoAttrs(attributes)) {
      return ATfalse;
    }

    attrs = PT_getAttributesAttrs(attributes);

    data.bool = ATfalse;
    data.attr = attr;

    PT_foreachAttrInAttrs(attrs, PT_matchAttr, (PT_AttrVisitorData)&data);    

    return data.bool;
  }

  return ATfalse;
}


ATbool PT_hasProductionBracketAttr(PT_Production prod)
{
  return PT_hasProductionCertainAttr(prod, PT_makeAttrBracket());
}


ATbool PT_hasProductionMemoAttr(PT_Production prod)
{
  return PT_hasProductionCertainAttr(prod, PT_makeAttrTerm(ATparse("memo")));
}


ATbool PT_hasProductionTraversalAttribute(PT_Production prod)
{
  return PT_hasProductionCertainAttr(prod, 
				     PT_makeAttrTerm(ATparse("traversal")));
}


ATbool PT_hasProductionLexicalConstructorAttr(PT_Production prod)
{
  return PT_hasProductionCertainAttr(prod, 
				     PT_makeAttrTerm(ATparse("lexical-constructor")));
}


ATbool PT_hasProductionConstructorAttr(PT_Production prod)
{
  return PT_hasProductionCertainAttr(prod, 
				     PT_makeAttrTerm(ATparse("constructor")));
}


/*@}*/
