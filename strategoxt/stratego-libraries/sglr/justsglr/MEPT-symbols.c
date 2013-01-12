#include <MEPT.h>

/*@{ predicates */

ATbool PT_isIterSepSymbol(PT_Symbol symbol)
{
  /* This implements: 
   * "cf(iter-star-sep(<term>,lit(<str>)))" and
   * "cf(iter-sep(<term>,lit(<str>)))" 
   */
  if (PT_isSymbolCf(symbol) || PT_isSymbolLex(symbol)) {
    PT_Symbol listsym = PT_getSymbolSymbol(symbol);
    return PT_isSymbolIterPlusSep(listsym) || PT_isSymbolIterStarSep(listsym);
  }

  return ATfalse;
}


PT_Symbol PT_getIterSepSeparator(PT_Symbol symbol)
{
  PT_Symbol listSymbol = PT_getSymbolSymbol(symbol);
  return PT_getSymbolSeparator(listSymbol);
}


ATbool PT_isIterSymbol(PT_Symbol symbol)
{
  /* This implements: 
   * "cf(iter-star(<term>))"
   * "cf(iter(<term>))"
   */
  if (PT_isSymbolCf(symbol) || PT_isSymbolLex(symbol)) {
    PT_Symbol listsym = PT_getSymbolSymbol(symbol);
    return PT_isSymbolIterPlus(listsym) || PT_isSymbolIterStar(listsym);
  }

  return ATfalse;
}


ATbool PT_isOptLayoutSymbol(PT_Symbol symbol)
{
  /* This implements: "cf(opt(layout))" */
  if (PT_isSymbolCf(symbol)) {
    PT_Symbol cfsym = PT_getSymbolSymbol(symbol);
    if (PT_isSymbolOpt(cfsym)) {
      PT_Symbol optsym = PT_getSymbolSymbol(cfsym);
      return PT_isSymbolLayout(optsym);
    }
    return ATfalse;
  }
  return ATfalse;
}

/*@}*/

/*@{ constructors */

PT_Symbol PT_makeOptLayoutSymbol()
{
  return PT_makeSymbolCf(PT_makeSymbolOpt(PT_makeSymbolLayout()));
}


PT_Symbol makeSymbolAllChars()
{
  PT_CharRanges ranges
    = PT_makeCharRangesSingle(PT_makeCharRangeRange(0, 255));

  return PT_makeSymbolIterStar(
           PT_makeSymbolCharClass(ranges));
}  

/*@}*/
