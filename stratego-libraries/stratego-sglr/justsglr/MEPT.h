#ifndef _MEPT_H
#define _MEPT_H

/*{{{  includes */

#include <aterm1.h>
#include "MEPT_dict.h"

/*}}}  */

/*{{{  typedefs */

typedef struct _PT_ParseTree *PT_ParseTree;
typedef struct _PT_Tree *PT_Tree;
typedef struct _PT_Production *PT_Production;
typedef struct _PT_Attributes *PT_Attributes;
typedef struct _PT_Attrs *PT_Attrs;
typedef struct _PT_Attr *PT_Attr;
typedef struct _PT_Associativity *PT_Associativity;
typedef struct _PT_Args *PT_Args;
typedef struct _PT_Symbol *PT_Symbol;
typedef struct _PT_Symbols *PT_Symbols;
typedef struct _PT_CharRange *PT_CharRange;
typedef struct _PT_CharRanges *PT_CharRanges;

/*}}}  */

void PT_initMEPTApi(void);

/*{{{  term conversion functions */

#define PT_makeParseTreeFromTerm(t) (PT_ParseTreeFromTerm(t))
PT_ParseTree PT_ParseTreeFromTerm(ATerm t);
#define PT_makeTermFromParseTree(t) (PT_ParseTreeToTerm(t))
ATerm PT_ParseTreeToTerm(PT_ParseTree arg);
#define PT_makeTreeFromTerm(t) (PT_TreeFromTerm(t))
PT_Tree PT_TreeFromTerm(ATerm t);
#define PT_makeTermFromTree(t) (PT_TreeToTerm(t))
ATerm PT_TreeToTerm(PT_Tree arg);
#define PT_makeProductionFromTerm(t) (PT_ProductionFromTerm(t))
PT_Production PT_ProductionFromTerm(ATerm t);
#define PT_makeTermFromProduction(t) (PT_ProductionToTerm(t))
ATerm PT_ProductionToTerm(PT_Production arg);
#define PT_makeAttributesFromTerm(t) (PT_AttributesFromTerm(t))
PT_Attributes PT_AttributesFromTerm(ATerm t);
#define PT_makeTermFromAttributes(t) (PT_AttributesToTerm(t))
ATerm PT_AttributesToTerm(PT_Attributes arg);
#define PT_makeAttrsFromTerm(t) (PT_AttrsFromTerm(t))
PT_Attrs PT_AttrsFromTerm(ATerm t);
#define PT_makeTermFromAttrs(t) (PT_AttrsToTerm(t))
ATerm PT_AttrsToTerm(PT_Attrs arg);
#define PT_makeAttrFromTerm(t) (PT_AttrFromTerm(t))
PT_Attr PT_AttrFromTerm(ATerm t);
#define PT_makeTermFromAttr(t) (PT_AttrToTerm(t))
ATerm PT_AttrToTerm(PT_Attr arg);
#define PT_makeAssociativityFromTerm(t) (PT_AssociativityFromTerm(t))
PT_Associativity PT_AssociativityFromTerm(ATerm t);
#define PT_makeTermFromAssociativity(t) (PT_AssociativityToTerm(t))
ATerm PT_AssociativityToTerm(PT_Associativity arg);
#define PT_makeArgsFromTerm(t) (PT_ArgsFromTerm(t))
PT_Args PT_ArgsFromTerm(ATerm t);
#define PT_makeTermFromArgs(t) (PT_ArgsToTerm(t))
ATerm PT_ArgsToTerm(PT_Args arg);
#define PT_makeSymbolFromTerm(t) (PT_SymbolFromTerm(t))
PT_Symbol PT_SymbolFromTerm(ATerm t);
#define PT_makeTermFromSymbol(t) (PT_SymbolToTerm(t))
ATerm PT_SymbolToTerm(PT_Symbol arg);
#define PT_makeSymbolsFromTerm(t) (PT_SymbolsFromTerm(t))
PT_Symbols PT_SymbolsFromTerm(ATerm t);
#define PT_makeTermFromSymbols(t) (PT_SymbolsToTerm(t))
ATerm PT_SymbolsToTerm(PT_Symbols arg);
#define PT_makeCharRangeFromTerm(t) (PT_CharRangeFromTerm(t))
PT_CharRange PT_CharRangeFromTerm(ATerm t);
#define PT_makeTermFromCharRange(t) (PT_CharRangeToTerm(t))
ATerm PT_CharRangeToTerm(PT_CharRange arg);
#define PT_makeCharRangesFromTerm(t) (PT_CharRangesFromTerm(t))
PT_CharRanges PT_CharRangesFromTerm(ATerm t);
#define PT_makeTermFromCharRanges(t) (PT_CharRangesToTerm(t))
ATerm PT_CharRangesToTerm(PT_CharRanges arg);

