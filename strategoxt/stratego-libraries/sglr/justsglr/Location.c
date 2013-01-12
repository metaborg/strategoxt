#include <assert.h>

#include <aterm2.h>
#include <deprecated.h>
#include "Location.h"

ATerm LOC_stringToChars(const char *str) {
  int len = strlen(str);
  int i;
  ATermList result = ATempty;

  for (i = len - 1; i >= 0; i--) {
    result = ATinsert(result, (ATerm) ATmakeInt(str[i]));
  }

  return (ATerm) result;
}

ATerm LOC_byteToChar(char ch) {
    return (ATerm) ATmakeInt(ch);
}

char *LOC_charsToString(ATerm arg) {
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

char LOC_charToByte(ATerm arg) {
    return (char) ATgetInt((ATermInt) arg);
}


typedef struct ATerm _LOC_StrChar;
typedef struct ATerm _LOC_StrCon;
typedef struct ATerm _LOC_NatCon;
typedef struct ATerm _LOC_Location;
typedef struct ATerm _LOC_Area;
typedef struct ATerm _LOC_Slice;
typedef struct ATerm _LOC_AreaAreas;

void LOC_initLocationApi(void) {
  init_Location_dict();
}

void LOC_protectStrChar(LOC_StrChar *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void LOC_unprotectStrChar(LOC_StrChar *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void LOC_protectStrCon(LOC_StrCon *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void LOC_unprotectStrCon(LOC_StrCon *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void LOC_protectNatCon(LOC_NatCon *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void LOC_unprotectNatCon(LOC_NatCon *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void LOC_protectLocation(LOC_Location *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void LOC_unprotectLocation(LOC_Location *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void LOC_protectArea(LOC_Area *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void LOC_unprotectArea(LOC_Area *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void LOC_protectSlice(LOC_Slice *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void LOC_unprotectSlice(LOC_Slice *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void LOC_protectAreaAreas(LOC_AreaAreas *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void LOC_unprotectAreaAreas(LOC_AreaAreas *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

LOC_StrChar LOC_StrCharFromTerm(ATerm t) {
  return (LOC_StrChar)t;
}

ATerm LOC_StrCharToTerm(LOC_StrChar arg) {
  return (ATerm)arg;
}

LOC_StrCon LOC_StrConFromTerm(ATerm t) {
  return (LOC_StrCon)t;
}

ATerm LOC_StrConToTerm(LOC_StrCon arg) {
  return (ATerm)arg;
}

LOC_NatCon LOC_NatConFromTerm(ATerm t) {
  return (LOC_NatCon)t;
}

ATerm LOC_NatConToTerm(LOC_NatCon arg) {
  return (ATerm)arg;
}

LOC_Location LOC_LocationFromTerm(ATerm t) {
  return (LOC_Location)t;
}

ATerm LOC_LocationToTerm(LOC_Location arg) {
  return (ATerm)arg;
}

LOC_Area LOC_AreaFromTerm(ATerm t) {
  return (LOC_Area)t;
}

ATerm LOC_AreaToTerm(LOC_Area arg) {
  return (ATerm)arg;
}

LOC_Slice LOC_SliceFromTerm(ATerm t) {
  return (LOC_Slice)t;
}

ATerm LOC_SliceToTerm(LOC_Slice arg) {
  return (ATerm)arg;
}

LOC_AreaAreas LOC_AreaAreasFromTerm(ATerm t) {
  return (LOC_AreaAreas)t;
}

ATerm LOC_AreaAreasToTerm(LOC_AreaAreas arg) {
  return (ATerm)arg;
}

int LOC_getAreaAreasLength (LOC_AreaAreas arg) {
  return ATgetLength((ATermList) arg);
}

LOC_AreaAreas LOC_reverseAreaAreas(LOC_AreaAreas arg) {
  return (LOC_AreaAreas) ATreverse((ATermList) arg);
}

LOC_AreaAreas LOC_appendAreaAreas(LOC_AreaAreas arg, LOC_Area elem) {
  return (LOC_AreaAreas) ATappend((ATermList) arg, (ATerm) ((ATerm) elem));
}

LOC_AreaAreas LOC_concatAreaAreas(LOC_AreaAreas arg0, LOC_AreaAreas arg1) {
  return (LOC_AreaAreas) ATconcat((ATermList) arg0, (ATermList) arg1);
}

LOC_AreaAreas LOC_sliceAreaAreas(LOC_AreaAreas arg, int start, int end) {
  return (LOC_AreaAreas) ATgetSlice((ATermList) arg, start, end);
}

LOC_Area LOC_getAreaAreasAreaAt(LOC_AreaAreas arg, int index) {
 return (LOC_Area)ATelementAt((ATermList) arg,index);
}

LOC_AreaAreas LOC_replaceAreaAreasAreaAt(LOC_AreaAreas arg, LOC_Area elem, int index) {
 return (LOC_AreaAreas) ATreplace((ATermList) arg, (ATerm) ((ATerm) elem), index);
}

LOC_AreaAreas LOC_makeAreaAreas2(LOC_Area elem1, LOC_Area elem2) {
  return (LOC_AreaAreas) ATmakeList2((ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem2));
}

LOC_AreaAreas LOC_makeAreaAreas3(LOC_Area elem1, LOC_Area elem2, LOC_Area elem3) {
  return (LOC_AreaAreas) ATmakeList3((ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem3));
}

LOC_AreaAreas LOC_makeAreaAreas4(LOC_Area elem1, LOC_Area elem2, LOC_Area elem3, LOC_Area elem4) {
  return (LOC_AreaAreas) ATmakeList4((ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem4));
}

LOC_AreaAreas LOC_makeAreaAreas5(LOC_Area elem1, LOC_Area elem2, LOC_Area elem3, LOC_Area elem4, LOC_Area elem5) {
  return (LOC_AreaAreas) ATmakeList5((ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem5));
}

LOC_AreaAreas LOC_makeAreaAreas6(LOC_Area elem1, LOC_Area elem2, LOC_Area elem3, LOC_Area elem4, LOC_Area elem5, LOC_Area elem6) {
  return (LOC_AreaAreas) ATmakeList6((ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6));
}

LOC_StrChar LOC_makeStrCharStrChar(const char* string) {
  return (LOC_StrChar)(ATerm) (ATerm) ATmakeAppl(ATmakeAFun(string, 0, ATtrue));
}
LOC_StrCon LOC_makeStrConStrCon(const char* string) {
  return (LOC_StrCon)(ATerm) (ATerm) ATmakeAppl(ATmakeAFun(string, 0, ATtrue));
}
LOC_NatCon LOC_makeNatConNatCon(const char* string) {
  return (LOC_NatCon)(ATerm) (ATerm) ATmakeAppl(ATmakeAFun(string, 0, ATtrue));
}
LOC_Location LOC_makeLocationFile(const char* filename) {
  return (LOC_Location)(ATerm)ATmakeAppl1(LOC_afun0, (ATerm) (ATerm) ATmakeAppl(ATmakeAFun(filename, 0, ATtrue)));
}
LOC_Location LOC_makeLocationArea(LOC_Area Area) {
  return (LOC_Location)(ATerm)ATmakeAppl1(LOC_afun1, (ATerm) Area);
}
LOC_Location LOC_makeLocationAreaInFile(const char* filename, LOC_Area Area) {
  return (LOC_Location)(ATerm)ATmakeAppl2(LOC_afun2, (ATerm) (ATerm) ATmakeAppl(ATmakeAFun(filename, 0, ATtrue)), (ATerm) Area);
}
LOC_Area LOC_makeAreaArea(int beginLine, int beginColumn, int endLine, int endColumn, int offset, int length) {
  return (LOC_Area)(ATerm)ATmakeAppl6(LOC_afun3, (ATerm) (ATerm) ATmakeInt(beginLine), (ATerm) (ATerm) ATmakeInt(beginColumn), (ATerm) (ATerm) ATmakeInt(endLine), (ATerm) (ATerm) ATmakeInt(endColumn), (ATerm) (ATerm) ATmakeInt(offset), (ATerm) (ATerm) ATmakeInt(length));
}
LOC_Slice LOC_makeSliceSlice(const char* id, LOC_AreaAreas areas) {
  return (LOC_Slice)(ATerm)ATmakeAppl2(LOC_afun4, (ATerm) (ATerm) ATmakeAppl(ATmakeAFun(id, 0, ATtrue)), (ATerm) areas);
}
LOC_AreaAreas LOC_makeAreaAreasEmpty(void) {
  return (LOC_AreaAreas)(ATerm)ATempty;
}
LOC_AreaAreas LOC_makeAreaAreasSingle(LOC_Area head) {
  return (LOC_AreaAreas)(ATerm)ATmakeList1((ATerm) head);
}
LOC_AreaAreas LOC_makeAreaAreasMany(LOC_Area head, LOC_AreaAreas tail) {
  return (LOC_AreaAreas)(ATerm)ATinsert((ATermList)tail, (ATerm) head);
}

ATbool LOC_isEqualStrChar(LOC_StrChar arg0, LOC_StrChar arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool LOC_isEqualStrCon(LOC_StrCon arg0, LOC_StrCon arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool LOC_isEqualNatCon(LOC_NatCon arg0, LOC_NatCon arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool LOC_isEqualLocation(LOC_Location arg0, LOC_Location arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool LOC_isEqualArea(LOC_Area arg0, LOC_Area arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool LOC_isEqualSlice(LOC_Slice arg0, LOC_Slice arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool LOC_isEqualAreaAreas(LOC_AreaAreas arg0, LOC_AreaAreas arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool LOC_isValidStrChar(LOC_StrChar arg) {
  if (LOC_isStrCharStrChar(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool LOC_isStrCharStrChar(LOC_StrChar arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, LOC_patternStrCharStrChar, NULL));
#endif
  return ATtrue;
}

ATbool LOC_hasStrCharString(LOC_StrChar arg) {
  if (LOC_isStrCharStrChar(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

char* LOC_getStrCharString(LOC_StrChar arg) {
  
    return (char*)ATgetName(ATgetAFun((ATermAppl) arg));
}

LOC_StrChar LOC_setStrCharString(LOC_StrChar arg, const char* string) {
  if (LOC_isStrCharStrChar(arg)) {
    return (LOC_StrChar)((ATerm) (ATerm) ATmakeAppl(ATmakeAFun(string, 0, ATtrue)));
  }

  ATabort("StrChar has no String: %t\n", arg);
  return (LOC_StrChar)NULL;
}

ATbool LOC_isValidStrCon(LOC_StrCon arg) {
  if (LOC_isStrConStrCon(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool LOC_isStrConStrCon(LOC_StrCon arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, LOC_patternStrConStrCon, NULL));
#endif
  return ATtrue;
}

ATbool LOC_hasStrConString(LOC_StrCon arg) {
  if (LOC_isStrConStrCon(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

char* LOC_getStrConString(LOC_StrCon arg) {
  
    return (char*)ATgetName(ATgetAFun((ATermAppl) arg));
}

LOC_StrCon LOC_setStrConString(LOC_StrCon arg, const char* string) {
  if (LOC_isStrConStrCon(arg)) {
    return (LOC_StrCon)((ATerm) (ATerm) ATmakeAppl(ATmakeAFun(string, 0, ATtrue)));
  }

  ATabort("StrCon has no String: %t\n", arg);
  return (LOC_StrCon)NULL;
}

ATbool LOC_isValidNatCon(LOC_NatCon arg) {
  if (LOC_isNatConNatCon(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool LOC_isNatConNatCon(LOC_NatCon arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, LOC_patternNatConNatCon, NULL));
#endif
  return ATtrue;
}

ATbool LOC_hasNatConString(LOC_NatCon arg) {
  if (LOC_isNatConNatCon(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

char* LOC_getNatConString(LOC_NatCon arg) {
  
    return (char*)ATgetName(ATgetAFun((ATermAppl) arg));
}

LOC_NatCon LOC_setNatConString(LOC_NatCon arg, const char* string) {
  if (LOC_isNatConNatCon(arg)) {
    return (LOC_NatCon)((ATerm) (ATerm) ATmakeAppl(ATmakeAFun(string, 0, ATtrue)));
  }

  ATabort("NatCon has no String: %t\n", arg);
  return (LOC_NatCon)NULL;
}

ATbool LOC_isValidLocation(LOC_Location arg) {
  if (LOC_isLocationFile(arg)) {
    return ATtrue;
  }
  else if (LOC_isLocationArea(arg)) {
    return ATtrue;
  }
  else if (LOC_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool LOC_isLocationFile(LOC_Location arg) {
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

inline ATbool LOC_isLocationArea(LOC_Location arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, LOC_patternLocationArea, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool LOC_isLocationAreaInFile(LOC_Location arg) {
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

ATbool LOC_hasLocationFilename(LOC_Location arg) {
  if (LOC_isLocationFile(arg)) {
    return ATtrue;
  }
  else if (LOC_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool LOC_hasLocationArea(LOC_Location arg) {
  if (LOC_isLocationArea(arg)) {
    return ATtrue;
  }
  else if (LOC_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

char* LOC_getLocationFilename(LOC_Location arg) {
  if (LOC_isLocationFile(arg)) {
    return (char*)ATgetName(ATgetAFun((ATermAppl) ATgetArgument((ATermAppl)arg, 0)));
  }
  else 
    return (char*)ATgetName(ATgetAFun((ATermAppl) ATgetArgument((ATermAppl)arg, 0)));
}

LOC_Area LOC_getLocationArea(LOC_Location arg) {
  if (LOC_isLocationArea(arg)) {
    return (LOC_Area)ATgetArgument((ATermAppl)arg, 0);
  }
  else 
    return (LOC_Area)ATgetArgument((ATermAppl)arg, 1);
}

LOC_Location LOC_setLocationFilename(LOC_Location arg, const char* filename) {
  if (LOC_isLocationFile(arg)) {
    return (LOC_Location)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeAppl(ATmakeAFun(filename, 0, ATtrue))), 0);
  }
  else if (LOC_isLocationAreaInFile(arg)) {
    return (LOC_Location)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeAppl(ATmakeAFun(filename, 0, ATtrue))), 0);
  }

  ATabort("Location has no Filename: %t\n", arg);
  return (LOC_Location)NULL;
}

LOC_Location LOC_setLocationArea(LOC_Location arg, LOC_Area Area) {
  if (LOC_isLocationArea(arg)) {
    return (LOC_Location)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) Area), 0);
  }
  else if (LOC_isLocationAreaInFile(arg)) {
    return (LOC_Location)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) Area), 1);
  }

  ATabort("Location has no Area: %t\n", arg);
  return (LOC_Location)NULL;
}

ATbool LOC_isValidArea(LOC_Area arg) {
  if (LOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool LOC_isAreaArea(LOC_Area arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, LOC_patternAreaArea, NULL, NULL, NULL, NULL, NULL, NULL));
#endif
  return ATtrue;
}

ATbool LOC_hasAreaBeginLine(LOC_Area arg) {
  if (LOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool LOC_hasAreaBeginColumn(LOC_Area arg) {
  if (LOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool LOC_hasAreaEndLine(LOC_Area arg) {
  if (LOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool LOC_hasAreaEndColumn(LOC_Area arg) {
  if (LOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool LOC_hasAreaOffset(LOC_Area arg) {
  if (LOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool LOC_hasAreaLength(LOC_Area arg) {
  if (LOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

int LOC_getAreaBeginLine(LOC_Area arg) {
  
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 0));
}

int LOC_getAreaBeginColumn(LOC_Area arg) {
  
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 1));
}

int LOC_getAreaEndLine(LOC_Area arg) {
  
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 2));
}

int LOC_getAreaEndColumn(LOC_Area arg) {
  
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 3));
}

int LOC_getAreaOffset(LOC_Area arg) {
  
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 4));
}

int LOC_getAreaLength(LOC_Area arg) {
  
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 5));
}

LOC_Area LOC_setAreaBeginLine(LOC_Area arg, int beginLine) {
  if (LOC_isAreaArea(arg)) {
    return (LOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(beginLine)), 0);
  }

  ATabort("Area has no BeginLine: %t\n", arg);
  return (LOC_Area)NULL;
}

LOC_Area LOC_setAreaBeginColumn(LOC_Area arg, int beginColumn) {
  if (LOC_isAreaArea(arg)) {
    return (LOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(beginColumn)), 1);
  }

  ATabort("Area has no BeginColumn: %t\n", arg);
  return (LOC_Area)NULL;
}

LOC_Area LOC_setAreaEndLine(LOC_Area arg, int endLine) {
  if (LOC_isAreaArea(arg)) {
    return (LOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(endLine)), 2);
  }

  ATabort("Area has no EndLine: %t\n", arg);
  return (LOC_Area)NULL;
}

LOC_Area LOC_setAreaEndColumn(LOC_Area arg, int endColumn) {
  if (LOC_isAreaArea(arg)) {
    return (LOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(endColumn)), 3);
  }

  ATabort("Area has no EndColumn: %t\n", arg);
  return (LOC_Area)NULL;
}

LOC_Area LOC_setAreaOffset(LOC_Area arg, int offset) {
  if (LOC_isAreaArea(arg)) {
    return (LOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(offset)), 4);
  }

  ATabort("Area has no Offset: %t\n", arg);
  return (LOC_Area)NULL;
}

LOC_Area LOC_setAreaLength(LOC_Area arg, int length) {
  if (LOC_isAreaArea(arg)) {
    return (LOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(length)), 5);
  }

  ATabort("Area has no Length: %t\n", arg);
  return (LOC_Area)NULL;
}

ATbool LOC_isValidSlice(LOC_Slice arg) {
  if (LOC_isSliceSlice(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool LOC_isSliceSlice(LOC_Slice arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, LOC_patternSliceSlice, NULL, NULL));
#endif
  return ATtrue;
}

ATbool LOC_hasSliceId(LOC_Slice arg) {
  if (LOC_isSliceSlice(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool LOC_hasSliceAreas(LOC_Slice arg) {
  if (LOC_isSliceSlice(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

char* LOC_getSliceId(LOC_Slice arg) {
  
    return (char*)ATgetName(ATgetAFun((ATermAppl) ATgetArgument((ATermAppl)arg, 0)));
}

LOC_AreaAreas LOC_getSliceAreas(LOC_Slice arg) {
  
    return (LOC_AreaAreas)ATgetArgument((ATermAppl)arg, 1);
}

LOC_Slice LOC_setSliceId(LOC_Slice arg, const char* id) {
  if (LOC_isSliceSlice(arg)) {
    return (LOC_Slice)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeAppl(ATmakeAFun(id, 0, ATtrue))), 0);
  }

  ATabort("Slice has no Id: %t\n", arg);
  return (LOC_Slice)NULL;
}

LOC_Slice LOC_setSliceAreas(LOC_Slice arg, LOC_AreaAreas areas) {
  if (LOC_isSliceSlice(arg)) {
    return (LOC_Slice)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) areas), 1);
  }

  ATabort("Slice has no Areas: %t\n", arg);
  return (LOC_Slice)NULL;
}

ATbool LOC_isValidAreaAreas(LOC_AreaAreas arg) {
  if (LOC_isAreaAreasEmpty(arg)) {
    return ATtrue;
  }
  else if (LOC_isAreaAreasSingle(arg)) {
    return ATtrue;
  }
  else if (LOC_isAreaAreasMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool LOC_isAreaAreasEmpty(LOC_AreaAreas arg) {
  if (!ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, LOC_patternAreaAreasEmpty));
#endif
  return ATtrue;
}

inline ATbool LOC_isAreaAreasSingle(LOC_AreaAreas arg) {
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
      last_result = ATmatchTerm((ATerm)arg, LOC_patternAreaAreasSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool LOC_isAreaAreasMany(LOC_AreaAreas arg) {
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
      last_result = ATmatchTerm((ATerm)arg, LOC_patternAreaAreasMany, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

ATbool LOC_hasAreaAreasHead(LOC_AreaAreas arg) {
  if (LOC_isAreaAreasSingle(arg)) {
    return ATtrue;
  }
  else if (LOC_isAreaAreasMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool LOC_hasAreaAreasTail(LOC_AreaAreas arg) {
  if (LOC_isAreaAreasMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

LOC_Area LOC_getAreaAreasHead(LOC_AreaAreas arg) {
  if (LOC_isAreaAreasSingle(arg)) {
    return (LOC_Area)ATgetFirst((ATermList)arg);
  }
  else 
    return (LOC_Area)ATgetFirst((ATermList)arg);
}

LOC_AreaAreas LOC_getAreaAreasTail(LOC_AreaAreas arg) {
  
    return (LOC_AreaAreas)ATgetNext((ATermList)arg);
}

LOC_AreaAreas LOC_setAreaAreasHead(LOC_AreaAreas arg, LOC_Area head) {
  if (LOC_isAreaAreasSingle(arg)) {
    return (LOC_AreaAreas)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }
  else if (LOC_isAreaAreasMany(arg)) {
    return (LOC_AreaAreas)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }

  ATabort("AreaAreas has no Head: %t\n", arg);
  return (LOC_AreaAreas)NULL;
}

LOC_AreaAreas LOC_setAreaAreasTail(LOC_AreaAreas arg, LOC_AreaAreas tail) {
  if (LOC_isAreaAreasMany(arg)) {
    return (LOC_AreaAreas)ATreplaceTail((ATermList)arg, (ATermList)((ATerm) tail), 1);
  }

  ATabort("AreaAreas has no Tail: %t\n", arg);
  return (LOC_AreaAreas)NULL;
}

LOC_StrChar LOC_visitStrChar(LOC_StrChar arg, char* (*acceptString)(char*)) {
  if (LOC_isStrCharStrChar(arg)) {
    return LOC_makeStrCharStrChar(
        acceptString ? acceptString(LOC_getStrCharString(arg)) : LOC_getStrCharString(arg));
  }
  ATabort("not a StrChar: %t\n", arg);
  return (LOC_StrChar)NULL;
}
LOC_StrCon LOC_visitStrCon(LOC_StrCon arg, char* (*acceptString)(char*)) {
  if (LOC_isStrConStrCon(arg)) {
    return LOC_makeStrConStrCon(
        acceptString ? acceptString(LOC_getStrConString(arg)) : LOC_getStrConString(arg));
  }
  ATabort("not a StrCon: %t\n", arg);
  return (LOC_StrCon)NULL;
}
LOC_NatCon LOC_visitNatCon(LOC_NatCon arg, char* (*acceptString)(char*)) {
  if (LOC_isNatConNatCon(arg)) {
    return LOC_makeNatConNatCon(
        acceptString ? acceptString(LOC_getNatConString(arg)) : LOC_getNatConString(arg));
  }
  ATabort("not a NatCon: %t\n", arg);
  return (LOC_NatCon)NULL;
}
LOC_Location LOC_visitLocation(LOC_Location arg, char* (*acceptFilename)(char*), LOC_Area (*acceptArea)(LOC_Area)) {
  if (LOC_isLocationFile(arg)) {
    return LOC_makeLocationFile(
        acceptFilename ? acceptFilename(LOC_getLocationFilename(arg)) : LOC_getLocationFilename(arg));
  }
  if (LOC_isLocationArea(arg)) {
    return LOC_makeLocationArea(
        acceptArea ? acceptArea(LOC_getLocationArea(arg)) : LOC_getLocationArea(arg));
  }
  if (LOC_isLocationAreaInFile(arg)) {
    return LOC_makeLocationAreaInFile(
        acceptFilename ? acceptFilename(LOC_getLocationFilename(arg)) : LOC_getLocationFilename(arg),
        acceptArea ? acceptArea(LOC_getLocationArea(arg)) : LOC_getLocationArea(arg));
  }
  ATabort("not a Location: %t\n", arg);
  return (LOC_Location)NULL;
}
LOC_Area LOC_visitArea(LOC_Area arg, int (*acceptBeginLine)(int), int (*acceptBeginColumn)(int), int (*acceptEndLine)(int), int (*acceptEndColumn)(int), int (*acceptOffset)(int), int (*acceptLength)(int)) {
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
LOC_Slice LOC_visitSlice(LOC_Slice arg, char* (*acceptId)(char*), LOC_AreaAreas (*acceptAreas)(LOC_AreaAreas)) {
  if (LOC_isSliceSlice(arg)) {
    return LOC_makeSliceSlice(
        acceptId ? acceptId(LOC_getSliceId(arg)) : LOC_getSliceId(arg),
        acceptAreas ? acceptAreas(LOC_getSliceAreas(arg)) : LOC_getSliceAreas(arg));
  }
  ATabort("not a Slice: %t\n", arg);
  return (LOC_Slice)NULL;
}
LOC_AreaAreas LOC_visitAreaAreas(LOC_AreaAreas arg, LOC_Area (*acceptHead)(LOC_Area)) {
  if (LOC_isAreaAreasEmpty(arg)) {
    return LOC_makeAreaAreasEmpty();
  }
  if (LOC_isAreaAreasSingle(arg)) {
    return LOC_makeAreaAreasSingle(
        acceptHead ? acceptHead(LOC_getAreaAreasHead(arg)) : LOC_getAreaAreasHead(arg));
  }
  if (LOC_isAreaAreasMany(arg)) {
    return LOC_makeAreaAreasMany(
        acceptHead ? acceptHead(LOC_getAreaAreasHead(arg)) : LOC_getAreaAreasHead(arg),
        LOC_visitAreaAreas(LOC_getAreaAreasTail(arg), acceptHead));
  }
  ATabort("not a AreaAreas: %t\n", arg);
  return (LOC_AreaAreas)NULL;
}

