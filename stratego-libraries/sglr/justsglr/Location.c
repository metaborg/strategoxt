#include <assert.h>

#include <aterm2.h>
#include <deprecated.h>
#include "Location.h"

/*{{{  conversion functions */

ATerm LOC_stringToChars(const char *str)
{
  int len = strlen(str);
  int i;
  ATermList result = ATempty;

  for (i = len - 1; i >= 0; i--) {
    result = ATinsert(result, (ATerm) ATmakeInt(str[i]));
  }

  return (ATerm) result;
}

char *LOC_charsToString(ATerm arg)
{
  ATermList list = (ATermList) arg;
  int len = ATgetLength(list);
  int i;
  char *str;

  str = (char *) malloc(len+1);
  if (str == NULL) {
      return NULL;
  }

  for (i = 0; !ATisEmpty(list); list = ATgetNext(list), i++) {
    str[i] = (char) ATgetInt((ATermInt) ATgetFirst(list));
  }
  str[i] = '\0';

  return str;
}


/*}}}  */

/*{{{  typedefs */

typedef struct ATerm _LOC_Normal;
typedef struct ATerm _LOC_Escaped;
typedef struct ATerm _LOC_StrCon;
typedef struct ATerm _LOC_NatCon;
typedef struct ATerm _LOC_Location;
typedef struct ATerm _LOC_Area;

/*}}}  */

/*{{{  void LOC_initLocationApi(void) */

void LOC_initLocationApi(void)
{
  init_Location_dict();
}

/*}}}  */

/*{{{  protect functions */

void LOC_protectNormal(LOC_Normal *arg)
{
  ATprotect((ATerm*)((void*) arg));
}

void LOC_protectEscaped(LOC_Escaped *arg)
{
  ATprotect((ATerm*)((void*) arg));
}

void LOC_protectStrCon(LOC_StrCon *arg)
{
  ATprotect((ATerm*)((void*) arg));
}

void LOC_protectNatCon(LOC_NatCon *arg)
{
  ATprotect((ATerm*)((void*) arg));
}

void LOC_protectLocation(LOC_Location *arg)
{
  ATprotect((ATerm*)((void*) arg));
}

void LOC_protectArea(LOC_Area *arg)
{
  ATprotect((ATerm*)((void*) arg));
}


/*}}}  */
/*{{{  term conversion functions */

/*{{{  LOC_Normal LOC_NormalFromTerm(ATerm t) */

LOC_Normal LOC_NormalFromTerm(ATerm t)
{
  return (LOC_Normal)t;
}

/*}}}  */
/*{{{  ATerm LOC_NormalToTerm(LOC_Normal arg) */