/*}}}  */
/*{{{  constructors */

PT_ParseTree PT_makeParseTreeTop(PT_Tree top, int ambCnt);
PT_Tree PT_makeTreeAppl(PT_Production prod, PT_Args args);
PT_Tree PT_makeTreeChar(int character);
PT_Tree PT_makeTreeLit(char * string);
PT_Tree PT_makeTreeFlatLayout(char * string);
PT_Tree PT_makeTreeAmb(PT_Args args);
PT_Production PT_makeProductionDefault(PT_Symbols lhs, PT_Symbol rhs, PT_Attributes attributes);
PT_Production PT_makeProductionList(PT_Symbol rhs);
PT_Attributes PT_makeAttributesNoAttrs();
PT_Attributes PT_makeAttributesAttrs(PT_Attrs attrs);
PT_Attrs PT_makeAttrsMany(PT_Attr head, PT_Attrs tail);
PT_Attrs PT_makeAttrsSingle(PT_Attr head);
PT_Attr PT_makeAttrAssoc(PT_Associativity assoc);
PT_Attr PT_makeAttrTerm(ATerm term);
PT_Attr PT_makeAttrId(char * moduleName);
PT_Attr PT_makeAttrBracket();
PT_Attr PT_makeAttrReject();
PT_Attr PT_makeAttrPrefer();
PT_Attr PT_makeAttrAvoid();
PT_Associativity PT_makeAssociativityLeft();
PT_Associativity PT_makeAssociativityRight();
PT_Associativity PT_makeAssociativityAssoc();
PT_Associativity PT_makeAssociativityNonAssoc();
PT_Args PT_makeArgsList(PT_Tree head, PT_Args tail);
PT_Args PT_makeArgsEmpty();
PT_Symbol PT_makeSymbolLit(char * string);
PT_Symbol PT_makeSymbolCf(PT_Symbol symbol);
PT_Symbol PT_makeSymbolLex(PT_Symbol symbol);
PT_Symbol PT_makeSymbolEmpty();
PT_Symbol PT_makeSymbolSeq(PT_Symbols symbols);
PT_Symbol PT_makeSymbolOpt(PT_Symbol symbol);
PT_Symbol PT_makeSymbolAlt(PT_Symbol lhs, PT_Symbol rhs);
PT_Symbol PT_makeSymbolTuple(PT_Symbol head, PT_Symbols rest);
PT_Symbol PT_makeSymbolSort(char * string);
PT_Symbol PT_makeSymbolIterPlus(PT_Symbol symbol);
PT_Symbol PT_makeSymbolIterStar(PT_Symbol symbol);
PT_Symbol PT_makeSymbolIterPlusSep(PT_Symbol symbol, PT_Symbol separator);
PT_Symbol PT_makeSymbolIterStarSep(PT_Symbol symbol, PT_Symbol separator);
PT_Symbol PT_makeSymbolIterN(PT_Symbol symbol, int number);
PT_Symbol PT_makeSymbolIterSepN(PT_Symbol symbol, PT_Symbol separator, int number);
PT_Symbol PT_makeSymbolFunc(PT_Symbols symbols, PT_Symbol symbol);
PT_Symbol PT_makeSymbolParameterizedSort(char * sort, PT_Symbols parameters);
PT_Symbol PT_makeSymbolStrategy(PT_Symbol lhs, PT_Symbol rhs);
PT_Symbol PT_makeSymbolVarSym(PT_Symbol symbol);
PT_Symbol PT_makeSymbolLayout();
PT_Symbol PT_makeSymbolCharClass(PT_CharRanges ranges);
PT_Symbols PT_makeSymbolsList(PT_Symbol head, PT_Symbols tail);
PT_Symbols PT_makeSymbolsEmpty();
PT_CharRange PT_makeCharRangeCharacter(int integer);
PT_CharRange PT_makeCharRangeRange(int start, int end);
PT_CharRanges PT_makeCharRangesList(PT_CharRange head, PT_CharRanges tail);
PT_CharRanges PT_makeCharRangesEmpty();

