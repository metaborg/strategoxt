#include <assert.h>

#include <aterm2.h>
#include <deprecated.h>
#include "MEPT.h"

/*{{{  typedefs */

typedef struct ATerm _PT_ParseTree;
typedef struct ATerm _PT_Tree;
typedef struct ATerm _PT_Production;
typedef struct ATerm _PT_Attributes;
typedef struct ATerm _PT_Attrs;
typedef struct ATerm _PT_Attr;
typedef struct ATerm _PT_Associativity;
typedef struct ATerm _PT_Args;
typedef struct ATerm _PT_Symbol;
typedef struct ATerm _PT_Symbols;
typedef struct ATerm _PT_CharRange;
typedef struct ATerm _PT_CharRanges;

/*}}}  */

/*{{{  void PT_initMEPTApi(void) */

void PT_initMEPTApi(void)
{
  init_MEPT_dict();
}

/*}}}  */

/*{{{  term conversion functions */

/*{{{  PT_ParseTree PT_ParseTreeFromTerm(ATerm t) */

PT_ParseTree PT_ParseTreeFromTerm(ATerm t)
{
  return (PT_ParseTree)t;
}

/*}}}  */
/*{{{  ATerm PT_ParseTreeToTerm(PT_ParseTree arg) */

ATerm PT_ParseTreeToTerm(PT_ParseTree arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  PT_Tree PT_TreeFromTerm(ATerm t) */

PT_Tree PT_TreeFromTerm(ATerm t)
{
  return (PT_Tree)t;
}

/*}}}  */
/*{{{  ATerm PT_TreeToTerm(PT_Tree arg) */

ATerm PT_TreeToTerm(PT_Tree arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  PT_Production PT_ProductionFromTerm(ATerm t) */

PT_Production PT_ProductionFromTerm(ATerm t)
{
  return (PT_Production)t;
}

/*}}}  */
/*{{{  ATerm PT_ProductionToTerm(PT_Production arg) */

ATerm PT_ProductionToTerm(PT_Production arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  PT_Attributes PT_AttributesFromTerm(ATerm t) */

PT_Attributes PT_AttributesFromTerm(ATerm t)
{
  return (PT_Attributes)t;
}

/*}}}  */
/*{{{  ATerm PT_AttributesToTerm(PT_Attributes arg) */

ATerm PT_AttributesToTerm(PT_Attributes arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  PT_Attrs PT_AttrsFromTerm(ATerm t) */

PT_Attrs PT_AttrsFromTerm(ATerm t)
{
  return (PT_Attrs)t;
}

/*}}}  */
/*{{{  ATerm PT_AttrsToTerm(PT_Attrs arg) */

ATerm PT_AttrsToTerm(PT_Attrs arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  PT_Attr PT_AttrFromTerm(ATerm t) */

PT_Attr PT_AttrFromTerm(ATerm t)
{
  return (PT_Attr)t;
}

/*}}}  */
/*{{{  ATerm PT_AttrToTerm(PT_Attr arg) */

ATerm PT_AttrToTerm(PT_Attr arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  PT_Associativity PT_AssociativityFromTerm(ATerm t) */

PT_Associativity PT_AssociativityFromTerm(ATerm t)
{
  return (PT_Associativity)t;
}

/*}}}  */
/*{{{  ATerm PT_AssociativityToTerm(PT_Associativity arg) */

ATerm PT_AssociativityToTerm(PT_Associativity arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  PT_Args PT_ArgsFromTerm(ATerm t) */

PT_Args PT_ArgsFromTerm(ATerm t)
{
  return (PT_Args)t;
}

/*}}}  */
/*{{{  ATerm PT_ArgsToTerm(PT_Args arg) */

ATerm PT_ArgsToTerm(PT_Args arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  PT_Symbol PT_SymbolFromTerm(ATerm t) */

PT_Symbol PT_SymbolFromTerm(ATerm t)
{
  return (PT_Symbol)t;
}

/*}}}  */
/*{{{  ATerm PT_SymbolToTerm(PT_Symbol arg) */

ATerm PT_SymbolToTerm(PT_Symbol arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  PT_Symbols PT_SymbolsFromTerm(ATerm t) */

PT_Symbols PT_SymbolsFromTerm(ATerm t)
{
  return (PT_Symbols)t;
}

/*}}}  */
/*{{{  ATerm PT_SymbolsToTerm(PT_Symbols arg) */

ATerm PT_SymbolsToTerm(PT_Symbols arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  PT_CharRange PT_CharRangeFromTerm(ATerm t) */

PT_CharRange PT_CharRangeFromTerm(ATerm t)
{
  return (PT_CharRange)t;
}

/*}}}  */
/*{{{  ATerm PT_CharRangeToTerm(PT_CharRange arg) */

ATerm PT_CharRangeToTerm(PT_CharRange arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  PT_CharRanges PT_CharRangesFromTerm(ATerm t) */

PT_CharRanges PT_CharRangesFromTerm(ATerm t)
{
  return (PT_CharRanges)t;
}

/*}}}  */
/*{{{  ATerm PT_CharRangesToTerm(PT_CharRanges arg) */

ATerm PT_CharRangesToTerm(PT_CharRanges arg)
{
  return (ATerm)arg;
}

/*}}}  */

/*}}}  */
/*{{{  constructors */

/*{{{  PT_ParseTree PT_makeParseTreeTop(PT_Tree top, int ambCnt) */

PT_ParseTree PT_makeParseTreeTop(PT_Tree top, int ambCnt)
{
  return (PT_ParseTree)(ATerm)ATmakeAppl2(PT_afun0, (ATerm)top, (ATerm)ATmakeInt(ambCnt));
}

/*}}}  */
/*{{{  PT_Tree PT_makeTreeAppl(PT_Production prod, PT_Args args) */

PT_Tree PT_makeTreeAppl(PT_Production prod, PT_Args args)
{
  return (PT_Tree)(ATerm)ATmakeAppl2(PT_afun1, (ATerm)prod, (ATerm)args);
}

/*}}}  */
/*{{{  PT_Tree PT_makeTreeChar(int character) */

PT_Tree PT_makeTreeChar(int character)
{
  return (PT_Tree)(ATerm)ATmakeInt(character);
}

/*}}}  */
/*{{{  PT_Tree PT_makeTreeLit(char * string) */

PT_Tree PT_makeTreeLit(char * string)
{
  return (PT_Tree)(ATerm)ATmakeAppl1(PT_afun2, (ATerm)ATmakeAppl0(ATmakeAFun(string, 0, ATtrue)));
}

/*}}}  */
/*{{{  PT_Tree PT_makeTreeFlatLayout(char * string) */

PT_Tree PT_makeTreeFlatLayout(char * string)
{
  return (PT_Tree)(ATerm)ATmakeAppl1(PT_afun3, (ATerm)ATmakeAppl0(ATmakeAFun(string, 0, ATtrue)));
}

/*}}}  */
/*{{{  PT_Tree PT_makeTreeAmb(PT_Args args) */

PT_Tree PT_makeTreeAmb(PT_Args args)
{
  return (PT_Tree)(ATerm)ATmakeAppl1(PT_afun4, (ATerm)args);
}

/*}}}  */
/*{{{  PT_Production PT_makeProductionDefault(PT_Symbols lhs, PT_Symbol rhs, PT_Attributes attributes) */

PT_Production PT_makeProductionDefault(PT_Symbols lhs, PT_Symbol rhs, PT_Attributes attributes)
{
  return (PT_Production)(ATerm)ATmakeAppl3(PT_afun5, (ATerm)lhs, (ATerm)rhs, (ATerm)attributes);
}

/*}}}  */
/*{{{  PT_Production PT_makeProductionList(PT_Symbol rhs) */

PT_Production PT_makeProductionList(PT_Symbol rhs)
{
  return (PT_Production)(ATerm)ATmakeAppl1(PT_afun6, (ATerm)rhs);
}

/*}}}  */
/*{{{  PT_Attributes PT_makeAttributesNoAttrs() */

PT_Attributes PT_makeAttributesNoAttrs()
{
  return (PT_Attributes)(ATerm)ATmakeAppl0(PT_afun7);
}

/*}}}  */
/*{{{  PT_Attributes PT_makeAttributesAttrs(PT_Attrs attrs) */

PT_Attributes PT_makeAttributesAttrs(PT_Attrs attrs)
{
  return (PT_Attributes)(ATerm)ATmakeAppl1(PT_afun8, (ATerm)attrs);
}

/*}}}  */
/*{{{  PT_Attrs PT_makeAttrsMany(PT_Attr head, PT_Attrs tail) */

PT_Attrs PT_makeAttrsMany(PT_Attr head, PT_Attrs tail)
{
  return (PT_Attrs)(ATerm)ATinsert((ATermList)tail, (ATerm)head);
}

/*}}}  */
/*{{{  PT_Attrs PT_makeAttrsSingle(PT_Attr head) */

PT_Attrs PT_makeAttrsSingle(PT_Attr head)
{
  return (PT_Attrs)(ATerm)ATmakeList1((ATerm)head);
}

/*}}}  */
/*{{{  PT_Attr PT_makeAttrAssoc(PT_Associativity assoc) */

PT_Attr PT_makeAttrAssoc(PT_Associativity assoc)
{
  return (PT_Attr)(ATerm)ATmakeAppl1(PT_afun9, (ATerm)assoc);
}

/*}}}  */
/*{{{  PT_Attr PT_makeAttrTerm(ATerm term) */

PT_Attr PT_makeAttrTerm(ATerm term)
{
  return (PT_Attr)(ATerm)ATmakeAppl1(PT_afun10, (ATerm)term);
}

/*}}}  */
/*{{{  PT_Attr PT_makeAttrId(char * moduleName) */

PT_Attr PT_makeAttrId(char * moduleName)
{
  return (PT_Attr)(ATerm)ATmakeAppl1(PT_afun11, (ATerm)ATmakeAppl0(ATmakeAFun(moduleName, 0, ATtrue)));
}

/*}}}  */
/*{{{  PT_Attr PT_makeAttrBracket() */

PT_Attr PT_makeAttrBracket()
{
  return (PT_Attr)(ATerm)ATmakeAppl0(PT_afun12);
}

/*}}}  */
/*{{{  PT_Attr PT_makeAttrReject() */

PT_Attr PT_makeAttrReject()
{
  return (PT_Attr)(ATerm)ATmakeAppl0(PT_afun13);
}

/*}}}  */
/*{{{  PT_Attr PT_makeAttrPrefer() */

PT_Attr PT_makeAttrPrefer()
{
  return (PT_Attr)(ATerm)ATmakeAppl0(PT_afun14);
}

/*}}}  */
/*{{{  PT_Attr PT_makeAttrAvoid() */

PT_Attr PT_makeAttrAvoid()
{
  return (PT_Attr)(ATerm)ATmakeAppl0(PT_afun15);
}

/*}}}  */
/*{{{  PT_Associativity PT_makeAssociativityLeft() */

PT_Associativity PT_makeAssociativityLeft()
{
  return (PT_Associativity)(ATerm)ATmakeAppl0(PT_afun16);
}

/*}}}  */
/*{{{  PT_Associativity PT_makeAssociativityRight() */

PT_Associativity PT_makeAssociativityRight()
{
  return (PT_Associativity)(ATerm)ATmakeAppl0(PT_afun17);
}

/*}}}  */
/*{{{  PT_Associativity PT_makeAssociativityAssoc() */

PT_Associativity PT_makeAssociativityAssoc()
{
  return (PT_Associativity)(ATerm)ATmakeAppl0(PT_afun18);
}

/*}}}  */
/*{{{  PT_Associativity PT_makeAssociativityNonAssoc() */

PT_Associativity PT_makeAssociativityNonAssoc()
{
  return (PT_Associativity)(ATerm)ATmakeAppl0(PT_afun19);
}

/*}}}  */
/*{{{  PT_Args PT_makeArgsList(PT_Tree head, PT_Args tail) */

PT_Args PT_makeArgsList(PT_Tree head, PT_Args tail)
{
  return (PT_Args)(ATerm)ATinsert((ATermList)tail, (ATerm)head);
}

/*}}}  */
/*{{{  PT_Args PT_makeArgsEmpty() */

PT_Args PT_makeArgsEmpty()
{
  return (PT_Args)(ATerm)ATempty;
}

/*}}}  */
/*{{{  PT_Symbol PT_makeSymbolLit(char * string) */

PT_Symbol PT_makeSymbolLit(char * string)
{
  return (PT_Symbol)(ATerm)ATmakeAppl1(PT_afun2, (ATerm)ATmakeAppl0(ATmakeAFun(string, 0, ATtrue)));
}

/*}}}  */
/*{{{  PT_Symbol PT_makeSymbolCf(PT_Symbol symbol) */

PT_Symbol PT_makeSymbolCf(PT_Symbol symbol)
{
  return (PT_Symbol)(ATerm)ATmakeAppl1(PT_afun20, (ATerm)symbol);
}

/*}}}  */
/*{{{  PT_Symbol PT_makeSymbolLex(PT_Symbol symbol) */

PT_Symbol PT_makeSymbolLex(PT_Symbol symbol)
{
  return (PT_Symbol)(ATerm)ATmakeAppl1(PT_afun21, (ATerm)symbol);
}

/*}}}  */
/*{{{  PT_Symbol PT_makeSymbolEmpty() */

PT_Symbol PT_makeSymbolEmpty()
{
  return (PT_Symbol)(ATerm)ATmakeAppl0(PT_afun22);
}

/*}}}  */
/*{{{  PT_Symbol PT_makeSymbolSeq(PT_Symbols symbols) */

PT_Symbol PT_makeSymbolSeq(PT_Symbols symbols)
{
  return (PT_Symbol)(ATerm)ATmakeAppl1(PT_afun23, (ATerm)symbols);
}

/*}}}  */
/*{{{  PT_Symbol PT_makeSymbolOpt(PT_Symbol symbol) */

PT_Symbol PT_makeSymbolOpt(PT_Symbol symbol)
{
  return (PT_Symbol)(ATerm)ATmakeAppl1(PT_afun24, (ATerm)symbol);
}

/*}}}  */
/*{{{  PT_Symbol PT_makeSymbolAlt(PT_Symbol lhs, PT_Symbol rhs) */

PT_Symbol PT_makeSymbolAlt(PT_Symbol lhs, PT_Symbol rhs)
{
  return (PT_Symbol)(ATerm)ATmakeAppl2(PT_afun25, (ATerm)lhs, (ATerm)rhs);
}

/*}}}  */
/*{{{  PT_Symbol PT_makeSymbolTuple(PT_Symbol head, PT_Symbols rest) */

PT_Symbol PT_makeSymbolTuple(PT_Symbol head, PT_Symbols rest)
{
  return (PT_Symbol)(ATerm)ATmakeAppl2(PT_afun26, (ATerm)head, (ATerm)rest);
}

/*}}}  */
/*{{{  PT_Symbol PT_makeSymbolSort(char * string) */

PT_Symbol PT_makeSymbolSort(char * string)
{
  return (PT_Symbol)(ATerm)ATmakeAppl1(PT_afun27, (ATerm)ATmakeAppl0(ATmakeAFun(string, 0, ATtrue)));
}

/*}}}  */
/*{{{  PT_Symbol PT_makeSymbolIterPlus(PT_Symbol symbol) */

PT_Symbol PT_makeSymbolIterPlus(PT_Symbol symbol)
{
  return (PT_Symbol)(ATerm)ATmakeAppl1(PT_afun28, (ATerm)symbol);
}

/*}}}  */
/*{{{  PT_Symbol PT_makeSymbolIterStar(PT_Symbol symbol) */

PT_Symbol PT_makeSymbolIterStar(PT_Symbol symbol)
{
  return (PT_Symbol)(ATerm)ATmakeAppl1(PT_afun29, (ATerm)symbol);
}

/*}}}  */
/*{{{  PT_Symbol PT_makeSymbolIterPlusSep(PT_Symbol symbol, PT_Symbol separator) */

PT_Symbol PT_makeSymbolIterPlusSep(PT_Symbol symbol, PT_Symbol separator)
{
  return (PT_Symbol)(ATerm)ATmakeAppl2(PT_afun30, (ATerm)symbol, (ATerm)separator);
}

/*}}}  */
/*{{{  PT_Symbol PT_makeSymbolIterStarSep(PT_Symbol symbol, PT_Symbol separator) */

PT_Symbol PT_makeSymbolIterStarSep(PT_Symbol symbol, PT_Symbol separator)
{
  return (PT_Symbol)(ATerm)ATmakeAppl2(PT_afun31, (ATerm)symbol, (ATerm)separator);
}

/*}}}  */
/*{{{  PT_Symbol PT_makeSymbolIterN(PT_Symbol symbol, int number) */

PT_Symbol PT_makeSymbolIterN(PT_Symbol symbol, int number)
{
  return (PT_Symbol)(ATerm)ATmakeAppl2(PT_afun32, (ATerm)symbol, (ATerm)ATmakeInt(number));
}

/*}}}  */
/*{{{  PT_Symbol PT_makeSymbolIterSepN(PT_Symbol symbol, PT_Symbol separator, int number) */

PT_Symbol PT_makeSymbolIterSepN(PT_Symbol symbol, PT_Symbol separator, int number)
{
  return (PT_Symbol)(ATerm)ATmakeAppl3(PT_afun33, (ATerm)symbol, (ATerm)separator, (ATerm)ATmakeInt(number));
}

/*}}}  */
/*{{{  PT_Symbol PT_makeSymbolFunc(PT_Symbols symbols, PT_Symbol symbol) */

PT_Symbol PT_makeSymbolFunc(PT_Symbols symbols, PT_Symbol symbol)
{
  return (PT_Symbol)(ATerm)ATmakeAppl2(PT_afun34, (ATerm)symbols, (ATerm)symbol);
}

/*}}}  */
/*{{{  PT_Symbol PT_makeSymbolParameterizedSort(char * sort, PT_Symbols parameters) */

PT_Symbol PT_makeSymbolParameterizedSort(char * sort, PT_Symbols parameters)
{
  return (PT_Symbol)(ATerm)ATmakeAppl2(PT_afun35, (ATerm)ATmakeAppl0(ATmakeAFun(sort, 0, ATtrue)), (ATerm)parameters);
}

/*}}}  */
/*{{{  PT_Symbol PT_makeSymbolStrategy(PT_Symbol lhs, PT_Symbol rhs) */

PT_Symbol PT_makeSymbolStrategy(PT_Symbol lhs, PT_Symbol rhs)
{
  return (PT_Symbol)(ATerm)ATmakeAppl2(PT_afun36, (ATerm)lhs, (ATerm)rhs);
}

/*}}}  */
/*{{{  PT_Symbol PT_makeSymbolVarSym(PT_Symbol symbol) */

PT_Symbol PT_makeSymbolVarSym(PT_Symbol symbol)
{
  return (PT_Symbol)(ATerm)ATmakeAppl1(PT_afun37, (ATerm)symbol);
}

/*}}}  */
/*{{{  PT_Symbol PT_makeSymbolLayout() */

PT_Symbol PT_makeSymbolLayout()
{
  return (PT_Symbol)(ATerm)ATmakeAppl0(PT_afun38);
}

/*}}}  */
/*{{{  PT_Symbol PT_makeSymbolCharClass(PT_CharRanges ranges) */

PT_Symbol PT_makeSymbolCharClass(PT_CharRanges ranges)
{
  return (PT_Symbol)(ATerm)ATmakeAppl1(PT_afun39, (ATerm)ranges);
}

/*}}}  */
/*{{{  PT_Symbols PT_makeSymbolsList(PT_Symbol head, PT_Symbols tail) */

PT_Symbols PT_makeSymbolsList(PT_Symbol head, PT_Symbols tail)
{
  return (PT_Symbols)(ATerm)ATinsert((ATermList)tail, (ATerm)head);
}

/*}}}  */
/*{{{  PT_Symbols PT_makeSymbolsEmpty() */

PT_Symbols PT_makeSymbolsEmpty()
{
  return (PT_Symbols)(ATerm)ATempty;
}

/*}}}  */
/*{{{  PT_CharRange PT_makeCharRangeCharacter(int integer) */

PT_CharRange PT_makeCharRangeCharacter(int integer)
{
  return (PT_CharRange)(ATerm)ATmakeInt(integer);
}

/*}}}  */
/*{{{  PT_CharRange PT_makeCharRangeRange(int start, int end) */

PT_CharRange PT_makeCharRangeRange(int start, int end)
{
  return (PT_CharRange)(ATerm)ATmakeAppl2(PT_afun40, (ATerm)ATmakeInt(start), (ATerm)ATmakeInt(end));
}

/*}}}  */
/*{{{  PT_CharRanges PT_makeCharRangesList(PT_CharRange head, PT_CharRanges tail) */

PT_CharRanges PT_makeCharRangesList(PT_CharRange head, PT_CharRanges tail)
{
  return (PT_CharRanges)(ATerm)ATinsert((ATermList)tail, (ATerm)head);
}

/*}}}  */
/*{{{  PT_CharRanges PT_makeCharRangesEmpty() */

PT_CharRanges PT_makeCharRangesEmpty()
{
  return (PT_CharRanges)(ATerm)ATempty;
}

/*}}}  */

/*}}}  */
/*{{{  equality functions */

ATbool PT_isEqualParseTree(PT_ParseTree arg0, PT_ParseTree arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PT_isEqualTree(PT_Tree arg0, PT_Tree arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PT_isEqualProduction(PT_Production arg0, PT_Production arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PT_isEqualAttributes(PT_Attributes arg0, PT_Attributes arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PT_isEqualAttrs(PT_Attrs arg0, PT_Attrs arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PT_isEqualAttr(PT_Attr arg0, PT_Attr arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PT_isEqualAssociativity(PT_Associativity arg0, PT_Associativity arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PT_isEqualArgs(PT_Args arg0, PT_Args arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PT_isEqualSymbol(PT_Symbol arg0, PT_Symbol arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PT_isEqualSymbols(PT_Symbols arg0, PT_Symbols arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PT_isEqualCharRange(PT_CharRange arg0, PT_CharRange arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PT_isEqualCharRanges(PT_CharRanges arg0, PT_CharRanges arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/*}}}  */
/*{{{  PT_ParseTree accessors */

/*{{{  ATbool PT_isValidParseTree(PT_ParseTree arg) */

ATbool PT_isValidParseTree(PT_ParseTree arg)
{
  if (PT_isParseTreeTop(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool PT_isParseTreeTop(PT_ParseTree arg) */

inline ATbool PT_isParseTreeTop(PT_ParseTree arg)
{
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PT_patternParseTreeTop, NULL, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool PT_hasParseTreeTop(PT_ParseTree arg) */

ATbool PT_hasParseTreeTop(PT_ParseTree arg)
{
  if (PT_isParseTreeTop(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PT_Tree PT_getParseTreeTop(PT_ParseTree arg) */

PT_Tree PT_getParseTreeTop(PT_ParseTree arg)
{
  
    return (PT_Tree)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  PT_ParseTree PT_setParseTreeTop(PT_ParseTree arg, PT_Tree top) */

PT_ParseTree PT_setParseTreeTop(PT_ParseTree arg, PT_Tree top)
{
  if (PT_isParseTreeTop(arg)) {
    return (PT_ParseTree)ATsetArgument((ATermAppl)arg, (ATerm)top, 0);
  }

  ATabort("ParseTree has no Top: %t\n", arg);
  return (PT_ParseTree)NULL;
}

/*}}}  */
/*{{{  ATbool PT_hasParseTreeAmbCnt(PT_ParseTree arg) */

ATbool PT_hasParseTreeAmbCnt(PT_ParseTree arg)
{
  if (PT_isParseTreeTop(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  int PT_getParseTreeAmbCnt(PT_ParseTree arg) */

int PT_getParseTreeAmbCnt(PT_ParseTree arg)
{
  
    return (int)ATgetInt((ATermInt)ATgetArgument((ATermAppl)arg, 1));
}

/*}}}  */
/*{{{  PT_ParseTree PT_setParseTreeAmbCnt(PT_ParseTree arg, int ambCnt) */

PT_ParseTree PT_setParseTreeAmbCnt(PT_ParseTree arg, int ambCnt)
{
  if (PT_isParseTreeTop(arg)) {
    return (PT_ParseTree)ATsetArgument((ATermAppl)arg, (ATerm)ATmakeInt(ambCnt), 1);
  }

  ATabort("ParseTree has no AmbCnt: %t\n", arg);
  return (PT_ParseTree)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  PT_Tree accessors */

/*{{{  ATbool PT_isValidTree(PT_Tree arg) */

ATbool PT_isValidTree(PT_Tree arg)
{
  if (PT_isTreeAppl(arg)) {
    return ATtrue;
  }
  else if (PT_isTreeChar(arg)) {
    return ATtrue;
  }
  else if (PT_isTreeLit(arg)) {
    return ATtrue;
  }
  else if (PT_isTreeFlatLayout(arg)) {
    return ATtrue;
  }
  else if (PT_isTreeAmb(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool PT_isTreeAppl(PT_Tree arg) */

inline ATbool PT_isTreeAppl(PT_Tree arg)
{
  if (ATgetType((ATerm)arg) != AT_APPL) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternTreeAppl, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isTreeChar(PT_Tree arg) */

inline ATbool PT_isTreeChar(PT_Tree arg)
{
  if (ATgetType((ATerm)arg) != AT_INT) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PT_patternTreeChar, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool PT_isTreeLit(PT_Tree arg) */

inline ATbool PT_isTreeLit(PT_Tree arg)
{
  if (ATgetType((ATerm)arg) != AT_APPL) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternTreeLit, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isTreeFlatLayout(PT_Tree arg) */

inline ATbool PT_isTreeFlatLayout(PT_Tree arg)
{
  if (ATgetType((ATerm)arg) != AT_APPL) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternTreeFlatLayout, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isTreeAmb(PT_Tree arg) */

inline ATbool PT_isTreeAmb(PT_Tree arg)
{
  if (ATgetType((ATerm)arg) != AT_APPL) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternTreeAmb, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  ATbool PT_hasTreeProd(PT_Tree arg) */

ATbool PT_hasTreeProd(PT_Tree arg)
{
  if (PT_isTreeAppl(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PT_Production PT_getTreeProd(PT_Tree arg) */

PT_Production PT_getTreeProd(PT_Tree arg)
{
  
    return (PT_Production)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  PT_Tree PT_setTreeProd(PT_Tree arg, PT_Production prod) */

PT_Tree PT_setTreeProd(PT_Tree arg, PT_Production prod)
{
  if (PT_isTreeAppl(arg)) {
    return (PT_Tree)ATsetArgument((ATermAppl)arg, (ATerm)prod, 0);
  }

  ATabort("Tree has no Prod: %t\n", arg);
  return (PT_Tree)NULL;
}

/*}}}  */
/*{{{  ATbool PT_hasTreeArgs(PT_Tree arg) */

ATbool PT_hasTreeArgs(PT_Tree arg)
{
  if (PT_isTreeAppl(arg)) {
    return ATtrue;
  }
  else if (PT_isTreeAmb(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PT_Args PT_getTreeArgs(PT_Tree arg) */

PT_Args PT_getTreeArgs(PT_Tree arg)
{
  if (PT_isTreeAppl(arg)) {
    return (PT_Args)ATgetArgument((ATermAppl)arg, 1);
  }
  else 
    return (PT_Args)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  PT_Tree PT_setTreeArgs(PT_Tree arg, PT_Args args) */

PT_Tree PT_setTreeArgs(PT_Tree arg, PT_Args args)
{
  if (PT_isTreeAppl(arg)) {
    return (PT_Tree)ATsetArgument((ATermAppl)arg, (ATerm)args, 1);
  }
  else if (PT_isTreeAmb(arg)) {
    return (PT_Tree)ATsetArgument((ATermAppl)arg, (ATerm)args, 0);
  }

  ATabort("Tree has no Args: %t\n", arg);
  return (PT_Tree)NULL;
}

/*}}}  */
/*{{{  ATbool PT_hasTreeCharacter(PT_Tree arg) */

ATbool PT_hasTreeCharacter(PT_Tree arg)
{
  if (PT_isTreeChar(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  int PT_getTreeCharacter(PT_Tree arg) */

int PT_getTreeCharacter(PT_Tree arg)
{
  
    return (int)ATgetInt((ATermInt)arg);
}

/*}}}  */
/*{{{  PT_Tree PT_setTreeCharacter(PT_Tree arg, int character) */

PT_Tree PT_setTreeCharacter(PT_Tree arg, int character)
{
  if (PT_isTreeChar(arg)) {
    return (PT_Tree)ATmakeInt(character);
  }

  ATabort("Tree has no Character: %t\n", arg);
  return (PT_Tree)NULL;
}

/*}}}  */
/*{{{  ATbool PT_hasTreeString(PT_Tree arg) */

ATbool PT_hasTreeString(PT_Tree arg)
{
  if (PT_isTreeLit(arg)) {
    return ATtrue;
  }
  else if (PT_isTreeFlatLayout(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  char * PT_getTreeString(PT_Tree arg) */

char * PT_getTreeString(PT_Tree arg)
{
  if (PT_isTreeLit(arg)) {
    return (char *)ATgetName(ATgetAFun((ATermAppl)ATgetArgument((ATermAppl)arg, 0)));
  }
  else 
    return (char *)ATgetName(ATgetAFun((ATermAppl)ATgetArgument((ATermAppl)arg, 0)));
}

/*}}}  */
/*{{{  PT_Tree PT_setTreeString(PT_Tree arg, char * string) */

PT_Tree PT_setTreeString(PT_Tree arg, char * string)
{
  if (PT_isTreeLit(arg)) {
    return (PT_Tree)ATsetArgument((ATermAppl)arg, (ATerm)ATmakeAppl0(ATmakeAFun(string, 0, ATtrue)), 0);
  }
  else if (PT_isTreeFlatLayout(arg)) {
    return (PT_Tree)ATsetArgument((ATermAppl)arg, (ATerm)ATmakeAppl0(ATmakeAFun(string, 0, ATtrue)), 0);
  }

  ATabort("Tree has no String: %t\n", arg);
  return (PT_Tree)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  PT_Production accessors */

/*{{{  ATbool PT_isValidProduction(PT_Production arg) */

ATbool PT_isValidProduction(PT_Production arg)
{
  if (PT_isProductionDefault(arg)) {
    return ATtrue;
  }
  else if (PT_isProductionList(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool PT_isProductionDefault(PT_Production arg) */

inline ATbool PT_isProductionDefault(PT_Production arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternProductionDefault, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isProductionList(PT_Production arg) */

inline ATbool PT_isProductionList(PT_Production arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternProductionList, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  ATbool PT_hasProductionLhs(PT_Production arg) */

ATbool PT_hasProductionLhs(PT_Production arg)
{
  if (PT_isProductionDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PT_Symbols PT_getProductionLhs(PT_Production arg) */

PT_Symbols PT_getProductionLhs(PT_Production arg)
{
  
    return (PT_Symbols)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  PT_Production PT_setProductionLhs(PT_Production arg, PT_Symbols lhs) */

PT_Production PT_setProductionLhs(PT_Production arg, PT_Symbols lhs)
{
  if (PT_isProductionDefault(arg)) {
    return (PT_Production)ATsetArgument((ATermAppl)arg, (ATerm)lhs, 0);
  }

  ATabort("Production has no Lhs: %t\n", arg);
  return (PT_Production)NULL;
}

/*}}}  */
/*{{{  ATbool PT_hasProductionRhs(PT_Production arg) */

ATbool PT_hasProductionRhs(PT_Production arg)
{
  if (PT_isProductionDefault(arg)) {
    return ATtrue;
  }
  else if (PT_isProductionList(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PT_Symbol PT_getProductionRhs(PT_Production arg) */

PT_Symbol PT_getProductionRhs(PT_Production arg)
{
  if (PT_isProductionDefault(arg)) {
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 1);
  }
  else 
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  PT_Production PT_setProductionRhs(PT_Production arg, PT_Symbol rhs) */

PT_Production PT_setProductionRhs(PT_Production arg, PT_Symbol rhs)
{
  if (PT_isProductionDefault(arg)) {
    return (PT_Production)ATsetArgument((ATermAppl)arg, (ATerm)rhs, 1);
  }
  else if (PT_isProductionList(arg)) {
    return (PT_Production)ATsetArgument((ATermAppl)arg, (ATerm)rhs, 0);
  }

  ATabort("Production has no Rhs: %t\n", arg);
  return (PT_Production)NULL;
}

/*}}}  */
/*{{{  ATbool PT_hasProductionAttributes(PT_Production arg) */

ATbool PT_hasProductionAttributes(PT_Production arg)
{
  if (PT_isProductionDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PT_Attributes PT_getProductionAttributes(PT_Production arg) */

PT_Attributes PT_getProductionAttributes(PT_Production arg)
{
  
    return (PT_Attributes)ATgetArgument((ATermAppl)arg, 2);
}

/*}}}  */
/*{{{  PT_Production PT_setProductionAttributes(PT_Production arg, PT_Attributes attributes) */

PT_Production PT_setProductionAttributes(PT_Production arg, PT_Attributes attributes)
{
  if (PT_isProductionDefault(arg)) {
    return (PT_Production)ATsetArgument((ATermAppl)arg, (ATerm)attributes, 2);
  }

  ATabort("Production has no Attributes: %t\n", arg);
  return (PT_Production)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  PT_Attributes accessors */

/*{{{  ATbool PT_isValidAttributes(PT_Attributes arg) */

ATbool PT_isValidAttributes(PT_Attributes arg)
{
  if (PT_isAttributesNoAttrs(arg)) {
    return ATtrue;
  }
  else if (PT_isAttributesAttrs(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool PT_isAttributesNoAttrs(PT_Attributes arg) */

inline ATbool PT_isAttributesNoAttrs(PT_Attributes arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternAttributesNoAttrs);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isAttributesAttrs(PT_Attributes arg) */

inline ATbool PT_isAttributesAttrs(PT_Attributes arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternAttributesAttrs, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  ATbool PT_hasAttributesAttrs(PT_Attributes arg) */

ATbool PT_hasAttributesAttrs(PT_Attributes arg)
{
  if (PT_isAttributesAttrs(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PT_Attrs PT_getAttributesAttrs(PT_Attributes arg) */

PT_Attrs PT_getAttributesAttrs(PT_Attributes arg)
{
  
    return (PT_Attrs)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  PT_Attributes PT_setAttributesAttrs(PT_Attributes arg, PT_Attrs attrs) */

PT_Attributes PT_setAttributesAttrs(PT_Attributes arg, PT_Attrs attrs)
{
  if (PT_isAttributesAttrs(arg)) {
    return (PT_Attributes)ATsetArgument((ATermAppl)arg, (ATerm)attrs, 0);
  }

  ATabort("Attributes has no Attrs: %t\n", arg);
  return (PT_Attributes)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  PT_Attrs accessors */

/*{{{  ATbool PT_isValidAttrs(PT_Attrs arg) */

ATbool PT_isValidAttrs(PT_Attrs arg)
{
  if (PT_isAttrsMany(arg)) {
    return ATtrue;
  }
  else if (PT_isAttrsSingle(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool PT_isAttrsMany(PT_Attrs arg) */

inline ATbool PT_isAttrsMany(PT_Attrs arg)
{
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternAttrsMany, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isAttrsSingle(PT_Attrs arg) */

inline ATbool PT_isAttrsSingle(PT_Attrs arg)
{
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternAttrsSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  ATbool PT_hasAttrsHead(PT_Attrs arg) */

ATbool PT_hasAttrsHead(PT_Attrs arg)
{
  if (PT_isAttrsMany(arg)) {
    return ATtrue;
  }
  else if (PT_isAttrsSingle(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PT_Attr PT_getAttrsHead(PT_Attrs arg) */

PT_Attr PT_getAttrsHead(PT_Attrs arg)
{
  if (PT_isAttrsMany(arg)) {
    return (PT_Attr)ATgetFirst((ATermList)arg);
  }
  else 
    return (PT_Attr)ATgetFirst((ATermList)arg);
}

/*}}}  */
/*{{{  PT_Attrs PT_setAttrsHead(PT_Attrs arg, PT_Attr head) */

PT_Attrs PT_setAttrsHead(PT_Attrs arg, PT_Attr head)
{
  if (PT_isAttrsMany(arg)) {
    return (PT_Attrs)ATreplace((ATermList)arg, (ATerm)head, 0);
  }
  else if (PT_isAttrsSingle(arg)) {
    return (PT_Attrs)ATreplace((ATermList)arg, (ATerm)head, 0);
  }

  ATabort("Attrs has no Head: %t\n", arg);
  return (PT_Attrs)NULL;
}

/*}}}  */
/*{{{  ATbool PT_hasAttrsTail(PT_Attrs arg) */

ATbool PT_hasAttrsTail(PT_Attrs arg)
{
  if (PT_isAttrsMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PT_Attrs PT_getAttrsTail(PT_Attrs arg) */

PT_Attrs PT_getAttrsTail(PT_Attrs arg)
{
  
    return (PT_Attrs)ATgetNext((ATermList)arg);
}

/*}}}  */
/*{{{  PT_Attrs PT_setAttrsTail(PT_Attrs arg, PT_Attrs tail) */

PT_Attrs PT_setAttrsTail(PT_Attrs arg, PT_Attrs tail)
{
  if (PT_isAttrsMany(arg)) {
    return (PT_Attrs)ATreplaceTail((ATermList)arg, (ATermList)tail, 1);
  }

  ATabort("Attrs has no Tail: %t\n", arg);
  return (PT_Attrs)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  PT_Attr accessors */

/*{{{  ATbool PT_isValidAttr(PT_Attr arg) */

ATbool PT_isValidAttr(PT_Attr arg)
{
  if (PT_isAttrAssoc(arg)) {
    return ATtrue;
  }
  else if (PT_isAttrTerm(arg)) {
    return ATtrue;
  }
  else if (PT_isAttrId(arg)) {
    return ATtrue;
  }
  else if (PT_isAttrBracket(arg)) {
    return ATtrue;
  }
  else if (PT_isAttrReject(arg)) {
    return ATtrue;
  }
  else if (PT_isAttrPrefer(arg)) {
    return ATtrue;
  }
  else if (PT_isAttrAvoid(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool PT_isAttrAssoc(PT_Attr arg) */

inline ATbool PT_isAttrAssoc(PT_Attr arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternAttrAssoc, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isAttrTerm(PT_Attr arg) */

inline ATbool PT_isAttrTerm(PT_Attr arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternAttrTerm, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isAttrId(PT_Attr arg) */

inline ATbool PT_isAttrId(PT_Attr arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternAttrId, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isAttrBracket(PT_Attr arg) */

inline ATbool PT_isAttrBracket(PT_Attr arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternAttrBracket);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isAttrReject(PT_Attr arg) */

inline ATbool PT_isAttrReject(PT_Attr arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternAttrReject);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isAttrPrefer(PT_Attr arg) */

inline ATbool PT_isAttrPrefer(PT_Attr arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternAttrPrefer);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isAttrAvoid(PT_Attr arg) */

inline ATbool PT_isAttrAvoid(PT_Attr arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternAttrAvoid);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  ATbool PT_hasAttrAssoc(PT_Attr arg) */

ATbool PT_hasAttrAssoc(PT_Attr arg)
{
  if (PT_isAttrAssoc(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PT_Associativity PT_getAttrAssoc(PT_Attr arg) */

PT_Associativity PT_getAttrAssoc(PT_Attr arg)
{
  
    return (PT_Associativity)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  PT_Attr PT_setAttrAssoc(PT_Attr arg, PT_Associativity assoc) */

PT_Attr PT_setAttrAssoc(PT_Attr arg, PT_Associativity assoc)
{
  if (PT_isAttrAssoc(arg)) {
    return (PT_Attr)ATsetArgument((ATermAppl)arg, (ATerm)assoc, 0);
  }

  ATabort("Attr has no Assoc: %t\n", arg);
  return (PT_Attr)NULL;
}

/*}}}  */
/*{{{  ATbool PT_hasAttrTerm(PT_Attr arg) */

ATbool PT_hasAttrTerm(PT_Attr arg)
{
  if (PT_isAttrTerm(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ATerm PT_getAttrTerm(PT_Attr arg) */

ATerm PT_getAttrTerm(PT_Attr arg)
{
  
    return (ATerm)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  PT_Attr PT_setAttrTerm(PT_Attr arg, ATerm term) */

PT_Attr PT_setAttrTerm(PT_Attr arg, ATerm term)
{
  if (PT_isAttrTerm(arg)) {
    return (PT_Attr)ATsetArgument((ATermAppl)arg, (ATerm)term, 0);
  }

  ATabort("Attr has no Term: %t\n", arg);
  return (PT_Attr)NULL;
}

/*}}}  */
/*{{{  ATbool PT_hasAttrModuleName(PT_Attr arg) */

ATbool PT_hasAttrModuleName(PT_Attr arg)
{
  if (PT_isAttrId(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  char * PT_getAttrModuleName(PT_Attr arg) */

char * PT_getAttrModuleName(PT_Attr arg)
{
  
    return (char *)ATgetName(ATgetAFun((ATermAppl)ATgetArgument((ATermAppl)arg, 0)));
}

/*}}}  */
/*{{{  PT_Attr PT_setAttrModuleName(PT_Attr arg, char * moduleName) */

PT_Attr PT_setAttrModuleName(PT_Attr arg, char * moduleName)
{
  if (PT_isAttrId(arg)) {
    return (PT_Attr)ATsetArgument((ATermAppl)arg, (ATerm)ATmakeAppl0(ATmakeAFun(moduleName, 0, ATtrue)), 0);
  }

  ATabort("Attr has no ModuleName: %t\n", arg);
  return (PT_Attr)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  PT_Associativity accessors */

/*{{{  ATbool PT_isValidAssociativity(PT_Associativity arg) */

ATbool PT_isValidAssociativity(PT_Associativity arg)
{
  if (PT_isAssociativityLeft(arg)) {
    return ATtrue;
  }
  else if (PT_isAssociativityRight(arg)) {
    return ATtrue;
  }
  else if (PT_isAssociativityAssoc(arg)) {
    return ATtrue;
  }
  else if (PT_isAssociativityNonAssoc(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool PT_isAssociativityLeft(PT_Associativity arg) */

inline ATbool PT_isAssociativityLeft(PT_Associativity arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternAssociativityLeft);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isAssociativityRight(PT_Associativity arg) */

inline ATbool PT_isAssociativityRight(PT_Associativity arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternAssociativityRight);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isAssociativityAssoc(PT_Associativity arg) */

inline ATbool PT_isAssociativityAssoc(PT_Associativity arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternAssociativityAssoc);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isAssociativityNonAssoc(PT_Associativity arg) */

inline ATbool PT_isAssociativityNonAssoc(PT_Associativity arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternAssociativityNonAssoc);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */

/*}}}  */
/*{{{  PT_Args accessors */

/*{{{  ATbool PT_isValidArgs(PT_Args arg) */

ATbool PT_isValidArgs(PT_Args arg)
{
  if (PT_isArgsList(arg)) {
    return ATtrue;
  }
  else if (PT_isArgsEmpty(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool PT_isArgsList(PT_Args arg) */

inline ATbool PT_isArgsList(PT_Args arg)
{
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PT_patternArgsList, NULL, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool PT_isArgsEmpty(PT_Args arg) */

inline ATbool PT_isArgsEmpty(PT_Args arg)
{
  if (!ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PT_patternArgsEmpty));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool PT_hasArgsHead(PT_Args arg) */

ATbool PT_hasArgsHead(PT_Args arg)
{
  if (PT_isArgsList(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PT_Tree PT_getArgsHead(PT_Args arg) */

PT_Tree PT_getArgsHead(PT_Args arg)
{
  
    return (PT_Tree)ATgetFirst((ATermList)arg);
}

/*}}}  */
/*{{{  PT_Args PT_setArgsHead(PT_Args arg, PT_Tree head) */

PT_Args PT_setArgsHead(PT_Args arg, PT_Tree head)
{
  if (PT_isArgsList(arg)) {
    return (PT_Args)ATreplace((ATermList)arg, (ATerm)head, 0);
  }

  ATabort("Args has no Head: %t\n", arg);
  return (PT_Args)NULL;
}

/*}}}  */
/*{{{  ATbool PT_hasArgsTail(PT_Args arg) */

ATbool PT_hasArgsTail(PT_Args arg)
{
  if (PT_isArgsList(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PT_Args PT_getArgsTail(PT_Args arg) */

PT_Args PT_getArgsTail(PT_Args arg)
{
  
    return (PT_Args)ATgetNext((ATermList)arg);
}

/*}}}  */
/*{{{  PT_Args PT_setArgsTail(PT_Args arg, PT_Args tail) */

PT_Args PT_setArgsTail(PT_Args arg, PT_Args tail)
{
  if (PT_isArgsList(arg)) {
    return (PT_Args)ATreplaceTail((ATermList)arg, (ATermList)tail, 1);
  }

  ATabort("Args has no Tail: %t\n", arg);
  return (PT_Args)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  PT_Symbol accessors */

/*{{{  ATbool PT_isValidSymbol(PT_Symbol arg) */

ATbool PT_isValidSymbol(PT_Symbol arg)
{
  if (PT_isSymbolLit(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolCf(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolLex(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolEmpty(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolSeq(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolOpt(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolAlt(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolTuple(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolSort(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolIterPlus(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolIterStar(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolIterPlusSep(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolIterStarSep(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolIterN(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolIterSepN(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolFunc(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolParameterizedSort(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolStrategy(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolVarSym(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolLayout(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolCharClass(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool PT_isSymbolLit(PT_Symbol arg) */

inline ATbool PT_isSymbolLit(PT_Symbol arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolLit, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isSymbolCf(PT_Symbol arg) */

inline ATbool PT_isSymbolCf(PT_Symbol arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolCf, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isSymbolLex(PT_Symbol arg) */

inline ATbool PT_isSymbolLex(PT_Symbol arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolLex, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isSymbolEmpty(PT_Symbol arg) */

inline ATbool PT_isSymbolEmpty(PT_Symbol arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolEmpty);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isSymbolSeq(PT_Symbol arg) */

inline ATbool PT_isSymbolSeq(PT_Symbol arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolSeq, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isSymbolOpt(PT_Symbol arg) */

inline ATbool PT_isSymbolOpt(PT_Symbol arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolOpt, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isSymbolAlt(PT_Symbol arg) */

inline ATbool PT_isSymbolAlt(PT_Symbol arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolAlt, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isSymbolTuple(PT_Symbol arg) */

inline ATbool PT_isSymbolTuple(PT_Symbol arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolTuple, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isSymbolSort(PT_Symbol arg) */

inline ATbool PT_isSymbolSort(PT_Symbol arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolSort, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isSymbolIterPlus(PT_Symbol arg) */

inline ATbool PT_isSymbolIterPlus(PT_Symbol arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolIterPlus, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isSymbolIterStar(PT_Symbol arg) */

inline ATbool PT_isSymbolIterStar(PT_Symbol arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolIterStar, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isSymbolIterPlusSep(PT_Symbol arg) */

inline ATbool PT_isSymbolIterPlusSep(PT_Symbol arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolIterPlusSep, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isSymbolIterStarSep(PT_Symbol arg) */

inline ATbool PT_isSymbolIterStarSep(PT_Symbol arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolIterStarSep, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isSymbolIterN(PT_Symbol arg) */

inline ATbool PT_isSymbolIterN(PT_Symbol arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolIterN, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isSymbolIterSepN(PT_Symbol arg) */

inline ATbool PT_isSymbolIterSepN(PT_Symbol arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolIterSepN, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isSymbolFunc(PT_Symbol arg) */

inline ATbool PT_isSymbolFunc(PT_Symbol arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolFunc, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isSymbolParameterizedSort(PT_Symbol arg) */

inline ATbool PT_isSymbolParameterizedSort(PT_Symbol arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolParameterizedSort, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isSymbolStrategy(PT_Symbol arg) */

inline ATbool PT_isSymbolStrategy(PT_Symbol arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolStrategy, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isSymbolVarSym(PT_Symbol arg) */

inline ATbool PT_isSymbolVarSym(PT_Symbol arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolVarSym, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isSymbolLayout(PT_Symbol arg) */

inline ATbool PT_isSymbolLayout(PT_Symbol arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolLayout);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PT_isSymbolCharClass(PT_Symbol arg) */

inline ATbool PT_isSymbolCharClass(PT_Symbol arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolCharClass, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  ATbool PT_hasSymbolString(PT_Symbol arg) */

ATbool PT_hasSymbolString(PT_Symbol arg)
{
  if (PT_isSymbolLit(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolSort(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  char * PT_getSymbolString(PT_Symbol arg) */

char * PT_getSymbolString(PT_Symbol arg)
{
  if (PT_isSymbolLit(arg)) {
    return (char *)ATgetName(ATgetAFun((ATermAppl)ATgetArgument((ATermAppl)arg, 0)));
  }
  else 
    return (char *)ATgetName(ATgetAFun((ATermAppl)ATgetArgument((ATermAppl)arg, 0)));
}

/*}}}  */
/*{{{  PT_Symbol PT_setSymbolString(PT_Symbol arg, char * string) */

PT_Symbol PT_setSymbolString(PT_Symbol arg, char * string)
{
  if (PT_isSymbolLit(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)ATmakeAppl0(ATmakeAFun(string, 0, ATtrue)), 0);
  }
  else if (PT_isSymbolSort(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)ATmakeAppl0(ATmakeAFun(string, 0, ATtrue)), 0);
  }

  ATabort("Symbol has no String: %t\n", arg);
  return (PT_Symbol)NULL;
}

/*}}}  */
/*{{{  ATbool PT_hasSymbolSymbol(PT_Symbol arg) */

ATbool PT_hasSymbolSymbol(PT_Symbol arg)
{
  if (PT_isSymbolCf(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolLex(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolOpt(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolIterPlus(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolIterStar(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolIterPlusSep(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolIterStarSep(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolIterN(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolIterSepN(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolFunc(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolVarSym(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PT_Symbol PT_getSymbolSymbol(PT_Symbol arg) */

PT_Symbol PT_getSymbolSymbol(PT_Symbol arg)
{
  if (PT_isSymbolCf(arg)) {
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (PT_isSymbolLex(arg)) {
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (PT_isSymbolOpt(arg)) {
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (PT_isSymbolIterPlus(arg)) {
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (PT_isSymbolIterStar(arg)) {
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (PT_isSymbolIterPlusSep(arg)) {
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (PT_isSymbolIterStarSep(arg)) {
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (PT_isSymbolIterN(arg)) {
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (PT_isSymbolIterSepN(arg)) {
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (PT_isSymbolFunc(arg)) {
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 1);
  }
  else 
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  PT_Symbol PT_setSymbolSymbol(PT_Symbol arg, PT_Symbol symbol) */

PT_Symbol PT_setSymbolSymbol(PT_Symbol arg, PT_Symbol symbol)
{
  if (PT_isSymbolCf(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)symbol, 0);
  }
  else if (PT_isSymbolLex(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)symbol, 0);
  }
  else if (PT_isSymbolOpt(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)symbol, 0);
  }
  else if (PT_isSymbolIterPlus(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)symbol, 0);
  }
  else if (PT_isSymbolIterStar(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)symbol, 0);
  }
  else if (PT_isSymbolIterPlusSep(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)symbol, 0);
  }
  else if (PT_isSymbolIterStarSep(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)symbol, 0);
  }
  else if (PT_isSymbolIterN(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)symbol, 0);
  }
  else if (PT_isSymbolIterSepN(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)symbol, 0);
  }
  else if (PT_isSymbolFunc(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)symbol, 1);
  }
  else if (PT_isSymbolVarSym(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)symbol, 0);
  }

  ATabort("Symbol has no Symbol: %t\n", arg);
  return (PT_Symbol)NULL;
}

/*}}}  */
/*{{{  ATbool PT_hasSymbolSymbols(PT_Symbol arg) */

ATbool PT_hasSymbolSymbols(PT_Symbol arg)
{
  if (PT_isSymbolSeq(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolFunc(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PT_Symbols PT_getSymbolSymbols(PT_Symbol arg) */

PT_Symbols PT_getSymbolSymbols(PT_Symbol arg)
{
  if (PT_isSymbolSeq(arg)) {
    return (PT_Symbols)ATgetArgument((ATermAppl)arg, 0);
  }
  else 
    return (PT_Symbols)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  PT_Symbol PT_setSymbolSymbols(PT_Symbol arg, PT_Symbols symbols) */

PT_Symbol PT_setSymbolSymbols(PT_Symbol arg, PT_Symbols symbols)
{
  if (PT_isSymbolSeq(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)symbols, 0);
  }
  else if (PT_isSymbolFunc(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)symbols, 0);
  }

  ATabort("Symbol has no Symbols: %t\n", arg);
  return (PT_Symbol)NULL;
}

/*}}}  */
/*{{{  ATbool PT_hasSymbolLhs(PT_Symbol arg) */

ATbool PT_hasSymbolLhs(PT_Symbol arg)
{
  if (PT_isSymbolAlt(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolStrategy(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PT_Symbol PT_getSymbolLhs(PT_Symbol arg) */

PT_Symbol PT_getSymbolLhs(PT_Symbol arg)
{
  if (PT_isSymbolAlt(arg)) {
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 0);
  }
  else 
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  PT_Symbol PT_setSymbolLhs(PT_Symbol arg, PT_Symbol lhs) */

PT_Symbol PT_setSymbolLhs(PT_Symbol arg, PT_Symbol lhs)
{
  if (PT_isSymbolAlt(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)lhs, 0);
  }
  else if (PT_isSymbolStrategy(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)lhs, 0);
  }

  ATabort("Symbol has no Lhs: %t\n", arg);
  return (PT_Symbol)NULL;
}

/*}}}  */
/*{{{  ATbool PT_hasSymbolRhs(PT_Symbol arg) */

ATbool PT_hasSymbolRhs(PT_Symbol arg)
{
  if (PT_isSymbolAlt(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolStrategy(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PT_Symbol PT_getSymbolRhs(PT_Symbol arg) */

PT_Symbol PT_getSymbolRhs(PT_Symbol arg)
{
  if (PT_isSymbolAlt(arg)) {
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 1);
  }
  else 
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 1);
}

/*}}}  */
/*{{{  PT_Symbol PT_setSymbolRhs(PT_Symbol arg, PT_Symbol rhs) */

PT_Symbol PT_setSymbolRhs(PT_Symbol arg, PT_Symbol rhs)
{
  if (PT_isSymbolAlt(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)rhs, 1);
  }
  else if (PT_isSymbolStrategy(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)rhs, 1);
  }

  ATabort("Symbol has no Rhs: %t\n", arg);
  return (PT_Symbol)NULL;
}

/*}}}  */
/*{{{  ATbool PT_hasSymbolHead(PT_Symbol arg) */

ATbool PT_hasSymbolHead(PT_Symbol arg)
{
  if (PT_isSymbolTuple(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PT_Symbol PT_getSymbolHead(PT_Symbol arg) */

PT_Symbol PT_getSymbolHead(PT_Symbol arg)
{
  
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  PT_Symbol PT_setSymbolHead(PT_Symbol arg, PT_Symbol head) */

PT_Symbol PT_setSymbolHead(PT_Symbol arg, PT_Symbol head)
{
  if (PT_isSymbolTuple(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)head, 0);
  }

  ATabort("Symbol has no Head: %t\n", arg);
  return (PT_Symbol)NULL;
}

/*}}}  */
/*{{{  ATbool PT_hasSymbolRest(PT_Symbol arg) */

ATbool PT_hasSymbolRest(PT_Symbol arg)
{
  if (PT_isSymbolTuple(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PT_Symbols PT_getSymbolRest(PT_Symbol arg) */

PT_Symbols PT_getSymbolRest(PT_Symbol arg)
{
  
    return (PT_Symbols)ATgetArgument((ATermAppl)arg, 1);
}

/*}}}  */
/*{{{  PT_Symbol PT_setSymbolRest(PT_Symbol arg, PT_Symbols rest) */

PT_Symbol PT_setSymbolRest(PT_Symbol arg, PT_Symbols rest)
{
  if (PT_isSymbolTuple(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)rest, 1);
  }

  ATabort("Symbol has no Rest: %t\n", arg);
  return (PT_Symbol)NULL;
}

/*}}}  */
/*{{{  ATbool PT_hasSymbolSeparator(PT_Symbol arg) */

ATbool PT_hasSymbolSeparator(PT_Symbol arg)
{
  if (PT_isSymbolIterPlusSep(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolIterStarSep(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolIterSepN(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PT_Symbol PT_getSymbolSeparator(PT_Symbol arg) */

PT_Symbol PT_getSymbolSeparator(PT_Symbol arg)
{
  if (PT_isSymbolIterPlusSep(arg)) {
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 1);
  }
  else if (PT_isSymbolIterStarSep(arg)) {
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 1);
  }
  else 
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 1);
}

/*}}}  */
/*{{{  PT_Symbol PT_setSymbolSeparator(PT_Symbol arg, PT_Symbol separator) */

PT_Symbol PT_setSymbolSeparator(PT_Symbol arg, PT_Symbol separator)
{
  if (PT_isSymbolIterPlusSep(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)separator, 1);
  }
  else if (PT_isSymbolIterStarSep(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)separator, 1);
  }
  else if (PT_isSymbolIterSepN(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)separator, 1);
  }

  ATabort("Symbol has no Separator: %t\n", arg);
  return (PT_Symbol)NULL;
}

/*}}}  */
/*{{{  ATbool PT_hasSymbolNumber(PT_Symbol arg) */

ATbool PT_hasSymbolNumber(PT_Symbol arg)
{
  if (PT_isSymbolIterN(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolIterSepN(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  int PT_getSymbolNumber(PT_Symbol arg) */

int PT_getSymbolNumber(PT_Symbol arg)
{
  if (PT_isSymbolIterN(arg)) {
    return (int)ATgetInt((ATermInt)ATgetArgument((ATermAppl)arg, 1));
  }
  else 
    return (int)ATgetInt((ATermInt)ATgetArgument((ATermAppl)arg, 2));
}

/*}}}  */
/*{{{  PT_Symbol PT_setSymbolNumber(PT_Symbol arg, int number) */

PT_Symbol PT_setSymbolNumber(PT_Symbol arg, int number)
{
  if (PT_isSymbolIterN(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)ATmakeInt(number), 1);
  }
  else if (PT_isSymbolIterSepN(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)ATmakeInt(number), 2);
  }

  ATabort("Symbol has no Number: %t\n", arg);
  return (PT_Symbol)NULL;
}

/*}}}  */
/*{{{  ATbool PT_hasSymbolSort(PT_Symbol arg) */

ATbool PT_hasSymbolSort(PT_Symbol arg)
{
  if (PT_isSymbolParameterizedSort(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  char * PT_getSymbolSort(PT_Symbol arg) */

char * PT_getSymbolSort(PT_Symbol arg)
{
  
    return (char *)ATgetName(ATgetAFun((ATermAppl)ATgetArgument((ATermAppl)arg, 0)));
}

/*}}}  */
/*{{{  PT_Symbol PT_setSymbolSort(PT_Symbol arg, char * sort) */

PT_Symbol PT_setSymbolSort(PT_Symbol arg, char * sort)
{
  if (PT_isSymbolParameterizedSort(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)ATmakeAppl0(ATmakeAFun(sort, 0, ATtrue)), 0);
  }

  ATabort("Symbol has no Sort: %t\n", arg);
  return (PT_Symbol)NULL;
}

/*}}}  */
/*{{{  ATbool PT_hasSymbolParameters(PT_Symbol arg) */

ATbool PT_hasSymbolParameters(PT_Symbol arg)
{
  if (PT_isSymbolParameterizedSort(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PT_Symbols PT_getSymbolParameters(PT_Symbol arg) */

PT_Symbols PT_getSymbolParameters(PT_Symbol arg)
{
  
    return (PT_Symbols)ATgetArgument((ATermAppl)arg, 1);
}

/*}}}  */
/*{{{  PT_Symbol PT_setSymbolParameters(PT_Symbol arg, PT_Symbols parameters) */

PT_Symbol PT_setSymbolParameters(PT_Symbol arg, PT_Symbols parameters)
{
  if (PT_isSymbolParameterizedSort(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)parameters, 1);
  }

  ATabort("Symbol has no Parameters: %t\n", arg);
  return (PT_Symbol)NULL;
}

/*}}}  */
/*{{{  ATbool PT_hasSymbolRanges(PT_Symbol arg) */

ATbool PT_hasSymbolRanges(PT_Symbol arg)
{
  if (PT_isSymbolCharClass(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PT_CharRanges PT_getSymbolRanges(PT_Symbol arg) */

PT_CharRanges PT_getSymbolRanges(PT_Symbol arg)
{
  
    return (PT_CharRanges)ATgetArgument((ATermAppl)arg, 0);
}

/*}}}  */
/*{{{  PT_Symbol PT_setSymbolRanges(PT_Symbol arg, PT_CharRanges ranges) */

PT_Symbol PT_setSymbolRanges(PT_Symbol arg, PT_CharRanges ranges)
{
  if (PT_isSymbolCharClass(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)ranges, 0);
  }

  ATabort("Symbol has no Ranges: %t\n", arg);
  return (PT_Symbol)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  PT_Symbols accessors */

/*{{{  ATbool PT_isValidSymbols(PT_Symbols arg) */

ATbool PT_isValidSymbols(PT_Symbols arg)
{
  if (PT_isSymbolsList(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolsEmpty(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool PT_isSymbolsList(PT_Symbols arg) */

inline ATbool PT_isSymbolsList(PT_Symbols arg)
{
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PT_patternSymbolsList, NULL, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool PT_isSymbolsEmpty(PT_Symbols arg) */

inline ATbool PT_isSymbolsEmpty(PT_Symbols arg)
{
  if (!ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PT_patternSymbolsEmpty));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool PT_hasSymbolsHead(PT_Symbols arg) */

ATbool PT_hasSymbolsHead(PT_Symbols arg)
{
  if (PT_isSymbolsList(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PT_Symbol PT_getSymbolsHead(PT_Symbols arg) */

PT_Symbol PT_getSymbolsHead(PT_Symbols arg)
{
  
    return (PT_Symbol)ATgetFirst((ATermList)arg);
}

/*}}}  */
/*{{{  PT_Symbols PT_setSymbolsHead(PT_Symbols arg, PT_Symbol head) */

PT_Symbols PT_setSymbolsHead(PT_Symbols arg, PT_Symbol head)
{
  if (PT_isSymbolsList(arg)) {
    return (PT_Symbols)ATreplace((ATermList)arg, (ATerm)head, 0);
  }

  ATabort("Symbols has no Head: %t\n", arg);
  return (PT_Symbols)NULL;
}

/*}}}  */
/*{{{  ATbool PT_hasSymbolsTail(PT_Symbols arg) */

ATbool PT_hasSymbolsTail(PT_Symbols arg)
{
  if (PT_isSymbolsList(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PT_Symbols PT_getSymbolsTail(PT_Symbols arg) */

PT_Symbols PT_getSymbolsTail(PT_Symbols arg)
{
  
    return (PT_Symbols)ATgetNext((ATermList)arg);
}

/*}}}  */
/*{{{  PT_Symbols PT_setSymbolsTail(PT_Symbols arg, PT_Symbols tail) */

PT_Symbols PT_setSymbolsTail(PT_Symbols arg, PT_Symbols tail)
{
  if (PT_isSymbolsList(arg)) {
    return (PT_Symbols)ATreplaceTail((ATermList)arg, (ATermList)tail, 1);
  }

  ATabort("Symbols has no Tail: %t\n", arg);
  return (PT_Symbols)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  PT_CharRange accessors */

/*{{{  ATbool PT_isValidCharRange(PT_CharRange arg) */

ATbool PT_isValidCharRange(PT_CharRange arg)
{
  if (PT_isCharRangeCharacter(arg)) {
    return ATtrue;
  }
  else if (PT_isCharRangeRange(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool PT_isCharRangeCharacter(PT_CharRange arg) */

inline ATbool PT_isCharRangeCharacter(PT_CharRange arg)
{
  if (ATgetType((ATerm)arg) != AT_INT) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PT_patternCharRangeCharacter, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool PT_isCharRangeRange(PT_CharRange arg) */

inline ATbool PT_isCharRangeRange(PT_CharRange arg)
{
  if (ATgetType((ATerm)arg) != AT_APPL) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PT_patternCharRangeRange, NULL, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool PT_hasCharRangeInteger(PT_CharRange arg) */

ATbool PT_hasCharRangeInteger(PT_CharRange arg)
{
  if (PT_isCharRangeCharacter(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  int PT_getCharRangeInteger(PT_CharRange arg) */

int PT_getCharRangeInteger(PT_CharRange arg)
{
  
    return (int)ATgetInt((ATermInt)arg);
}

/*}}}  */
/*{{{  PT_CharRange PT_setCharRangeInteger(PT_CharRange arg, int integer) */

PT_CharRange PT_setCharRangeInteger(PT_CharRange arg, int integer)
{
  if (PT_isCharRangeCharacter(arg)) {
    return (PT_CharRange)ATmakeInt(integer);
  }

  ATabort("CharRange has no Integer: %t\n", arg);
  return (PT_CharRange)NULL;
}

/*}}}  */
/*{{{  ATbool PT_hasCharRangeStart(PT_CharRange arg) */

ATbool PT_hasCharRangeStart(PT_CharRange arg)
{
  if (PT_isCharRangeRange(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  int PT_getCharRangeStart(PT_CharRange arg) */

int PT_getCharRangeStart(PT_CharRange arg)
{
  
    return (int)ATgetInt((ATermInt)ATgetArgument((ATermAppl)arg, 0));
}

/*}}}  */
/*{{{  PT_CharRange PT_setCharRangeStart(PT_CharRange arg, int start) */

PT_CharRange PT_setCharRangeStart(PT_CharRange arg, int start)
{
  if (PT_isCharRangeRange(arg)) {
    return (PT_CharRange)ATsetArgument((ATermAppl)arg, (ATerm)ATmakeInt(start), 0);
  }

  ATabort("CharRange has no Start: %t\n", arg);
  return (PT_CharRange)NULL;
}

/*}}}  */
/*{{{  ATbool PT_hasCharRangeEnd(PT_CharRange arg) */

ATbool PT_hasCharRangeEnd(PT_CharRange arg)
{
  if (PT_isCharRangeRange(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  int PT_getCharRangeEnd(PT_CharRange arg) */

int PT_getCharRangeEnd(PT_CharRange arg)
{
  
    return (int)ATgetInt((ATermInt)ATgetArgument((ATermAppl)arg, 1));
}

/*}}}  */
/*{{{  PT_CharRange PT_setCharRangeEnd(PT_CharRange arg, int end) */

PT_CharRange PT_setCharRangeEnd(PT_CharRange arg, int end)
{
  if (PT_isCharRangeRange(arg)) {
    return (PT_CharRange)ATsetArgument((ATermAppl)arg, (ATerm)ATmakeInt(end), 1);
  }

  ATabort("CharRange has no End: %t\n", arg);
  return (PT_CharRange)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  PT_CharRanges accessors */

/*{{{  ATbool PT_isValidCharRanges(PT_CharRanges arg) */

ATbool PT_isValidCharRanges(PT_CharRanges arg)
{
  if (PT_isCharRangesList(arg)) {
    return ATtrue;
  }
  else if (PT_isCharRangesEmpty(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool PT_isCharRangesList(PT_CharRanges arg) */

inline ATbool PT_isCharRangesList(PT_CharRanges arg)
{
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PT_patternCharRangesList, NULL, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool PT_isCharRangesEmpty(PT_CharRanges arg) */

inline ATbool PT_isCharRangesEmpty(PT_CharRanges arg)
{
  if (!ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PT_patternCharRangesEmpty));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool PT_hasCharRangesHead(PT_CharRanges arg) */

ATbool PT_hasCharRangesHead(PT_CharRanges arg)
{
  if (PT_isCharRangesList(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PT_CharRange PT_getCharRangesHead(PT_CharRanges arg) */

PT_CharRange PT_getCharRangesHead(PT_CharRanges arg)
{
  
    return (PT_CharRange)ATgetFirst((ATermList)arg);
}

/*}}}  */
/*{{{  PT_CharRanges PT_setCharRangesHead(PT_CharRanges arg, PT_CharRange head) */

PT_CharRanges PT_setCharRangesHead(PT_CharRanges arg, PT_CharRange head)
{
  if (PT_isCharRangesList(arg)) {
    return (PT_CharRanges)ATreplace((ATermList)arg, (ATerm)head, 0);
  }

  ATabort("CharRanges has no Head: %t\n", arg);
  return (PT_CharRanges)NULL;
}

/*}}}  */
/*{{{  ATbool PT_hasCharRangesTail(PT_CharRanges arg) */

ATbool PT_hasCharRangesTail(PT_CharRanges arg)
{
  if (PT_isCharRangesList(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PT_CharRanges PT_getCharRangesTail(PT_CharRanges arg) */

PT_CharRanges PT_getCharRangesTail(PT_CharRanges arg)
{
  
    return (PT_CharRanges)ATgetNext((ATermList)arg);
}

/*}}}  */
/*{{{  PT_CharRanges PT_setCharRangesTail(PT_CharRanges arg, PT_CharRanges tail) */

PT_CharRanges PT_setCharRangesTail(PT_CharRanges arg, PT_CharRanges tail)
{
  if (PT_isCharRangesList(arg)) {
    return (PT_CharRanges)ATreplaceTail((ATermList)arg, (ATermList)tail, 1);
  }

  ATabort("CharRanges has no Tail: %t\n", arg);
  return (PT_CharRanges)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  sort visitors */

/*{{{  PT_ParseTree PT_visitParseTree(PT_ParseTree arg, PT_Tree (*acceptTop)(PT_Tree), int (*acceptAmbCnt)(int)) */

PT_ParseTree PT_visitParseTree(PT_ParseTree arg, PT_Tree (*acceptTop)(PT_Tree), int (*acceptAmbCnt)(int))
{
  if (PT_isParseTreeTop(arg)) {
    return PT_makeParseTreeTop(
        acceptTop ? acceptTop(PT_getParseTreeTop(arg)) : PT_getParseTreeTop(arg),
        acceptAmbCnt ? acceptAmbCnt(PT_getParseTreeAmbCnt(arg)) : PT_getParseTreeAmbCnt(arg));
  }
  ATabort("not a ParseTree: %t\n", arg);
  return (PT_ParseTree)NULL;
}

/*}}}  */
/*{{{  PT_Tree PT_visitTree(PT_Tree arg, PT_Production (*acceptProd)(PT_Production), PT_Args (*acceptArgs)(PT_Args), int (*acceptCharacter)(int), char * (*acceptString)(char *)) */

PT_Tree PT_visitTree(PT_Tree arg, PT_Production (*acceptProd)(PT_Production), PT_Args (*acceptArgs)(PT_Args), int (*acceptCharacter)(int), char * (*acceptString)(char *))
{
  if (PT_isTreeAppl(arg)) {
    return PT_makeTreeAppl(
        acceptProd ? acceptProd(PT_getTreeProd(arg)) : PT_getTreeProd(arg),
        acceptArgs ? acceptArgs(PT_getTreeArgs(arg)) : PT_getTreeArgs(arg));
  }
  if (PT_isTreeChar(arg)) {
    return PT_makeTreeChar(
        acceptCharacter ? acceptCharacter(PT_getTreeCharacter(arg)) : PT_getTreeCharacter(arg));
  }
  if (PT_isTreeLit(arg)) {
    return PT_makeTreeLit(
        acceptString ? acceptString(PT_getTreeString(arg)) : PT_getTreeString(arg));
  }
  if (PT_isTreeFlatLayout(arg)) {
    return PT_makeTreeFlatLayout(
        acceptString ? acceptString(PT_getTreeString(arg)) : PT_getTreeString(arg));
  }
  if (PT_isTreeAmb(arg)) {
    return PT_makeTreeAmb(
        acceptArgs ? acceptArgs(PT_getTreeArgs(arg)) : PT_getTreeArgs(arg));
  }
  ATabort("not a Tree: %t\n", arg);
  return (PT_Tree)NULL;
}

/*}}}  */
/*{{{  PT_Production PT_visitProduction(PT_Production arg, PT_Symbols (*acceptLhs)(PT_Symbols), PT_Symbol (*acceptRhs)(PT_Symbol), PT_Attributes (*acceptAttributes)(PT_Attributes)) */

PT_Production PT_visitProduction(PT_Production arg, PT_Symbols (*acceptLhs)(PT_Symbols), PT_Symbol (*acceptRhs)(PT_Symbol), PT_Attributes (*acceptAttributes)(PT_Attributes))
{
  if (PT_isProductionDefault(arg)) {
    return PT_makeProductionDefault(
        acceptLhs ? acceptLhs(PT_getProductionLhs(arg)) : PT_getProductionLhs(arg),
        acceptRhs ? acceptRhs(PT_getProductionRhs(arg)) : PT_getProductionRhs(arg),
        acceptAttributes ? acceptAttributes(PT_getProductionAttributes(arg)) : PT_getProductionAttributes(arg));
  }
  if (PT_isProductionList(arg)) {
    return PT_makeProductionList(
        acceptRhs ? acceptRhs(PT_getProductionRhs(arg)) : PT_getProductionRhs(arg));
  }
  ATabort("not a Production: %t\n", arg);
  return (PT_Production)NULL;
}

/*}}}  */
/*{{{  PT_Attributes PT_visitAttributes(PT_Attributes arg, PT_Attrs (*acceptAttrs)(PT_Attrs)) */

PT_Attributes PT_visitAttributes(PT_Attributes arg, PT_Attrs (*acceptAttrs)(PT_Attrs))
{
  if (PT_isAttributesNoAttrs(arg)) {
    return PT_makeAttributesNoAttrs();
  }
  if (PT_isAttributesAttrs(arg)) {
    return PT_makeAttributesAttrs(
        acceptAttrs ? acceptAttrs(PT_getAttributesAttrs(arg)) : PT_getAttributesAttrs(arg));
  }
  ATabort("not a Attributes: %t\n", arg);
  return (PT_Attributes)NULL;
}

/*}}}  */
/*{{{  PT_Attrs PT_visitAttrs(PT_Attrs arg, PT_Attr (*acceptHead)(PT_Attr)) */

PT_Attrs PT_visitAttrs(PT_Attrs arg, PT_Attr (*acceptHead)(PT_Attr))
{
  if (PT_isAttrsMany(arg)) {
    return PT_makeAttrsMany(
        acceptHead ? acceptHead(PT_getAttrsHead(arg)) : PT_getAttrsHead(arg),
        PT_visitAttrs(PT_getAttrsTail(arg), acceptHead));
  }
  if (PT_isAttrsSingle(arg)) {
    return PT_makeAttrsSingle(
        acceptHead ? acceptHead(PT_getAttrsHead(arg)) : PT_getAttrsHead(arg));
  }
  ATabort("not a Attrs: %t\n", arg);
  return (PT_Attrs)NULL;
}

/*}}}  */
/*{{{  PT_Attr PT_visitAttr(PT_Attr arg, PT_Associativity (*acceptAssoc)(PT_Associativity), ATerm (*acceptTerm)(ATerm), char * (*acceptModuleName)(char *)) */

PT_Attr PT_visitAttr(PT_Attr arg, PT_Associativity (*acceptAssoc)(PT_Associativity), ATerm (*acceptTerm)(ATerm), char * (*acceptModuleName)(char *))
{
  if (PT_isAttrAssoc(arg)) {
    return PT_makeAttrAssoc(
        acceptAssoc ? acceptAssoc(PT_getAttrAssoc(arg)) : PT_getAttrAssoc(arg));
  }
  if (PT_isAttrTerm(arg)) {
    return PT_makeAttrTerm(
        acceptTerm ? acceptTerm(PT_getAttrTerm(arg)) : PT_getAttrTerm(arg));
  }
  if (PT_isAttrId(arg)) {
    return PT_makeAttrId(
        acceptModuleName ? acceptModuleName(PT_getAttrModuleName(arg)) : PT_getAttrModuleName(arg));
  }
  if (PT_isAttrBracket(arg)) {
    return PT_makeAttrBracket();
  }
  if (PT_isAttrReject(arg)) {
    return PT_makeAttrReject();
  }
  if (PT_isAttrPrefer(arg)) {
    return PT_makeAttrPrefer();
  }
  if (PT_isAttrAvoid(arg)) {
    return PT_makeAttrAvoid();
  }
  ATabort("not a Attr: %t\n", arg);
  return (PT_Attr)NULL;
}

/*}}}  */
/*{{{  PT_Associativity PT_visitAssociativity(PT_Associativity arg) */

PT_Associativity PT_visitAssociativity(PT_Associativity arg)
{
  if (PT_isAssociativityLeft(arg)) {
    return PT_makeAssociativityLeft();
  }
  if (PT_isAssociativityRight(arg)) {
    return PT_makeAssociativityRight();
  }
  if (PT_isAssociativityAssoc(arg)) {
    return PT_makeAssociativityAssoc();
  }
  if (PT_isAssociativityNonAssoc(arg)) {
    return PT_makeAssociativityNonAssoc();
  }
  ATabort("not a Associativity: %t\n", arg);
  return (PT_Associativity)NULL;
}

/*}}}  */
/*{{{  PT_Args PT_visitArgs(PT_Args arg, PT_Tree (*acceptHead)(PT_Tree)) */

PT_Args PT_visitArgs(PT_Args arg, PT_Tree (*acceptHead)(PT_Tree))
{
  if (PT_isArgsList(arg)) {
    return PT_makeArgsList(
        acceptHead ? acceptHead(PT_getArgsHead(arg)) : PT_getArgsHead(arg),
        PT_visitArgs(PT_getArgsTail(arg), acceptHead));
  }
  if (PT_isArgsEmpty(arg)) {
    return PT_makeArgsEmpty();
  }
  ATabort("not a Args: %t\n", arg);
  return (PT_Args)NULL;
}

/*}}}  */
/*{{{  PT_Symbol PT_visitSymbol(PT_Symbol arg, char * (*acceptString)(char *), PT_Symbols (*acceptSymbols)(PT_Symbols), PT_Symbols (*acceptRest)(PT_Symbols), int (*acceptNumber)(int), char * (*acceptSort)(char *), PT_Symbols (*acceptParameters)(PT_Symbols), PT_CharRanges (*acceptRanges)(PT_CharRanges)) */

PT_Symbol PT_visitSymbol(PT_Symbol arg, char * (*acceptString)(char *), PT_Symbols (*acceptSymbols)(PT_Symbols), PT_Symbols (*acceptRest)(PT_Symbols), int (*acceptNumber)(int), char * (*acceptSort)(char *), PT_Symbols (*acceptParameters)(PT_Symbols), PT_CharRanges (*acceptRanges)(PT_CharRanges))
{
  if (PT_isSymbolLit(arg)) {
    return PT_makeSymbolLit(
        acceptString ? acceptString(PT_getSymbolString(arg)) : PT_getSymbolString(arg));
  }
  if (PT_isSymbolCf(arg)) {
    return PT_makeSymbolCf(
        PT_visitSymbol(PT_getSymbolSymbol(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges));
  }
  if (PT_isSymbolLex(arg)) {
    return PT_makeSymbolLex(
        PT_visitSymbol(PT_getSymbolSymbol(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges));
  }
  if (PT_isSymbolEmpty(arg)) {
    return PT_makeSymbolEmpty();
  }
  if (PT_isSymbolSeq(arg)) {
    return PT_makeSymbolSeq(
        acceptSymbols ? acceptSymbols(PT_getSymbolSymbols(arg)) : PT_getSymbolSymbols(arg));
  }
  if (PT_isSymbolOpt(arg)) {
    return PT_makeSymbolOpt(
        PT_visitSymbol(PT_getSymbolSymbol(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges));
  }
  if (PT_isSymbolAlt(arg)) {
    return PT_makeSymbolAlt(
        PT_visitSymbol(PT_getSymbolLhs(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges),
        PT_visitSymbol(PT_getSymbolRhs(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges));
  }
  if (PT_isSymbolTuple(arg)) {
    return PT_makeSymbolTuple(
        PT_visitSymbol(PT_getSymbolHead(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges),
        acceptRest ? acceptRest(PT_getSymbolRest(arg)) : PT_getSymbolRest(arg));
  }
  if (PT_isSymbolSort(arg)) {
    return PT_makeSymbolSort(
        acceptString ? acceptString(PT_getSymbolString(arg)) : PT_getSymbolString(arg));
  }
  if (PT_isSymbolIterPlus(arg)) {
    return PT_makeSymbolIterPlus(
        PT_visitSymbol(PT_getSymbolSymbol(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges));
  }
  if (PT_isSymbolIterStar(arg)) {
    return PT_makeSymbolIterStar(
        PT_visitSymbol(PT_getSymbolSymbol(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges));
  }
  if (PT_isSymbolIterPlusSep(arg)) {
    return PT_makeSymbolIterPlusSep(
        PT_visitSymbol(PT_getSymbolSymbol(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges),
        PT_visitSymbol(PT_getSymbolSeparator(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges));
  }
  if (PT_isSymbolIterStarSep(arg)) {
    return PT_makeSymbolIterStarSep(
        PT_visitSymbol(PT_getSymbolSymbol(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges),
        PT_visitSymbol(PT_getSymbolSeparator(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges));
  }
  if (PT_isSymbolIterN(arg)) {
    return PT_makeSymbolIterN(
        PT_visitSymbol(PT_getSymbolSymbol(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges),
        acceptNumber ? acceptNumber(PT_getSymbolNumber(arg)) : PT_getSymbolNumber(arg));
  }
  if (PT_isSymbolIterSepN(arg)) {
    return PT_makeSymbolIterSepN(
        PT_visitSymbol(PT_getSymbolSymbol(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges),
        PT_visitSymbol(PT_getSymbolSeparator(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges),
        acceptNumber ? acceptNumber(PT_getSymbolNumber(arg)) : PT_getSymbolNumber(arg));
  }
  if (PT_isSymbolFunc(arg)) {
    return PT_makeSymbolFunc(
        acceptSymbols ? acceptSymbols(PT_getSymbolSymbols(arg)) : PT_getSymbolSymbols(arg),
        PT_visitSymbol(PT_getSymbolSymbol(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges));
  }
  if (PT_isSymbolParameterizedSort(arg)) {
    return PT_makeSymbolParameterizedSort(
        acceptSort ? acceptSort(PT_getSymbolSort(arg)) : PT_getSymbolSort(arg),
        acceptParameters ? acceptParameters(PT_getSymbolParameters(arg)) : PT_getSymbolParameters(arg));
  }
  if (PT_isSymbolStrategy(arg)) {
    return PT_makeSymbolStrategy(
        PT_visitSymbol(PT_getSymbolLhs(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges),
        PT_visitSymbol(PT_getSymbolRhs(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges));
  }
  if (PT_isSymbolVarSym(arg)) {
    return PT_makeSymbolVarSym(
        PT_visitSymbol(PT_getSymbolSymbol(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges));
  }
  if (PT_isSymbolLayout(arg)) {
    return PT_makeSymbolLayout();
  }
  if (PT_isSymbolCharClass(arg)) {
    return PT_makeSymbolCharClass(
        acceptRanges ? acceptRanges(PT_getSymbolRanges(arg)) : PT_getSymbolRanges(arg));
  }
  ATabort("not a Symbol: %t\n", arg);
  return (PT_Symbol)NULL;
}

/*}}}  */
/*{{{  PT_Symbols PT_visitSymbols(PT_Symbols arg, PT_Symbol (*acceptHead)(PT_Symbol)) */

PT_Symbols PT_visitSymbols(PT_Symbols arg, PT_Symbol (*acceptHead)(PT_Symbol))
{
  if (PT_isSymbolsList(arg)) {
    return PT_makeSymbolsList(
        acceptHead ? acceptHead(PT_getSymbolsHead(arg)) : PT_getSymbolsHead(arg),
        PT_visitSymbols(PT_getSymbolsTail(arg), acceptHead));
  }
  if (PT_isSymbolsEmpty(arg)) {
    return PT_makeSymbolsEmpty();
  }
  ATabort("not a Symbols: %t\n", arg);
  return (PT_Symbols)NULL;
}

/*}}}  */
/*{{{  PT_CharRange PT_visitCharRange(PT_CharRange arg, int (*acceptInteger)(int), int (*acceptStart)(int), int (*acceptEnd)(int)) */

PT_CharRange PT_visitCharRange(PT_CharRange arg, int (*acceptInteger)(int), int (*acceptStart)(int), int (*acceptEnd)(int))
{
  if (PT_isCharRangeCharacter(arg)) {
    return PT_makeCharRangeCharacter(
        acceptInteger ? acceptInteger(PT_getCharRangeInteger(arg)) : PT_getCharRangeInteger(arg));
  }
  if (PT_isCharRangeRange(arg)) {
    return PT_makeCharRangeRange(
        acceptStart ? acceptStart(PT_getCharRangeStart(arg)) : PT_getCharRangeStart(arg),
        acceptEnd ? acceptEnd(PT_getCharRangeEnd(arg)) : PT_getCharRangeEnd(arg));
  }
  ATabort("not a CharRange: %t\n", arg);
  return (PT_CharRange)NULL;
}

/*}}}  */
/*{{{  PT_CharRanges PT_visitCharRanges(PT_CharRanges arg, PT_CharRange (*acceptHead)(PT_CharRange)) */

PT_CharRanges PT_visitCharRanges(PT_CharRanges arg, PT_CharRange (*acceptHead)(PT_CharRange))
{
  if (PT_isCharRangesList(arg)) {
    return PT_makeCharRangesList(
        acceptHead ? acceptHead(PT_getCharRangesHead(arg)) : PT_getCharRangesHead(arg),
        PT_visitCharRanges(PT_getCharRangesTail(arg), acceptHead));
  }
  if (PT_isCharRangesEmpty(arg)) {
    return PT_makeCharRangesEmpty();
  }
  ATabort("not a CharRanges: %t\n", arg);
  return (PT_CharRanges)NULL;
}

/*}}}  */

/*}}}  */
