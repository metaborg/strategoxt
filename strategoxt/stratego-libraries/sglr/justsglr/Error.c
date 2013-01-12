#include <assert.h>

#include <aterm2.h>
#include <deprecated.h>
#include "Error.h"

ATerm ERR_stringToChars(const char *str) {
  int len = strlen(str);
  int i;
  ATermList result = ATempty;

  for (i = len - 1; i >= 0; i--) {
    result = ATinsert(result, (ATerm) ATmakeInt(str[i]));
  }

  return (ATerm) result;
}

ATerm ERR_byteToChar(char ch) {
    return (ATerm) ATmakeInt(ch);
}

char *ERR_charsToString(ATerm arg) {
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

char ERR_charToByte(ATerm arg) {
    return (char) ATgetInt((ATermInt) arg);
}


typedef struct ATerm _ERR_StrChar;
typedef struct ATerm _ERR_StrCon;
typedef struct ATerm _ERR_NatCon;
typedef struct ATerm _ERR_Subject;
typedef struct ATerm _ERR_Error;
typedef struct ATerm _ERR_Summary;
typedef struct ATerm _ERR_SubjectList;
typedef struct ATerm _ERR_ErrorList;
typedef struct ATerm _ERR_Location;
typedef struct ATerm _ERR_Area;
typedef struct ATerm _ERR_Slice;
typedef struct ATerm _ERR_AreaAreas;

void ERR_initErrorApi(void) {
  init_Error_dict();
}

void ERR_protectStrChar(ERR_StrChar *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void ERR_unprotectStrChar(ERR_StrChar *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void ERR_protectStrCon(ERR_StrCon *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void ERR_unprotectStrCon(ERR_StrCon *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void ERR_protectNatCon(ERR_NatCon *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void ERR_unprotectNatCon(ERR_NatCon *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void ERR_protectSubject(ERR_Subject *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void ERR_unprotectSubject(ERR_Subject *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void ERR_protectError(ERR_Error *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void ERR_unprotectError(ERR_Error *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void ERR_protectSummary(ERR_Summary *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void ERR_unprotectSummary(ERR_Summary *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void ERR_protectSubjectList(ERR_SubjectList *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void ERR_unprotectSubjectList(ERR_SubjectList *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void ERR_protectErrorList(ERR_ErrorList *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void ERR_unprotectErrorList(ERR_ErrorList *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void ERR_protectLocation(ERR_Location *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void ERR_unprotectLocation(ERR_Location *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void ERR_protectArea(ERR_Area *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void ERR_unprotectArea(ERR_Area *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void ERR_protectSlice(ERR_Slice *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void ERR_unprotectSlice(ERR_Slice *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void ERR_protectAreaAreas(ERR_AreaAreas *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void ERR_unprotectAreaAreas(ERR_AreaAreas *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

ERR_StrChar ERR_StrCharFromTerm(ATerm t) {
  return (ERR_StrChar)t;
}

ATerm ERR_StrCharToTerm(ERR_StrChar arg) {
  return (ATerm)arg;
}

ERR_StrCon ERR_StrConFromTerm(ATerm t) {
  return (ERR_StrCon)t;
}

ATerm ERR_StrConToTerm(ERR_StrCon arg) {
  return (ATerm)arg;
}

ERR_NatCon ERR_NatConFromTerm(ATerm t) {
  return (ERR_NatCon)t;
}

ATerm ERR_NatConToTerm(ERR_NatCon arg) {
  return (ATerm)arg;
}

ERR_Subject ERR_SubjectFromTerm(ATerm t) {
  return (ERR_Subject)t;
}

ATerm ERR_SubjectToTerm(ERR_Subject arg) {
  return (ATerm)arg;
}

ERR_Error ERR_ErrorFromTerm(ATerm t) {
  return (ERR_Error)t;
}

ATerm ERR_ErrorToTerm(ERR_Error arg) {
  return (ATerm)arg;
}

ERR_Summary ERR_SummaryFromTerm(ATerm t) {
  return (ERR_Summary)t;
}

ATerm ERR_SummaryToTerm(ERR_Summary arg) {
  return (ATerm)arg;
}

ERR_SubjectList ERR_SubjectListFromTerm(ATerm t) {
  return (ERR_SubjectList)t;
}

ATerm ERR_SubjectListToTerm(ERR_SubjectList arg) {
  return (ATerm)arg;
}

ERR_ErrorList ERR_ErrorListFromTerm(ATerm t) {
  return (ERR_ErrorList)t;
}

ATerm ERR_ErrorListToTerm(ERR_ErrorList arg) {
  return (ATerm)arg;
}

ERR_Location ERR_LocationFromTerm(ATerm t) {
  return (ERR_Location)t;
}

ATerm ERR_LocationToTerm(ERR_Location arg) {
  return (ATerm)arg;
}

ERR_Area ERR_AreaFromTerm(ATerm t) {
  return (ERR_Area)t;
}

ATerm ERR_AreaToTerm(ERR_Area arg) {
  return (ATerm)arg;
}

ERR_Slice ERR_SliceFromTerm(ATerm t) {
  return (ERR_Slice)t;
}

ATerm ERR_SliceToTerm(ERR_Slice arg) {
  return (ATerm)arg;
}

ERR_AreaAreas ERR_AreaAreasFromTerm(ATerm t) {
  return (ERR_AreaAreas)t;
}

ATerm ERR_AreaAreasToTerm(ERR_AreaAreas arg) {
  return (ATerm)arg;
}

int ERR_getSubjectListLength (ERR_SubjectList arg) {
  return ATgetLength((ATermList) arg);
}

ERR_SubjectList ERR_reverseSubjectList(ERR_SubjectList arg) {
  return (ERR_SubjectList) ATreverse((ATermList) arg);
}

ERR_SubjectList ERR_appendSubjectList(ERR_SubjectList arg, ERR_Subject elem) {
  return (ERR_SubjectList) ATappend((ATermList) arg, (ATerm) ((ATerm) elem));
}

ERR_SubjectList ERR_concatSubjectList(ERR_SubjectList arg0, ERR_SubjectList arg1) {
  return (ERR_SubjectList) ATconcat((ATermList) arg0, (ATermList) arg1);
}

ERR_SubjectList ERR_sliceSubjectList(ERR_SubjectList arg, int start, int end) {
  return (ERR_SubjectList) ATgetSlice((ATermList) arg, start, end);
}

ERR_Subject ERR_getSubjectListSubjectAt(ERR_SubjectList arg, int index) {
 return (ERR_Subject)ATelementAt((ATermList) arg,index);
}

ERR_SubjectList ERR_replaceSubjectListSubjectAt(ERR_SubjectList arg, ERR_Subject elem, int index) {
 return (ERR_SubjectList) ATreplace((ATermList) arg, (ATerm) ((ATerm) elem), index);
}

ERR_SubjectList ERR_makeSubjectList2(ERR_Subject elem1, ERR_Subject elem2) {
  return (ERR_SubjectList) ATmakeList2((ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem2));
}

ERR_SubjectList ERR_makeSubjectList3(ERR_Subject elem1, ERR_Subject elem2, ERR_Subject elem3) {
  return (ERR_SubjectList) ATmakeList3((ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem3));
}

ERR_SubjectList ERR_makeSubjectList4(ERR_Subject elem1, ERR_Subject elem2, ERR_Subject elem3, ERR_Subject elem4) {
  return (ERR_SubjectList) ATmakeList4((ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem4));
}

ERR_SubjectList ERR_makeSubjectList5(ERR_Subject elem1, ERR_Subject elem2, ERR_Subject elem3, ERR_Subject elem4, ERR_Subject elem5) {
  return (ERR_SubjectList) ATmakeList5((ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem5));
}

ERR_SubjectList ERR_makeSubjectList6(ERR_Subject elem1, ERR_Subject elem2, ERR_Subject elem3, ERR_Subject elem4, ERR_Subject elem5, ERR_Subject elem6) {
  return (ERR_SubjectList) ATmakeList6((ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6));
}

int ERR_getErrorListLength (ERR_ErrorList arg) {
  return ATgetLength((ATermList) arg);
}

ERR_ErrorList ERR_reverseErrorList(ERR_ErrorList arg) {
  return (ERR_ErrorList) ATreverse((ATermList) arg);
}

ERR_ErrorList ERR_appendErrorList(ERR_ErrorList arg, ERR_Error elem) {
  return (ERR_ErrorList) ATappend((ATermList) arg, (ATerm) ((ATerm) elem));
}

ERR_ErrorList ERR_concatErrorList(ERR_ErrorList arg0, ERR_ErrorList arg1) {
  return (ERR_ErrorList) ATconcat((ATermList) arg0, (ATermList) arg1);
}

ERR_ErrorList ERR_sliceErrorList(ERR_ErrorList arg, int start, int end) {
  return (ERR_ErrorList) ATgetSlice((ATermList) arg, start, end);
}

ERR_Error ERR_getErrorListErrorAt(ERR_ErrorList arg, int index) {
 return (ERR_Error)ATelementAt((ATermList) arg,index);
}

ERR_ErrorList ERR_replaceErrorListErrorAt(ERR_ErrorList arg, ERR_Error elem, int index) {
 return (ERR_ErrorList) ATreplace((ATermList) arg, (ATerm) ((ATerm) elem), index);
}

ERR_ErrorList ERR_makeErrorList2(ERR_Error elem1, ERR_Error elem2) {
  return (ERR_ErrorList) ATmakeList2((ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem2));
}

ERR_ErrorList ERR_makeErrorList3(ERR_Error elem1, ERR_Error elem2, ERR_Error elem3) {
  return (ERR_ErrorList) ATmakeList3((ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem3));
}

ERR_ErrorList ERR_makeErrorList4(ERR_Error elem1, ERR_Error elem2, ERR_Error elem3, ERR_Error elem4) {
  return (ERR_ErrorList) ATmakeList4((ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem4));
}

ERR_ErrorList ERR_makeErrorList5(ERR_Error elem1, ERR_Error elem2, ERR_Error elem3, ERR_Error elem4, ERR_Error elem5) {
  return (ERR_ErrorList) ATmakeList5((ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem5));
}

ERR_ErrorList ERR_makeErrorList6(ERR_Error elem1, ERR_Error elem2, ERR_Error elem3, ERR_Error elem4, ERR_Error elem5, ERR_Error elem6) {
  return (ERR_ErrorList) ATmakeList6((ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6));
}

int ERR_getAreaAreasLength (ERR_AreaAreas arg) {
  return ATgetLength((ATermList) arg);
}

ERR_AreaAreas ERR_reverseAreaAreas(ERR_AreaAreas arg) {
  return (ERR_AreaAreas) ATreverse((ATermList) arg);
}

ERR_AreaAreas ERR_appendAreaAreas(ERR_AreaAreas arg, ERR_Area elem) {
  return (ERR_AreaAreas) ATappend((ATermList) arg, (ATerm) ((ATerm) elem));
}

ERR_AreaAreas ERR_concatAreaAreas(ERR_AreaAreas arg0, ERR_AreaAreas arg1) {
  return (ERR_AreaAreas) ATconcat((ATermList) arg0, (ATermList) arg1);
}

ERR_AreaAreas ERR_sliceAreaAreas(ERR_AreaAreas arg, int start, int end) {
  return (ERR_AreaAreas) ATgetSlice((ATermList) arg, start, end);
}

ERR_Area ERR_getAreaAreasAreaAt(ERR_AreaAreas arg, int index) {
 return (ERR_Area)ATelementAt((ATermList) arg,index);
}

ERR_AreaAreas ERR_replaceAreaAreasAreaAt(ERR_AreaAreas arg, ERR_Area elem, int index) {
 return (ERR_AreaAreas) ATreplace((ATermList) arg, (ATerm) ((ATerm) elem), index);
}

ERR_AreaAreas ERR_makeAreaAreas2(ERR_Area elem1, ERR_Area elem2) {
  return (ERR_AreaAreas) ATmakeList2((ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem2));
}

ERR_AreaAreas ERR_makeAreaAreas3(ERR_Area elem1, ERR_Area elem2, ERR_Area elem3) {
  return (ERR_AreaAreas) ATmakeList3((ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem3));
}

ERR_AreaAreas ERR_makeAreaAreas4(ERR_Area elem1, ERR_Area elem2, ERR_Area elem3, ERR_Area elem4) {
  return (ERR_AreaAreas) ATmakeList4((ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem4));
}

ERR_AreaAreas ERR_makeAreaAreas5(ERR_Area elem1, ERR_Area elem2, ERR_Area elem3, ERR_Area elem4, ERR_Area elem5) {
  return (ERR_AreaAreas) ATmakeList5((ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem5));
}

ERR_AreaAreas ERR_makeAreaAreas6(ERR_Area elem1, ERR_Area elem2, ERR_Area elem3, ERR_Area elem4, ERR_Area elem5, ERR_Area elem6) {
  return (ERR_AreaAreas) ATmakeList6((ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6));
}

ERR_StrChar ERR_makeStrCharStrChar(const char* string) {
  return (ERR_StrChar)(ATerm) (ATerm) ATmakeAppl(ATmakeAFun(string, 0, ATtrue));
}
ERR_StrCon ERR_makeStrConStrCon(const char* string) {
  return (ERR_StrCon)(ATerm) (ATerm) ATmakeAppl(ATmakeAFun(string, 0, ATtrue));
}
ERR_NatCon ERR_makeNatConNatCon(const char* string) {
  return (ERR_NatCon)(ATerm) (ATerm) ATmakeAppl(ATmakeAFun(string, 0, ATtrue));
}
ERR_Subject ERR_makeSubjectSubject(const char* description) {
  return (ERR_Subject)(ATerm)ATmakeAppl1(ERR_afun0, (ATerm) (ATerm) ATmakeAppl(ATmakeAFun(description, 0, ATtrue)));
}
ERR_Subject ERR_makeSubjectLocalized(const char* description, ERR_Location Location) {
  return (ERR_Subject)(ATerm)ATmakeAppl2(ERR_afun1, (ATerm) (ATerm) ATmakeAppl(ATmakeAFun(description, 0, ATtrue)), (ATerm) Location);
}
ERR_Error ERR_makeErrorInfo(const char* description, ERR_SubjectList list) {
  return (ERR_Error)(ATerm)ATmakeAppl2(ERR_afun2, (ATerm) (ATerm) ATmakeAppl(ATmakeAFun(description, 0, ATtrue)), (ATerm) list);
}
ERR_Error ERR_makeErrorWarning(const char* description, ERR_SubjectList list) {
  return (ERR_Error)(ATerm)ATmakeAppl2(ERR_afun3, (ATerm) (ATerm) ATmakeAppl(ATmakeAFun(description, 0, ATtrue)), (ATerm) list);
}
ERR_Error ERR_makeErrorError(const char* description, ERR_SubjectList list) {
  return (ERR_Error)(ATerm)ATmakeAppl2(ERR_afun4, (ATerm) (ATerm) ATmakeAppl(ATmakeAFun(description, 0, ATtrue)), (ATerm) list);
}
ERR_Error ERR_makeErrorFatal(const char* description, ERR_SubjectList list) {
  return (ERR_Error)(ATerm)ATmakeAppl2(ERR_afun5, (ATerm) (ATerm) ATmakeAppl(ATmakeAFun(description, 0, ATtrue)), (ATerm) list);
}
ERR_Summary ERR_makeSummarySummary(const char* producer, const char* id, ERR_ErrorList list) {
  return (ERR_Summary)(ATerm)ATmakeAppl3(ERR_afun6, (ATerm) (ATerm) ATmakeAppl(ATmakeAFun(producer, 0, ATtrue)), (ATerm) (ATerm) ATmakeAppl(ATmakeAFun(id, 0, ATtrue)), (ATerm) list);
}
ERR_SubjectList ERR_makeSubjectListEmpty(void) {
  return (ERR_SubjectList)(ATerm)ATempty;
}
ERR_SubjectList ERR_makeSubjectListSingle(ERR_Subject head) {
  return (ERR_SubjectList)(ATerm)ATmakeList1((ATerm) head);
}
ERR_SubjectList ERR_makeSubjectListMany(ERR_Subject head, ERR_SubjectList tail) {
  return (ERR_SubjectList)(ATerm)ATinsert((ATermList)tail, (ATerm) head);
}
ERR_ErrorList ERR_makeErrorListEmpty(void) {
  return (ERR_ErrorList)(ATerm)ATempty;
}
ERR_ErrorList ERR_makeErrorListSingle(ERR_Error head) {
  return (ERR_ErrorList)(ATerm)ATmakeList1((ATerm) head);
}
ERR_ErrorList ERR_makeErrorListMany(ERR_Error head, ERR_ErrorList tail) {
  return (ERR_ErrorList)(ATerm)ATinsert((ATermList)tail, (ATerm) head);
}
ERR_Location ERR_makeLocationFile(const char* filename) {
  return (ERR_Location)(ATerm)ATmakeAppl1(ERR_afun7, (ATerm) (ATerm) ATmakeAppl(ATmakeAFun(filename, 0, ATtrue)));
}
ERR_Location ERR_makeLocationArea(ERR_Area Area) {
  return (ERR_Location)(ATerm)ATmakeAppl1(ERR_afun8, (ATerm) Area);
}
ERR_Location ERR_makeLocationAreaInFile(const char* filename, ERR_Area Area) {
  return (ERR_Location)(ATerm)ATmakeAppl2(ERR_afun9, (ATerm) (ATerm) ATmakeAppl(ATmakeAFun(filename, 0, ATtrue)), (ATerm) Area);
}
ERR_Area ERR_makeAreaArea(int beginLine, int beginColumn, int endLine, int endColumn, int offset, int length) {
  return (ERR_Area)(ATerm)ATmakeAppl6(ERR_afun10, (ATerm) (ATerm) ATmakeInt(beginLine), (ATerm) (ATerm) ATmakeInt(beginColumn), (ATerm) (ATerm) ATmakeInt(endLine), (ATerm) (ATerm) ATmakeInt(endColumn), (ATerm) (ATerm) ATmakeInt(offset), (ATerm) (ATerm) ATmakeInt(length));
}
ERR_Slice ERR_makeSliceSlice(const char* id, ERR_AreaAreas areas) {
  return (ERR_Slice)(ATerm)ATmakeAppl2(ERR_afun11, (ATerm) (ATerm) ATmakeAppl(ATmakeAFun(id, 0, ATtrue)), (ATerm) areas);
}
ERR_AreaAreas ERR_makeAreaAreasEmpty(void) {
  return (ERR_AreaAreas)(ATerm)ATempty;
}
ERR_AreaAreas ERR_makeAreaAreasSingle(ERR_Area head) {
  return (ERR_AreaAreas)(ATerm)ATmakeList1((ATerm) head);
}
ERR_AreaAreas ERR_makeAreaAreasMany(ERR_Area head, ERR_AreaAreas tail) {
  return (ERR_AreaAreas)(ATerm)ATinsert((ATermList)tail, (ATerm) head);
}

ATbool ERR_isEqualStrChar(ERR_StrChar arg0, ERR_StrChar arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ERR_isEqualStrCon(ERR_StrCon arg0, ERR_StrCon arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ERR_isEqualNatCon(ERR_NatCon arg0, ERR_NatCon arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ERR_isEqualSubject(ERR_Subject arg0, ERR_Subject arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ERR_isEqualError(ERR_Error arg0, ERR_Error arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ERR_isEqualSummary(ERR_Summary arg0, ERR_Summary arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ERR_isEqualSubjectList(ERR_SubjectList arg0, ERR_SubjectList arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ERR_isEqualErrorList(ERR_ErrorList arg0, ERR_ErrorList arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ERR_isEqualLocation(ERR_Location arg0, ERR_Location arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ERR_isEqualArea(ERR_Area arg0, ERR_Area arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ERR_isEqualSlice(ERR_Slice arg0, ERR_Slice arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ERR_isEqualAreaAreas(ERR_AreaAreas arg0, ERR_AreaAreas arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool ERR_isValidStrChar(ERR_StrChar arg) {
  if (ERR_isStrCharStrChar(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool ERR_isStrCharStrChar(ERR_StrChar arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ERR_patternStrCharStrChar, NULL));
#endif
  return ATtrue;
}

ATbool ERR_hasStrCharString(ERR_StrChar arg) {
  if (ERR_isStrCharStrChar(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

char* ERR_getStrCharString(ERR_StrChar arg) {
  
    return (char*)ATgetName(ATgetAFun((ATermAppl) arg));
}

ERR_StrChar ERR_setStrCharString(ERR_StrChar arg, const char* string) {
  if (ERR_isStrCharStrChar(arg)) {
    return (ERR_StrChar)((ATerm) (ATerm) ATmakeAppl(ATmakeAFun(string, 0, ATtrue)));
  }

  ATabort("StrChar has no String: %t\n", arg);
  return (ERR_StrChar)NULL;
}

ATbool ERR_isValidStrCon(ERR_StrCon arg) {
  if (ERR_isStrConStrCon(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool ERR_isStrConStrCon(ERR_StrCon arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ERR_patternStrConStrCon, NULL));
#endif
  return ATtrue;
}

ATbool ERR_hasStrConString(ERR_StrCon arg) {
  if (ERR_isStrConStrCon(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

char* ERR_getStrConString(ERR_StrCon arg) {
  
    return (char*)ATgetName(ATgetAFun((ATermAppl) arg));
}

ERR_StrCon ERR_setStrConString(ERR_StrCon arg, const char* string) {
  if (ERR_isStrConStrCon(arg)) {
    return (ERR_StrCon)((ATerm) (ATerm) ATmakeAppl(ATmakeAFun(string, 0, ATtrue)));
  }

  ATabort("StrCon has no String: %t\n", arg);
  return (ERR_StrCon)NULL;
}

ATbool ERR_isValidNatCon(ERR_NatCon arg) {
  if (ERR_isNatConNatCon(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool ERR_isNatConNatCon(ERR_NatCon arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ERR_patternNatConNatCon, NULL));
#endif
  return ATtrue;
}

ATbool ERR_hasNatConString(ERR_NatCon arg) {
  if (ERR_isNatConNatCon(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

char* ERR_getNatConString(ERR_NatCon arg) {
  
    return (char*)ATgetName(ATgetAFun((ATermAppl) arg));
}

ERR_NatCon ERR_setNatConString(ERR_NatCon arg, const char* string) {
  if (ERR_isNatConNatCon(arg)) {
    return (ERR_NatCon)((ATerm) (ATerm) ATmakeAppl(ATmakeAFun(string, 0, ATtrue)));
  }

  ATabort("NatCon has no String: %t\n", arg);
  return (ERR_NatCon)NULL;
}

ATbool ERR_isValidSubject(ERR_Subject arg) {
  if (ERR_isSubjectSubject(arg)) {
    return ATtrue;
  }
  else if (ERR_isSubjectLocalized(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool ERR_isSubjectSubject(ERR_Subject arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, ERR_patternSubjectSubject, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool ERR_isSubjectLocalized(ERR_Subject arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, ERR_patternSubjectLocalized, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

ATbool ERR_hasSubjectDescription(ERR_Subject arg) {
  if (ERR_isSubjectSubject(arg)) {
    return ATtrue;
  }
  else if (ERR_isSubjectLocalized(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool ERR_hasSubjectLocation(ERR_Subject arg) {
  if (ERR_isSubjectLocalized(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

char* ERR_getSubjectDescription(ERR_Subject arg) {
  if (ERR_isSubjectSubject(arg)) {
    return (char*)ATgetName(ATgetAFun((ATermAppl) ATgetArgument((ATermAppl)arg, 0)));
  }
  else 
    return (char*)ATgetName(ATgetAFun((ATermAppl) ATgetArgument((ATermAppl)arg, 0)));
}

ERR_Location ERR_getSubjectLocation(ERR_Subject arg) {
  
    return (ERR_Location)ATgetArgument((ATermAppl)arg, 1);
}

ERR_Subject ERR_setSubjectDescription(ERR_Subject arg, const char* description) {
  if (ERR_isSubjectSubject(arg)) {
    return (ERR_Subject)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeAppl(ATmakeAFun(description, 0, ATtrue))), 0);
  }
  else if (ERR_isSubjectLocalized(arg)) {
    return (ERR_Subject)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeAppl(ATmakeAFun(description, 0, ATtrue))), 0);
  }

  ATabort("Subject has no Description: %t\n", arg);
  return (ERR_Subject)NULL;
}

ERR_Subject ERR_setSubjectLocation(ERR_Subject arg, ERR_Location Location) {
  if (ERR_isSubjectLocalized(arg)) {
    return (ERR_Subject)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) Location), 1);
  }

  ATabort("Subject has no Location: %t\n", arg);
  return (ERR_Subject)NULL;
}

ATbool ERR_isValidError(ERR_Error arg) {
  if (ERR_isErrorInfo(arg)) {
    return ATtrue;
  }
  else if (ERR_isErrorWarning(arg)) {
    return ATtrue;
  }
  else if (ERR_isErrorError(arg)) {
    return ATtrue;
  }
  else if (ERR_isErrorFatal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool ERR_isErrorInfo(ERR_Error arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, ERR_patternErrorInfo, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool ERR_isErrorWarning(ERR_Error arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, ERR_patternErrorWarning, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool ERR_isErrorError(ERR_Error arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, ERR_patternErrorError, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool ERR_isErrorFatal(ERR_Error arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, ERR_patternErrorFatal, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

ATbool ERR_hasErrorDescription(ERR_Error arg) {
  if (ERR_isErrorInfo(arg)) {
    return ATtrue;
  }
  else if (ERR_isErrorWarning(arg)) {
    return ATtrue;
  }
  else if (ERR_isErrorError(arg)) {
    return ATtrue;
  }
  else if (ERR_isErrorFatal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool ERR_hasErrorList(ERR_Error arg) {
  if (ERR_isErrorInfo(arg)) {
    return ATtrue;
  }
  else if (ERR_isErrorWarning(arg)) {
    return ATtrue;
  }
  else if (ERR_isErrorError(arg)) {
    return ATtrue;
  }
  else if (ERR_isErrorFatal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

char* ERR_getErrorDescription(ERR_Error arg) {
  if (ERR_isErrorInfo(arg)) {
    return (char*)ATgetName(ATgetAFun((ATermAppl) ATgetArgument((ATermAppl)arg, 0)));
  }
  else if (ERR_isErrorWarning(arg)) {
    return (char*)ATgetName(ATgetAFun((ATermAppl) ATgetArgument((ATermAppl)arg, 0)));
  }
  else if (ERR_isErrorError(arg)) {
    return (char*)ATgetName(ATgetAFun((ATermAppl) ATgetArgument((ATermAppl)arg, 0)));
  }
  else 
    return (char*)ATgetName(ATgetAFun((ATermAppl) ATgetArgument((ATermAppl)arg, 0)));
}

ERR_SubjectList ERR_getErrorList(ERR_Error arg) {
  if (ERR_isErrorInfo(arg)) {
    return (ERR_SubjectList)ATgetArgument((ATermAppl)arg, 1);
  }
  else if (ERR_isErrorWarning(arg)) {
    return (ERR_SubjectList)ATgetArgument((ATermAppl)arg, 1);
  }
  else if (ERR_isErrorError(arg)) {
    return (ERR_SubjectList)ATgetArgument((ATermAppl)arg, 1);
  }
  else 
    return (ERR_SubjectList)ATgetArgument((ATermAppl)arg, 1);
}

ERR_Error ERR_setErrorDescription(ERR_Error arg, const char* description) {
  if (ERR_isErrorInfo(arg)) {
    return (ERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeAppl(ATmakeAFun(description, 0, ATtrue))), 0);
  }
  else if (ERR_isErrorWarning(arg)) {
    return (ERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeAppl(ATmakeAFun(description, 0, ATtrue))), 0);
  }
  else if (ERR_isErrorError(arg)) {
    return (ERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeAppl(ATmakeAFun(description, 0, ATtrue))), 0);
  }
  else if (ERR_isErrorFatal(arg)) {
    return (ERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeAppl(ATmakeAFun(description, 0, ATtrue))), 0);
  }

  ATabort("Error has no Description: %t\n", arg);
  return (ERR_Error)NULL;
}

ERR_Error ERR_setErrorList(ERR_Error arg, ERR_SubjectList list) {
  if (ERR_isErrorInfo(arg)) {
    return (ERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) list), 1);
  }
  else if (ERR_isErrorWarning(arg)) {
    return (ERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) list), 1);
  }
  else if (ERR_isErrorError(arg)) {
    return (ERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) list), 1);
  }
  else if (ERR_isErrorFatal(arg)) {
    return (ERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) list), 1);
  }

  ATabort("Error has no List: %t\n", arg);
  return (ERR_Error)NULL;
}

ATbool ERR_isValidSummary(ERR_Summary arg) {
  if (ERR_isSummarySummary(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool ERR_isSummarySummary(ERR_Summary arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ERR_patternSummarySummary, NULL, NULL, NULL));
#endif
  return ATtrue;
}

ATbool ERR_hasSummaryProducer(ERR_Summary arg) {
  if (ERR_isSummarySummary(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool ERR_hasSummaryId(ERR_Summary arg) {
  if (ERR_isSummarySummary(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool ERR_hasSummaryList(ERR_Summary arg) {
  if (ERR_isSummarySummary(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

char* ERR_getSummaryProducer(ERR_Summary arg) {
  
    return (char*)ATgetName(ATgetAFun((ATermAppl) ATgetArgument((ATermAppl)arg, 0)));
}

char* ERR_getSummaryId(ERR_Summary arg) {
  
    return (char*)ATgetName(ATgetAFun((ATermAppl) ATgetArgument((ATermAppl)arg, 1)));
}

ERR_ErrorList ERR_getSummaryList(ERR_Summary arg) {
  
    return (ERR_ErrorList)ATgetArgument((ATermAppl)arg, 2);
}

ERR_Summary ERR_setSummaryProducer(ERR_Summary arg, const char* producer) {
  if (ERR_isSummarySummary(arg)) {
    return (ERR_Summary)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeAppl(ATmakeAFun(producer, 0, ATtrue))), 0);
  }

  ATabort("Summary has no Producer: %t\n", arg);
  return (ERR_Summary)NULL;
}

ERR_Summary ERR_setSummaryId(ERR_Summary arg, const char* id) {
  if (ERR_isSummarySummary(arg)) {
    return (ERR_Summary)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeAppl(ATmakeAFun(id, 0, ATtrue))), 1);
  }

  ATabort("Summary has no Id: %t\n", arg);
  return (ERR_Summary)NULL;
}

ERR_Summary ERR_setSummaryList(ERR_Summary arg, ERR_ErrorList list) {
  if (ERR_isSummarySummary(arg)) {
    return (ERR_Summary)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) list), 2);
  }

  ATabort("Summary has no List: %t\n", arg);
  return (ERR_Summary)NULL;
}

ATbool ERR_isValidSubjectList(ERR_SubjectList arg) {
  if (ERR_isSubjectListEmpty(arg)) {
    return ATtrue;
  }
  else if (ERR_isSubjectListSingle(arg)) {
    return ATtrue;
  }
  else if (ERR_isSubjectListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool ERR_isSubjectListEmpty(ERR_SubjectList arg) {
  if (!ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ERR_patternSubjectListEmpty));
#endif
  return ATtrue;
}

inline ATbool ERR_isSubjectListSingle(ERR_SubjectList arg) {
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
      last_result = ATmatchTerm((ATerm)arg, ERR_patternSubjectListSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool ERR_isSubjectListMany(ERR_SubjectList arg) {
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
      last_result = ATmatchTerm((ATerm)arg, ERR_patternSubjectListMany, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

ATbool ERR_hasSubjectListHead(ERR_SubjectList arg) {
  if (ERR_isSubjectListSingle(arg)) {
    return ATtrue;
  }
  else if (ERR_isSubjectListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool ERR_hasSubjectListTail(ERR_SubjectList arg) {
  if (ERR_isSubjectListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ERR_Subject ERR_getSubjectListHead(ERR_SubjectList arg) {
  if (ERR_isSubjectListSingle(arg)) {
    return (ERR_Subject)ATgetFirst((ATermList)arg);
  }
  else 
    return (ERR_Subject)ATgetFirst((ATermList)arg);
}

ERR_SubjectList ERR_getSubjectListTail(ERR_SubjectList arg) {
  
    return (ERR_SubjectList)ATgetNext((ATermList)arg);
}

ERR_SubjectList ERR_setSubjectListHead(ERR_SubjectList arg, ERR_Subject head) {
  if (ERR_isSubjectListSingle(arg)) {
    return (ERR_SubjectList)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }
  else if (ERR_isSubjectListMany(arg)) {
    return (ERR_SubjectList)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }

  ATabort("SubjectList has no Head: %t\n", arg);
  return (ERR_SubjectList)NULL;
}

ERR_SubjectList ERR_setSubjectListTail(ERR_SubjectList arg, ERR_SubjectList tail) {
  if (ERR_isSubjectListMany(arg)) {
    return (ERR_SubjectList)ATreplaceTail((ATermList)arg, (ATermList)((ATerm) tail), 1);
  }

  ATabort("SubjectList has no Tail: %t\n", arg);
  return (ERR_SubjectList)NULL;
}

ATbool ERR_isValidErrorList(ERR_ErrorList arg) {
  if (ERR_isErrorListEmpty(arg)) {
    return ATtrue;
  }
  else if (ERR_isErrorListSingle(arg)) {
    return ATtrue;
  }
  else if (ERR_isErrorListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool ERR_isErrorListEmpty(ERR_ErrorList arg) {
  if (!ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ERR_patternErrorListEmpty));
#endif
  return ATtrue;
}

inline ATbool ERR_isErrorListSingle(ERR_ErrorList arg) {
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
      last_result = ATmatchTerm((ATerm)arg, ERR_patternErrorListSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool ERR_isErrorListMany(ERR_ErrorList arg) {
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
      last_result = ATmatchTerm((ATerm)arg, ERR_patternErrorListMany, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

ATbool ERR_hasErrorListHead(ERR_ErrorList arg) {
  if (ERR_isErrorListSingle(arg)) {
    return ATtrue;
  }
  else if (ERR_isErrorListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool ERR_hasErrorListTail(ERR_ErrorList arg) {
  if (ERR_isErrorListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ERR_Error ERR_getErrorListHead(ERR_ErrorList arg) {
  if (ERR_isErrorListSingle(arg)) {
    return (ERR_Error)ATgetFirst((ATermList)arg);
  }
  else 
    return (ERR_Error)ATgetFirst((ATermList)arg);
}

ERR_ErrorList ERR_getErrorListTail(ERR_ErrorList arg) {
  
    return (ERR_ErrorList)ATgetNext((ATermList)arg);
}

ERR_ErrorList ERR_setErrorListHead(ERR_ErrorList arg, ERR_Error head) {
  if (ERR_isErrorListSingle(arg)) {
    return (ERR_ErrorList)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }
  else if (ERR_isErrorListMany(arg)) {
    return (ERR_ErrorList)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }

  ATabort("ErrorList has no Head: %t\n", arg);
  return (ERR_ErrorList)NULL;
}

ERR_ErrorList ERR_setErrorListTail(ERR_ErrorList arg, ERR_ErrorList tail) {
  if (ERR_isErrorListMany(arg)) {
    return (ERR_ErrorList)ATreplaceTail((ATermList)arg, (ATermList)((ATerm) tail), 1);
  }

  ATabort("ErrorList has no Tail: %t\n", arg);
  return (ERR_ErrorList)NULL;
}

ATbool ERR_isValidLocation(ERR_Location arg) {
  if (ERR_isLocationFile(arg)) {
    return ATtrue;
  }
  else if (ERR_isLocationArea(arg)) {
    return ATtrue;
  }
  else if (ERR_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool ERR_isLocationFile(ERR_Location arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, ERR_patternLocationFile, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool ERR_isLocationArea(ERR_Location arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, ERR_patternLocationArea, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool ERR_isLocationAreaInFile(ERR_Location arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, ERR_patternLocationAreaInFile, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

ATbool ERR_hasLocationFilename(ERR_Location arg) {
  if (ERR_isLocationFile(arg)) {
    return ATtrue;
  }
  else if (ERR_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool ERR_hasLocationArea(ERR_Location arg) {
  if (ERR_isLocationArea(arg)) {
    return ATtrue;
  }
  else if (ERR_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

char* ERR_getLocationFilename(ERR_Location arg) {
  if (ERR_isLocationFile(arg)) {
    return (char*)ATgetName(ATgetAFun((ATermAppl) ATgetArgument((ATermAppl)arg, 0)));
  }
  else 
    return (char*)ATgetName(ATgetAFun((ATermAppl) ATgetArgument((ATermAppl)arg, 0)));
}

ERR_Area ERR_getLocationArea(ERR_Location arg) {
  if (ERR_isLocationArea(arg)) {
    return (ERR_Area)ATgetArgument((ATermAppl)arg, 0);
  }
  else 
    return (ERR_Area)ATgetArgument((ATermAppl)arg, 1);
}

ERR_Location ERR_setLocationFilename(ERR_Location arg, const char* filename) {
  if (ERR_isLocationFile(arg)) {
    return (ERR_Location)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeAppl(ATmakeAFun(filename, 0, ATtrue))), 0);
  }
  else if (ERR_isLocationAreaInFile(arg)) {
    return (ERR_Location)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeAppl(ATmakeAFun(filename, 0, ATtrue))), 0);
  }

  ATabort("Location has no Filename: %t\n", arg);
  return (ERR_Location)NULL;
}

ERR_Location ERR_setLocationArea(ERR_Location arg, ERR_Area Area) {
  if (ERR_isLocationArea(arg)) {
    return (ERR_Location)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) Area), 0);
  }
  else if (ERR_isLocationAreaInFile(arg)) {
    return (ERR_Location)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) Area), 1);
  }

  ATabort("Location has no Area: %t\n", arg);
  return (ERR_Location)NULL;
}

ATbool ERR_isValidArea(ERR_Area arg) {
  if (ERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool ERR_isAreaArea(ERR_Area arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ERR_patternAreaArea, NULL, NULL, NULL, NULL, NULL, NULL));
#endif
  return ATtrue;
}

ATbool ERR_hasAreaBeginLine(ERR_Area arg) {
  if (ERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool ERR_hasAreaBeginColumn(ERR_Area arg) {
  if (ERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool ERR_hasAreaEndLine(ERR_Area arg) {
  if (ERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool ERR_hasAreaEndColumn(ERR_Area arg) {
  if (ERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool ERR_hasAreaOffset(ERR_Area arg) {
  if (ERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool ERR_hasAreaLength(ERR_Area arg) {
  if (ERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

int ERR_getAreaBeginLine(ERR_Area arg) {
  
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 0));
}

int ERR_getAreaBeginColumn(ERR_Area arg) {
  
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 1));
}

int ERR_getAreaEndLine(ERR_Area arg) {
  
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 2));
}

int ERR_getAreaEndColumn(ERR_Area arg) {
  
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 3));
}

int ERR_getAreaOffset(ERR_Area arg) {
  
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 4));
}

int ERR_getAreaLength(ERR_Area arg) {
  
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 5));
}

ERR_Area ERR_setAreaBeginLine(ERR_Area arg, int beginLine) {
  if (ERR_isAreaArea(arg)) {
    return (ERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(beginLine)), 0);
  }

  ATabort("Area has no BeginLine: %t\n", arg);
  return (ERR_Area)NULL;
}

ERR_Area ERR_setAreaBeginColumn(ERR_Area arg, int beginColumn) {
  if (ERR_isAreaArea(arg)) {
    return (ERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(beginColumn)), 1);
  }

  ATabort("Area has no BeginColumn: %t\n", arg);
  return (ERR_Area)NULL;
}

ERR_Area ERR_setAreaEndLine(ERR_Area arg, int endLine) {
  if (ERR_isAreaArea(arg)) {
    return (ERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(endLine)), 2);
  }

  ATabort("Area has no EndLine: %t\n", arg);
  return (ERR_Area)NULL;
}

ERR_Area ERR_setAreaEndColumn(ERR_Area arg, int endColumn) {
  if (ERR_isAreaArea(arg)) {
    return (ERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(endColumn)), 3);
  }

  ATabort("Area has no EndColumn: %t\n", arg);
  return (ERR_Area)NULL;
}

ERR_Area ERR_setAreaOffset(ERR_Area arg, int offset) {
  if (ERR_isAreaArea(arg)) {
    return (ERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(offset)), 4);
  }

  ATabort("Area has no Offset: %t\n", arg);
  return (ERR_Area)NULL;
}

ERR_Area ERR_setAreaLength(ERR_Area arg, int length) {
  if (ERR_isAreaArea(arg)) {
    return (ERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(length)), 5);
  }

  ATabort("Area has no Length: %t\n", arg);
  return (ERR_Area)NULL;
}

ATbool ERR_isValidSlice(ERR_Slice arg) {
  if (ERR_isSliceSlice(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool ERR_isSliceSlice(ERR_Slice arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ERR_patternSliceSlice, NULL, NULL));
#endif
  return ATtrue;
}

ATbool ERR_hasSliceId(ERR_Slice arg) {
  if (ERR_isSliceSlice(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool ERR_hasSliceAreas(ERR_Slice arg) {
  if (ERR_isSliceSlice(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

char* ERR_getSliceId(ERR_Slice arg) {
  
    return (char*)ATgetName(ATgetAFun((ATermAppl) ATgetArgument((ATermAppl)arg, 0)));
}

ERR_AreaAreas ERR_getSliceAreas(ERR_Slice arg) {
  
    return (ERR_AreaAreas)ATgetArgument((ATermAppl)arg, 1);
}

ERR_Slice ERR_setSliceId(ERR_Slice arg, const char* id) {
  if (ERR_isSliceSlice(arg)) {
    return (ERR_Slice)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeAppl(ATmakeAFun(id, 0, ATtrue))), 0);
  }

  ATabort("Slice has no Id: %t\n", arg);
  return (ERR_Slice)NULL;
}

ERR_Slice ERR_setSliceAreas(ERR_Slice arg, ERR_AreaAreas areas) {
  if (ERR_isSliceSlice(arg)) {
    return (ERR_Slice)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) areas), 1);
  }

  ATabort("Slice has no Areas: %t\n", arg);
  return (ERR_Slice)NULL;
}

ATbool ERR_isValidAreaAreas(ERR_AreaAreas arg) {
  if (ERR_isAreaAreasEmpty(arg)) {
    return ATtrue;
  }
  else if (ERR_isAreaAreasSingle(arg)) {
    return ATtrue;
  }
  else if (ERR_isAreaAreasMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool ERR_isAreaAreasEmpty(ERR_AreaAreas arg) {
  if (!ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, ERR_patternAreaAreasEmpty));
#endif
  return ATtrue;
}

inline ATbool ERR_isAreaAreasSingle(ERR_AreaAreas arg) {
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
      last_result = ATmatchTerm((ATerm)arg, ERR_patternAreaAreasSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool ERR_isAreaAreasMany(ERR_AreaAreas arg) {
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
      last_result = ATmatchTerm((ATerm)arg, ERR_patternAreaAreasMany, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

ATbool ERR_hasAreaAreasHead(ERR_AreaAreas arg) {
  if (ERR_isAreaAreasSingle(arg)) {
    return ATtrue;
  }
  else if (ERR_isAreaAreasMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool ERR_hasAreaAreasTail(ERR_AreaAreas arg) {
  if (ERR_isAreaAreasMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ERR_Area ERR_getAreaAreasHead(ERR_AreaAreas arg) {
  if (ERR_isAreaAreasSingle(arg)) {
    return (ERR_Area)ATgetFirst((ATermList)arg);
  }
  else 
    return (ERR_Area)ATgetFirst((ATermList)arg);
}

ERR_AreaAreas ERR_getAreaAreasTail(ERR_AreaAreas arg) {
  
    return (ERR_AreaAreas)ATgetNext((ATermList)arg);
}

ERR_AreaAreas ERR_setAreaAreasHead(ERR_AreaAreas arg, ERR_Area head) {
  if (ERR_isAreaAreasSingle(arg)) {
    return (ERR_AreaAreas)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }
  else if (ERR_isAreaAreasMany(arg)) {
    return (ERR_AreaAreas)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }

  ATabort("AreaAreas has no Head: %t\n", arg);
  return (ERR_AreaAreas)NULL;
}

ERR_AreaAreas ERR_setAreaAreasTail(ERR_AreaAreas arg, ERR_AreaAreas tail) {
  if (ERR_isAreaAreasMany(arg)) {
    return (ERR_AreaAreas)ATreplaceTail((ATermList)arg, (ATermList)((ATerm) tail), 1);
  }

  ATabort("AreaAreas has no Tail: %t\n", arg);
  return (ERR_AreaAreas)NULL;
}

ERR_StrChar ERR_visitStrChar(ERR_StrChar arg, char* (*acceptString)(char*)) {
  if (ERR_isStrCharStrChar(arg)) {
    return ERR_makeStrCharStrChar(
        acceptString ? acceptString(ERR_getStrCharString(arg)) : ERR_getStrCharString(arg));
  }
  ATabort("not a StrChar: %t\n", arg);
  return (ERR_StrChar)NULL;
}
ERR_StrCon ERR_visitStrCon(ERR_StrCon arg, char* (*acceptString)(char*)) {
  if (ERR_isStrConStrCon(arg)) {
    return ERR_makeStrConStrCon(
        acceptString ? acceptString(ERR_getStrConString(arg)) : ERR_getStrConString(arg));
  }
  ATabort("not a StrCon: %t\n", arg);
  return (ERR_StrCon)NULL;
}
ERR_NatCon ERR_visitNatCon(ERR_NatCon arg, char* (*acceptString)(char*)) {
  if (ERR_isNatConNatCon(arg)) {
    return ERR_makeNatConNatCon(
        acceptString ? acceptString(ERR_getNatConString(arg)) : ERR_getNatConString(arg));
  }
  ATabort("not a NatCon: %t\n", arg);
  return (ERR_NatCon)NULL;
}
ERR_Subject ERR_visitSubject(ERR_Subject arg, char* (*acceptDescription)(char*), ERR_Location (*acceptLocation)(ERR_Location)) {
  if (ERR_isSubjectSubject(arg)) {
    return ERR_makeSubjectSubject(
        acceptDescription ? acceptDescription(ERR_getSubjectDescription(arg)) : ERR_getSubjectDescription(arg));
  }
  if (ERR_isSubjectLocalized(arg)) {
    return ERR_makeSubjectLocalized(
        acceptDescription ? acceptDescription(ERR_getSubjectDescription(arg)) : ERR_getSubjectDescription(arg),
        acceptLocation ? acceptLocation(ERR_getSubjectLocation(arg)) : ERR_getSubjectLocation(arg));
  }
  ATabort("not a Subject: %t\n", arg);
  return (ERR_Subject)NULL;
}
ERR_Error ERR_visitError(ERR_Error arg, char* (*acceptDescription)(char*), ERR_SubjectList (*acceptList)(ERR_SubjectList)) {
  if (ERR_isErrorInfo(arg)) {
    return ERR_makeErrorInfo(
        acceptDescription ? acceptDescription(ERR_getErrorDescription(arg)) : ERR_getErrorDescription(arg),
        acceptList ? acceptList(ERR_getErrorList(arg)) : ERR_getErrorList(arg));
  }
  if (ERR_isErrorWarning(arg)) {
    return ERR_makeErrorWarning(
        acceptDescription ? acceptDescription(ERR_getErrorDescription(arg)) : ERR_getErrorDescription(arg),
        acceptList ? acceptList(ERR_getErrorList(arg)) : ERR_getErrorList(arg));
  }
  if (ERR_isErrorError(arg)) {
    return ERR_makeErrorError(
        acceptDescription ? acceptDescription(ERR_getErrorDescription(arg)) : ERR_getErrorDescription(arg),
        acceptList ? acceptList(ERR_getErrorList(arg)) : ERR_getErrorList(arg));
  }
  if (ERR_isErrorFatal(arg)) {
    return ERR_makeErrorFatal(
        acceptDescription ? acceptDescription(ERR_getErrorDescription(arg)) : ERR_getErrorDescription(arg),
        acceptList ? acceptList(ERR_getErrorList(arg)) : ERR_getErrorList(arg));
  }
  ATabort("not a Error: %t\n", arg);
  return (ERR_Error)NULL;
}
ERR_Summary ERR_visitSummary(ERR_Summary arg, char* (*acceptProducer)(char*), char* (*acceptId)(char*), ERR_ErrorList (*acceptList)(ERR_ErrorList)) {
  if (ERR_isSummarySummary(arg)) {
    return ERR_makeSummarySummary(
        acceptProducer ? acceptProducer(ERR_getSummaryProducer(arg)) : ERR_getSummaryProducer(arg),
        acceptId ? acceptId(ERR_getSummaryId(arg)) : ERR_getSummaryId(arg),
        acceptList ? acceptList(ERR_getSummaryList(arg)) : ERR_getSummaryList(arg));
  }
  ATabort("not a Summary: %t\n", arg);
  return (ERR_Summary)NULL;
}
ERR_SubjectList ERR_visitSubjectList(ERR_SubjectList arg, ERR_Subject (*acceptHead)(ERR_Subject)) {
  if (ERR_isSubjectListEmpty(arg)) {
    return ERR_makeSubjectListEmpty();
  }
  if (ERR_isSubjectListSingle(arg)) {
    return ERR_makeSubjectListSingle(
        acceptHead ? acceptHead(ERR_getSubjectListHead(arg)) : ERR_getSubjectListHead(arg));
  }
  if (ERR_isSubjectListMany(arg)) {
    return ERR_makeSubjectListMany(
        acceptHead ? acceptHead(ERR_getSubjectListHead(arg)) : ERR_getSubjectListHead(arg),
        ERR_visitSubjectList(ERR_getSubjectListTail(arg), acceptHead));
  }
  ATabort("not a SubjectList: %t\n", arg);
  return (ERR_SubjectList)NULL;
}
ERR_ErrorList ERR_visitErrorList(ERR_ErrorList arg, ERR_Error (*acceptHead)(ERR_Error)) {
  if (ERR_isErrorListEmpty(arg)) {
    return ERR_makeErrorListEmpty();
  }
  if (ERR_isErrorListSingle(arg)) {
    return ERR_makeErrorListSingle(
        acceptHead ? acceptHead(ERR_getErrorListHead(arg)) : ERR_getErrorListHead(arg));
  }
  if (ERR_isErrorListMany(arg)) {
    return ERR_makeErrorListMany(
        acceptHead ? acceptHead(ERR_getErrorListHead(arg)) : ERR_getErrorListHead(arg),
        ERR_visitErrorList(ERR_getErrorListTail(arg), acceptHead));
  }
  ATabort("not a ErrorList: %t\n", arg);
  return (ERR_ErrorList)NULL;
}
ERR_Location ERR_visitLocation(ERR_Location arg, char* (*acceptFilename)(char*), ERR_Area (*acceptArea)(ERR_Area)) {
  if (ERR_isLocationFile(arg)) {
    return ERR_makeLocationFile(
        acceptFilename ? acceptFilename(ERR_getLocationFilename(arg)) : ERR_getLocationFilename(arg));
  }
  if (ERR_isLocationArea(arg)) {
    return ERR_makeLocationArea(
        acceptArea ? acceptArea(ERR_getLocationArea(arg)) : ERR_getLocationArea(arg));
  }
  if (ERR_isLocationAreaInFile(arg)) {
    return ERR_makeLocationAreaInFile(
        acceptFilename ? acceptFilename(ERR_getLocationFilename(arg)) : ERR_getLocationFilename(arg),
        acceptArea ? acceptArea(ERR_getLocationArea(arg)) : ERR_getLocationArea(arg));
  }
  ATabort("not a Location: %t\n", arg);
  return (ERR_Location)NULL;
}
ERR_Area ERR_visitArea(ERR_Area arg, int (*acceptBeginLine)(int), int (*acceptBeginColumn)(int), int (*acceptEndLine)(int), int (*acceptEndColumn)(int), int (*acceptOffset)(int), int (*acceptLength)(int)) {
  if (ERR_isAreaArea(arg)) {
    return ERR_makeAreaArea(
        acceptBeginLine ? acceptBeginLine(ERR_getAreaBeginLine(arg)) : ERR_getAreaBeginLine(arg),
        acceptBeginColumn ? acceptBeginColumn(ERR_getAreaBeginColumn(arg)) : ERR_getAreaBeginColumn(arg),
        acceptEndLine ? acceptEndLine(ERR_getAreaEndLine(arg)) : ERR_getAreaEndLine(arg),
        acceptEndColumn ? acceptEndColumn(ERR_getAreaEndColumn(arg)) : ERR_getAreaEndColumn(arg),
        acceptOffset ? acceptOffset(ERR_getAreaOffset(arg)) : ERR_getAreaOffset(arg),
        acceptLength ? acceptLength(ERR_getAreaLength(arg)) : ERR_getAreaLength(arg));
  }
  ATabort("not a Area: %t\n", arg);
  return (ERR_Area)NULL;
}
ERR_Slice ERR_visitSlice(ERR_Slice arg, char* (*acceptId)(char*), ERR_AreaAreas (*acceptAreas)(ERR_AreaAreas)) {
  if (ERR_isSliceSlice(arg)) {
    return ERR_makeSliceSlice(
        acceptId ? acceptId(ERR_getSliceId(arg)) : ERR_getSliceId(arg),
        acceptAreas ? acceptAreas(ERR_getSliceAreas(arg)) : ERR_getSliceAreas(arg));
  }
  ATabort("not a Slice: %t\n", arg);
  return (ERR_Slice)NULL;
}
ERR_AreaAreas ERR_visitAreaAreas(ERR_AreaAreas arg, ERR_Area (*acceptHead)(ERR_Area)) {
  if (ERR_isAreaAreasEmpty(arg)) {
    return ERR_makeAreaAreasEmpty();
  }
  if (ERR_isAreaAreasSingle(arg)) {
    return ERR_makeAreaAreasSingle(
        acceptHead ? acceptHead(ERR_getAreaAreasHead(arg)) : ERR_getAreaAreasHead(arg));
  }
  if (ERR_isAreaAreasMany(arg)) {
    return ERR_makeAreaAreasMany(
        acceptHead ? acceptHead(ERR_getAreaAreasHead(arg)) : ERR_getAreaAreasHead(arg),
        ERR_visitAreaAreas(ERR_getAreaAreasTail(arg), acceptHead));
  }
  ATabort("not a AreaAreas: %t\n", arg);
  return (ERR_AreaAreas)NULL;
}