/*}}}  */
/*{{{  equality functions */

ATbool PT_isEqualParseTree(PT_ParseTree arg0, PT_ParseTree arg1);
ATbool PT_isEqualTree(PT_Tree arg0, PT_Tree arg1);
ATbool PT_isEqualProduction(PT_Production arg0, PT_Production arg1);
ATbool PT_isEqualAttributes(PT_Attributes arg0, PT_Attributes arg1);
ATbool PT_isEqualAttrs(PT_Attrs arg0, PT_Attrs arg1);
ATbool PT_isEqualAttr(PT_Attr arg0, PT_Attr arg1);
ATbool PT_isEqualAssociativity(PT_Associativity arg0, PT_Associativity arg1);
ATbool PT_isEqualArgs(PT_Args arg0, PT_Args arg1);
ATbool PT_isEqualSymbol(PT_Symbol arg0, PT_Symbol arg1);
ATbool PT_isEqualSymbols(PT_Symbols arg0, PT_Symbols arg1);
ATbool PT_isEqualCharRange(PT_CharRange arg0, PT_CharRange arg1);
ATbool PT_isEqualCharRanges(PT_CharRanges arg0, PT_CharRanges arg1);

/*}}}  */
/*{{{  PT_ParseTree accessors */

ATbool PT_isValidParseTree(PT_ParseTree arg);
inline ATbool PT_isParseTreeTop(PT_ParseTree arg);
ATbool PT_hasParseTreeTop(PT_ParseTree arg);
PT_Tree PT_getParseTreeTop(PT_ParseTree arg);
PT_ParseTree PT_setParseTreeTop(PT_ParseTree arg, PT_Tree top);
ATbool PT_hasParseTreeAmbCnt(PT_ParseTree arg);
int PT_getParseTreeAmbCnt(PT_ParseTree arg);
PT_ParseTree PT_setParseTreeAmbCnt(PT_ParseTree arg, int ambCnt);

/*}}}  */
/*{{{  PT_Tree accessors */

ATbool PT_isValidTree(PT_Tree arg);
inline ATbool PT_isTreeAppl(PT_Tree arg);
inline ATbool PT_isTreeChar(PT_Tree arg);
inline ATbool PT_isTreeLit(PT_Tree arg);
inline ATbool PT_isTreeFlatLayout(PT_Tree arg);
inline ATbool PT_isTreeAmb(PT_Tree arg);
ATbool PT_hasTreeProd(PT_Tree arg);
PT_Production PT_getTreeProd(PT_Tree arg);
PT_Tree PT_setTreeProd(PT_Tree arg, PT_Production prod);
ATbool PT_hasTreeArgs(PT_Tree arg);
PT_Args PT_getTreeArgs(PT_Tree arg);
PT_Tree PT_setTreeArgs(PT_Tree arg, PT_Args args);
ATbool PT_hasTreeCharacter(PT_Tree arg);
int PT_getTreeCharacter(PT_Tree arg);
PT_Tree PT_setTreeCharacter(PT_Tree arg, int character);
ATbool PT_hasTreeString(PT_Tree arg);
char * PT_getTreeString(PT_Tree arg);
PT_Tree PT_setTreeString(PT_Tree arg, char * string);

/*}}}  */
/*{{{  PT_Production accessors */

ATbool PT_isValidProduction(PT_Production arg);
inline ATbool PT_isProductionDefault(PT_Production arg);
inline ATbool PT_isProductionList(PT_Production arg);
ATbool PT_hasProductionLhs(PT_Production arg);
PT_Symbols PT_getProductionLhs(PT_Production arg);
PT_Production PT_setProductionLhs(PT_Production arg, PT_Symbols lhs);
ATbool PT_hasProductionRhs(PT_Production arg);
PT_Symbol PT_getProductionRhs(PT_Production arg);
PT_Production PT_setProductionRhs(PT_Production arg, PT_Symbol rhs);
ATbool PT_hasProductionAttributes(PT_Production arg);
PT_Attributes PT_getProductionAttributes(PT_Production arg);
PT_Production PT_setProductionAttributes(PT_Production arg, PT_Attributes attributes);

/*}}}  */
/*{{{  PT_Attributes accessors */