ATerm LOC_NormalToTerm(LOC_Normal arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  LOC_Escaped LOC_EscapedFromTerm(ATerm t) */

LOC_Escaped LOC_EscapedFromTerm(ATerm t)
{
  return (LOC_Escaped)t;
}

/*}}}  */
/*{{{  ATerm LOC_EscapedToTerm(LOC_Escaped arg) */

ATerm LOC_EscapedToTerm(LOC_Escaped arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  LOC_StrCon LOC_StrConFromTerm(ATerm t) */

LOC_StrCon LOC_StrConFromTerm(ATerm t)
{
  return (LOC_StrCon)t;
}

/*}}}  */
/*{{{  ATerm LOC_StrConToTerm(LOC_StrCon arg) */

ATerm LOC_StrConToTerm(LOC_StrCon arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  LOC_NatCon LOC_NatConFromTerm(ATerm t) */

LOC_NatCon LOC_NatConFromTerm(ATerm t)
{
  return (LOC_NatCon)t;
}

/*}}}  */
/*{{{  ATerm LOC_NatConToTerm(LOC_NatCon arg) */

ATerm LOC_NatConToTerm(LOC_NatCon arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  LOC_Location LOC_LocationFromTerm(ATerm t) */

LOC_Location LOC_LocationFromTerm(ATerm t)
{
  return (LOC_Location)t;
}

/*}}}  */
/*{{{  ATerm LOC_LocationToTerm(LOC_Location arg) */

ATerm LOC_LocationToTerm(LOC_Location arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  LOC_Area LOC_AreaFromTerm(ATerm t) */

LOC_Area LOC_AreaFromTerm(ATerm t)
{
  return (LOC_Area)t;
}

/*}}}  */
/*{{{  ATerm LOC_AreaToTerm(LOC_Area arg) */

ATerm LOC_AreaToTerm(LOC_Area arg)
{
  return (ATerm)arg;
}

/*}}}  */

/*}}}  */
/*{{{  list functions */


/*}}}  */
/*{{{  constructors */

/*{{{  LOC_Normal LOC_makeNormalNormal(const char* string) */

LOC_Normal LOC_makeNormalNormal(const char* string)
{
  return (LOC_Normal)(ATerm) (ATerm) ATmakeAppl(ATmakeAFun(string, 0, ATtrue));
}

/*}}}  */
/*{{{  LOC_Escaped LOC_makeEscapedEscaped(const char* string) */

LOC_Escaped LOC_makeEscapedEscaped(const char* string)
{
  return (LOC_Escaped)(ATerm) (ATerm) ATmakeAppl(ATmakeAFun(string, 0, ATtrue));
}

/*}}}  */
/*{{{  LOC_StrCon LOC_makeStrConStrCon(const char* string) */

LOC_StrCon LOC_makeStrConStrCon(const char* string)
{
  return (LOC_StrCon)(ATerm) (ATerm) ATmakeAppl(ATmakeAFun(string, 0, ATtrue));
}

/*}}}  */
/*{{{  LOC_NatCon LOC_makeNatConNatCon(const char* string) */

LOC_NatCon LOC_makeNatConNatCon(const char* string)
{
  return (LOC_NatCon)(ATerm) (ATerm) ATmakeAppl(ATmakeAFun(string, 0, ATtrue));
}

/*}}}  */
/*{{{  LOC_Location LOC_makeLocationFile(const char* filename) */

LOC_Location LOC_makeLocationFile(const char* filename)
{
  return (LOC_Location)(ATerm)ATmakeAppl1(LOC_afun0, (ATerm) (ATerm) ATmakeAppl(ATmakeAFun(filename, 0, ATtrue)));
}

/*}}}  */
/*{{{  LOC_Location LOC_makeLocationAreaInFile(const char* filename, LOC_Area Area) */

LOC_Location LOC_makeLocationAreaInFile(const char* filename, LOC_Area Area)
{
  return (LOC_Location)(ATerm)ATmakeAppl2(LOC_afun1, (ATerm) (ATerm) ATmakeAppl(ATmakeAFun(filename, 0, ATtrue)), (ATerm) Area);
}

/*}}}  */
/*{{{  LOC_Area LOC_makeAreaArea(int beginLine, int beginColumn, int endLine, int endColumn, int offset, int length) */

LOC_Area LOC_makeAreaArea(int beginLine, int beginColumn, int endLine, int endColumn, int offset, int length)
{
  return (LOC_Area)(ATerm)ATmakeAppl6(LOC_afun2, (ATerm) (ATerm) ATmakeInt(beginLine), (ATerm) (ATerm) ATmakeInt(beginColumn), (ATerm) (ATerm) ATmakeInt(endLine), (ATerm) (ATerm) ATmakeInt(endColumn), (ATerm) (ATerm) ATmakeInt(offset), (ATerm) (ATerm) ATmakeInt(length));
}

/*}}}  */

/*}}}  */
/*{{{  equality functions */

ATbool LOC_isEqualNormal(LOC_Normal arg0, LOC_Normal arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool LOC_isEqualEscaped(LOC_Escaped arg0, LOC_Escaped arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool LOC_isEqualStrCon(LOC_StrCon arg0, LOC_StrCon arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool LOC_isEqualNatCon(LOC_NatCon arg0, LOC_NatCon arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool LOC_isEqualLocation(LOC_Location arg0, LOC_Location arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool LOC_isEqualArea(LOC_Area arg0, LOC_Area arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/*}}}  */
/*{{{  LOC_Normal accessors */

/*{{{  ATbool LOC_isValidNormal(LOC_Normal arg) */

ATbool LOC_isValidNormal(LOC_Normal arg)
{
  if (LOC_isNormalNormal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool LOC_isNormalNormal(LOC_Normal arg) */

inline ATbool LOC_isNormalNormal(LOC_Normal arg)
{
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, LOC_patternNormalNormal, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool LOC_hasNormalString(LOC_Normal arg) */

ATbool LOC_hasNormalString(LOC_Normal arg)
{
  if (LOC_isNormalNormal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  char* LOC_getNormalString(LOC_Normal arg) */

char* LOC_getNormalString(LOC_Normal arg)
{
  
    return (char*)ATgetName(ATgetAFun((ATermAppl) arg));
}

/*}}}  */
/*{{{  LOC_Normal LOC_setNormalString(LOC_Normal arg, const char* string) */

LOC_Normal LOC_setNormalString(LOC_Normal arg, const char* string)
{
  if (LOC_isNormalNormal(arg)) {
    return (LOC_Normal)((ATerm) (ATerm) ATmakeAppl(ATmakeAFun(string, 0, ATtrue)));
  }

  ATabort("Normal has no String: %t\n", arg);
  return (LOC_Normal)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  LOC_Escaped accessors */

/*{{{  ATbool LOC_isValidEscaped(LOC_Escaped arg) */

ATbool LOC_isValidEscaped(LOC_Escaped arg)
{
  if (LOC_isEscapedEscaped(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool LOC_isEscapedEscaped(LOC_Escaped arg) */

inline ATbool LOC_isEscapedEscaped(LOC_Escaped arg)
{
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, LOC_patternEscapedEscaped, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool LOC_hasEscapedString(LOC_Escaped arg) */

ATbool LOC_hasEscapedString(LOC_Escaped arg)
{
  if (LOC_isEscapedEscaped(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  char* LOC_getEscapedString(LOC_Escaped arg) */

char* LOC_getEscapedString(LOC_Escaped arg)
{
  
    return (char*)ATgetName(ATgetAFun((ATermAppl) arg));
}

/*}}}  */
/*{{{  LOC_Escaped LOC_setEscapedString(LOC_Escaped arg, const char* string) */

LOC_Escaped LOC_setEscapedString(LOC_Escaped arg, const char* string)
{
  if (LOC_isEscapedEscaped(arg)) {
    return (LOC_Escaped)((ATerm) (ATerm) ATmakeAppl(ATmakeAFun(string, 0, ATtrue)));
  }

  ATabort("Escaped has no String: %t\n", arg);
  return (LOC_Escaped)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  LOC_StrCon accessors */

/*{{{  ATbool LOC_isValidStrCon(LOC_StrCon arg) */

ATbool LOC_isValidStrCon(LOC_StrCon arg)
{
  if (LOC_isStrConStrCon(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool LOC_isStrConStrCon(LOC_StrCon arg) */

inline ATbool LOC_isStrConStrCon(LOC_StrCon arg)
{
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, LOC_patternStrConStrCon, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool LOC_hasStrConString(LOC_StrCon arg) */

ATbool LOC_hasStrConString(LOC_StrCon arg)
{
  if (LOC_isStrConStrCon(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  char* LOC_getStrConString(LOC_StrCon arg) */

char* LOC_getStrConString(LOC_StrCon arg)
{
  
    return (char*)ATgetName(ATgetAFun((ATermAppl) arg));
}

/*}}}  */
/*{{{  LOC_StrCon LOC_setStrConString(LOC_StrCon arg, const char* string) */

LOC_StrCon LOC_setStrConString(LOC_StrCon arg, const char* string)
{
  if (LOC_isStrConStrCon(arg)) {
    return (LOC_StrCon)((ATerm) (ATerm) ATmakeAppl(ATmakeAFun(string, 0, ATtrue)));
  }

  ATabort("StrCon has no String: %t\n", arg);
  return (LOC_StrCon)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  LOC_NatCon accessors */

/*{{{  ATbool LOC_isValidNatCon(LOC_NatCon arg) */

ATbool LOC_isValidNatCon(LOC_NatCon arg)
{
  if (LOC_isNatConNatCon(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool LOC_isNatConNatCon(LOC_NatCon arg) */

inline ATbool LOC_isNatConNatCon(LOC_NatCon arg)
{
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, LOC_patternNatConNatCon, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool LOC_hasNatConString(LOC_NatCon arg) */

ATbool LOC_hasNatConString(LOC_NatCon arg)
{
  if (LOC_isNatConNatCon(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  char* LOC_getNatConString(LOC_NatCon arg) */

char* LOC_getNatConString(LOC_NatCon arg)
{
  
    return (char*)ATgetName(ATgetAFun((ATermAppl) arg));
}

/*}}}  */
/*{{{  LOC_NatCon LOC_setNatConString(LOC_NatCon arg, const char* string) */

LOC_NatCon LOC_setNatConString(LOC_NatCon arg, const char* string)
{
  if (LOC_isNatConNatCon(arg)) {
    return (LOC_NatCon)((ATerm) (ATerm) ATmakeAppl(ATmakeAFun(string, 0, ATtrue)));
  }

  ATabort("NatCon has no String: %t\n", arg);
  return (LOC_NatCon)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  LOC_Location accessors */

/*{{{  ATbool LOC_isValidLocation(LOC_Location arg) */

ATbool LOC_isValidLocation(LOC_Location arg)
{
  if (LOC_isLocationFile(arg)) {
    return ATtrue;
  }
  else if (LOC_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool LOC_isLocationFile(LOC_Location arg) */

inline ATbool LOC_isLocationFile(LOC_Location arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, LOC_patternLocationFile, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool LOC_isLocationAreaInFile(LOC_Location arg) */

inline ATbool LOC_isLocationAreaInFile(LOC_Location arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, LOC_patternLocationAreaInFile, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  ATbool LOC_hasLocationFilename(LOC_Location arg) */

ATbool LOC_hasLocationFilename(LOC_Location arg)
{
  if (LOC_isLocationFile(arg)) {
    return ATtrue;
  }
  else if (LOC_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  char* LOC_getLocationFilename(LOC_Location arg) */

char* LOC_getLocationFilename(LOC_Location arg)
{
  if (LOC_isLocationFile(arg)) {
    return (char*)ATgetName(ATgetAFun((ATermAppl) ATgetArgument((ATermAppl)arg, 0)));
  }
  else 
    return (char*)ATgetName(ATgetAFun((ATermAppl) ATgetArgument((ATermAppl)arg, 0)));
}

/*}}}  */
/*{{{  LOC_Location LOC_setLocationFilename(LOC_Location arg, const char* filename) */

LOC_Location LOC_setLocationFilename(LOC_Location arg, const char* filename)
{
  if (LOC_isLocationFile(arg)) {
    return (LOC_Location)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeAppl(ATmakeAFun(filename, 0, ATtrue))), 0);
  }
  else if (LOC_isLocationAreaInFile(arg)) {
    return (LOC_Location)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeAppl(ATmakeAFun(filename, 0, ATtrue))), 0);
  }

  ATabort("Location has no Filename: %t\n", arg);
  return (LOC_Location)NULL;
}

/*}}}  */
/*{{{  ATbool LOC_hasLocationArea(LOC_Location arg) */

ATbool LOC_hasLocationArea(LOC_Location arg)
{
  if (LOC_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  LOC_Area LOC_getLocationArea(LOC_Location arg) */

LOC_Area LOC_getLocationArea(LOC_Location arg)
{
  
    return (LOC_Area)ATgetArgument((ATermAppl)arg, 1);
}

/*}}}  */
/*{{{  LOC_Location LOC_setLocationArea(LOC_Location arg, LOC_Area Area) */

LOC_Location LOC_setLocationArea(LOC_Location arg, LOC_Area Area)
{
  if (LOC_isLocationAreaInFile(arg)) {
    return (LOC_Location)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) Area), 1);
  }

  ATabort("Location has no Area: %t\n", arg);
  return (LOC_Location)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  LOC_Area accessors */

/*{{{  ATbool LOC_isValidArea(LOC_Area arg) */

ATbool LOC_isValidArea(LOC_Area arg)
{
  if (LOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool LOC_isAreaArea(LOC_Area arg) */

inline ATbool LOC_isAreaArea(LOC_Area arg)
{
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, LOC_patternAreaArea, NULL, NULL, NULL, NULL, NULL, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool LOC_hasAreaBeginLine(LOC_Area arg) */

ATbool LOC_hasAreaBeginLine(LOC_Area arg)
{
  if (LOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  int LOC_getAreaBeginLine(LOC_Area arg) */

int LOC_getAreaBeginLine(LOC_Area arg)
{
  
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 0));
}

/*}}}  */
/*{{{  LOC_Area LOC_setAreaBeginLine(LOC_Area arg, int beginLine) */

LOC_Area LOC_setAreaBeginLine(LOC_Area arg, int beginLine)
{
  if (LOC_isAreaArea(arg)) {
    return (LOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(beginLine)), 0);
  }

  ATabort("Area has no BeginLine: %t\n", arg);
  return (LOC_Area)NULL;
}

/*}}}  */
/*{{{  ATbool LOC_hasAreaBeginColumn(LOC_Area arg) */

ATbool LOC_hasAreaBeginColumn(LOC_Area arg)
{
  if (LOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  int LOC_getAreaBeginColumn(LOC_Area arg) */

int LOC_getAreaBeginColumn(LOC_Area arg)
{
  
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 1));
}

/*}}}  */
/*{{{  LOC_Area LOC_setAreaBeginColumn(LOC_Area arg, int beginColumn) */

LOC_Area LOC_setAreaBeginColumn(LOC_Area arg, int beginColumn)
{
  if (LOC_isAreaArea(arg)) {
    return (LOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(beginColumn)), 1);
  }

  ATabort("Area has no BeginColumn: %t\n", arg);
  return (LOC_Area)NULL;
}

/*}}}  */
/*{{{  ATbool LOC_hasAreaEndLine(LOC_Area arg) */

ATbool LOC_hasAreaEndLine(LOC_Area arg)
{
  if (LOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  int LOC_getAreaEndLine(LOC_Area arg) */

int LOC_getAreaEndLine(LOC_Area arg)
{
  
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 2));
}

/*}}}  */
/*{{{  LOC_Area LOC_setAreaEndLine(LOC_Area arg, int endLine) */

LOC_Area LOC_setAreaEndLine(LOC_Area arg, int endLine)
{
  if (LOC_isAreaArea(arg)) {
    return (LOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(endLine)), 2);
  }

  ATabort("Area has no EndLine: %t\n", arg);
  return (LOC_Area)NULL;
}

/*}}}  */
/*{{{  ATbool LOC_hasAreaEndColumn(LOC_Area arg) */

ATbool LOC_hasAreaEndColumn(LOC_Area arg)
{
  if (LOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  int LOC_getAreaEndColumn(LOC_Area arg) */

int LOC_getAreaEndColumn(LOC_Area arg)
{
  
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 3));
}

/*}}}  */
/*{{{  LOC_Area LOC_setAreaEndColumn(LOC_Area arg, int endColumn) */

LOC_Area LOC_setAreaEndColumn(LOC_Area arg, int endColumn)
{
  if (LOC_isAreaArea(arg)) {
    return (LOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(endColumn)), 3);
  }

  ATabort("Area has no EndColumn: %t\n", arg);
  return (LOC_Area)NULL;
}

/*}}}  */
/*{{{  ATbool LOC_hasAreaOffset(LOC_Area arg) */

ATbool LOC_hasAreaOffset(LOC_Area arg)
{
  if (LOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  int LOC_getAreaOffset(LOC_Area arg) */

int LOC_getAreaOffset(LOC_Area arg)
{
  
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 4));
}

/*}}}  */
/*{{{  LOC_Area LOC_setAreaOffset(LOC_Area arg, int offset) */

LOC_Area LOC_setAreaOffset(LOC_Area arg, int offset)
{
  if (LOC_isAreaArea(arg)) {
    return (LOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(offset)), 4);
  }

  ATabort("Area has no Offset: %t\n", arg);
  return (LOC_Area)NULL;
}

/*}}}  */
/*{{{  ATbool LOC_hasAreaLength(LOC_Area arg) */

ATbool LOC_hasAreaLength(LOC_Area arg)
{
  if (LOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  int LOC_getAreaLength(LOC_Area arg) */

int LOC_getAreaLength(LOC_Area arg)
{
  
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 5));
}

/*}}}  */
/*{{{  LOC_Area LOC_setAreaLength(LOC_Area arg, int length) */

LOC_Area LOC_setAreaLength(LOC_Area arg, int length)
{
  if (LOC_isAreaArea(arg)) {
    return (LOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(length)), 5);
  }

  ATabort("Area has no Length: %t\n", arg);
  return (LOC_Area)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  sort visitors */

/*{{{  LOC_Normal LOC_visitNormal(LOC_Normal arg, char* (*acceptString)(char*)) */

LOC_Normal LOC_visitNormal(LOC_Normal arg, char* (*acceptString)(char*))
{
  if (LOC_isNormalNormal(arg)) {
    return LOC_makeNormalNormal(
        acceptString ? acceptString(LOC_getNormalString(arg)) : LOC_getNormalString(arg));
  }
  ATabort("not a Normal: %t\n", arg);
  return (LOC_Normal)NULL;
}

/*}}}  */
/*{{{  LOC_Escaped LOC_visitEscaped(LOC_Escaped arg, char* (*acceptString)(char*)) */

LOC_Escaped LOC_visitEscaped(LOC_Escaped arg, char* (*acceptString)(char*))
{
  if (LOC_isEscapedEscaped(arg)) {
    return LOC_makeEscapedEscaped(
        acceptString ? acceptString(LOC_getEscapedString(arg)) : LOC_getEscapedString(arg));
  }
  ATabort("not a Escaped: %t\n", arg);
  return (LOC_Escaped)NULL;
}

/*}}}  */
/*{{{  LOC_StrCon LOC_visitStrCon(LOC_StrCon arg, char* (*acceptString)(char*)) */

LOC_StrCon LOC_visitStrCon(LOC_StrCon arg, char* (*acceptString)(char*))
{
  if (LOC_isStrConStrCon(arg)) {
    return LOC_makeStrConStrCon(
        acceptString ? acceptString(LOC_getStrConString(arg)) : LOC_getStrConString(arg));
  }
  ATabort("not a StrCon: %t\n", arg);
  return (LOC_StrCon)NULL;
}

/*}}}  */
/*{{{  LOC_NatCon LOC_visitNatCon(LOC_NatCon arg, char* (*acceptString)(char*)) */

LOC_NatCon LOC_visitNatCon(LOC_NatCon arg, char* (*acceptString)(char*))
{
  if (LOC_isNatConNatCon(arg)) {
    return LOC_makeNatConNatCon(
        acceptString ? acceptString(LOC_getNatConString(arg)) : LOC_getNatConString(arg));
  }
  ATabort("not a NatCon: %t\n", arg);
  return (LOC_NatCon)NULL;
}

/*}}}  */
/*{{{  LOC_Location LOC_visitLocation(LOC_Location arg, char* (*acceptFilename)(char*), LOC_Area (*acceptArea)(LOC_Area)) */

LOC_Location LOC_visitLocation(LOC_Location arg, char* (*acceptFilename)(char*), LOC_Area (*acceptArea)(LOC_Area))
{
  if (LOC_isLocationFile(arg)) {
    return LOC_makeLocationFile(
        acceptFilename ? acceptFilename(LOC_getLocationFilename(arg)) : LOC_getLocationFilename(arg));
  }
  if (LOC_isLocationAreaInFile(arg)) {
    return LOC_makeLocationAreaInFile(
        acceptFilename ? acceptFilename(LOC_getLocationFilename(arg)) : LOC_getLocationFilename(arg),
        acceptArea ? acceptArea(LOC_getLocationArea(arg)) : LOC_getLocationArea(arg));
  }
  ATabort("not a Location: %t\n", arg);
  return (LOC_Location)NULL;
}

/*}}}  */
/*{{{  LOC_Area LOC_visitArea(LOC_Area arg, int (*acceptBeginLine)(int), int (*acceptBeginColumn)(int), int (*acceptEndLine)(int), int (*acceptEndColumn)(int), int (*acceptOffset)(int), int (*acceptLength)(int)) */

LOC_Area LOC_visitArea(LOC_Area arg, int (*acceptBeginLine)(int), int (*acceptBeginColumn)(int), int (*acceptEndLine)(int), int (*acceptEndColumn)(int), int (*acceptOffset)(int), int (*acceptLength)(int))
{
  if (LOC_isAreaArea(arg)) {
    return LOC_makeAreaArea(
        acceptBeginLine ? acceptBeginLine(LOC_getAreaBeginLine(arg)) : LOC_getAreaBeginLine(arg),
        acceptBeginColumn ? acceptBeginColumn(LOC_getAreaBeginColumn(arg)) : LOC_getAreaBeginColumn(arg),
        acceptEndLine ? acceptEndLine(LOC_getAreaEndLine(arg)) : LOC_getAreaEndLine(arg),
        acceptEndColumn ? acceptEndColumn(LOC_getAreaEndColumn(arg)) : LOC_getAreaEndColumn(arg),
        acceptOffset ? acceptOffset(LOC_getAreaOffset(arg)) : LOC_getAreaOffset(arg),
        acceptLength ? acceptLength(LOC_getAreaLength(arg)) : LOC_getAreaLength(arg));
  }
  ATabort("not a Area: %t\n", arg);
  return (LOC_Area)NULL;
}

/*}}}  */

/*}}}  */