ATbool PT_isValidAttributes(PT_Attributes arg);
inline ATbool PT_isAttributesNoAttrs(PT_Attributes arg);
inline ATbool PT_isAttributesAttrs(PT_Attributes arg);
ATbool PT_hasAttributesAttrs(PT_Attributes arg);
PT_Attrs PT_getAttributesAttrs(PT_Attributes arg);
PT_Attributes PT_setAttributesAttrs(PT_Attributes arg, PT_Attrs attrs);

/*}}}  */
/*{{{  PT_Attrs accessors */

ATbool PT_isValidAttrs(PT_Attrs arg);
inline ATbool PT_isAttrsMany(PT_Attrs arg);
inline ATbool PT_isAttrsSingle(PT_Attrs arg);
ATbool PT_hasAttrsHead(PT_Attrs arg);
PT_Attr PT_getAttrsHead(PT_Attrs arg);
PT_Attrs PT_setAttrsHead(PT_Attrs arg, PT_Attr head);
ATbool PT_hasAttrsTail(PT_Attrs arg);
PT_Attrs PT_getAttrsTail(PT_Attrs arg);
PT_Attrs PT_setAttrsTail(PT_Attrs arg, PT_Attrs tail);

/*}}}  */
/*{{{  PT_Attr accessors */

ATbool PT_isValidAttr(PT_Attr arg);
inline ATbool PT_isAttrAssoc(PT_Attr arg);
inline ATbool PT_isAttrTerm(PT_Attr arg);
inline ATbool PT_isAttrId(PT_Attr arg);
inline ATbool PT_isAttrBracket(PT_Attr arg);
inline ATbool PT_isAttrReject(PT_Attr arg);
inline ATbool PT_isAttrPrefer(PT_Attr arg);
inline ATbool PT_isAttrAvoid(PT_Attr arg);
ATbool PT_hasAttrAssoc(PT_Attr arg);
PT_Associativity PT_getAttrAssoc(PT_Attr arg);
PT_Attr PT_setAttrAssoc(PT_Attr arg, PT_Associativity assoc);
ATbool PT_hasAttrTerm(PT_Attr arg);
ATerm PT_getAttrTerm(PT_Attr arg);
PT_Attr PT_setAttrTerm(PT_Attr arg, ATerm term);
ATbool PT_hasAttrModuleName(PT_Attr arg);
char * PT_getAttrModuleName(PT_Attr arg);
PT_Attr PT_setAttrModuleName(PT_Attr arg, char * moduleName);

/*}}}  */
/*{{{  PT_Associativity accessors */

ATbool PT_isValidAssociativity(PT_Associativity arg);
inline ATbool PT_isAssociativityLeft(PT_Associativity arg);
inline ATbool PT_isAssociativityRight(PT_Associativity arg);
inline ATbool PT_isAssociativityAssoc(PT_Associativity arg);
inline ATbool PT_isAssociativityNonAssoc(PT_Associativity arg);

/*}}}  */
/*{{{  PT_Args accessors */

ATbool PT_isValidArgs(PT_Args arg);
inline ATbool PT_isArgsList(PT_Args arg);
inline ATbool PT_isArgsEmpty(PT_Args arg);
ATbool PT_hasArgsHead(PT_Args arg);
PT_Tree PT_getArgsHead(PT_Args arg);
PT_Args PT_setArgsHead(PT_Args arg, PT_Tree head);
ATbool PT_hasArgsTail(PT_Args arg);
PT_Args PT_getArgsTail(PT_Args arg);
PT_Args PT_setArgsTail(PT_Args arg, PT_Args tail);

/*}}}  */
/*{{{  PT_Symbol accessors */

ATbool PT_isValidSymbol(PT_Symbol arg);
inline ATbool PT_isSymbolLit(PT_Symbol arg);
inline ATbool PT_isSymbolCf(PT_Symbol arg);
inline ATbool PT_isSymbolLex(PT_Symbol arg);
inline ATbool PT_isSymbolEmpty(PT_Symbol arg);
inline ATbool PT_isSymbolSeq(PT_Symbol arg);
inline ATbool PT_isSymbolOpt(PT_Symbol arg);
inline ATbool PT_isSymbolAlt(PT_Symbol arg);
inline ATbool PT_isSymbolTuple(PT_Symbol arg);
inline ATbool PT_isSymbolSort(PT_Symbol arg);
inline ATbool PT_isSymbolIterPlus(PT_Symbol arg);
inline ATbool PT_isSymbolIterStar(PT_Symbol arg);
inline ATbool PT_isSymbolIterPlusSep(PT_Symbol arg);
inline ATbool PT_isSymbolIterStarSep(PT_Symbol arg);
inline ATbool PT_isSymbolIterN(PT_Symbol arg);
inline ATbool PT_isSymbolIterSepN(PT_Symbol arg);
inline ATbool PT_isSymbolFunc(PT_Symbol arg);
inline ATbool PT_isSymbolParameterizedSort(PT_Symbol arg);
inline ATbool PT_isSymbolStrategy(PT_Symbol arg);
inline ATbool PT_isSymbolVarSym(PT_Symbol arg);
inline ATbool PT_isSymbolLayout(PT_Symbol arg);
inline ATbool PT_isSymbolCharClass(PT_Symbol arg);
ATbool PT_hasSymbolString(PT_Symbol arg);
char * PT_getSymbolString(PT_Symbol arg);
PT_Symbol PT_setSymbolString(PT_Symbol arg, char * string);
ATbool PT_hasSymbolSymbol(PT_Symbol arg);
PT_Symbol PT_getSymbolSymbol(PT_Symbol arg);
PT_Symbol PT_setSymbolSymbol(PT_Symbol arg, PT_Symbol symbol);
ATbool PT_hasSymbolSymbols(PT_Symbol arg);
PT_Symbols PT_getSymbolSymbols(PT_Symbol arg);
PT_Symbol PT_setSymbolSymbols(PT_Symbol arg, PT_Symbols symbols);
ATbool PT_hasSymbolLhs(PT_Symbol arg);
PT_Symbol PT_getSymbolLhs(PT_Symbol arg);
PT_Symbol PT_setSymbolLhs(PT_Symbol arg, PT_Symbol lhs);
ATbool PT_hasSymbolRhs(PT_Symbol arg);
PT_Symbol PT_getSymbolRhs(PT_Symbol arg);
PT_Symbol PT_setSymbolRhs(PT_Symbol arg, PT_Symbol rhs);
ATbool PT_hasSymbolHead(PT_Symbol arg);
PT_Symbol PT_getSymbolHead(PT_Symbol arg);
PT_Symbol PT_setSymbolHead(PT_Symbol arg, PT_Symbol head);
ATbool PT_hasSymbolRest(PT_Symbol arg);
PT_Symbols PT_getSymbolRest(PT_Symbol arg);
PT_Symbol PT_setSymbolRest(PT_Symbol arg, PT_Symbols rest);
ATbool PT_hasSymbolSeparator(PT_Symbol arg);
PT_Symbol PT_getSymbolSeparator(PT_Symbol arg);
PT_Symbol PT_setSymbolSeparator(PT_Symbol arg, PT_Symbol separator);
ATbool PT_hasSymbolNumber(PT_Symbol arg);
int PT_getSymbolNumber(PT_Symbol arg);
PT_Symbol PT_setSymbolNumber(PT_Symbol arg, int number);
ATbool PT_hasSymbolSort(PT_Symbol arg);
char * PT_getSymbolSort(PT_Symbol arg);
PT_Symbol PT_setSymbolSort(PT_Symbol arg, char * sort);
ATbool PT_hasSymbolParameters(PT_Symbol arg);
PT_Symbols PT_getSymbolParameters(PT_Symbol arg);
PT_Symbol PT_setSymbolParameters(PT_Symbol arg, PT_Symbols parameters);
ATbool PT_hasSymbolRanges(PT_Symbol arg);
PT_CharRanges PT_getSymbolRanges(PT_Symbol arg);
PT_Symbol PT_setSymbolRanges(PT_Symbol arg, PT_CharRanges ranges);

/*}}}  */
/*{{{  PT_Symbols accessors */

ATbool PT_isValidSymbols(PT_Symbols arg);
inline ATbool PT_isSymbolsList(PT_Symbols arg);
inline ATbool PT_isSymbolsEmpty(PT_Symbols arg);
ATbool PT_hasSymbolsHead(PT_Symbols arg);
PT_Symbol PT_getSymbolsHead(PT_Symbols arg);
PT_Symbols PT_setSymbolsHead(PT_Symbols arg, PT_Symbol head);
ATbool PT_hasSymbolsTail(PT_Symbols arg);
PT_Symbols PT_getSymbolsTail(PT_Symbols arg);
PT_Symbols PT_setSymbolsTail(PT_Symbols arg, PT_Symbols tail);

/*}}}  */
/*{{{  PT_CharRange accessors */

ATbool PT_isValidCharRange(PT_CharRange arg);
inline ATbool PT_isCharRangeCharacter(PT_CharRange arg);
inline ATbool PT_isCharRangeRange(PT_CharRange arg);
ATbool PT_hasCharRangeInteger(PT_CharRange arg);
int PT_getCharRangeInteger(PT_CharRange arg);
PT_CharRange PT_setCharRangeInteger(PT_CharRange arg, int integer);
ATbool PT_hasCharRangeStart(PT_CharRange arg);
int PT_getCharRangeStart(PT_CharRange arg);
PT_CharRange PT_setCharRangeStart(PT_CharRange arg, int start);
ATbool PT_hasCharRangeEnd(PT_CharRange arg);
int PT_getCharRangeEnd(PT_CharRange arg);
PT_CharRange PT_setCharRangeEnd(PT_CharRange arg, int end);

/*}}}  */
/*{{{  PT_CharRanges accessors */

ATbool PT_isValidCharRanges(PT_CharRanges arg);
inline ATbool PT_isCharRangesList(PT_CharRanges arg);
inline ATbool PT_isCharRangesEmpty(PT_CharRanges arg);
ATbool PT_hasCharRangesHead(PT_CharRanges arg);
PT_CharRange PT_getCharRangesHead(PT_CharRanges arg);
PT_CharRanges PT_setCharRangesHead(PT_CharRanges arg, PT_CharRange head);
ATbool PT_hasCharRangesTail(PT_CharRanges arg);
PT_CharRanges PT_getCharRangesTail(PT_CharRanges arg);
PT_CharRanges PT_setCharRangesTail(PT_CharRanges arg, PT_CharRanges tail);

/*}}}  */
/*{{{  sort visitors */

PT_ParseTree PT_visitParseTree(PT_ParseTree arg, PT_Tree (*acceptTop)(PT_Tree), int (*acceptAmbCnt)(int));
PT_Tree PT_visitTree(PT_Tree arg, PT_Production (*acceptProd)(PT_Production), PT_Args (*acceptArgs)(PT_Args), int (*acceptCharacter)(int), char * (*acceptString)(char *));
PT_Production PT_visitProduction(PT_Production arg, PT_Symbols (*acceptLhs)(PT_Symbols), PT_Symbol (*acceptRhs)(PT_Symbol), PT_Attributes (*acceptAttributes)(PT_Attributes));
PT_Attributes PT_visitAttributes(PT_Attributes arg, PT_Attrs (*acceptAttrs)(PT_Attrs));
PT_Attrs PT_visitAttrs(PT_Attrs arg, PT_Attr (*acceptHead)(PT_Attr));
PT_Attr PT_visitAttr(PT_Attr arg, PT_Associativity (*acceptAssoc)(PT_Associativity), ATerm (*acceptTerm)(ATerm), char * (*acceptModuleName)(char *));
PT_Associativity PT_visitAssociativity(PT_Associativity arg);
PT_Args PT_visitArgs(PT_Args arg, PT_Tree (*acceptHead)(PT_Tree));
PT_Symbol PT_visitSymbol(PT_Symbol arg, char * (*acceptString)(char *), PT_Symbols (*acceptSymbols)(PT_Symbols), PT_Symbols (*acceptRest)(PT_Symbols), int (*acceptNumber)(int), char * (*acceptSort)(char *), PT_Symbols (*acceptParameters)(PT_Symbols), PT_CharRanges (*acceptRanges)(PT_CharRanges));
PT_Symbols PT_visitSymbols(PT_Symbols arg, PT_Symbol (*acceptHead)(PT_Symbol));
PT_CharRange PT_visitCharRange(PT_CharRange arg, int (*acceptInteger)(int), int (*acceptStart)(int), int (*acceptEnd)(int));
PT_CharRanges PT_visitCharRanges(PT_CharRanges arg, PT_CharRange (*acceptHead)(PT_CharRange));

/*}}}  */

#endif /* _MEPT_H */
