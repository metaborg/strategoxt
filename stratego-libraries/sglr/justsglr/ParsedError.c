#include <assert.h>

#include <aterm2.h>
#include <deprecated.h>
#include "ParsedError.h"

ATerm PERR_stringToChars(const char *str) {
  int len = strlen(str);
  int i;
  ATermList result = ATempty;

  for (i = len - 1; i >= 0; i--) {
    result = ATinsert(result, (ATerm) ATmakeInt(str[i]));
  }

  return (ATerm) result;
}

ATerm PERR_byteToChar(char ch) {
    return (ATerm) ATmakeInt(ch);
}

char *PERR_charsToString(ATerm arg) {
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

char PERR_charToByte(ATerm arg) {
    return (char) ATgetInt((ATermInt) arg);
}


typedef struct ATerm _PERR_OptLayout;
typedef struct ATerm _PERR_Layout;
typedef struct ATerm _PERR_LexLayoutList;
typedef struct ATerm _PERR_LexStrChar;
typedef struct ATerm _PERR_StrChar;
typedef struct ATerm _PERR_LexStrCon;
typedef struct ATerm _PERR_StrCon;
typedef struct ATerm _PERR_LexStrCharChars;
typedef struct ATerm _PERR_LexNatCon;
typedef struct ATerm _PERR_NatCon;
typedef struct ATerm _PERR_LexLayout;
typedef struct ATerm _PERR_Start;
typedef struct ATerm _PERR_Subject;
typedef struct ATerm _PERR_Error;
typedef struct ATerm _PERR_Summary;
typedef struct ATerm _PERR_SubjectList;
typedef struct ATerm _PERR_ErrorList;
typedef struct ATerm _PERR_Location;
typedef struct ATerm _PERR_Area;
typedef struct ATerm _PERR_Slice;
typedef struct ATerm _PERR_AreaAreas;

void PERR_initParsedErrorApi(void) {
  init_ParsedError_dict();
}

void PERR_protectOptLayout(PERR_OptLayout *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PERR_unprotectOptLayout(PERR_OptLayout *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PERR_protectLayout(PERR_Layout *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PERR_unprotectLayout(PERR_Layout *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PERR_protectLexLayoutList(PERR_LexLayoutList *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PERR_unprotectLexLayoutList(PERR_LexLayoutList *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PERR_protectLexStrChar(PERR_LexStrChar *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PERR_unprotectLexStrChar(PERR_LexStrChar *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PERR_protectStrChar(PERR_StrChar *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PERR_unprotectStrChar(PERR_StrChar *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PERR_protectLexStrCon(PERR_LexStrCon *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PERR_unprotectLexStrCon(PERR_LexStrCon *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PERR_protectStrCon(PERR_StrCon *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PERR_unprotectStrCon(PERR_StrCon *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PERR_protectLexStrCharChars(PERR_LexStrCharChars *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PERR_unprotectLexStrCharChars(PERR_LexStrCharChars *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PERR_protectLexNatCon(PERR_LexNatCon *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PERR_unprotectLexNatCon(PERR_LexNatCon *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PERR_protectNatCon(PERR_NatCon *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PERR_unprotectNatCon(PERR_NatCon *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PERR_protectLexLayout(PERR_LexLayout *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PERR_unprotectLexLayout(PERR_LexLayout *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PERR_protectStart(PERR_Start *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PERR_unprotectStart(PERR_Start *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PERR_protectSubject(PERR_Subject *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PERR_unprotectSubject(PERR_Subject *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PERR_protectError(PERR_Error *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PERR_unprotectError(PERR_Error *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PERR_protectSummary(PERR_Summary *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PERR_unprotectSummary(PERR_Summary *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PERR_protectSubjectList(PERR_SubjectList *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PERR_unprotectSubjectList(PERR_SubjectList *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PERR_protectErrorList(PERR_ErrorList *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PERR_unprotectErrorList(PERR_ErrorList *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PERR_protectLocation(PERR_Location *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PERR_unprotectLocation(PERR_Location *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PERR_protectArea(PERR_Area *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PERR_unprotectArea(PERR_Area *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PERR_protectSlice(PERR_Slice *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PERR_unprotectSlice(PERR_Slice *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PERR_protectAreaAreas(PERR_AreaAreas *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PERR_unprotectAreaAreas(PERR_AreaAreas *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

PERR_OptLayout PERR_OptLayoutFromTerm(ATerm t) {
  return (PERR_OptLayout)t;
}

ATerm PERR_OptLayoutToTerm(PERR_OptLayout arg) {
  return (ATerm)arg;
}

PERR_Layout PERR_LayoutFromTerm(ATerm t) {
  return (PERR_Layout)t;
}

ATerm PERR_LayoutToTerm(PERR_Layout arg) {
  return (ATerm)arg;
}

PERR_LexLayoutList PERR_LexLayoutListFromTerm(ATerm t) {
  return (PERR_LexLayoutList)t;
}

ATerm PERR_LexLayoutListToTerm(PERR_LexLayoutList arg) {
  return (ATerm)arg;
}

PERR_LexStrChar PERR_LexStrCharFromTerm(ATerm t) {
  return (PERR_LexStrChar)t;
}

ATerm PERR_LexStrCharToTerm(PERR_LexStrChar arg) {
  return (ATerm)arg;
}

PERR_StrChar PERR_StrCharFromTerm(ATerm t) {
  return (PERR_StrChar)t;
}

ATerm PERR_StrCharToTerm(PERR_StrChar arg) {
  return (ATerm)arg;
}

PERR_LexStrCon PERR_LexStrConFromTerm(ATerm t) {
  return (PERR_LexStrCon)t;
}

ATerm PERR_LexStrConToTerm(PERR_LexStrCon arg) {
  return (ATerm)arg;
}

PERR_StrCon PERR_StrConFromTerm(ATerm t) {
  return (PERR_StrCon)t;
}

ATerm PERR_StrConToTerm(PERR_StrCon arg) {
  return (ATerm)arg;
}

PERR_LexStrCharChars PERR_LexStrCharCharsFromTerm(ATerm t) {
  return (PERR_LexStrCharChars)t;
}

ATerm PERR_LexStrCharCharsToTerm(PERR_LexStrCharChars arg) {
  return (ATerm)arg;
}

PERR_LexNatCon PERR_LexNatConFromTerm(ATerm t) {
  return (PERR_LexNatCon)t;
}

ATerm PERR_LexNatConToTerm(PERR_LexNatCon arg) {
  return (ATerm)arg;
}

PERR_NatCon PERR_NatConFromTerm(ATerm t) {
  return (PERR_NatCon)t;
}

ATerm PERR_NatConToTerm(PERR_NatCon arg) {
  return (ATerm)arg;
}

PERR_LexLayout PERR_LexLayoutFromTerm(ATerm t) {
  return (PERR_LexLayout)t;
}

ATerm PERR_LexLayoutToTerm(PERR_LexLayout arg) {
  return (ATerm)arg;
}

PERR_Start PERR_StartFromTerm(ATerm t) {
  return (PERR_Start)t;
}

ATerm PERR_StartToTerm(PERR_Start arg) {
  return (ATerm)arg;
}

PERR_Subject PERR_SubjectFromTerm(ATerm t) {
  return (PERR_Subject)t;
}

ATerm PERR_SubjectToTerm(PERR_Subject arg) {
  return (ATerm)arg;
}

PERR_Error PERR_ErrorFromTerm(ATerm t) {
  return (PERR_Error)t;
}

ATerm PERR_ErrorToTerm(PERR_Error arg) {
  return (ATerm)arg;
}

PERR_Summary PERR_SummaryFromTerm(ATerm t) {
  return (PERR_Summary)t;
}

ATerm PERR_SummaryToTerm(PERR_Summary arg) {
  return (ATerm)arg;
}

PERR_SubjectList PERR_SubjectListFromTerm(ATerm t) {
  return (PERR_SubjectList)t;
}

ATerm PERR_SubjectListToTerm(PERR_SubjectList arg) {
  return (ATerm)arg;
}

PERR_ErrorList PERR_ErrorListFromTerm(ATerm t) {
  return (PERR_ErrorList)t;
}

ATerm PERR_ErrorListToTerm(PERR_ErrorList arg) {
  return (ATerm)arg;
}

PERR_Location PERR_LocationFromTerm(ATerm t) {
  return (PERR_Location)t;
}

ATerm PERR_LocationToTerm(PERR_Location arg) {
  return (ATerm)arg;
}

PERR_Area PERR_AreaFromTerm(ATerm t) {
  return (PERR_Area)t;
}

ATerm PERR_AreaToTerm(PERR_Area arg) {
  return (ATerm)arg;
}

PERR_Slice PERR_SliceFromTerm(ATerm t) {
  return (PERR_Slice)t;
}

ATerm PERR_SliceToTerm(PERR_Slice arg) {
  return (ATerm)arg;
}

PERR_AreaAreas PERR_AreaAreasFromTerm(ATerm t) {
  return (PERR_AreaAreas)t;
}

ATerm PERR_AreaAreasToTerm(PERR_AreaAreas arg) {
  return (ATerm)arg;
}

int PERR_getLexLayoutListLength (PERR_LexLayoutList arg) {
  return ATgetLength((ATermList) arg);
}

PERR_LexLayoutList PERR_reverseLexLayoutList(PERR_LexLayoutList arg) {
  return (PERR_LexLayoutList) ATreverse((ATermList) arg);
}

PERR_LexLayoutList PERR_appendLexLayoutList(PERR_LexLayoutList arg, PERR_LexLayout elem) {
  return (PERR_LexLayoutList) ATappend((ATermList) arg, (ATerm) ((ATerm) elem));
}

PERR_LexLayoutList PERR_concatLexLayoutList(PERR_LexLayoutList arg0, PERR_LexLayoutList arg1) {
  return (PERR_LexLayoutList) ATconcat((ATermList) arg0, (ATermList) arg1);
}

PERR_LexLayoutList PERR_sliceLexLayoutList(PERR_LexLayoutList arg, int start, int end) {
  return (PERR_LexLayoutList) ATgetSlice((ATermList) arg, start, end);
}

PERR_LexLayout PERR_getLexLayoutListLexLayoutAt(PERR_LexLayoutList arg, int index) {
 return (PERR_LexLayout)ATelementAt((ATermList) arg,index);
}

PERR_LexLayoutList PERR_replaceLexLayoutListLexLayoutAt(PERR_LexLayoutList arg, PERR_LexLayout elem, int index) {
 return (PERR_LexLayoutList) ATreplace((ATermList) arg, (ATerm) ((ATerm) elem), index);
}

PERR_LexLayoutList PERR_makeLexLayoutList2(PERR_LexLayout elem1, PERR_LexLayout elem2) {
  return (PERR_LexLayoutList) ATmakeList2((ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem2));
}

PERR_LexLayoutList PERR_makeLexLayoutList3(PERR_LexLayout elem1, PERR_LexLayout elem2, PERR_LexLayout elem3) {
  return (PERR_LexLayoutList) ATmakeList3((ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem3));
}

PERR_LexLayoutList PERR_makeLexLayoutList4(PERR_LexLayout elem1, PERR_LexLayout elem2, PERR_LexLayout elem3, PERR_LexLayout elem4) {
  return (PERR_LexLayoutList) ATmakeList4((ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem4));
}

PERR_LexLayoutList PERR_makeLexLayoutList5(PERR_LexLayout elem1, PERR_LexLayout elem2, PERR_LexLayout elem3, PERR_LexLayout elem4, PERR_LexLayout elem5) {
  return (PERR_LexLayoutList) ATmakeList5((ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem5));
}

PERR_LexLayoutList PERR_makeLexLayoutList6(PERR_LexLayout elem1, PERR_LexLayout elem2, PERR_LexLayout elem3, PERR_LexLayout elem4, PERR_LexLayout elem5, PERR_LexLayout elem6) {
  return (PERR_LexLayoutList) ATmakeList6((ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6));
}

int PERR_getLexStrCharCharsLength (PERR_LexStrCharChars arg) {
  return ATgetLength((ATermList) arg);
}

PERR_LexStrCharChars PERR_reverseLexStrCharChars(PERR_LexStrCharChars arg) {
  return (PERR_LexStrCharChars) ATreverse((ATermList) arg);
}

PERR_LexStrCharChars PERR_appendLexStrCharChars(PERR_LexStrCharChars arg, PERR_LexStrChar elem) {
  return (PERR_LexStrCharChars) ATappend((ATermList) arg, (ATerm) ((ATerm) elem));
}

PERR_LexStrCharChars PERR_concatLexStrCharChars(PERR_LexStrCharChars arg0, PERR_LexStrCharChars arg1) {
  return (PERR_LexStrCharChars) ATconcat((ATermList) arg0, (ATermList) arg1);
}

PERR_LexStrCharChars PERR_sliceLexStrCharChars(PERR_LexStrCharChars arg, int start, int end) {
  return (PERR_LexStrCharChars) ATgetSlice((ATermList) arg, start, end);
}

PERR_LexStrChar PERR_getLexStrCharCharsLexStrCharAt(PERR_LexStrCharChars arg, int index) {
 return (PERR_LexStrChar)ATelementAt((ATermList) arg,index);
}

PERR_LexStrCharChars PERR_replaceLexStrCharCharsLexStrCharAt(PERR_LexStrCharChars arg, PERR_LexStrChar elem, int index) {
 return (PERR_LexStrCharChars) ATreplace((ATermList) arg, (ATerm) ((ATerm) elem), index);
}

PERR_LexStrCharChars PERR_makeLexStrCharChars2(PERR_LexStrChar elem1, PERR_LexStrChar elem2) {
  return (PERR_LexStrCharChars) ATmakeList2((ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem2));
}

PERR_LexStrCharChars PERR_makeLexStrCharChars3(PERR_LexStrChar elem1, PERR_LexStrChar elem2, PERR_LexStrChar elem3) {
  return (PERR_LexStrCharChars) ATmakeList3((ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem3));
}

PERR_LexStrCharChars PERR_makeLexStrCharChars4(PERR_LexStrChar elem1, PERR_LexStrChar elem2, PERR_LexStrChar elem3, PERR_LexStrChar elem4) {
  return (PERR_LexStrCharChars) ATmakeList4((ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem4));
}

PERR_LexStrCharChars PERR_makeLexStrCharChars5(PERR_LexStrChar elem1, PERR_LexStrChar elem2, PERR_LexStrChar elem3, PERR_LexStrChar elem4, PERR_LexStrChar elem5) {
  return (PERR_LexStrCharChars) ATmakeList5((ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem5));
}

PERR_LexStrCharChars PERR_makeLexStrCharChars6(PERR_LexStrChar elem1, PERR_LexStrChar elem2, PERR_LexStrChar elem3, PERR_LexStrChar elem4, PERR_LexStrChar elem5, PERR_LexStrChar elem6) {
  return (PERR_LexStrCharChars) ATmakeList6((ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6));
}

int PERR_getSubjectListLength (PERR_SubjectList arg) {
  if (ATisEmpty((ATermList) arg)) {
    return 0;
  }
  return (ATgetLength((ATermList) arg) / 4) + 1;
}

PERR_SubjectList PERR_reverseSubjectList(PERR_SubjectList arg) {
  ATermList list = (ATermList) arg;
  ATerm head;
  ATerm sep0;
  ATerm sep1;
  ATerm sep2;
  ATermList result;

 if (ATisEmpty(list) || ATgetLength(list) == 1) {
    return arg;
  }

  result = ATmakeList1(ATgetFirst(list));
      list = ATgetNext(list);
  sep0 = ATgetFirst(list);
  list = ATgetNext(list);
  sep1 = ATgetFirst(list);
  list = ATgetNext(list);
  sep2 = ATgetFirst(list);
  list = ATgetNext(list);

  while (!ATisEmpty(list)) {
    result = ATinsert(result, sep2);
    result = ATinsert(result, sep1);
    result = ATinsert(result, sep0);

   head = ATgetFirst(list);
   result = ATinsert(result, head);
    list = ATgetNext(list);

   if (!ATisEmpty(list)) {
  sep0 = ATgetFirst(list);
  list = ATgetNext(list);
  sep1 = ATgetFirst(list);
  list = ATgetNext(list);
  sep2 = ATgetFirst(list);
  list = ATgetNext(list);
   }
  }

  return (PERR_SubjectList) result;
}

PERR_SubjectList PERR_appendSubjectList(PERR_SubjectList arg0, PERR_OptLayout wsAfterHead, PERR_OptLayout wsAfterSep, PERR_Subject arg1) {
  return PERR_concatSubjectList(arg0, wsAfterHead, wsAfterSep, PERR_makeSubjectListSingle(arg1));
}

PERR_SubjectList PERR_concatSubjectList(PERR_SubjectList arg0, PERR_OptLayout wsAfterHead, PERR_OptLayout wsAfterSep, PERR_SubjectList arg1) {
  if (ATisEmpty((ATermList) arg0)) {
    return arg1;
  }
  arg1 = PERR_makeSubjectListMany((PERR_Subject)ATgetFirst((ATermList) arg0), wsAfterHead, wsAfterSep,  arg1);
  arg1 = (PERR_SubjectList) ATgetNext((ATermList) arg1);
  return (PERR_SubjectList) ATconcat((ATermList) arg0, (ATermList) arg1);
}

PERR_SubjectList PERR_sliceSubjectList(PERR_SubjectList arg, int start, int end) {
  return (PERR_SubjectList) ATgetSlice((ATermList) arg, start * 4, end * 4);
}

PERR_Subject PERR_getSubjectListSubjectAt(PERR_SubjectList arg, int index) {
 return (PERR_Subject)ATelementAt((ATermList) arg,index * 4);
}

PERR_SubjectList PERR_replaceSubjectListSubjectAt(PERR_SubjectList arg, PERR_Subject elem, int index) {
 return (PERR_SubjectList) ATreplace((ATermList) arg, (ATerm) ((ATerm) elem), index * 4);
}

PERR_SubjectList PERR_makeSubjectList2(PERR_OptLayout wsAfterHead, PERR_OptLayout wsAfterSep, PERR_Subject elem1, PERR_Subject elem2) {
  return PERR_makeSubjectListMany(elem1, wsAfterHead, wsAfterSep, PERR_makeSubjectListSingle(elem2));
}

PERR_SubjectList PERR_makeSubjectList3(PERR_OptLayout wsAfterHead, PERR_OptLayout wsAfterSep, PERR_Subject elem1, PERR_Subject elem2, PERR_Subject elem3) {
  return PERR_makeSubjectListMany(elem1, wsAfterHead, wsAfterSep, PERR_makeSubjectList2(wsAfterHead, wsAfterSep, elem2, elem3));
}

PERR_SubjectList PERR_makeSubjectList4(PERR_OptLayout wsAfterHead, PERR_OptLayout wsAfterSep, PERR_Subject elem1, PERR_Subject elem2, PERR_Subject elem3, PERR_Subject elem4) {
  return PERR_makeSubjectListMany(elem1, wsAfterHead, wsAfterSep, PERR_makeSubjectList3(wsAfterHead, wsAfterSep, elem2, elem3, elem4));
}

PERR_SubjectList PERR_makeSubjectList5(PERR_OptLayout wsAfterHead, PERR_OptLayout wsAfterSep, PERR_Subject elem1, PERR_Subject elem2, PERR_Subject elem3, PERR_Subject elem4, PERR_Subject elem5) {
  return PERR_makeSubjectListMany(elem1, wsAfterHead, wsAfterSep, PERR_makeSubjectList4(wsAfterHead, wsAfterSep, elem2, elem3, elem4, elem5));
}

PERR_SubjectList PERR_makeSubjectList6(PERR_OptLayout wsAfterHead, PERR_OptLayout wsAfterSep, PERR_Subject elem1, PERR_Subject elem2, PERR_Subject elem3, PERR_Subject elem4, PERR_Subject elem5, PERR_Subject elem6) {
  return PERR_makeSubjectListMany(elem1, wsAfterHead, wsAfterSep, PERR_makeSubjectList5(wsAfterHead, wsAfterSep, elem2, elem3, elem4, elem5, elem6));
}

int PERR_getErrorListLength (PERR_ErrorList arg) {
  if (ATisEmpty((ATermList) arg)) {
    return 0;
  }
  return (ATgetLength((ATermList) arg) / 4) + 1;
}

PERR_ErrorList PERR_reverseErrorList(PERR_ErrorList arg) {
  ATermList list = (ATermList) arg;
  ATerm head;
  ATerm sep0;
  ATerm sep1;
  ATerm sep2;
  ATermList result;

 if (ATisEmpty(list) || ATgetLength(list) == 1) {
    return arg;
  }

  result = ATmakeList1(ATgetFirst(list));
      list = ATgetNext(list);
  sep0 = ATgetFirst(list);
  list = ATgetNext(list);
  sep1 = ATgetFirst(list);
  list = ATgetNext(list);
  sep2 = ATgetFirst(list);
  list = ATgetNext(list);

  while (!ATisEmpty(list)) {
    result = ATinsert(result, sep2);
    result = ATinsert(result, sep1);
    result = ATinsert(result, sep0);

   head = ATgetFirst(list);
   result = ATinsert(result, head);
    list = ATgetNext(list);

   if (!ATisEmpty(list)) {
  sep0 = ATgetFirst(list);
  list = ATgetNext(list);
  sep1 = ATgetFirst(list);
  list = ATgetNext(list);
  sep2 = ATgetFirst(list);
  list = ATgetNext(list);
   }
  }

  return (PERR_ErrorList) result;
}

PERR_ErrorList PERR_appendErrorList(PERR_ErrorList arg0, PERR_OptLayout wsAfterHead, PERR_OptLayout wsAfterSep, PERR_Error arg1) {
  return PERR_concatErrorList(arg0, wsAfterHead, wsAfterSep, PERR_makeErrorListSingle(arg1));
}

PERR_ErrorList PERR_concatErrorList(PERR_ErrorList arg0, PERR_OptLayout wsAfterHead, PERR_OptLayout wsAfterSep, PERR_ErrorList arg1) {
  if (ATisEmpty((ATermList) arg0)) {
    return arg1;
  }
  arg1 = PERR_makeErrorListMany((PERR_Error)ATgetFirst((ATermList) arg0), wsAfterHead, wsAfterSep,  arg1);
  arg1 = (PERR_ErrorList) ATgetNext((ATermList) arg1);
  return (PERR_ErrorList) ATconcat((ATermList) arg0, (ATermList) arg1);
}

PERR_ErrorList PERR_sliceErrorList(PERR_ErrorList arg, int start, int end) {
  return (PERR_ErrorList) ATgetSlice((ATermList) arg, start * 4, end * 4);
}

PERR_Error PERR_getErrorListErrorAt(PERR_ErrorList arg, int index) {
 return (PERR_Error)ATelementAt((ATermList) arg,index * 4);
}

PERR_ErrorList PERR_replaceErrorListErrorAt(PERR_ErrorList arg, PERR_Error elem, int index) {
 return (PERR_ErrorList) ATreplace((ATermList) arg, (ATerm) ((ATerm) elem), index * 4);
}

PERR_ErrorList PERR_makeErrorList2(PERR_OptLayout wsAfterHead, PERR_OptLayout wsAfterSep, PERR_Error elem1, PERR_Error elem2) {
  return PERR_makeErrorListMany(elem1, wsAfterHead, wsAfterSep, PERR_makeErrorListSingle(elem2));
}

PERR_ErrorList PERR_makeErrorList3(PERR_OptLayout wsAfterHead, PERR_OptLayout wsAfterSep, PERR_Error elem1, PERR_Error elem2, PERR_Error elem3) {
  return PERR_makeErrorListMany(elem1, wsAfterHead, wsAfterSep, PERR_makeErrorList2(wsAfterHead, wsAfterSep, elem2, elem3));
}

PERR_ErrorList PERR_makeErrorList4(PERR_OptLayout wsAfterHead, PERR_OptLayout wsAfterSep, PERR_Error elem1, PERR_Error elem2, PERR_Error elem3, PERR_Error elem4) {
  return PERR_makeErrorListMany(elem1, wsAfterHead, wsAfterSep, PERR_makeErrorList3(wsAfterHead, wsAfterSep, elem2, elem3, elem4));
}

PERR_ErrorList PERR_makeErrorList5(PERR_OptLayout wsAfterHead, PERR_OptLayout wsAfterSep, PERR_Error elem1, PERR_Error elem2, PERR_Error elem3, PERR_Error elem4, PERR_Error elem5) {
  return PERR_makeErrorListMany(elem1, wsAfterHead, wsAfterSep, PERR_makeErrorList4(wsAfterHead, wsAfterSep, elem2, elem3, elem4, elem5));
}

PERR_ErrorList PERR_makeErrorList6(PERR_OptLayout wsAfterHead, PERR_OptLayout wsAfterSep, PERR_Error elem1, PERR_Error elem2, PERR_Error elem3, PERR_Error elem4, PERR_Error elem5, PERR_Error elem6) {
  return PERR_makeErrorListMany(elem1, wsAfterHead, wsAfterSep, PERR_makeErrorList5(wsAfterHead, wsAfterSep, elem2, elem3, elem4, elem5, elem6));
}

int PERR_getAreaAreasLength (PERR_AreaAreas arg) {
  if (ATisEmpty((ATermList) arg)) {
    return 0;
  }
  return (ATgetLength((ATermList) arg) / 4) + 1;
}

PERR_AreaAreas PERR_reverseAreaAreas(PERR_AreaAreas arg) {
  ATermList list = (ATermList) arg;
  ATerm head;
  ATerm sep0;
  ATerm sep1;
  ATerm sep2;
  ATermList result;

 if (ATisEmpty(list) || ATgetLength(list) == 1) {
    return arg;
  }

  result = ATmakeList1(ATgetFirst(list));
      list = ATgetNext(list);
  sep0 = ATgetFirst(list);
  list = ATgetNext(list);
  sep1 = ATgetFirst(list);
  list = ATgetNext(list);
  sep2 = ATgetFirst(list);
  list = ATgetNext(list);

  while (!ATisEmpty(list)) {
    result = ATinsert(result, sep2);
    result = ATinsert(result, sep1);
    result = ATinsert(result, sep0);

   head = ATgetFirst(list);
   result = ATinsert(result, head);
    list = ATgetNext(list);

   if (!ATisEmpty(list)) {
  sep0 = ATgetFirst(list);
  list = ATgetNext(list);
  sep1 = ATgetFirst(list);
  list = ATgetNext(list);
  sep2 = ATgetFirst(list);
  list = ATgetNext(list);
   }
  }

  return (PERR_AreaAreas) result;
}

PERR_AreaAreas PERR_appendAreaAreas(PERR_AreaAreas arg0, PERR_OptLayout wsAfterHead, PERR_OptLayout wsAfterSep, PERR_Area arg1) {
  return PERR_concatAreaAreas(arg0, wsAfterHead, wsAfterSep, PERR_makeAreaAreasSingle(arg1));
}

PERR_AreaAreas PERR_concatAreaAreas(PERR_AreaAreas arg0, PERR_OptLayout wsAfterHead, PERR_OptLayout wsAfterSep, PERR_AreaAreas arg1) {
  if (ATisEmpty((ATermList) arg0)) {
    return arg1;
  }
  arg1 = PERR_makeAreaAreasMany((PERR_Area)ATgetFirst((ATermList) arg0), wsAfterHead, wsAfterSep,  arg1);
  arg1 = (PERR_AreaAreas) ATgetNext((ATermList) arg1);
  return (PERR_AreaAreas) ATconcat((ATermList) arg0, (ATermList) arg1);
}

PERR_AreaAreas PERR_sliceAreaAreas(PERR_AreaAreas arg, int start, int end) {
  return (PERR_AreaAreas) ATgetSlice((ATermList) arg, start * 4, end * 4);
}

PERR_Area PERR_getAreaAreasAreaAt(PERR_AreaAreas arg, int index) {
 return (PERR_Area)ATelementAt((ATermList) arg,index * 4);
}

PERR_AreaAreas PERR_replaceAreaAreasAreaAt(PERR_AreaAreas arg, PERR_Area elem, int index) {
 return (PERR_AreaAreas) ATreplace((ATermList) arg, (ATerm) ((ATerm) elem), index * 4);
}

PERR_AreaAreas PERR_makeAreaAreas2(PERR_OptLayout wsAfterHead, PERR_OptLayout wsAfterSep, PERR_Area elem1, PERR_Area elem2) {
  return PERR_makeAreaAreasMany(elem1, wsAfterHead, wsAfterSep, PERR_makeAreaAreasSingle(elem2));
}

PERR_AreaAreas PERR_makeAreaAreas3(PERR_OptLayout wsAfterHead, PERR_OptLayout wsAfterSep, PERR_Area elem1, PERR_Area elem2, PERR_Area elem3) {
  return PERR_makeAreaAreasMany(elem1, wsAfterHead, wsAfterSep, PERR_makeAreaAreas2(wsAfterHead, wsAfterSep, elem2, elem3));
}

PERR_AreaAreas PERR_makeAreaAreas4(PERR_OptLayout wsAfterHead, PERR_OptLayout wsAfterSep, PERR_Area elem1, PERR_Area elem2, PERR_Area elem3, PERR_Area elem4) {
  return PERR_makeAreaAreasMany(elem1, wsAfterHead, wsAfterSep, PERR_makeAreaAreas3(wsAfterHead, wsAfterSep, elem2, elem3, elem4));
}

PERR_AreaAreas PERR_makeAreaAreas5(PERR_OptLayout wsAfterHead, PERR_OptLayout wsAfterSep, PERR_Area elem1, PERR_Area elem2, PERR_Area elem3, PERR_Area elem4, PERR_Area elem5) {
  return PERR_makeAreaAreasMany(elem1, wsAfterHead, wsAfterSep, PERR_makeAreaAreas4(wsAfterHead, wsAfterSep, elem2, elem3, elem4, elem5));
}

PERR_AreaAreas PERR_makeAreaAreas6(PERR_OptLayout wsAfterHead, PERR_OptLayout wsAfterSep, PERR_Area elem1, PERR_Area elem2, PERR_Area elem3, PERR_Area elem4, PERR_Area elem5, PERR_Area elem6) {
  return PERR_makeAreaAreasMany(elem1, wsAfterHead, wsAfterSep, PERR_makeAreaAreas5(wsAfterHead, wsAfterSep, elem2, elem3, elem4, elem5, elem6));
}

PERR_OptLayout PERR_makeOptLayoutAbsent(void) {
  return (PERR_OptLayout)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATempty, (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4))), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATempty);
}
PERR_OptLayout PERR_makeOptLayoutPresent(PERR_Layout layout) {
  return (PERR_OptLayout)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl0(PERR_afun4))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4))), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm) layout));
}
PERR_Layout PERR_makeLayoutLexToCf(PERR_LexLayoutList list) {
  return (PERR_Layout)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun6, (ATerm)ATmakeAppl1(PERR_afun7, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl0(PERR_afun4)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl1(PERR_afun8, (ATerm)ATmakeAppl1(PERR_afun6, (ATerm)ATmakeAppl1(PERR_afun7, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm) list)));
}
PERR_LexLayoutList PERR_makeLexLayoutListEmpty(void) {
  return (PERR_LexLayoutList)(ATerm)ATempty;
}
PERR_LexLayoutList PERR_makeLexLayoutListSingle(PERR_LexLayout head) {
  return (PERR_LexLayoutList)(ATerm)ATmakeList1((ATerm) head);
}
PERR_LexLayoutList PERR_makeLexLayoutListMany(PERR_LexLayout head, PERR_LexLayoutList tail) {
  return (PERR_LexLayoutList)(ATerm)ATinsert((ATermList)tail, (ATerm) head);
}
PERR_LexStrChar PERR_makeLexStrCharNewline(void) {
  return (PERR_LexStrChar)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun10))), (ATerm)ATmakeAppl1(PERR_afun6, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun12))), (ATerm)ATmakeAppl1(PERR_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl1(PERR_afun15, (ATerm)ATmakeAppl0(PERR_afun16)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(110)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(92)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun10)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeInt(110)), (ATerm)ATmakeInt(92)))));
}
PERR_LexStrChar PERR_makeLexStrCharTab(void) {
  return (PERR_LexStrChar)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun18))), (ATerm)ATmakeAppl1(PERR_afun6, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun12))), (ATerm)ATmakeAppl1(PERR_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl1(PERR_afun15, (ATerm)ATmakeAppl0(PERR_afun19)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(116)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(92)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun18)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeInt(116)), (ATerm)ATmakeInt(92)))));
}
PERR_LexStrChar PERR_makeLexStrCharQuote(void) {
  return (PERR_LexStrChar)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun20))), (ATerm)ATmakeAppl1(PERR_afun6, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun12))), (ATerm)ATmakeAppl1(PERR_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl1(PERR_afun15, (ATerm)ATmakeAppl0(PERR_afun21)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(34)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(92)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun20)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeInt(34)), (ATerm)ATmakeInt(92)))));
}
PERR_LexStrChar PERR_makeLexStrCharBackslash(void) {
  return (PERR_LexStrChar)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun22))), (ATerm)ATmakeAppl1(PERR_afun6, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun12))), (ATerm)ATmakeAppl1(PERR_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl1(PERR_afun15, (ATerm)ATmakeAppl0(PERR_afun23)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(92)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(92)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun22)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeInt(92)), (ATerm)ATmakeInt(92)))));
}
PERR_LexStrChar PERR_makeLexStrCharDecimal(char a, char b, char c) {
  return (PERR_LexStrChar)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PERR_afun24, (ATerm)ATmakeInt(48), (ATerm)ATmakeInt(57))))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PERR_afun24, (ATerm)ATmakeInt(48), (ATerm)ATmakeInt(57))))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PERR_afun24, (ATerm)ATmakeInt(48), (ATerm)ATmakeInt(57))))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun25))), (ATerm)ATmakeAppl1(PERR_afun6, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun12))), (ATerm)ATmakeAppl1(PERR_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl1(PERR_afun15, (ATerm)ATmakeAppl0(PERR_afun26)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm) ((ATerm) PERR_byteToChar(c))), (ATerm) ((ATerm) PERR_byteToChar(b))), (ATerm) ((ATerm) PERR_byteToChar(a))), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(92)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun25)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(92)))));
}
PERR_LexStrChar PERR_makeLexStrCharNormal(char ch) {
  return (PERR_LexStrChar)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(PERR_afun24, (ATerm)ATmakeInt(93), (ATerm)ATmakeInt(255))), (ATerm)ATmakeAppl2(PERR_afun24, (ATerm)ATmakeInt(35), (ATerm)ATmakeInt(91))), (ATerm)ATmakeAppl2(PERR_afun24, (ATerm)ATmakeInt(32), (ATerm)ATmakeInt(33))))), (ATerm)ATmakeAppl1(PERR_afun6, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun12))), (ATerm)ATmakeAppl1(PERR_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl1(PERR_afun15, (ATerm)ATmakeAppl0(PERR_afun27)))))), (ATerm)ATmakeList1((ATerm) ((ATerm) PERR_byteToChar(ch))));
}
PERR_StrChar PERR_makeStrCharLexToCf(PERR_LexStrChar StrChar) {
  return (PERR_StrChar)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun6, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun12)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun12))), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm) StrChar));
}
PERR_LexStrCon PERR_makeLexStrConDefault(PERR_LexStrCharChars chars) {
  return (PERR_LexStrCon)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(34)))), (ATerm)ATmakeAppl1(PERR_afun6, (ATerm)ATmakeAppl1(PERR_afun28, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun12))))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(34)))), (ATerm)ATmakeAppl1(PERR_afun6, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun29))), (ATerm)ATmakeAppl1(PERR_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl1(PERR_afun15, (ATerm)ATmakeAppl0(PERR_afun30)))))), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeInt(34)), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl1(PERR_afun8, (ATerm)ATmakeAppl1(PERR_afun6, (ATerm)ATmakeAppl1(PERR_afun28, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun12))))), (ATerm) chars)), (ATerm)ATmakeInt(34)));
}
PERR_StrCon PERR_makeStrConLexToCf(PERR_LexStrCon StrCon) {
  return (PERR_StrCon)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun6, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun29)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun29))), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm) StrCon));
}
PERR_LexStrCharChars PERR_makeLexStrCharCharsEmpty(void) {
  return (PERR_LexStrCharChars)(ATerm)ATempty;
}
PERR_LexStrCharChars PERR_makeLexStrCharCharsSingle(PERR_LexStrChar head) {
  return (PERR_LexStrCharChars)(ATerm)ATmakeList1((ATerm) head);
}
PERR_LexStrCharChars PERR_makeLexStrCharCharsMany(PERR_LexStrChar head, PERR_LexStrCharChars tail) {
  return (PERR_LexStrCharChars)(ATerm)ATinsert((ATermList)tail, (ATerm) head);
}
PERR_LexNatCon PERR_makeLexNatConDigits(const char* list) {
  return (PERR_LexNatCon)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun6, (ATerm)ATmakeAppl1(PERR_afun7, (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PERR_afun24, (ATerm)ATmakeInt(48), (ATerm)ATmakeInt(57))))))), (ATerm)ATmakeAppl1(PERR_afun6, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun31))), (ATerm)ATmakeAppl1(PERR_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl1(PERR_afun15, (ATerm)ATmakeAppl0(PERR_afun32)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl1(PERR_afun8, (ATerm)ATmakeAppl1(PERR_afun6, (ATerm)ATmakeAppl1(PERR_afun7, (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PERR_afun24, (ATerm)ATmakeInt(48), (ATerm)ATmakeInt(57))))))), (ATerm) ((ATerm) PERR_stringToChars(list)))));
}
PERR_NatCon PERR_makeNatConLexToCf(PERR_LexNatCon NatCon) {
  return (PERR_NatCon)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun6, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun31)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun31))), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm) NatCon));
}
PERR_LexLayout PERR_makeLexLayoutWhitespace(char ch) {
  return (PERR_LexLayout)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeInt(32)), (ATerm)ATmakeInt(13)), (ATerm)ATmakeAppl2(PERR_afun24, (ATerm)ATmakeInt(9), (ATerm)ATmakeInt(10))))), (ATerm)ATmakeAppl1(PERR_afun6, (ATerm)ATmakeAppl0(PERR_afun4)), (ATerm)ATmakeAppl1(PERR_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl1(PERR_afun15, (ATerm)ATmakeAppl0(PERR_afun33)))))), (ATerm)ATmakeList1((ATerm) ((ATerm) PERR_byteToChar(ch))));
}
PERR_Start PERR_makeStartSummary(PERR_OptLayout wsBefore, PERR_Summary topSummary, PERR_OptLayout wsAfter, int ambCnt) {
  return (PERR_Start)(ATerm)ATmakeAppl2(PERR_afun34, (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun35)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun36)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm) wsAfter), (ATerm) topSummary), (ATerm) wsBefore)), (ATerm) (ATerm) ATmakeInt(ambCnt));
}
PERR_Start PERR_makeStartError(PERR_OptLayout wsBefore, PERR_Error topError, PERR_OptLayout wsAfter, int ambCnt) {
  return (PERR_Start)(ATerm)ATmakeAppl2(PERR_afun34, (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun37)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun36)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm) wsAfter), (ATerm) topError), (ATerm) wsBefore)), (ATerm) (ATerm) ATmakeInt(ambCnt));
}
PERR_Subject PERR_makeSubjectSubject(PERR_OptLayout wsAfterSubject, PERR_OptLayout wsAfterParenOpen, PERR_StrCon description, PERR_OptLayout wsAfterDescription) {
  return (PERR_Subject)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun38))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun29)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun39))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun40))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun41))), (ATerm)ATmakeAppl1(PERR_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl1(PERR_afun15, (ATerm)ATmakeAppl0(PERR_afun40)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun38)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm) wsAfterDescription), (ATerm) description), (ATerm) wsAfterParenOpen), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun39)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm) wsAfterSubject), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(116)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(99)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(101)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(106)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(98)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(117)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(115)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun40)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeInt(116)), (ATerm)ATmakeInt(99)), (ATerm)ATmakeInt(101)), (ATerm)ATmakeInt(106)), (ATerm)ATmakeInt(98)), (ATerm)ATmakeInt(117)), (ATerm)ATmakeInt(115)))));
}
PERR_Subject PERR_makeSubjectLocalized(PERR_OptLayout wsAfterLocalized, PERR_OptLayout wsAfterParenOpen, PERR_StrCon description, PERR_OptLayout wsAfterDescription, PERR_OptLayout wsAfterComma, PERR_Location Location, PERR_OptLayout wsAfterLocation) {
  return (PERR_Subject)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun38))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun42)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun29)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun39))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun44))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun41))), (ATerm)ATmakeAppl1(PERR_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl1(PERR_afun15, (ATerm)ATmakeAppl0(PERR_afun44)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun38)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm) wsAfterLocation), (ATerm) Location), (ATerm) wsAfterComma), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm) wsAfterDescription), (ATerm) description), (ATerm) wsAfterParenOpen), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun39)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm) wsAfterLocalized), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(100)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(101)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(122)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(105)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(108)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(97)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(99)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(111)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(108)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun44)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeInt(100)), (ATerm)ATmakeInt(101)), (ATerm)ATmakeInt(122)), (ATerm)ATmakeInt(105)), (ATerm)ATmakeInt(108)), (ATerm)ATmakeInt(97)), (ATerm)ATmakeInt(99)), (ATerm)ATmakeInt(111)), (ATerm)ATmakeInt(108)))));
}
PERR_Error PERR_makeErrorInfo(PERR_OptLayout wsAfterInfo, PERR_OptLayout wsAfterParenOpen, PERR_StrCon description, PERR_OptLayout wsAfterDescription, PERR_OptLayout wsAfterComma, PERR_OptLayout wsAfterBracketOpen, PERR_SubjectList list, PERR_OptLayout wsAfterList, PERR_OptLayout wsAfterBracketClose) {
  return (PERR_Error)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun38))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun45))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl2(PERR_afun46, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun41)), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43))))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun47))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun29)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun39))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun48))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun37))), (ATerm)ATmakeAppl1(PERR_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl1(PERR_afun15, (ATerm)ATmakeAppl0(PERR_afun48)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun38)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm) wsAfterBracketClose), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(93)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun45)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(93)))), (ATerm) wsAfterList), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl1(PERR_afun8, (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl2(PERR_afun46, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun41)), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43))))), (ATerm) list)), (ATerm) wsAfterBracketOpen), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(91)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun47)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(91)))), (ATerm) wsAfterComma), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm) wsAfterDescription), (ATerm) description), (ATerm) wsAfterParenOpen), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun39)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm) wsAfterInfo), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(111)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(102)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(110)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(105)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun48)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeInt(111)), (ATerm)ATmakeInt(102)), (ATerm)ATmakeInt(110)), (ATerm)ATmakeInt(105)))));
}
PERR_Error PERR_makeErrorWarning(PERR_OptLayout wsAfterWarning, PERR_OptLayout wsAfterParenOpen, PERR_StrCon description, PERR_OptLayout wsAfterDescription, PERR_OptLayout wsAfterComma, PERR_OptLayout wsAfterBracketOpen, PERR_SubjectList list, PERR_OptLayout wsAfterList, PERR_OptLayout wsAfterBracketClose) {
  return (PERR_Error)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun38))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun45))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl2(PERR_afun46, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun41)), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43))))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun47))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun29)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun39))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun49))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun37))), (ATerm)ATmakeAppl1(PERR_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl1(PERR_afun15, (ATerm)ATmakeAppl0(PERR_afun49)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun38)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm) wsAfterBracketClose), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(93)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun45)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(93)))), (ATerm) wsAfterList), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl1(PERR_afun8, (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl2(PERR_afun46, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun41)), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43))))), (ATerm) list)), (ATerm) wsAfterBracketOpen), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(91)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun47)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(91)))), (ATerm) wsAfterComma), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm) wsAfterDescription), (ATerm) description), (ATerm) wsAfterParenOpen), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun39)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm) wsAfterWarning), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(103)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(110)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(105)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(110)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(114)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(97)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(119)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun49)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeInt(103)), (ATerm)ATmakeInt(110)), (ATerm)ATmakeInt(105)), (ATerm)ATmakeInt(110)), (ATerm)ATmakeInt(114)), (ATerm)ATmakeInt(97)), (ATerm)ATmakeInt(119)))));
}
PERR_Error PERR_makeErrorError(PERR_OptLayout wsAfterError, PERR_OptLayout wsAfterParenOpen, PERR_StrCon description, PERR_OptLayout wsAfterDescription, PERR_OptLayout wsAfterComma, PERR_OptLayout wsAfterBracketOpen, PERR_SubjectList list, PERR_OptLayout wsAfterList, PERR_OptLayout wsAfterBracketClose) {
  return (PERR_Error)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun38))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun45))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl2(PERR_afun46, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun41)), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43))))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun47))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun29)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun39))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun50))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun37))), (ATerm)ATmakeAppl1(PERR_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl1(PERR_afun15, (ATerm)ATmakeAppl0(PERR_afun50)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun38)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm) wsAfterBracketClose), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(93)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun45)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(93)))), (ATerm) wsAfterList), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl1(PERR_afun8, (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl2(PERR_afun46, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun41)), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43))))), (ATerm) list)), (ATerm) wsAfterBracketOpen), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(91)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun47)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(91)))), (ATerm) wsAfterComma), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm) wsAfterDescription), (ATerm) description), (ATerm) wsAfterParenOpen), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun39)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm) wsAfterError), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(114)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(111)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(114)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(114)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(101)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun50)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeInt(114)), (ATerm)ATmakeInt(111)), (ATerm)ATmakeInt(114)), (ATerm)ATmakeInt(114)), (ATerm)ATmakeInt(101)))));
}
PERR_Error PERR_makeErrorFatal(PERR_OptLayout wsAfterFatal, PERR_OptLayout wsAfterParenOpen, PERR_StrCon description, PERR_OptLayout wsAfterDescription, PERR_OptLayout wsAfterComma, PERR_OptLayout wsAfterBracketOpen, PERR_SubjectList list, PERR_OptLayout wsAfterList, PERR_OptLayout wsAfterBracketClose) {
  return (PERR_Error)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun38))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun45))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl2(PERR_afun46, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun41)), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43))))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun47))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun29)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun39))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun51))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun37))), (ATerm)ATmakeAppl1(PERR_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl1(PERR_afun15, (ATerm)ATmakeAppl0(PERR_afun51)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun38)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm) wsAfterBracketClose), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(93)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun45)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(93)))), (ATerm) wsAfterList), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl1(PERR_afun8, (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl2(PERR_afun46, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun41)), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43))))), (ATerm) list)), (ATerm) wsAfterBracketOpen), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(91)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun47)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(91)))), (ATerm) wsAfterComma), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm) wsAfterDescription), (ATerm) description), (ATerm) wsAfterParenOpen), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun39)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm) wsAfterFatal), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(108)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(97)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(116)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(97)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(102)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun51)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeInt(108)), (ATerm)ATmakeInt(97)), (ATerm)ATmakeInt(116)), (ATerm)ATmakeInt(97)), (ATerm)ATmakeInt(102)))));
}
PERR_Summary PERR_makeSummarySummary(PERR_OptLayout wsAfterSummary, PERR_OptLayout wsAfterParenOpen, PERR_StrCon producer, PERR_OptLayout wsAfterProducer, PERR_OptLayout wsAfterComma, PERR_StrCon id, PERR_OptLayout wsAfterId, PERR_OptLayout wsAfterComma1, PERR_OptLayout wsAfterBracketOpen, PERR_ErrorList list, PERR_OptLayout wsAfterList, PERR_OptLayout wsAfterBracketClose) {
  return (PERR_Summary)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun38))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun45))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl2(PERR_afun46, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun37)), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43))))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun47))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun29)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun29)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun39))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun52))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun35))), (ATerm)ATmakeAppl1(PERR_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl1(PERR_afun15, (ATerm)ATmakeAppl0(PERR_afun52)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun38)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm) wsAfterBracketClose), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(93)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun45)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(93)))), (ATerm) wsAfterList), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl1(PERR_afun8, (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl2(PERR_afun46, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun37)), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43))))), (ATerm) list)), (ATerm) wsAfterBracketOpen), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(91)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun47)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(91)))), (ATerm) wsAfterComma1), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm) wsAfterId), (ATerm) id), (ATerm) wsAfterComma), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm) wsAfterProducer), (ATerm) producer), (ATerm) wsAfterParenOpen), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun39)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm) wsAfterSummary), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(121)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(114)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(97)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(109)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(109)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(117)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(115)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun52)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeInt(121)), (ATerm)ATmakeInt(114)), (ATerm)ATmakeInt(97)), (ATerm)ATmakeInt(109)), (ATerm)ATmakeInt(109)), (ATerm)ATmakeInt(117)), (ATerm)ATmakeInt(115)))));
}
PERR_SubjectList PERR_makeSubjectListEmpty(void) {
  return (PERR_SubjectList)(ATerm)ATempty;
}
PERR_SubjectList PERR_makeSubjectListSingle(PERR_Subject head) {
  return (PERR_SubjectList)(ATerm)ATmakeList1((ATerm) head);
}
PERR_SubjectList PERR_makeSubjectListMany(PERR_Subject head, PERR_OptLayout wsAfterHead, PERR_OptLayout wsAfterSep, PERR_SubjectList tail) {
  if (PERR_isSubjectListEmpty(tail)) {
    return PERR_makeSubjectListSingle(head);
  }
  return (PERR_SubjectList)(ATerm)ATinsert(ATinsert(ATinsert(ATinsert((ATermList)tail, (ATerm) wsAfterSep), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm) wsAfterHead), (ATerm) head);
}
PERR_ErrorList PERR_makeErrorListEmpty(void) {
  return (PERR_ErrorList)(ATerm)ATempty;
}
PERR_ErrorList PERR_makeErrorListSingle(PERR_Error head) {
  return (PERR_ErrorList)(ATerm)ATmakeList1((ATerm) head);
}
PERR_ErrorList PERR_makeErrorListMany(PERR_Error head, PERR_OptLayout wsAfterHead, PERR_OptLayout wsAfterSep, PERR_ErrorList tail) {
  if (PERR_isErrorListEmpty(tail)) {
    return PERR_makeErrorListSingle(head);
  }
  return (PERR_ErrorList)(ATerm)ATinsert(ATinsert(ATinsert(ATinsert((ATermList)tail, (ATerm) wsAfterSep), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm) wsAfterHead), (ATerm) head);
}
PERR_Location PERR_makeLocationFile(PERR_OptLayout wsAfterFile, PERR_OptLayout wsAfterParenOpen, PERR_StrCon filename, PERR_OptLayout wsAfterFilename) {
  return (PERR_Location)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun38))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun29)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun39))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun53))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun42))), (ATerm)ATmakeAppl1(PERR_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl1(PERR_afun15, (ATerm)ATmakeAppl0(PERR_afun53)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun38)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm) wsAfterFilename), (ATerm) filename), (ATerm) wsAfterParenOpen), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun39)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm) wsAfterFile), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(101)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(108)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(105)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(102)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun53)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeInt(101)), (ATerm)ATmakeInt(108)), (ATerm)ATmakeInt(105)), (ATerm)ATmakeInt(102)))));
}
PERR_Location PERR_makeLocationArea(PERR_OptLayout wsAfterA, PERR_OptLayout wsAfterParenOpen, PERR_Area Area, PERR_OptLayout wsAfterArea) {
  return (PERR_Location)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun38))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun54)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun39))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun55))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun42))), (ATerm)ATmakeAppl1(PERR_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl1(PERR_afun15, (ATerm)ATmakeAppl0(PERR_afun55)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun38)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm) wsAfterArea), (ATerm) Area), (ATerm) wsAfterParenOpen), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun39)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm) wsAfterA), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(97)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(101)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(114)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(97)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun55)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeInt(97)), (ATerm)ATmakeInt(101)), (ATerm)ATmakeInt(114)), (ATerm)ATmakeInt(97)))));
}
PERR_Location PERR_makeLocationAreaInFile(PERR_OptLayout wsAfterAreaInFile, PERR_OptLayout wsAfterParenOpen, PERR_StrCon filename, PERR_OptLayout wsAfterFilename, PERR_OptLayout wsAfterComma, PERR_Area Area, PERR_OptLayout wsAfterArea) {
  return (PERR_Location)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun38))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun54)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun29)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun39))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun56))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun42))), (ATerm)ATmakeAppl1(PERR_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl1(PERR_afun15, (ATerm)ATmakeAppl0(PERR_afun56)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun38)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm) wsAfterArea), (ATerm) Area), (ATerm) wsAfterComma), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm) wsAfterFilename), (ATerm) filename), (ATerm) wsAfterParenOpen), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun39)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm) wsAfterAreaInFile), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(101)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(108)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(105)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(102)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(45)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(110)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(105)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(45)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(97)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(101)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(114)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(97)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun56)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeInt(101)), (ATerm)ATmakeInt(108)), (ATerm)ATmakeInt(105)), (ATerm)ATmakeInt(102)), (ATerm)ATmakeInt(45)), (ATerm)ATmakeInt(110)), (ATerm)ATmakeInt(105)), (ATerm)ATmakeInt(45)), (ATerm)ATmakeInt(97)), (ATerm)ATmakeInt(101)), (ATerm)ATmakeInt(114)), (ATerm)ATmakeInt(97)))));
}
PERR_Area PERR_makeAreaArea(PERR_OptLayout wsAfterArea, PERR_OptLayout wsAfterParenOpen, PERR_NatCon beginLine, PERR_OptLayout wsAfterBeginLine, PERR_OptLayout wsAfterComma, PERR_NatCon beginColumn, PERR_OptLayout wsAfterBeginColumn, PERR_OptLayout wsAfterComma1, PERR_NatCon endLine, PERR_OptLayout wsAfterEndLine, PERR_OptLayout wsAfterComma2, PERR_NatCon endColumn, PERR_OptLayout wsAfterEndColumn, PERR_OptLayout wsAfterComma3, PERR_NatCon offset, PERR_OptLayout wsAfterOffset, PERR_OptLayout wsAfterComma4, PERR_NatCon length, PERR_OptLayout wsAfterLength) {
  return (PERR_Area)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun38))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun31)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun31)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun31)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun31)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun31)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun31)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun39))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun55))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun54))), (ATerm)ATmakeAppl1(PERR_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl1(PERR_afun15, (ATerm)ATmakeAppl0(PERR_afun55)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun38)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm) wsAfterLength), (ATerm) length), (ATerm) wsAfterComma4), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm) wsAfterOffset), (ATerm) offset), (ATerm) wsAfterComma3), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm) wsAfterEndColumn), (ATerm) endColumn), (ATerm) wsAfterComma2), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm) wsAfterEndLine), (ATerm) endLine), (ATerm) wsAfterComma1), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm) wsAfterBeginColumn), (ATerm) beginColumn), (ATerm) wsAfterComma), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm) wsAfterBeginLine), (ATerm) beginLine), (ATerm) wsAfterParenOpen), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun39)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm) wsAfterArea), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(97)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(101)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(114)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(97)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun55)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeInt(97)), (ATerm)ATmakeInt(101)), (ATerm)ATmakeInt(114)), (ATerm)ATmakeInt(97)))));
}
PERR_Slice PERR_makeSliceSlice(PERR_OptLayout wsAfterSlice, PERR_OptLayout wsAfterParenOpen, PERR_StrCon id, PERR_OptLayout wsAfterId, PERR_OptLayout wsAfterComma, PERR_OptLayout wsAfterBracketOpen, PERR_AreaAreas areas, PERR_OptLayout wsAfterAreas, PERR_OptLayout wsAfterBracketClose) {
  return (PERR_Slice)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun38))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun45))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl2(PERR_afun46, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun54)), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43))))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun47))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun29)))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun39))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun57))), (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun58))), (ATerm)ATmakeAppl1(PERR_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl1(PERR_afun15, (ATerm)ATmakeAppl0(PERR_afun57)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun38)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm) wsAfterBracketClose), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(93)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun45)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(93)))), (ATerm) wsAfterAreas), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl1(PERR_afun8, (ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl2(PERR_afun46, (ATerm)ATmakeAppl1(PERR_afun11, (ATerm)ATmakeAppl0(PERR_afun54)), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43))))), (ATerm) areas)), (ATerm) wsAfterBracketOpen), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(91)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun47)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(91)))), (ATerm) wsAfterComma), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm) wsAfterId), (ATerm) id), (ATerm) wsAfterParenOpen), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun39)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm) wsAfterSlice), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(101)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(99)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(105)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(108)))), (ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(115)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun57)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeInt(101)), (ATerm)ATmakeInt(99)), (ATerm)ATmakeInt(105)), (ATerm)ATmakeInt(108)), (ATerm)ATmakeInt(115)))));
}
PERR_AreaAreas PERR_makeAreaAreasEmpty(void) {
  return (PERR_AreaAreas)(ATerm)ATempty;
}
PERR_AreaAreas PERR_makeAreaAreasSingle(PERR_Area head) {
  return (PERR_AreaAreas)(ATerm)ATmakeList1((ATerm) head);
}
PERR_AreaAreas PERR_makeAreaAreasMany(PERR_Area head, PERR_OptLayout wsAfterHead, PERR_OptLayout wsAfterSep, PERR_AreaAreas tail) {
  if (PERR_isAreaAreasEmpty(tail)) {
    return PERR_makeAreaAreasSingle(head);
  }
  return (PERR_AreaAreas)(ATerm)ATinsert(ATinsert(ATinsert(ATinsert((ATermList)tail, (ATerm) wsAfterSep), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeAppl0(PERR_afun43)), (ATerm)ATmakeAppl0(PERR_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm) wsAfterHead), (ATerm) head);
}

ATbool PERR_isEqualOptLayout(PERR_OptLayout arg0, PERR_OptLayout arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PERR_isEqualLayout(PERR_Layout arg0, PERR_Layout arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PERR_isEqualLexLayoutList(PERR_LexLayoutList arg0, PERR_LexLayoutList arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PERR_isEqualLexStrChar(PERR_LexStrChar arg0, PERR_LexStrChar arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PERR_isEqualStrChar(PERR_StrChar arg0, PERR_StrChar arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PERR_isEqualLexStrCon(PERR_LexStrCon arg0, PERR_LexStrCon arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PERR_isEqualStrCon(PERR_StrCon arg0, PERR_StrCon arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PERR_isEqualLexStrCharChars(PERR_LexStrCharChars arg0, PERR_LexStrCharChars arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PERR_isEqualLexNatCon(PERR_LexNatCon arg0, PERR_LexNatCon arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PERR_isEqualNatCon(PERR_NatCon arg0, PERR_NatCon arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PERR_isEqualLexLayout(PERR_LexLayout arg0, PERR_LexLayout arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PERR_isEqualStart(PERR_Start arg0, PERR_Start arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PERR_isEqualSubject(PERR_Subject arg0, PERR_Subject arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PERR_isEqualError(PERR_Error arg0, PERR_Error arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PERR_isEqualSummary(PERR_Summary arg0, PERR_Summary arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PERR_isEqualSubjectList(PERR_SubjectList arg0, PERR_SubjectList arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PERR_isEqualErrorList(PERR_ErrorList arg0, PERR_ErrorList arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PERR_isEqualLocation(PERR_Location arg0, PERR_Location arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PERR_isEqualArea(PERR_Area arg0, PERR_Area arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PERR_isEqualSlice(PERR_Slice arg0, PERR_Slice arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PERR_isEqualAreaAreas(PERR_AreaAreas arg0, PERR_AreaAreas arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PERR_isValidOptLayout(PERR_OptLayout arg) {
  if (PERR_isOptLayoutAbsent(arg)) {
    return ATtrue;
  }
  else if (PERR_isOptLayoutPresent(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PERR_isOptLayoutAbsent(PERR_OptLayout arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PERR_patternOptLayoutAbsent);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool PERR_isOptLayoutPresent(PERR_OptLayout arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PERR_patternOptLayoutPresent, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

ATbool PERR_hasOptLayoutLayout(PERR_OptLayout arg) {
  if (PERR_isOptLayoutPresent(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

PERR_Layout PERR_getOptLayoutLayout(PERR_OptLayout arg) {
  
    return (PERR_Layout)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1));
}

PERR_OptLayout PERR_setOptLayoutLayout(PERR_OptLayout arg, PERR_Layout layout) {
  if (PERR_isOptLayoutPresent(arg)) {
    return (PERR_OptLayout)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) layout), 0), 1);
  }

  ATabort("OptLayout has no Layout: %t\n", arg);
  return (PERR_OptLayout)NULL;
}

ATbool PERR_isValidLayout(PERR_Layout arg) {
  if (PERR_isLayoutLexToCf(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PERR_isLayoutLexToCf(PERR_Layout arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PERR_patternLayoutLexToCf, NULL));
#endif
  return ATtrue;
}

ATbool PERR_hasLayoutList(PERR_Layout arg) {
  if (PERR_isLayoutLexToCf(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

PERR_LexLayoutList PERR_getLayoutList(PERR_Layout arg) {
  
    return (PERR_LexLayoutList)ATgetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), 1);
}

PERR_Layout PERR_setLayoutList(PERR_Layout arg, PERR_LexLayoutList list) {
  if (PERR_isLayoutLexToCf(arg)) {
    return (PERR_Layout)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), (ATerm)((ATerm) list), 1), 0), 1);
  }

  ATabort("Layout has no List: %t\n", arg);
  return (PERR_Layout)NULL;
}

ATbool PERR_isValidLexLayoutList(PERR_LexLayoutList arg) {
  if (PERR_isLexLayoutListEmpty(arg)) {
    return ATtrue;
  }
  else if (PERR_isLexLayoutListSingle(arg)) {
    return ATtrue;
  }
  else if (PERR_isLexLayoutListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PERR_isLexLayoutListEmpty(PERR_LexLayoutList arg) {
  if (!ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PERR_patternLexLayoutListEmpty));
#endif
  return ATtrue;
}

inline ATbool PERR_isLexLayoutListSingle(PERR_LexLayoutList arg) {
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
      last_result = ATmatchTerm((ATerm)arg, PERR_patternLexLayoutListSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool PERR_isLexLayoutListMany(PERR_LexLayoutList arg) {
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
      last_result = ATmatchTerm((ATerm)arg, PERR_patternLexLayoutListMany, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

ATbool PERR_hasLexLayoutListHead(PERR_LexLayoutList arg) {
  if (PERR_isLexLayoutListSingle(arg)) {
    return ATtrue;
  }
  else if (PERR_isLexLayoutListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasLexLayoutListTail(PERR_LexLayoutList arg) {
  if (PERR_isLexLayoutListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

PERR_LexLayout PERR_getLexLayoutListHead(PERR_LexLayoutList arg) {
  if (PERR_isLexLayoutListSingle(arg)) {
    return (PERR_LexLayout)ATgetFirst((ATermList)arg);
  }
  else 
    return (PERR_LexLayout)ATgetFirst((ATermList)arg);
}

PERR_LexLayoutList PERR_getLexLayoutListTail(PERR_LexLayoutList arg) {
  
    return (PERR_LexLayoutList)ATgetNext((ATermList)arg);
}

PERR_LexLayoutList PERR_setLexLayoutListHead(PERR_LexLayoutList arg, PERR_LexLayout head) {
  if (PERR_isLexLayoutListSingle(arg)) {
    return (PERR_LexLayoutList)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }
  else if (PERR_isLexLayoutListMany(arg)) {
    return (PERR_LexLayoutList)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }

  ATabort("LexLayoutList has no Head: %t\n", arg);
  return (PERR_LexLayoutList)NULL;
}

PERR_LexLayoutList PERR_setLexLayoutListTail(PERR_LexLayoutList arg, PERR_LexLayoutList tail) {
  if (PERR_isLexLayoutListMany(arg)) {
    return (PERR_LexLayoutList)ATreplaceTail((ATermList)arg, (ATermList)((ATerm) tail), 1);
  }

  ATabort("LexLayoutList has no Tail: %t\n", arg);
  return (PERR_LexLayoutList)NULL;
}

ATbool PERR_isValidLexStrChar(PERR_LexStrChar arg) {
  if (PERR_isLexStrCharNewline(arg)) {
    return ATtrue;
  }
  else if (PERR_isLexStrCharTab(arg)) {
    return ATtrue;
  }
  else if (PERR_isLexStrCharQuote(arg)) {
    return ATtrue;
  }
  else if (PERR_isLexStrCharBackslash(arg)) {
    return ATtrue;
  }
  else if (PERR_isLexStrCharDecimal(arg)) {
    return ATtrue;
  }
  else if (PERR_isLexStrCharNormal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PERR_isLexStrCharNewline(PERR_LexStrChar arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PERR_patternLexStrCharNewline);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool PERR_isLexStrCharTab(PERR_LexStrChar arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PERR_patternLexStrCharTab);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool PERR_isLexStrCharQuote(PERR_LexStrChar arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PERR_patternLexStrCharQuote);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool PERR_isLexStrCharBackslash(PERR_LexStrChar arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PERR_patternLexStrCharBackslash);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool PERR_isLexStrCharDecimal(PERR_LexStrChar arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PERR_patternLexStrCharDecimal, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool PERR_isLexStrCharNormal(PERR_LexStrChar arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PERR_patternLexStrCharNormal, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

ATbool PERR_hasLexStrCharA(PERR_LexStrChar arg) {
  if (PERR_isLexStrCharDecimal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasLexStrCharB(PERR_LexStrChar arg) {
  if (PERR_isLexStrCharDecimal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasLexStrCharC(PERR_LexStrChar arg) {
  if (PERR_isLexStrCharDecimal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasLexStrCharCh(PERR_LexStrChar arg) {
  if (PERR_isLexStrCharNormal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

char PERR_getLexStrCharA(PERR_LexStrChar arg) {
  
    return (char)PERR_charToByte((ATerm)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1));
}

char PERR_getLexStrCharB(PERR_LexStrChar arg) {
  
    return (char)PERR_charToByte((ATerm)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2));
}

char PERR_getLexStrCharC(PERR_LexStrChar arg) {
  
    return (char)PERR_charToByte((ATerm)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3));
}

char PERR_getLexStrCharCh(PERR_LexStrChar arg) {
  
    return (char)PERR_charToByte((ATerm)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)));
}

PERR_LexStrChar PERR_setLexStrCharA(PERR_LexStrChar arg, char a) {
  if (PERR_isLexStrCharDecimal(arg)) {
    return (PERR_LexStrChar)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) ((ATerm) PERR_byteToChar(a))), 1), 1);
  }

  ATabort("LexStrChar has no A: %t\n", arg);
  return (PERR_LexStrChar)NULL;
}

PERR_LexStrChar PERR_setLexStrCharB(PERR_LexStrChar arg, char b) {
  if (PERR_isLexStrCharDecimal(arg)) {
    return (PERR_LexStrChar)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) ((ATerm) PERR_byteToChar(b))), 2), 1);
  }

  ATabort("LexStrChar has no B: %t\n", arg);
  return (PERR_LexStrChar)NULL;
}

PERR_LexStrChar PERR_setLexStrCharC(PERR_LexStrChar arg, char c) {
  if (PERR_isLexStrCharDecimal(arg)) {
    return (PERR_LexStrChar)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) ((ATerm) PERR_byteToChar(c))), 3), 1);
  }

  ATabort("LexStrChar has no C: %t\n", arg);
  return (PERR_LexStrChar)NULL;
}

PERR_LexStrChar PERR_setLexStrCharCh(PERR_LexStrChar arg, char ch) {
  if (PERR_isLexStrCharNormal(arg)) {
    return (PERR_LexStrChar)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) ((ATerm) PERR_byteToChar(ch))), 0), 1);
  }

  ATabort("LexStrChar has no Ch: %t\n", arg);
  return (PERR_LexStrChar)NULL;
}

ATbool PERR_isValidStrChar(PERR_StrChar arg) {
  if (PERR_isStrCharLexToCf(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PERR_isStrCharLexToCf(PERR_StrChar arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PERR_patternStrCharLexToCf, NULL));
#endif
  return ATtrue;
}

ATbool PERR_hasStrCharStrChar(PERR_StrChar arg) {
  if (PERR_isStrCharLexToCf(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

PERR_LexStrChar PERR_getStrCharStrChar(PERR_StrChar arg) {
  
    return (PERR_LexStrChar)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1));
}

PERR_StrChar PERR_setStrCharStrChar(PERR_StrChar arg, PERR_LexStrChar StrChar) {
  if (PERR_isStrCharLexToCf(arg)) {
    return (PERR_StrChar)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) StrChar), 0), 1);
  }

  ATabort("StrChar has no StrChar: %t\n", arg);
  return (PERR_StrChar)NULL;
}

ATbool PERR_isValidLexStrCon(PERR_LexStrCon arg) {
  if (PERR_isLexStrConDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PERR_isLexStrConDefault(PERR_LexStrCon arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PERR_patternLexStrConDefault, NULL));
#endif
  return ATtrue;
}

ATbool PERR_hasLexStrConChars(PERR_LexStrCon arg) {
  if (PERR_isLexStrConDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

PERR_LexStrCharChars PERR_getLexStrConChars(PERR_LexStrCon arg) {
  
    return (PERR_LexStrCharChars)ATgetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1), 1);
}

PERR_LexStrCon PERR_setLexStrConChars(PERR_LexStrCon arg, PERR_LexStrCharChars chars) {
  if (PERR_isLexStrConDefault(arg)) {
    return (PERR_LexStrCon)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1), (ATerm)((ATerm) chars), 1), 1), 1);
  }

  ATabort("LexStrCon has no Chars: %t\n", arg);
  return (PERR_LexStrCon)NULL;
}

ATbool PERR_isValidStrCon(PERR_StrCon arg) {
  if (PERR_isStrConLexToCf(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PERR_isStrConLexToCf(PERR_StrCon arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PERR_patternStrConLexToCf, NULL));
#endif
  return ATtrue;
}

ATbool PERR_hasStrConStrCon(PERR_StrCon arg) {
  if (PERR_isStrConLexToCf(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

PERR_LexStrCon PERR_getStrConStrCon(PERR_StrCon arg) {
  
    return (PERR_LexStrCon)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1));
}

PERR_StrCon PERR_setStrConStrCon(PERR_StrCon arg, PERR_LexStrCon StrCon) {
  if (PERR_isStrConLexToCf(arg)) {
    return (PERR_StrCon)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) StrCon), 0), 1);
  }

  ATabort("StrCon has no StrCon: %t\n", arg);
  return (PERR_StrCon)NULL;
}

ATbool PERR_isValidLexStrCharChars(PERR_LexStrCharChars arg) {
  if (PERR_isLexStrCharCharsEmpty(arg)) {
    return ATtrue;
  }
  else if (PERR_isLexStrCharCharsSingle(arg)) {
    return ATtrue;
  }
  else if (PERR_isLexStrCharCharsMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PERR_isLexStrCharCharsEmpty(PERR_LexStrCharChars arg) {
  if (!ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PERR_patternLexStrCharCharsEmpty));
#endif
  return ATtrue;
}

inline ATbool PERR_isLexStrCharCharsSingle(PERR_LexStrCharChars arg) {
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
      last_result = ATmatchTerm((ATerm)arg, PERR_patternLexStrCharCharsSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool PERR_isLexStrCharCharsMany(PERR_LexStrCharChars arg) {
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
      last_result = ATmatchTerm((ATerm)arg, PERR_patternLexStrCharCharsMany, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

ATbool PERR_hasLexStrCharCharsHead(PERR_LexStrCharChars arg) {
  if (PERR_isLexStrCharCharsSingle(arg)) {
    return ATtrue;
  }
  else if (PERR_isLexStrCharCharsMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasLexStrCharCharsTail(PERR_LexStrCharChars arg) {
  if (PERR_isLexStrCharCharsMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

PERR_LexStrChar PERR_getLexStrCharCharsHead(PERR_LexStrCharChars arg) {
  if (PERR_isLexStrCharCharsSingle(arg)) {
    return (PERR_LexStrChar)ATgetFirst((ATermList)arg);
  }
  else 
    return (PERR_LexStrChar)ATgetFirst((ATermList)arg);
}

PERR_LexStrCharChars PERR_getLexStrCharCharsTail(PERR_LexStrCharChars arg) {
  
    return (PERR_LexStrCharChars)ATgetNext((ATermList)arg);
}

PERR_LexStrCharChars PERR_setLexStrCharCharsHead(PERR_LexStrCharChars arg, PERR_LexStrChar head) {
  if (PERR_isLexStrCharCharsSingle(arg)) {
    return (PERR_LexStrCharChars)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }
  else if (PERR_isLexStrCharCharsMany(arg)) {
    return (PERR_LexStrCharChars)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }

  ATabort("LexStrCharChars has no Head: %t\n", arg);
  return (PERR_LexStrCharChars)NULL;
}

PERR_LexStrCharChars PERR_setLexStrCharCharsTail(PERR_LexStrCharChars arg, PERR_LexStrCharChars tail) {
  if (PERR_isLexStrCharCharsMany(arg)) {
    return (PERR_LexStrCharChars)ATreplaceTail((ATermList)arg, (ATermList)((ATerm) tail), 1);
  }

  ATabort("LexStrCharChars has no Tail: %t\n", arg);
  return (PERR_LexStrCharChars)NULL;
}

ATbool PERR_isValidLexNatCon(PERR_LexNatCon arg) {
  if (PERR_isLexNatConDigits(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PERR_isLexNatConDigits(PERR_LexNatCon arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PERR_patternLexNatConDigits, NULL));
#endif
  return ATtrue;
}

ATbool PERR_hasLexNatConList(PERR_LexNatCon arg) {
  if (PERR_isLexNatConDigits(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

char* PERR_getLexNatConList(PERR_LexNatCon arg) {
  
    return (char*)PERR_charsToString((ATerm)ATgetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), 1));
}

PERR_LexNatCon PERR_setLexNatConList(PERR_LexNatCon arg, const char* list) {
  if (PERR_isLexNatConDigits(arg)) {
    return (PERR_LexNatCon)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), (ATerm)((ATerm) ((ATerm) PERR_stringToChars(list))), 1), 0), 1);
  }

  ATabort("LexNatCon has no List: %t\n", arg);
  return (PERR_LexNatCon)NULL;
}

ATbool PERR_isValidNatCon(PERR_NatCon arg) {
  if (PERR_isNatConLexToCf(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PERR_isNatConLexToCf(PERR_NatCon arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PERR_patternNatConLexToCf, NULL));
#endif
  return ATtrue;
}

ATbool PERR_hasNatConNatCon(PERR_NatCon arg) {
  if (PERR_isNatConLexToCf(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

PERR_LexNatCon PERR_getNatConNatCon(PERR_NatCon arg) {
  
    return (PERR_LexNatCon)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1));
}

PERR_NatCon PERR_setNatConNatCon(PERR_NatCon arg, PERR_LexNatCon NatCon) {
  if (PERR_isNatConLexToCf(arg)) {
    return (PERR_NatCon)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) NatCon), 0), 1);
  }

  ATabort("NatCon has no NatCon: %t\n", arg);
  return (PERR_NatCon)NULL;
}

ATbool PERR_isValidLexLayout(PERR_LexLayout arg) {
  if (PERR_isLexLayoutWhitespace(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PERR_isLexLayoutWhitespace(PERR_LexLayout arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PERR_patternLexLayoutWhitespace, NULL));
#endif
  return ATtrue;
}

ATbool PERR_hasLexLayoutCh(PERR_LexLayout arg) {
  if (PERR_isLexLayoutWhitespace(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

char PERR_getLexLayoutCh(PERR_LexLayout arg) {
  
    return (char)PERR_charToByte((ATerm)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)));
}

PERR_LexLayout PERR_setLexLayoutCh(PERR_LexLayout arg, char ch) {
  if (PERR_isLexLayoutWhitespace(arg)) {
    return (PERR_LexLayout)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) ((ATerm) PERR_byteToChar(ch))), 0), 1);
  }

  ATabort("LexLayout has no Ch: %t\n", arg);
  return (PERR_LexLayout)NULL;
}

ATbool PERR_isValidStart(PERR_Start arg) {
  if (PERR_isStartSummary(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartError(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PERR_isStartSummary(PERR_Start arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PERR_patternStartSummary, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool PERR_isStartError(PERR_Start arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PERR_patternStartError, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

ATbool PERR_hasStartWsBefore(PERR_Start arg) {
  if (PERR_isStartSummary(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartError(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasStartTopSummary(PERR_Start arg) {
  if (PERR_isStartSummary(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasStartWsAfter(PERR_Start arg) {
  if (PERR_isStartSummary(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartError(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasStartAmbCnt(PERR_Start arg) {
  if (PERR_isStartSummary(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartError(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasStartTopError(PERR_Start arg) {
  if (PERR_isStartError(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

PERR_OptLayout PERR_getStartWsBefore(PERR_Start arg) {
  if (PERR_isStartSummary(arg)) {
    return (PERR_OptLayout)ATgetFirst((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1));
  }
  else 
    return (PERR_OptLayout)ATgetFirst((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1));
}

PERR_Summary PERR_getStartTopSummary(PERR_Start arg) {
  
    return (PERR_Summary)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 1);
}

PERR_OptLayout PERR_getStartWsAfter(PERR_Start arg) {
  if (PERR_isStartSummary(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 2);
  }
  else 
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 2);
}

int PERR_getStartAmbCnt(PERR_Start arg) {
  if (PERR_isStartSummary(arg)) {
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 1));
  }
  else 
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 1));
}

PERR_Error PERR_getStartTopError(PERR_Start arg) {
  
    return (PERR_Error)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 1);
}

PERR_Start PERR_setStartWsBefore(PERR_Start arg, PERR_OptLayout wsBefore) {
  if (PERR_isStartSummary(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsBefore), 0), 1), 0);
  }
  else if (PERR_isStartError(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsBefore), 0), 1), 0);
  }

  ATabort("Start has no WsBefore: %t\n", arg);
  return (PERR_Start)NULL;
}

PERR_Start PERR_setStartTopSummary(PERR_Start arg, PERR_Summary topSummary) {
  if (PERR_isStartSummary(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) topSummary), 1), 1), 0);
  }

  ATabort("Start has no TopSummary: %t\n", arg);
  return (PERR_Start)NULL;
}

PERR_Start PERR_setStartWsAfter(PERR_Start arg, PERR_OptLayout wsAfter) {
  if (PERR_isStartSummary(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsAfter), 2), 1), 0);
  }
  else if (PERR_isStartError(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsAfter), 2), 1), 0);
  }

  ATabort("Start has no WsAfter: %t\n", arg);
  return (PERR_Start)NULL;
}

PERR_Start PERR_setStartAmbCnt(PERR_Start arg, int ambCnt) {
  if (PERR_isStartSummary(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(ambCnt)), 1);
  }
  else if (PERR_isStartError(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(ambCnt)), 1);
  }

  ATabort("Start has no AmbCnt: %t\n", arg);
  return (PERR_Start)NULL;
}

PERR_Start PERR_setStartTopError(PERR_Start arg, PERR_Error topError) {
  if (PERR_isStartError(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) topError), 1), 1), 0);
  }

  ATabort("Start has no TopError: %t\n", arg);
  return (PERR_Start)NULL;
}

ATbool PERR_isValidSubject(PERR_Subject arg) {
  if (PERR_isSubjectSubject(arg)) {
    return ATtrue;
  }
  else if (PERR_isSubjectLocalized(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PERR_isSubjectSubject(PERR_Subject arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PERR_patternSubjectSubject, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool PERR_isSubjectLocalized(PERR_Subject arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PERR_patternSubjectLocalized, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

ATbool PERR_hasSubjectWsAfterSubject(PERR_Subject arg) {
  if (PERR_isSubjectSubject(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasSubjectWsAfterParenOpen(PERR_Subject arg) {
  if (PERR_isSubjectSubject(arg)) {
    return ATtrue;
  }
  else if (PERR_isSubjectLocalized(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasSubjectDescription(PERR_Subject arg) {
  if (PERR_isSubjectSubject(arg)) {
    return ATtrue;
  }
  else if (PERR_isSubjectLocalized(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasSubjectWsAfterDescription(PERR_Subject arg) {
  if (PERR_isSubjectSubject(arg)) {
    return ATtrue;
  }
  else if (PERR_isSubjectLocalized(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasSubjectWsAfterLocalized(PERR_Subject arg) {
  if (PERR_isSubjectLocalized(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasSubjectWsAfterComma(PERR_Subject arg) {
  if (PERR_isSubjectLocalized(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasSubjectLocation(PERR_Subject arg) {
  if (PERR_isSubjectLocalized(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasSubjectWsAfterLocation(PERR_Subject arg) {
  if (PERR_isSubjectLocalized(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

PERR_OptLayout PERR_getSubjectWsAfterSubject(PERR_Subject arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

PERR_OptLayout PERR_getSubjectWsAfterParenOpen(PERR_Subject arg) {
  if (PERR_isSubjectSubject(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
  }
  else 
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
}

PERR_StrCon PERR_getSubjectDescription(PERR_Subject arg) {
  if (PERR_isSubjectSubject(arg)) {
    return (PERR_StrCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4);
  }
  else 
    return (PERR_StrCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4);
}

PERR_OptLayout PERR_getSubjectWsAfterDescription(PERR_Subject arg) {
  if (PERR_isSubjectSubject(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 5);
  }
  else 
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 5);
}

PERR_OptLayout PERR_getSubjectWsAfterLocalized(PERR_Subject arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

PERR_OptLayout PERR_getSubjectWsAfterComma(PERR_Subject arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 7);
}

PERR_Location PERR_getSubjectLocation(PERR_Subject arg) {
  
    return (PERR_Location)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 8);
}

PERR_OptLayout PERR_getSubjectWsAfterLocation(PERR_Subject arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 9);
}

PERR_Subject PERR_setSubjectWsAfterSubject(PERR_Subject arg, PERR_OptLayout wsAfterSubject) {
  if (PERR_isSubjectSubject(arg)) {
    return (PERR_Subject)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterSubject), 1), 1);
  }

  ATabort("Subject has no WsAfterSubject: %t\n", arg);
  return (PERR_Subject)NULL;
}

PERR_Subject PERR_setSubjectWsAfterParenOpen(PERR_Subject arg, PERR_OptLayout wsAfterParenOpen) {
  if (PERR_isSubjectSubject(arg)) {
    return (PERR_Subject)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterParenOpen), 3), 1);
  }
  else if (PERR_isSubjectLocalized(arg)) {
    return (PERR_Subject)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterParenOpen), 3), 1);
  }

  ATabort("Subject has no WsAfterParenOpen: %t\n", arg);
  return (PERR_Subject)NULL;
}

PERR_Subject PERR_setSubjectDescription(PERR_Subject arg, PERR_StrCon description) {
  if (PERR_isSubjectSubject(arg)) {
    return (PERR_Subject)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) description), 4), 1);
  }
  else if (PERR_isSubjectLocalized(arg)) {
    return (PERR_Subject)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) description), 4), 1);
  }

  ATabort("Subject has no Description: %t\n", arg);
  return (PERR_Subject)NULL;
}

PERR_Subject PERR_setSubjectWsAfterDescription(PERR_Subject arg, PERR_OptLayout wsAfterDescription) {
  if (PERR_isSubjectSubject(arg)) {
    return (PERR_Subject)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterDescription), 5), 1);
  }
  else if (PERR_isSubjectLocalized(arg)) {
    return (PERR_Subject)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterDescription), 5), 1);
  }

  ATabort("Subject has no WsAfterDescription: %t\n", arg);
  return (PERR_Subject)NULL;
}

PERR_Subject PERR_setSubjectWsAfterLocalized(PERR_Subject arg, PERR_OptLayout wsAfterLocalized) {
  if (PERR_isSubjectLocalized(arg)) {
    return (PERR_Subject)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterLocalized), 1), 1);
  }

  ATabort("Subject has no WsAfterLocalized: %t\n", arg);
  return (PERR_Subject)NULL;
}

PERR_Subject PERR_setSubjectWsAfterComma(PERR_Subject arg, PERR_OptLayout wsAfterComma) {
  if (PERR_isSubjectLocalized(arg)) {
    return (PERR_Subject)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma), 7), 1);
  }

  ATabort("Subject has no WsAfterComma: %t\n", arg);
  return (PERR_Subject)NULL;
}

PERR_Subject PERR_setSubjectLocation(PERR_Subject arg, PERR_Location Location) {
  if (PERR_isSubjectLocalized(arg)) {
    return (PERR_Subject)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) Location), 8), 1);
  }

  ATabort("Subject has no Location: %t\n", arg);
  return (PERR_Subject)NULL;
}

PERR_Subject PERR_setSubjectWsAfterLocation(PERR_Subject arg, PERR_OptLayout wsAfterLocation) {
  if (PERR_isSubjectLocalized(arg)) {
    return (PERR_Subject)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterLocation), 9), 1);
  }

  ATabort("Subject has no WsAfterLocation: %t\n", arg);
  return (PERR_Subject)NULL;
}

ATbool PERR_isValidError(PERR_Error arg) {
  if (PERR_isErrorInfo(arg)) {
    return ATtrue;
  }
  else if (PERR_isErrorWarning(arg)) {
    return ATtrue;
  }
  else if (PERR_isErrorError(arg)) {
    return ATtrue;
  }
  else if (PERR_isErrorFatal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PERR_isErrorInfo(PERR_Error arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PERR_patternErrorInfo, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool PERR_isErrorWarning(PERR_Error arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PERR_patternErrorWarning, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool PERR_isErrorError(PERR_Error arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PERR_patternErrorError, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool PERR_isErrorFatal(PERR_Error arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PERR_patternErrorFatal, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

ATbool PERR_hasErrorWsAfterInfo(PERR_Error arg) {
  if (PERR_isErrorInfo(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasErrorWsAfterParenOpen(PERR_Error arg) {
  if (PERR_isErrorInfo(arg)) {
    return ATtrue;
  }
  else if (PERR_isErrorWarning(arg)) {
    return ATtrue;
  }
  else if (PERR_isErrorError(arg)) {
    return ATtrue;
  }
  else if (PERR_isErrorFatal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasErrorDescription(PERR_Error arg) {
  if (PERR_isErrorInfo(arg)) {
    return ATtrue;
  }
  else if (PERR_isErrorWarning(arg)) {
    return ATtrue;
  }
  else if (PERR_isErrorError(arg)) {
    return ATtrue;
  }
  else if (PERR_isErrorFatal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasErrorWsAfterDescription(PERR_Error arg) {
  if (PERR_isErrorInfo(arg)) {
    return ATtrue;
  }
  else if (PERR_isErrorWarning(arg)) {
    return ATtrue;
  }
  else if (PERR_isErrorError(arg)) {
    return ATtrue;
  }
  else if (PERR_isErrorFatal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasErrorWsAfterComma(PERR_Error arg) {
  if (PERR_isErrorInfo(arg)) {
    return ATtrue;
  }
  else if (PERR_isErrorWarning(arg)) {
    return ATtrue;
  }
  else if (PERR_isErrorError(arg)) {
    return ATtrue;
  }
  else if (PERR_isErrorFatal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasErrorWsAfterBracketOpen(PERR_Error arg) {
  if (PERR_isErrorInfo(arg)) {
    return ATtrue;
  }
  else if (PERR_isErrorWarning(arg)) {
    return ATtrue;
  }
  else if (PERR_isErrorError(arg)) {
    return ATtrue;
  }
  else if (PERR_isErrorFatal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasErrorList(PERR_Error arg) {
  if (PERR_isErrorInfo(arg)) {
    return ATtrue;
  }
  else if (PERR_isErrorWarning(arg)) {
    return ATtrue;
  }
  else if (PERR_isErrorError(arg)) {
    return ATtrue;
  }
  else if (PERR_isErrorFatal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasErrorWsAfterList(PERR_Error arg) {
  if (PERR_isErrorInfo(arg)) {
    return ATtrue;
  }
  else if (PERR_isErrorWarning(arg)) {
    return ATtrue;
  }
  else if (PERR_isErrorError(arg)) {
    return ATtrue;
  }
  else if (PERR_isErrorFatal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasErrorWsAfterBracketClose(PERR_Error arg) {
  if (PERR_isErrorInfo(arg)) {
    return ATtrue;
  }
  else if (PERR_isErrorWarning(arg)) {
    return ATtrue;
  }
  else if (PERR_isErrorError(arg)) {
    return ATtrue;
  }
  else if (PERR_isErrorFatal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasErrorWsAfterWarning(PERR_Error arg) {
  if (PERR_isErrorWarning(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasErrorWsAfterError(PERR_Error arg) {
  if (PERR_isErrorError(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasErrorWsAfterFatal(PERR_Error arg) {
  if (PERR_isErrorFatal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

PERR_OptLayout PERR_getErrorWsAfterInfo(PERR_Error arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

PERR_OptLayout PERR_getErrorWsAfterParenOpen(PERR_Error arg) {
  if (PERR_isErrorInfo(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
  }
  else if (PERR_isErrorWarning(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
  }
  else if (PERR_isErrorError(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
  }
  else 
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
}

PERR_StrCon PERR_getErrorDescription(PERR_Error arg) {
  if (PERR_isErrorInfo(arg)) {
    return (PERR_StrCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4);
  }
  else if (PERR_isErrorWarning(arg)) {
    return (PERR_StrCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4);
  }
  else if (PERR_isErrorError(arg)) {
    return (PERR_StrCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4);
  }
  else 
    return (PERR_StrCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4);
}

PERR_OptLayout PERR_getErrorWsAfterDescription(PERR_Error arg) {
  if (PERR_isErrorInfo(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 5);
  }
  else if (PERR_isErrorWarning(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 5);
  }
  else if (PERR_isErrorError(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 5);
  }
  else 
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 5);
}

PERR_OptLayout PERR_getErrorWsAfterComma(PERR_Error arg) {
  if (PERR_isErrorInfo(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 7);
  }
  else if (PERR_isErrorWarning(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 7);
  }
  else if (PERR_isErrorError(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 7);
  }
  else 
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 7);
}

PERR_OptLayout PERR_getErrorWsAfterBracketOpen(PERR_Error arg) {
  if (PERR_isErrorInfo(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 9);
  }
  else if (PERR_isErrorWarning(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 9);
  }
  else if (PERR_isErrorError(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 9);
  }
  else 
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 9);
}

PERR_SubjectList PERR_getErrorList(PERR_Error arg) {
  if (PERR_isErrorInfo(arg)) {
    return (PERR_SubjectList)ATgetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 10), 1);
  }
  else if (PERR_isErrorWarning(arg)) {
    return (PERR_SubjectList)ATgetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 10), 1);
  }
  else if (PERR_isErrorError(arg)) {
    return (PERR_SubjectList)ATgetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 10), 1);
  }
  else 
    return (PERR_SubjectList)ATgetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 10), 1);
}

PERR_OptLayout PERR_getErrorWsAfterList(PERR_Error arg) {
  if (PERR_isErrorInfo(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 11);
  }
  else if (PERR_isErrorWarning(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 11);
  }
  else if (PERR_isErrorError(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 11);
  }
  else 
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 11);
}

PERR_OptLayout PERR_getErrorWsAfterBracketClose(PERR_Error arg) {
  if (PERR_isErrorInfo(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 13);
  }
  else if (PERR_isErrorWarning(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 13);
  }
  else if (PERR_isErrorError(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 13);
  }
  else 
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 13);
}

PERR_OptLayout PERR_getErrorWsAfterWarning(PERR_Error arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

PERR_OptLayout PERR_getErrorWsAfterError(PERR_Error arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

PERR_OptLayout PERR_getErrorWsAfterFatal(PERR_Error arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

PERR_Error PERR_setErrorWsAfterInfo(PERR_Error arg, PERR_OptLayout wsAfterInfo) {
  if (PERR_isErrorInfo(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterInfo), 1), 1);
  }

  ATabort("Error has no WsAfterInfo: %t\n", arg);
  return (PERR_Error)NULL;
}

PERR_Error PERR_setErrorWsAfterParenOpen(PERR_Error arg, PERR_OptLayout wsAfterParenOpen) {
  if (PERR_isErrorInfo(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterParenOpen), 3), 1);
  }
  else if (PERR_isErrorWarning(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterParenOpen), 3), 1);
  }
  else if (PERR_isErrorError(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterParenOpen), 3), 1);
  }
  else if (PERR_isErrorFatal(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterParenOpen), 3), 1);
  }

  ATabort("Error has no WsAfterParenOpen: %t\n", arg);
  return (PERR_Error)NULL;
}

PERR_Error PERR_setErrorDescription(PERR_Error arg, PERR_StrCon description) {
  if (PERR_isErrorInfo(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) description), 4), 1);
  }
  else if (PERR_isErrorWarning(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) description), 4), 1);
  }
  else if (PERR_isErrorError(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) description), 4), 1);
  }
  else if (PERR_isErrorFatal(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) description), 4), 1);
  }

  ATabort("Error has no Description: %t\n", arg);
  return (PERR_Error)NULL;
}

PERR_Error PERR_setErrorWsAfterDescription(PERR_Error arg, PERR_OptLayout wsAfterDescription) {
  if (PERR_isErrorInfo(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterDescription), 5), 1);
  }
  else if (PERR_isErrorWarning(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterDescription), 5), 1);
  }
  else if (PERR_isErrorError(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterDescription), 5), 1);
  }
  else if (PERR_isErrorFatal(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterDescription), 5), 1);
  }

  ATabort("Error has no WsAfterDescription: %t\n", arg);
  return (PERR_Error)NULL;
}

PERR_Error PERR_setErrorWsAfterComma(PERR_Error arg, PERR_OptLayout wsAfterComma) {
  if (PERR_isErrorInfo(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma), 7), 1);
  }
  else if (PERR_isErrorWarning(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma), 7), 1);
  }
  else if (PERR_isErrorError(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma), 7), 1);
  }
  else if (PERR_isErrorFatal(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma), 7), 1);
  }

  ATabort("Error has no WsAfterComma: %t\n", arg);
  return (PERR_Error)NULL;
}

PERR_Error PERR_setErrorWsAfterBracketOpen(PERR_Error arg, PERR_OptLayout wsAfterBracketOpen) {
  if (PERR_isErrorInfo(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterBracketOpen), 9), 1);
  }
  else if (PERR_isErrorWarning(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterBracketOpen), 9), 1);
  }
  else if (PERR_isErrorError(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterBracketOpen), 9), 1);
  }
  else if (PERR_isErrorFatal(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterBracketOpen), 9), 1);
  }

  ATabort("Error has no WsAfterBracketOpen: %t\n", arg);
  return (PERR_Error)NULL;
}

PERR_Error PERR_setErrorList(PERR_Error arg, PERR_SubjectList list) {
  if (PERR_isErrorInfo(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 10), (ATerm)((ATerm) list), 1), 10), 1);
  }
  else if (PERR_isErrorWarning(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 10), (ATerm)((ATerm) list), 1), 10), 1);
  }
  else if (PERR_isErrorError(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 10), (ATerm)((ATerm) list), 1), 10), 1);
  }
  else if (PERR_isErrorFatal(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 10), (ATerm)((ATerm) list), 1), 10), 1);
  }

  ATabort("Error has no List: %t\n", arg);
  return (PERR_Error)NULL;
}

PERR_Error PERR_setErrorWsAfterList(PERR_Error arg, PERR_OptLayout wsAfterList) {
  if (PERR_isErrorInfo(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterList), 11), 1);
  }
  else if (PERR_isErrorWarning(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterList), 11), 1);
  }
  else if (PERR_isErrorError(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterList), 11), 1);
  }
  else if (PERR_isErrorFatal(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterList), 11), 1);
  }

  ATabort("Error has no WsAfterList: %t\n", arg);
  return (PERR_Error)NULL;
}

PERR_Error PERR_setErrorWsAfterBracketClose(PERR_Error arg, PERR_OptLayout wsAfterBracketClose) {
  if (PERR_isErrorInfo(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterBracketClose), 13), 1);
  }
  else if (PERR_isErrorWarning(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterBracketClose), 13), 1);
  }
  else if (PERR_isErrorError(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterBracketClose), 13), 1);
  }
  else if (PERR_isErrorFatal(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterBracketClose), 13), 1);
  }

  ATabort("Error has no WsAfterBracketClose: %t\n", arg);
  return (PERR_Error)NULL;
}

PERR_Error PERR_setErrorWsAfterWarning(PERR_Error arg, PERR_OptLayout wsAfterWarning) {
  if (PERR_isErrorWarning(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterWarning), 1), 1);
  }

  ATabort("Error has no WsAfterWarning: %t\n", arg);
  return (PERR_Error)NULL;
}

PERR_Error PERR_setErrorWsAfterError(PERR_Error arg, PERR_OptLayout wsAfterError) {
  if (PERR_isErrorError(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterError), 1), 1);
  }

  ATabort("Error has no WsAfterError: %t\n", arg);
  return (PERR_Error)NULL;
}

PERR_Error PERR_setErrorWsAfterFatal(PERR_Error arg, PERR_OptLayout wsAfterFatal) {
  if (PERR_isErrorFatal(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterFatal), 1), 1);
  }

  ATabort("Error has no WsAfterFatal: %t\n", arg);
  return (PERR_Error)NULL;
}

ATbool PERR_isValidSummary(PERR_Summary arg) {
  if (PERR_isSummarySummary(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PERR_isSummarySummary(PERR_Summary arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PERR_patternSummarySummary, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL));
#endif
  return ATtrue;
}

ATbool PERR_hasSummaryWsAfterSummary(PERR_Summary arg) {
  if (PERR_isSummarySummary(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasSummaryWsAfterParenOpen(PERR_Summary arg) {
  if (PERR_isSummarySummary(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasSummaryProducer(PERR_Summary arg) {
  if (PERR_isSummarySummary(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasSummaryWsAfterProducer(PERR_Summary arg) {
  if (PERR_isSummarySummary(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasSummaryWsAfterComma(PERR_Summary arg) {
  if (PERR_isSummarySummary(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasSummaryId(PERR_Summary arg) {
  if (PERR_isSummarySummary(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasSummaryWsAfterId(PERR_Summary arg) {
  if (PERR_isSummarySummary(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasSummaryWsAfterComma1(PERR_Summary arg) {
  if (PERR_isSummarySummary(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasSummaryWsAfterBracketOpen(PERR_Summary arg) {
  if (PERR_isSummarySummary(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasSummaryList(PERR_Summary arg) {
  if (PERR_isSummarySummary(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasSummaryWsAfterList(PERR_Summary arg) {
  if (PERR_isSummarySummary(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasSummaryWsAfterBracketClose(PERR_Summary arg) {
  if (PERR_isSummarySummary(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

PERR_OptLayout PERR_getSummaryWsAfterSummary(PERR_Summary arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

PERR_OptLayout PERR_getSummaryWsAfterParenOpen(PERR_Summary arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
}

PERR_StrCon PERR_getSummaryProducer(PERR_Summary arg) {
  
    return (PERR_StrCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4);
}

PERR_OptLayout PERR_getSummaryWsAfterProducer(PERR_Summary arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 5);
}

PERR_OptLayout PERR_getSummaryWsAfterComma(PERR_Summary arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 7);
}

PERR_StrCon PERR_getSummaryId(PERR_Summary arg) {
  
    return (PERR_StrCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 8);
}

PERR_OptLayout PERR_getSummaryWsAfterId(PERR_Summary arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 9);
}

PERR_OptLayout PERR_getSummaryWsAfterComma1(PERR_Summary arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 11);
}

PERR_OptLayout PERR_getSummaryWsAfterBracketOpen(PERR_Summary arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 13);
}

PERR_ErrorList PERR_getSummaryList(PERR_Summary arg) {
  
    return (PERR_ErrorList)ATgetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 14), 1);
}

PERR_OptLayout PERR_getSummaryWsAfterList(PERR_Summary arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 15);
}

PERR_OptLayout PERR_getSummaryWsAfterBracketClose(PERR_Summary arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 17);
}

PERR_Summary PERR_setSummaryWsAfterSummary(PERR_Summary arg, PERR_OptLayout wsAfterSummary) {
  if (PERR_isSummarySummary(arg)) {
    return (PERR_Summary)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterSummary), 1), 1);
  }

  ATabort("Summary has no WsAfterSummary: %t\n", arg);
  return (PERR_Summary)NULL;
}

PERR_Summary PERR_setSummaryWsAfterParenOpen(PERR_Summary arg, PERR_OptLayout wsAfterParenOpen) {
  if (PERR_isSummarySummary(arg)) {
    return (PERR_Summary)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterParenOpen), 3), 1);
  }

  ATabort("Summary has no WsAfterParenOpen: %t\n", arg);
  return (PERR_Summary)NULL;
}

PERR_Summary PERR_setSummaryProducer(PERR_Summary arg, PERR_StrCon producer) {
  if (PERR_isSummarySummary(arg)) {
    return (PERR_Summary)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) producer), 4), 1);
  }

  ATabort("Summary has no Producer: %t\n", arg);
  return (PERR_Summary)NULL;
}

PERR_Summary PERR_setSummaryWsAfterProducer(PERR_Summary arg, PERR_OptLayout wsAfterProducer) {
  if (PERR_isSummarySummary(arg)) {
    return (PERR_Summary)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterProducer), 5), 1);
  }

  ATabort("Summary has no WsAfterProducer: %t\n", arg);
  return (PERR_Summary)NULL;
}

PERR_Summary PERR_setSummaryWsAfterComma(PERR_Summary arg, PERR_OptLayout wsAfterComma) {
  if (PERR_isSummarySummary(arg)) {
    return (PERR_Summary)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma), 7), 1);
  }

  ATabort("Summary has no WsAfterComma: %t\n", arg);
  return (PERR_Summary)NULL;
}

PERR_Summary PERR_setSummaryId(PERR_Summary arg, PERR_StrCon id) {
  if (PERR_isSummarySummary(arg)) {
    return (PERR_Summary)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) id), 8), 1);
  }

  ATabort("Summary has no Id: %t\n", arg);
  return (PERR_Summary)NULL;
}

PERR_Summary PERR_setSummaryWsAfterId(PERR_Summary arg, PERR_OptLayout wsAfterId) {
  if (PERR_isSummarySummary(arg)) {
    return (PERR_Summary)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterId), 9), 1);
  }

  ATabort("Summary has no WsAfterId: %t\n", arg);
  return (PERR_Summary)NULL;
}

PERR_Summary PERR_setSummaryWsAfterComma1(PERR_Summary arg, PERR_OptLayout wsAfterComma1) {
  if (PERR_isSummarySummary(arg)) {
    return (PERR_Summary)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma1), 11), 1);
  }

  ATabort("Summary has no WsAfterComma1: %t\n", arg);
  return (PERR_Summary)NULL;
}

PERR_Summary PERR_setSummaryWsAfterBracketOpen(PERR_Summary arg, PERR_OptLayout wsAfterBracketOpen) {
  if (PERR_isSummarySummary(arg)) {
    return (PERR_Summary)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterBracketOpen), 13), 1);
  }

  ATabort("Summary has no WsAfterBracketOpen: %t\n", arg);
  return (PERR_Summary)NULL;
}

PERR_Summary PERR_setSummaryList(PERR_Summary arg, PERR_ErrorList list) {
  if (PERR_isSummarySummary(arg)) {
    return (PERR_Summary)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 14), (ATerm)((ATerm) list), 1), 14), 1);
  }

  ATabort("Summary has no List: %t\n", arg);
  return (PERR_Summary)NULL;
}

PERR_Summary PERR_setSummaryWsAfterList(PERR_Summary arg, PERR_OptLayout wsAfterList) {
  if (PERR_isSummarySummary(arg)) {
    return (PERR_Summary)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterList), 15), 1);
  }

  ATabort("Summary has no WsAfterList: %t\n", arg);
  return (PERR_Summary)NULL;
}

PERR_Summary PERR_setSummaryWsAfterBracketClose(PERR_Summary arg, PERR_OptLayout wsAfterBracketClose) {
  if (PERR_isSummarySummary(arg)) {
    return (PERR_Summary)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterBracketClose), 17), 1);
  }

  ATabort("Summary has no WsAfterBracketClose: %t\n", arg);
  return (PERR_Summary)NULL;
}

ATbool PERR_isValidSubjectList(PERR_SubjectList arg) {
  if (PERR_isSubjectListEmpty(arg)) {
    return ATtrue;
  }
  else if (PERR_isSubjectListSingle(arg)) {
    return ATtrue;
  }
  else if (PERR_isSubjectListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PERR_isSubjectListEmpty(PERR_SubjectList arg) {
  if (!ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PERR_patternSubjectListEmpty));
#endif
  return ATtrue;
}

inline ATbool PERR_isSubjectListSingle(PERR_SubjectList arg) {
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
      last_result = ATmatchTerm((ATerm)arg, PERR_patternSubjectListSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool PERR_isSubjectListMany(PERR_SubjectList arg) {
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
      last_result = ATmatchTerm((ATerm)arg, PERR_patternSubjectListMany, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

ATbool PERR_hasSubjectListHead(PERR_SubjectList arg) {
  if (PERR_isSubjectListSingle(arg)) {
    return ATtrue;
  }
  else if (PERR_isSubjectListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasSubjectListWsAfterHead(PERR_SubjectList arg) {
  if (PERR_isSubjectListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasSubjectListWsAfterSep(PERR_SubjectList arg) {
  if (PERR_isSubjectListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasSubjectListTail(PERR_SubjectList arg) {
  if (PERR_isSubjectListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

PERR_SubjectList PERR_getSubjectListTail(PERR_SubjectList arg) {
  assert(!PERR_isSubjectListEmpty(arg) && "getTail on an empty list");
  if (PERR_isSubjectListSingle(arg)) {
    return (PERR_SubjectList) PERR_makeSubjectListEmpty();
  }
  else {
  
    return (PERR_SubjectList)ATgetTail((ATermList)arg, 4);
  }
}

PERR_Subject PERR_getSubjectListHead(PERR_SubjectList arg) {
  if (PERR_isSubjectListSingle(arg)) {
    return (PERR_Subject)ATgetFirst((ATermList)arg);
  }
  else 
    return (PERR_Subject)ATgetFirst((ATermList)arg);
}

PERR_OptLayout PERR_getSubjectListWsAfterHead(PERR_SubjectList arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)arg, 1);
}

PERR_OptLayout PERR_getSubjectListWsAfterSep(PERR_SubjectList arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)arg, 3);
}

PERR_SubjectList PERR_setSubjectListHead(PERR_SubjectList arg, PERR_Subject head) {
  if (PERR_isSubjectListSingle(arg)) {
    return (PERR_SubjectList)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }
  else if (PERR_isSubjectListMany(arg)) {
    return (PERR_SubjectList)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }

  ATabort("SubjectList has no Head: %t\n", arg);
  return (PERR_SubjectList)NULL;
}

PERR_SubjectList PERR_setSubjectListWsAfterHead(PERR_SubjectList arg, PERR_OptLayout wsAfterHead) {
  if (PERR_isSubjectListMany(arg)) {
    return (PERR_SubjectList)ATreplace((ATermList)arg, (ATerm)((ATerm) wsAfterHead), 1);
  }

  ATabort("SubjectList has no WsAfterHead: %t\n", arg);
  return (PERR_SubjectList)NULL;
}

PERR_SubjectList PERR_setSubjectListWsAfterSep(PERR_SubjectList arg, PERR_OptLayout wsAfterSep) {
  if (PERR_isSubjectListMany(arg)) {
    return (PERR_SubjectList)ATreplace((ATermList)arg, (ATerm)((ATerm) wsAfterSep), 3);
  }

  ATabort("SubjectList has no WsAfterSep: %t\n", arg);
  return (PERR_SubjectList)NULL;
}

PERR_SubjectList PERR_setSubjectListTail(PERR_SubjectList arg, PERR_SubjectList tail) {
  if (PERR_isSubjectListMany(arg)) {
    return (PERR_SubjectList)ATreplaceTail((ATermList)arg, (ATermList)((ATerm) tail), 4);
  }

  ATabort("SubjectList has no Tail: %t\n", arg);
  return (PERR_SubjectList)NULL;
}

ATbool PERR_isValidErrorList(PERR_ErrorList arg) {
  if (PERR_isErrorListEmpty(arg)) {
    return ATtrue;
  }
  else if (PERR_isErrorListSingle(arg)) {
    return ATtrue;
  }
  else if (PERR_isErrorListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PERR_isErrorListEmpty(PERR_ErrorList arg) {
  if (!ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PERR_patternErrorListEmpty));
#endif
  return ATtrue;
}

inline ATbool PERR_isErrorListSingle(PERR_ErrorList arg) {
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
      last_result = ATmatchTerm((ATerm)arg, PERR_patternErrorListSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool PERR_isErrorListMany(PERR_ErrorList arg) {
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
      last_result = ATmatchTerm((ATerm)arg, PERR_patternErrorListMany, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

ATbool PERR_hasErrorListHead(PERR_ErrorList arg) {
  if (PERR_isErrorListSingle(arg)) {
    return ATtrue;
  }
  else if (PERR_isErrorListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasErrorListWsAfterHead(PERR_ErrorList arg) {
  if (PERR_isErrorListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasErrorListWsAfterSep(PERR_ErrorList arg) {
  if (PERR_isErrorListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasErrorListTail(PERR_ErrorList arg) {
  if (PERR_isErrorListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

PERR_ErrorList PERR_getErrorListTail(PERR_ErrorList arg) {
  assert(!PERR_isErrorListEmpty(arg) && "getTail on an empty list");
  if (PERR_isErrorListSingle(arg)) {
    return (PERR_ErrorList) PERR_makeErrorListEmpty();
  }
  else {
  
    return (PERR_ErrorList)ATgetTail((ATermList)arg, 4);
  }
}

PERR_Error PERR_getErrorListHead(PERR_ErrorList arg) {
  if (PERR_isErrorListSingle(arg)) {
    return (PERR_Error)ATgetFirst((ATermList)arg);
  }
  else 
    return (PERR_Error)ATgetFirst((ATermList)arg);
}

PERR_OptLayout PERR_getErrorListWsAfterHead(PERR_ErrorList arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)arg, 1);
}

PERR_OptLayout PERR_getErrorListWsAfterSep(PERR_ErrorList arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)arg, 3);
}

PERR_ErrorList PERR_setErrorListHead(PERR_ErrorList arg, PERR_Error head) {
  if (PERR_isErrorListSingle(arg)) {
    return (PERR_ErrorList)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }
  else if (PERR_isErrorListMany(arg)) {
    return (PERR_ErrorList)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }

  ATabort("ErrorList has no Head: %t\n", arg);
  return (PERR_ErrorList)NULL;
}

PERR_ErrorList PERR_setErrorListWsAfterHead(PERR_ErrorList arg, PERR_OptLayout wsAfterHead) {
  if (PERR_isErrorListMany(arg)) {
    return (PERR_ErrorList)ATreplace((ATermList)arg, (ATerm)((ATerm) wsAfterHead), 1);
  }

  ATabort("ErrorList has no WsAfterHead: %t\n", arg);
  return (PERR_ErrorList)NULL;
}

PERR_ErrorList PERR_setErrorListWsAfterSep(PERR_ErrorList arg, PERR_OptLayout wsAfterSep) {
  if (PERR_isErrorListMany(arg)) {
    return (PERR_ErrorList)ATreplace((ATermList)arg, (ATerm)((ATerm) wsAfterSep), 3);
  }

  ATabort("ErrorList has no WsAfterSep: %t\n", arg);
  return (PERR_ErrorList)NULL;
}

PERR_ErrorList PERR_setErrorListTail(PERR_ErrorList arg, PERR_ErrorList tail) {
  if (PERR_isErrorListMany(arg)) {
    return (PERR_ErrorList)ATreplaceTail((ATermList)arg, (ATermList)((ATerm) tail), 4);
  }

  ATabort("ErrorList has no Tail: %t\n", arg);
  return (PERR_ErrorList)NULL;
}

ATbool PERR_isValidLocation(PERR_Location arg) {
  if (PERR_isLocationFile(arg)) {
    return ATtrue;
  }
  else if (PERR_isLocationArea(arg)) {
    return ATtrue;
  }
  else if (PERR_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PERR_isLocationFile(PERR_Location arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PERR_patternLocationFile, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool PERR_isLocationArea(PERR_Location arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PERR_patternLocationArea, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool PERR_isLocationAreaInFile(PERR_Location arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PERR_patternLocationAreaInFile, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

ATbool PERR_hasLocationWsAfterFile(PERR_Location arg) {
  if (PERR_isLocationFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasLocationWsAfterParenOpen(PERR_Location arg) {
  if (PERR_isLocationFile(arg)) {
    return ATtrue;
  }
  else if (PERR_isLocationArea(arg)) {
    return ATtrue;
  }
  else if (PERR_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasLocationFilename(PERR_Location arg) {
  if (PERR_isLocationFile(arg)) {
    return ATtrue;
  }
  else if (PERR_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasLocationWsAfterFilename(PERR_Location arg) {
  if (PERR_isLocationFile(arg)) {
    return ATtrue;
  }
  else if (PERR_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasLocationWsAfterA(PERR_Location arg) {
  if (PERR_isLocationArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasLocationArea(PERR_Location arg) {
  if (PERR_isLocationArea(arg)) {
    return ATtrue;
  }
  else if (PERR_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasLocationWsAfterArea(PERR_Location arg) {
  if (PERR_isLocationArea(arg)) {
    return ATtrue;
  }
  else if (PERR_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasLocationWsAfterAreaInFile(PERR_Location arg) {
  if (PERR_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasLocationWsAfterComma(PERR_Location arg) {
  if (PERR_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

PERR_OptLayout PERR_getLocationWsAfterFile(PERR_Location arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

PERR_OptLayout PERR_getLocationWsAfterParenOpen(PERR_Location arg) {
  if (PERR_isLocationFile(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
  }
  else if (PERR_isLocationArea(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
  }
  else 
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
}

PERR_StrCon PERR_getLocationFilename(PERR_Location arg) {
  if (PERR_isLocationFile(arg)) {
    return (PERR_StrCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4);
  }
  else 
    return (PERR_StrCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4);
}

PERR_OptLayout PERR_getLocationWsAfterFilename(PERR_Location arg) {
  if (PERR_isLocationFile(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 5);
  }
  else 
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 5);
}

PERR_OptLayout PERR_getLocationWsAfterA(PERR_Location arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

PERR_Area PERR_getLocationArea(PERR_Location arg) {
  if (PERR_isLocationArea(arg)) {
    return (PERR_Area)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4);
  }
  else 
    return (PERR_Area)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 8);
}

PERR_OptLayout PERR_getLocationWsAfterArea(PERR_Location arg) {
  if (PERR_isLocationArea(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 5);
  }
  else 
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 9);
}

PERR_OptLayout PERR_getLocationWsAfterAreaInFile(PERR_Location arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

PERR_OptLayout PERR_getLocationWsAfterComma(PERR_Location arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 7);
}

PERR_Location PERR_setLocationWsAfterFile(PERR_Location arg, PERR_OptLayout wsAfterFile) {
  if (PERR_isLocationFile(arg)) {
    return (PERR_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterFile), 1), 1);
  }

  ATabort("Location has no WsAfterFile: %t\n", arg);
  return (PERR_Location)NULL;
}

PERR_Location PERR_setLocationWsAfterParenOpen(PERR_Location arg, PERR_OptLayout wsAfterParenOpen) {
  if (PERR_isLocationFile(arg)) {
    return (PERR_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterParenOpen), 3), 1);
  }
  else if (PERR_isLocationArea(arg)) {
    return (PERR_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterParenOpen), 3), 1);
  }
  else if (PERR_isLocationAreaInFile(arg)) {
    return (PERR_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterParenOpen), 3), 1);
  }

  ATabort("Location has no WsAfterParenOpen: %t\n", arg);
  return (PERR_Location)NULL;
}

PERR_Location PERR_setLocationFilename(PERR_Location arg, PERR_StrCon filename) {
  if (PERR_isLocationFile(arg)) {
    return (PERR_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) filename), 4), 1);
  }
  else if (PERR_isLocationAreaInFile(arg)) {
    return (PERR_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) filename), 4), 1);
  }

  ATabort("Location has no Filename: %t\n", arg);
  return (PERR_Location)NULL;
}

PERR_Location PERR_setLocationWsAfterFilename(PERR_Location arg, PERR_OptLayout wsAfterFilename) {
  if (PERR_isLocationFile(arg)) {
    return (PERR_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterFilename), 5), 1);
  }
  else if (PERR_isLocationAreaInFile(arg)) {
    return (PERR_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterFilename), 5), 1);
  }

  ATabort("Location has no WsAfterFilename: %t\n", arg);
  return (PERR_Location)NULL;
}

PERR_Location PERR_setLocationWsAfterA(PERR_Location arg, PERR_OptLayout wsAfterA) {
  if (PERR_isLocationArea(arg)) {
    return (PERR_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterA), 1), 1);
  }

  ATabort("Location has no WsAfterA: %t\n", arg);
  return (PERR_Location)NULL;
}

PERR_Location PERR_setLocationArea(PERR_Location arg, PERR_Area Area) {
  if (PERR_isLocationArea(arg)) {
    return (PERR_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) Area), 4), 1);
  }
  else if (PERR_isLocationAreaInFile(arg)) {
    return (PERR_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) Area), 8), 1);
  }

  ATabort("Location has no Area: %t\n", arg);
  return (PERR_Location)NULL;
}

PERR_Location PERR_setLocationWsAfterArea(PERR_Location arg, PERR_OptLayout wsAfterArea) {
  if (PERR_isLocationArea(arg)) {
    return (PERR_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterArea), 5), 1);
  }
  else if (PERR_isLocationAreaInFile(arg)) {
    return (PERR_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterArea), 9), 1);
  }

  ATabort("Location has no WsAfterArea: %t\n", arg);
  return (PERR_Location)NULL;
}

PERR_Location PERR_setLocationWsAfterAreaInFile(PERR_Location arg, PERR_OptLayout wsAfterAreaInFile) {
  if (PERR_isLocationAreaInFile(arg)) {
    return (PERR_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterAreaInFile), 1), 1);
  }

  ATabort("Location has no WsAfterAreaInFile: %t\n", arg);
  return (PERR_Location)NULL;
}

PERR_Location PERR_setLocationWsAfterComma(PERR_Location arg, PERR_OptLayout wsAfterComma) {
  if (PERR_isLocationAreaInFile(arg)) {
    return (PERR_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma), 7), 1);
  }

  ATabort("Location has no WsAfterComma: %t\n", arg);
  return (PERR_Location)NULL;
}

ATbool PERR_isValidArea(PERR_Area arg) {
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PERR_isAreaArea(PERR_Area arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PERR_patternAreaArea, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL));
#endif
  return ATtrue;
}

ATbool PERR_hasAreaWsAfterArea(PERR_Area arg) {
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasAreaWsAfterParenOpen(PERR_Area arg) {
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasAreaBeginLine(PERR_Area arg) {
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasAreaWsAfterBeginLine(PERR_Area arg) {
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasAreaWsAfterComma(PERR_Area arg) {
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasAreaBeginColumn(PERR_Area arg) {
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasAreaWsAfterBeginColumn(PERR_Area arg) {
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasAreaWsAfterComma1(PERR_Area arg) {
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasAreaEndLine(PERR_Area arg) {
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasAreaWsAfterEndLine(PERR_Area arg) {
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasAreaWsAfterComma2(PERR_Area arg) {
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasAreaEndColumn(PERR_Area arg) {
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasAreaWsAfterEndColumn(PERR_Area arg) {
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasAreaWsAfterComma3(PERR_Area arg) {
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasAreaOffset(PERR_Area arg) {
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasAreaWsAfterOffset(PERR_Area arg) {
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasAreaWsAfterComma4(PERR_Area arg) {
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasAreaLength(PERR_Area arg) {
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasAreaWsAfterLength(PERR_Area arg) {
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

PERR_OptLayout PERR_getAreaWsAfterArea(PERR_Area arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

PERR_OptLayout PERR_getAreaWsAfterParenOpen(PERR_Area arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
}

PERR_NatCon PERR_getAreaBeginLine(PERR_Area arg) {
  
    return (PERR_NatCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4);
}

PERR_OptLayout PERR_getAreaWsAfterBeginLine(PERR_Area arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 5);
}

PERR_OptLayout PERR_getAreaWsAfterComma(PERR_Area arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 7);
}

PERR_NatCon PERR_getAreaBeginColumn(PERR_Area arg) {
  
    return (PERR_NatCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 8);
}

PERR_OptLayout PERR_getAreaWsAfterBeginColumn(PERR_Area arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 9);
}

PERR_OptLayout PERR_getAreaWsAfterComma1(PERR_Area arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 11);
}

PERR_NatCon PERR_getAreaEndLine(PERR_Area arg) {
  
    return (PERR_NatCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 12);
}

PERR_OptLayout PERR_getAreaWsAfterEndLine(PERR_Area arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 13);
}

PERR_OptLayout PERR_getAreaWsAfterComma2(PERR_Area arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 15);
}

PERR_NatCon PERR_getAreaEndColumn(PERR_Area arg) {
  
    return (PERR_NatCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 16);
}

PERR_OptLayout PERR_getAreaWsAfterEndColumn(PERR_Area arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 17);
}

PERR_OptLayout PERR_getAreaWsAfterComma3(PERR_Area arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 19);
}

PERR_NatCon PERR_getAreaOffset(PERR_Area arg) {
  
    return (PERR_NatCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 20);
}

PERR_OptLayout PERR_getAreaWsAfterOffset(PERR_Area arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 21);
}

PERR_OptLayout PERR_getAreaWsAfterComma4(PERR_Area arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 23);
}

PERR_NatCon PERR_getAreaLength(PERR_Area arg) {
  
    return (PERR_NatCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 24);
}

PERR_OptLayout PERR_getAreaWsAfterLength(PERR_Area arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 25);
}

PERR_Area PERR_setAreaWsAfterArea(PERR_Area arg, PERR_OptLayout wsAfterArea) {
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterArea), 1), 1);
  }

  ATabort("Area has no WsAfterArea: %t\n", arg);
  return (PERR_Area)NULL;
}

PERR_Area PERR_setAreaWsAfterParenOpen(PERR_Area arg, PERR_OptLayout wsAfterParenOpen) {
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterParenOpen), 3), 1);
  }

  ATabort("Area has no WsAfterParenOpen: %t\n", arg);
  return (PERR_Area)NULL;
}

PERR_Area PERR_setAreaBeginLine(PERR_Area arg, PERR_NatCon beginLine) {
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) beginLine), 4), 1);
  }

  ATabort("Area has no BeginLine: %t\n", arg);
  return (PERR_Area)NULL;
}

PERR_Area PERR_setAreaWsAfterBeginLine(PERR_Area arg, PERR_OptLayout wsAfterBeginLine) {
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterBeginLine), 5), 1);
  }

  ATabort("Area has no WsAfterBeginLine: %t\n", arg);
  return (PERR_Area)NULL;
}

PERR_Area PERR_setAreaWsAfterComma(PERR_Area arg, PERR_OptLayout wsAfterComma) {
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma), 7), 1);
  }

  ATabort("Area has no WsAfterComma: %t\n", arg);
  return (PERR_Area)NULL;
}

PERR_Area PERR_setAreaBeginColumn(PERR_Area arg, PERR_NatCon beginColumn) {
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) beginColumn), 8), 1);
  }

  ATabort("Area has no BeginColumn: %t\n", arg);
  return (PERR_Area)NULL;
}

PERR_Area PERR_setAreaWsAfterBeginColumn(PERR_Area arg, PERR_OptLayout wsAfterBeginColumn) {
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterBeginColumn), 9), 1);
  }

  ATabort("Area has no WsAfterBeginColumn: %t\n", arg);
  return (PERR_Area)NULL;
}

PERR_Area PERR_setAreaWsAfterComma1(PERR_Area arg, PERR_OptLayout wsAfterComma1) {
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma1), 11), 1);
  }

  ATabort("Area has no WsAfterComma1: %t\n", arg);
  return (PERR_Area)NULL;
}

PERR_Area PERR_setAreaEndLine(PERR_Area arg, PERR_NatCon endLine) {
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) endLine), 12), 1);
  }

  ATabort("Area has no EndLine: %t\n", arg);
  return (PERR_Area)NULL;
}

PERR_Area PERR_setAreaWsAfterEndLine(PERR_Area arg, PERR_OptLayout wsAfterEndLine) {
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterEndLine), 13), 1);
  }

  ATabort("Area has no WsAfterEndLine: %t\n", arg);
  return (PERR_Area)NULL;
}

PERR_Area PERR_setAreaWsAfterComma2(PERR_Area arg, PERR_OptLayout wsAfterComma2) {
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma2), 15), 1);
  }

  ATabort("Area has no WsAfterComma2: %t\n", arg);
  return (PERR_Area)NULL;
}

PERR_Area PERR_setAreaEndColumn(PERR_Area arg, PERR_NatCon endColumn) {
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) endColumn), 16), 1);
  }

  ATabort("Area has no EndColumn: %t\n", arg);
  return (PERR_Area)NULL;
}

PERR_Area PERR_setAreaWsAfterEndColumn(PERR_Area arg, PERR_OptLayout wsAfterEndColumn) {
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterEndColumn), 17), 1);
  }

  ATabort("Area has no WsAfterEndColumn: %t\n", arg);
  return (PERR_Area)NULL;
}

PERR_Area PERR_setAreaWsAfterComma3(PERR_Area arg, PERR_OptLayout wsAfterComma3) {
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma3), 19), 1);
  }

  ATabort("Area has no WsAfterComma3: %t\n", arg);
  return (PERR_Area)NULL;
}

PERR_Area PERR_setAreaOffset(PERR_Area arg, PERR_NatCon offset) {
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) offset), 20), 1);
  }

  ATabort("Area has no Offset: %t\n", arg);
  return (PERR_Area)NULL;
}

PERR_Area PERR_setAreaWsAfterOffset(PERR_Area arg, PERR_OptLayout wsAfterOffset) {
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterOffset), 21), 1);
  }

  ATabort("Area has no WsAfterOffset: %t\n", arg);
  return (PERR_Area)NULL;
}

PERR_Area PERR_setAreaWsAfterComma4(PERR_Area arg, PERR_OptLayout wsAfterComma4) {
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma4), 23), 1);
  }

  ATabort("Area has no WsAfterComma4: %t\n", arg);
  return (PERR_Area)NULL;
}

PERR_Area PERR_setAreaLength(PERR_Area arg, PERR_NatCon length) {
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) length), 24), 1);
  }

  ATabort("Area has no Length: %t\n", arg);
  return (PERR_Area)NULL;
}

PERR_Area PERR_setAreaWsAfterLength(PERR_Area arg, PERR_OptLayout wsAfterLength) {
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterLength), 25), 1);
  }

  ATabort("Area has no WsAfterLength: %t\n", arg);
  return (PERR_Area)NULL;
}

ATbool PERR_isValidSlice(PERR_Slice arg) {
  if (PERR_isSliceSlice(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PERR_isSliceSlice(PERR_Slice arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PERR_patternSliceSlice, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL));
#endif
  return ATtrue;
}

ATbool PERR_hasSliceWsAfterSlice(PERR_Slice arg) {
  if (PERR_isSliceSlice(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasSliceWsAfterParenOpen(PERR_Slice arg) {
  if (PERR_isSliceSlice(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasSliceId(PERR_Slice arg) {
  if (PERR_isSliceSlice(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasSliceWsAfterId(PERR_Slice arg) {
  if (PERR_isSliceSlice(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasSliceWsAfterComma(PERR_Slice arg) {
  if (PERR_isSliceSlice(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasSliceWsAfterBracketOpen(PERR_Slice arg) {
  if (PERR_isSliceSlice(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasSliceAreas(PERR_Slice arg) {
  if (PERR_isSliceSlice(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasSliceWsAfterAreas(PERR_Slice arg) {
  if (PERR_isSliceSlice(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasSliceWsAfterBracketClose(PERR_Slice arg) {
  if (PERR_isSliceSlice(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

PERR_OptLayout PERR_getSliceWsAfterSlice(PERR_Slice arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

PERR_OptLayout PERR_getSliceWsAfterParenOpen(PERR_Slice arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
}

PERR_StrCon PERR_getSliceId(PERR_Slice arg) {
  
    return (PERR_StrCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4);
}

PERR_OptLayout PERR_getSliceWsAfterId(PERR_Slice arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 5);
}

PERR_OptLayout PERR_getSliceWsAfterComma(PERR_Slice arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 7);
}

PERR_OptLayout PERR_getSliceWsAfterBracketOpen(PERR_Slice arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 9);
}

PERR_AreaAreas PERR_getSliceAreas(PERR_Slice arg) {
  
    return (PERR_AreaAreas)ATgetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 10), 1);
}

PERR_OptLayout PERR_getSliceWsAfterAreas(PERR_Slice arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 11);
}

PERR_OptLayout PERR_getSliceWsAfterBracketClose(PERR_Slice arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 13);
}

PERR_Slice PERR_setSliceWsAfterSlice(PERR_Slice arg, PERR_OptLayout wsAfterSlice) {
  if (PERR_isSliceSlice(arg)) {
    return (PERR_Slice)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterSlice), 1), 1);
  }

  ATabort("Slice has no WsAfterSlice: %t\n", arg);
  return (PERR_Slice)NULL;
}

PERR_Slice PERR_setSliceWsAfterParenOpen(PERR_Slice arg, PERR_OptLayout wsAfterParenOpen) {
  if (PERR_isSliceSlice(arg)) {
    return (PERR_Slice)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterParenOpen), 3), 1);
  }

  ATabort("Slice has no WsAfterParenOpen: %t\n", arg);
  return (PERR_Slice)NULL;
}

PERR_Slice PERR_setSliceId(PERR_Slice arg, PERR_StrCon id) {
  if (PERR_isSliceSlice(arg)) {
    return (PERR_Slice)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) id), 4), 1);
  }

  ATabort("Slice has no Id: %t\n", arg);
  return (PERR_Slice)NULL;
}

PERR_Slice PERR_setSliceWsAfterId(PERR_Slice arg, PERR_OptLayout wsAfterId) {
  if (PERR_isSliceSlice(arg)) {
    return (PERR_Slice)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterId), 5), 1);
  }

  ATabort("Slice has no WsAfterId: %t\n", arg);
  return (PERR_Slice)NULL;
}

PERR_Slice PERR_setSliceWsAfterComma(PERR_Slice arg, PERR_OptLayout wsAfterComma) {
  if (PERR_isSliceSlice(arg)) {
    return (PERR_Slice)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma), 7), 1);
  }

  ATabort("Slice has no WsAfterComma: %t\n", arg);
  return (PERR_Slice)NULL;
}

PERR_Slice PERR_setSliceWsAfterBracketOpen(PERR_Slice arg, PERR_OptLayout wsAfterBracketOpen) {
  if (PERR_isSliceSlice(arg)) {
    return (PERR_Slice)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterBracketOpen), 9), 1);
  }

  ATabort("Slice has no WsAfterBracketOpen: %t\n", arg);
  return (PERR_Slice)NULL;
}

PERR_Slice PERR_setSliceAreas(PERR_Slice arg, PERR_AreaAreas areas) {
  if (PERR_isSliceSlice(arg)) {
    return (PERR_Slice)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 10), (ATerm)((ATerm) areas), 1), 10), 1);
  }

  ATabort("Slice has no Areas: %t\n", arg);
  return (PERR_Slice)NULL;
}

PERR_Slice PERR_setSliceWsAfterAreas(PERR_Slice arg, PERR_OptLayout wsAfterAreas) {
  if (PERR_isSliceSlice(arg)) {
    return (PERR_Slice)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterAreas), 11), 1);
  }

  ATabort("Slice has no WsAfterAreas: %t\n", arg);
  return (PERR_Slice)NULL;
}

PERR_Slice PERR_setSliceWsAfterBracketClose(PERR_Slice arg, PERR_OptLayout wsAfterBracketClose) {
  if (PERR_isSliceSlice(arg)) {
    return (PERR_Slice)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterBracketClose), 13), 1);
  }

  ATabort("Slice has no WsAfterBracketClose: %t\n", arg);
  return (PERR_Slice)NULL;
}

ATbool PERR_isValidAreaAreas(PERR_AreaAreas arg) {
  if (PERR_isAreaAreasEmpty(arg)) {
    return ATtrue;
  }
  else if (PERR_isAreaAreasSingle(arg)) {
    return ATtrue;
  }
  else if (PERR_isAreaAreasMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PERR_isAreaAreasEmpty(PERR_AreaAreas arg) {
  if (!ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PERR_patternAreaAreasEmpty));
#endif
  return ATtrue;
}

inline ATbool PERR_isAreaAreasSingle(PERR_AreaAreas arg) {
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
      last_result = ATmatchTerm((ATerm)arg, PERR_patternAreaAreasSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool PERR_isAreaAreasMany(PERR_AreaAreas arg) {
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
      last_result = ATmatchTerm((ATerm)arg, PERR_patternAreaAreasMany, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

ATbool PERR_hasAreaAreasHead(PERR_AreaAreas arg) {
  if (PERR_isAreaAreasSingle(arg)) {
    return ATtrue;
  }
  else if (PERR_isAreaAreasMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasAreaAreasWsAfterHead(PERR_AreaAreas arg) {
  if (PERR_isAreaAreasMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasAreaAreasWsAfterSep(PERR_AreaAreas arg) {
  if (PERR_isAreaAreasMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PERR_hasAreaAreasTail(PERR_AreaAreas arg) {
  if (PERR_isAreaAreasMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

PERR_AreaAreas PERR_getAreaAreasTail(PERR_AreaAreas arg) {
  assert(!PERR_isAreaAreasEmpty(arg) && "getTail on an empty list");
  if (PERR_isAreaAreasSingle(arg)) {
    return (PERR_AreaAreas) PERR_makeAreaAreasEmpty();
  }
  else {
  
    return (PERR_AreaAreas)ATgetTail((ATermList)arg, 4);
  }
}

PERR_Area PERR_getAreaAreasHead(PERR_AreaAreas arg) {
  if (PERR_isAreaAreasSingle(arg)) {
    return (PERR_Area)ATgetFirst((ATermList)arg);
  }
  else 
    return (PERR_Area)ATgetFirst((ATermList)arg);
}

PERR_OptLayout PERR_getAreaAreasWsAfterHead(PERR_AreaAreas arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)arg, 1);
}

PERR_OptLayout PERR_getAreaAreasWsAfterSep(PERR_AreaAreas arg) {
  
    return (PERR_OptLayout)ATelementAt((ATermList)arg, 3);
}

PERR_AreaAreas PERR_setAreaAreasHead(PERR_AreaAreas arg, PERR_Area head) {
  if (PERR_isAreaAreasSingle(arg)) {
    return (PERR_AreaAreas)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }
  else if (PERR_isAreaAreasMany(arg)) {
    return (PERR_AreaAreas)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }

  ATabort("AreaAreas has no Head: %t\n", arg);
  return (PERR_AreaAreas)NULL;
}

PERR_AreaAreas PERR_setAreaAreasWsAfterHead(PERR_AreaAreas arg, PERR_OptLayout wsAfterHead) {
  if (PERR_isAreaAreasMany(arg)) {
    return (PERR_AreaAreas)ATreplace((ATermList)arg, (ATerm)((ATerm) wsAfterHead), 1);
  }

  ATabort("AreaAreas has no WsAfterHead: %t\n", arg);
  return (PERR_AreaAreas)NULL;
}

PERR_AreaAreas PERR_setAreaAreasWsAfterSep(PERR_AreaAreas arg, PERR_OptLayout wsAfterSep) {
  if (PERR_isAreaAreasMany(arg)) {
    return (PERR_AreaAreas)ATreplace((ATermList)arg, (ATerm)((ATerm) wsAfterSep), 3);
  }

  ATabort("AreaAreas has no WsAfterSep: %t\n", arg);
  return (PERR_AreaAreas)NULL;
}

PERR_AreaAreas PERR_setAreaAreasTail(PERR_AreaAreas arg, PERR_AreaAreas tail) {
  if (PERR_isAreaAreasMany(arg)) {
    return (PERR_AreaAreas)ATreplaceTail((ATermList)arg, (ATermList)((ATerm) tail), 4);
  }

  ATabort("AreaAreas has no Tail: %t\n", arg);
  return (PERR_AreaAreas)NULL;
}

PERR_OptLayout PERR_visitOptLayout(PERR_OptLayout arg, PERR_Layout (*acceptLayout)(PERR_Layout)) {
  if (PERR_isOptLayoutAbsent(arg)) {
    return PERR_makeOptLayoutAbsent();
  }
  if (PERR_isOptLayoutPresent(arg)) {
    return PERR_makeOptLayoutPresent(
        acceptLayout ? acceptLayout(PERR_getOptLayoutLayout(arg)) : PERR_getOptLayoutLayout(arg));
  }
  ATabort("not a OptLayout: %t\n", arg);
  return (PERR_OptLayout)NULL;
}
PERR_Layout PERR_visitLayout(PERR_Layout arg, PERR_LexLayoutList (*acceptList)(PERR_LexLayoutList)) {
  if (PERR_isLayoutLexToCf(arg)) {
    return PERR_makeLayoutLexToCf(
        acceptList ? acceptList(PERR_getLayoutList(arg)) : PERR_getLayoutList(arg));
  }
  ATabort("not a Layout: %t\n", arg);
  return (PERR_Layout)NULL;
}
PERR_LexLayoutList PERR_visitLexLayoutList(PERR_LexLayoutList arg, PERR_LexLayout (*acceptHead)(PERR_LexLayout)) {
  if (PERR_isLexLayoutListEmpty(arg)) {
    return PERR_makeLexLayoutListEmpty();
  }
  if (PERR_isLexLayoutListSingle(arg)) {
    return PERR_makeLexLayoutListSingle(
        acceptHead ? acceptHead(PERR_getLexLayoutListHead(arg)) : PERR_getLexLayoutListHead(arg));
  }
  if (PERR_isLexLayoutListMany(arg)) {
    return PERR_makeLexLayoutListMany(
        acceptHead ? acceptHead(PERR_getLexLayoutListHead(arg)) : PERR_getLexLayoutListHead(arg),
        PERR_visitLexLayoutList(PERR_getLexLayoutListTail(arg), acceptHead));
  }
  ATabort("not a LexLayoutList: %t\n", arg);
  return (PERR_LexLayoutList)NULL;
}
PERR_LexStrChar PERR_visitLexStrChar(PERR_LexStrChar arg, char (*acceptA)(char), char (*acceptB)(char), char (*acceptC)(char), char (*acceptCh)(char)) {
  if (PERR_isLexStrCharNewline(arg)) {
    return PERR_makeLexStrCharNewline();
  }
  if (PERR_isLexStrCharTab(arg)) {
    return PERR_makeLexStrCharTab();
  }
  if (PERR_isLexStrCharQuote(arg)) {
    return PERR_makeLexStrCharQuote();
  }
  if (PERR_isLexStrCharBackslash(arg)) {
    return PERR_makeLexStrCharBackslash();
  }
  if (PERR_isLexStrCharDecimal(arg)) {
    return PERR_makeLexStrCharDecimal(
        acceptA ? acceptA(PERR_getLexStrCharA(arg)) : PERR_getLexStrCharA(arg),
        acceptB ? acceptB(PERR_getLexStrCharB(arg)) : PERR_getLexStrCharB(arg),
        acceptC ? acceptC(PERR_getLexStrCharC(arg)) : PERR_getLexStrCharC(arg));
  }
  if (PERR_isLexStrCharNormal(arg)) {
    return PERR_makeLexStrCharNormal(
        acceptCh ? acceptCh(PERR_getLexStrCharCh(arg)) : PERR_getLexStrCharCh(arg));
  }
  ATabort("not a LexStrChar: %t\n", arg);
  return (PERR_LexStrChar)NULL;
}
PERR_StrChar PERR_visitStrChar(PERR_StrChar arg, PERR_LexStrChar (*acceptStrChar)(PERR_LexStrChar)) {
  if (PERR_isStrCharLexToCf(arg)) {
    return PERR_makeStrCharLexToCf(
        acceptStrChar ? acceptStrChar(PERR_getStrCharStrChar(arg)) : PERR_getStrCharStrChar(arg));
  }
  ATabort("not a StrChar: %t\n", arg);
  return (PERR_StrChar)NULL;
}
PERR_LexStrCon PERR_visitLexStrCon(PERR_LexStrCon arg, PERR_LexStrCharChars (*acceptChars)(PERR_LexStrCharChars)) {
  if (PERR_isLexStrConDefault(arg)) {
    return PERR_makeLexStrConDefault(
        acceptChars ? acceptChars(PERR_getLexStrConChars(arg)) : PERR_getLexStrConChars(arg));
  }
  ATabort("not a LexStrCon: %t\n", arg);
  return (PERR_LexStrCon)NULL;
}
PERR_StrCon PERR_visitStrCon(PERR_StrCon arg, PERR_LexStrCon (*acceptStrCon)(PERR_LexStrCon)) {
  if (PERR_isStrConLexToCf(arg)) {
    return PERR_makeStrConLexToCf(
        acceptStrCon ? acceptStrCon(PERR_getStrConStrCon(arg)) : PERR_getStrConStrCon(arg));
  }
  ATabort("not a StrCon: %t\n", arg);
  return (PERR_StrCon)NULL;
}
PERR_LexStrCharChars PERR_visitLexStrCharChars(PERR_LexStrCharChars arg, PERR_LexStrChar (*acceptHead)(PERR_LexStrChar)) {
  if (PERR_isLexStrCharCharsEmpty(arg)) {
    return PERR_makeLexStrCharCharsEmpty();
  }
  if (PERR_isLexStrCharCharsSingle(arg)) {
    return PERR_makeLexStrCharCharsSingle(
        acceptHead ? acceptHead(PERR_getLexStrCharCharsHead(arg)) : PERR_getLexStrCharCharsHead(arg));
  }
  if (PERR_isLexStrCharCharsMany(arg)) {
    return PERR_makeLexStrCharCharsMany(
        acceptHead ? acceptHead(PERR_getLexStrCharCharsHead(arg)) : PERR_getLexStrCharCharsHead(arg),
        PERR_visitLexStrCharChars(PERR_getLexStrCharCharsTail(arg), acceptHead));
  }
  ATabort("not a LexStrCharChars: %t\n", arg);
  return (PERR_LexStrCharChars)NULL;
}
PERR_LexNatCon PERR_visitLexNatCon(PERR_LexNatCon arg, char* (*acceptList)(char*)) {
  if (PERR_isLexNatConDigits(arg)) {
    return PERR_makeLexNatConDigits(
        acceptList ? acceptList(PERR_getLexNatConList(arg)) : PERR_getLexNatConList(arg));
  }
  ATabort("not a LexNatCon: %t\n", arg);
  return (PERR_LexNatCon)NULL;
}
PERR_NatCon PERR_visitNatCon(PERR_NatCon arg, PERR_LexNatCon (*acceptNatCon)(PERR_LexNatCon)) {
  if (PERR_isNatConLexToCf(arg)) {
    return PERR_makeNatConLexToCf(
        acceptNatCon ? acceptNatCon(PERR_getNatConNatCon(arg)) : PERR_getNatConNatCon(arg));
  }
  ATabort("not a NatCon: %t\n", arg);
  return (PERR_NatCon)NULL;
}
PERR_LexLayout PERR_visitLexLayout(PERR_LexLayout arg, char (*acceptCh)(char)) {
  if (PERR_isLexLayoutWhitespace(arg)) {
    return PERR_makeLexLayoutWhitespace(
        acceptCh ? acceptCh(PERR_getLexLayoutCh(arg)) : PERR_getLexLayoutCh(arg));
  }
  ATabort("not a LexLayout: %t\n", arg);
  return (PERR_LexLayout)NULL;
}
PERR_Start PERR_visitStart(PERR_Start arg, PERR_OptLayout (*acceptWsBefore)(PERR_OptLayout), PERR_Summary (*acceptTopSummary)(PERR_Summary), PERR_OptLayout (*acceptWsAfter)(PERR_OptLayout), int (*acceptAmbCnt)(int), PERR_Error (*acceptTopError)(PERR_Error)) {
  if (PERR_isStartSummary(arg)) {
    return PERR_makeStartSummary(
        acceptWsBefore ? acceptWsBefore(PERR_getStartWsBefore(arg)) : PERR_getStartWsBefore(arg),
        acceptTopSummary ? acceptTopSummary(PERR_getStartTopSummary(arg)) : PERR_getStartTopSummary(arg),
        acceptWsAfter ? acceptWsAfter(PERR_getStartWsAfter(arg)) : PERR_getStartWsAfter(arg),
        acceptAmbCnt ? acceptAmbCnt(PERR_getStartAmbCnt(arg)) : PERR_getStartAmbCnt(arg));
  }
  if (PERR_isStartError(arg)) {
    return PERR_makeStartError(
        acceptWsBefore ? acceptWsBefore(PERR_getStartWsBefore(arg)) : PERR_getStartWsBefore(arg),
        acceptTopError ? acceptTopError(PERR_getStartTopError(arg)) : PERR_getStartTopError(arg),
        acceptWsAfter ? acceptWsAfter(PERR_getStartWsAfter(arg)) : PERR_getStartWsAfter(arg),
        acceptAmbCnt ? acceptAmbCnt(PERR_getStartAmbCnt(arg)) : PERR_getStartAmbCnt(arg));
  }
  ATabort("not a Start: %t\n", arg);
  return (PERR_Start)NULL;
}
PERR_Subject PERR_visitSubject(PERR_Subject arg, PERR_OptLayout (*acceptWsAfterSubject)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterParenOpen)(PERR_OptLayout), PERR_StrCon (*acceptDescription)(PERR_StrCon), PERR_OptLayout (*acceptWsAfterDescription)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterLocalized)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterComma)(PERR_OptLayout), PERR_Location (*acceptLocation)(PERR_Location), PERR_OptLayout (*acceptWsAfterLocation)(PERR_OptLayout)) {
  if (PERR_isSubjectSubject(arg)) {
    return PERR_makeSubjectSubject(
        acceptWsAfterSubject ? acceptWsAfterSubject(PERR_getSubjectWsAfterSubject(arg)) : PERR_getSubjectWsAfterSubject(arg),
        acceptWsAfterParenOpen ? acceptWsAfterParenOpen(PERR_getSubjectWsAfterParenOpen(arg)) : PERR_getSubjectWsAfterParenOpen(arg),
        acceptDescription ? acceptDescription(PERR_getSubjectDescription(arg)) : PERR_getSubjectDescription(arg),
        acceptWsAfterDescription ? acceptWsAfterDescription(PERR_getSubjectWsAfterDescription(arg)) : PERR_getSubjectWsAfterDescription(arg));
  }
  if (PERR_isSubjectLocalized(arg)) {
    return PERR_makeSubjectLocalized(
        acceptWsAfterLocalized ? acceptWsAfterLocalized(PERR_getSubjectWsAfterLocalized(arg)) : PERR_getSubjectWsAfterLocalized(arg),
        acceptWsAfterParenOpen ? acceptWsAfterParenOpen(PERR_getSubjectWsAfterParenOpen(arg)) : PERR_getSubjectWsAfterParenOpen(arg),
        acceptDescription ? acceptDescription(PERR_getSubjectDescription(arg)) : PERR_getSubjectDescription(arg),
        acceptWsAfterDescription ? acceptWsAfterDescription(PERR_getSubjectWsAfterDescription(arg)) : PERR_getSubjectWsAfterDescription(arg),
        acceptWsAfterComma ? acceptWsAfterComma(PERR_getSubjectWsAfterComma(arg)) : PERR_getSubjectWsAfterComma(arg),
        acceptLocation ? acceptLocation(PERR_getSubjectLocation(arg)) : PERR_getSubjectLocation(arg),
        acceptWsAfterLocation ? acceptWsAfterLocation(PERR_getSubjectWsAfterLocation(arg)) : PERR_getSubjectWsAfterLocation(arg));
  }
  ATabort("not a Subject: %t\n", arg);
  return (PERR_Subject)NULL;
}
PERR_Error PERR_visitError(PERR_Error arg, PERR_OptLayout (*acceptWsAfterInfo)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterParenOpen)(PERR_OptLayout), PERR_StrCon (*acceptDescription)(PERR_StrCon), PERR_OptLayout (*acceptWsAfterDescription)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterComma)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterBracketOpen)(PERR_OptLayout), PERR_SubjectList (*acceptList)(PERR_SubjectList), PERR_OptLayout (*acceptWsAfterList)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterBracketClose)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterWarning)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterError)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterFatal)(PERR_OptLayout)) {
  if (PERR_isErrorInfo(arg)) {
    return PERR_makeErrorInfo(
        acceptWsAfterInfo ? acceptWsAfterInfo(PERR_getErrorWsAfterInfo(arg)) : PERR_getErrorWsAfterInfo(arg),
        acceptWsAfterParenOpen ? acceptWsAfterParenOpen(PERR_getErrorWsAfterParenOpen(arg)) : PERR_getErrorWsAfterParenOpen(arg),
        acceptDescription ? acceptDescription(PERR_getErrorDescription(arg)) : PERR_getErrorDescription(arg),
        acceptWsAfterDescription ? acceptWsAfterDescription(PERR_getErrorWsAfterDescription(arg)) : PERR_getErrorWsAfterDescription(arg),
        acceptWsAfterComma ? acceptWsAfterComma(PERR_getErrorWsAfterComma(arg)) : PERR_getErrorWsAfterComma(arg),
        acceptWsAfterBracketOpen ? acceptWsAfterBracketOpen(PERR_getErrorWsAfterBracketOpen(arg)) : PERR_getErrorWsAfterBracketOpen(arg),
        acceptList ? acceptList(PERR_getErrorList(arg)) : PERR_getErrorList(arg),
        acceptWsAfterList ? acceptWsAfterList(PERR_getErrorWsAfterList(arg)) : PERR_getErrorWsAfterList(arg),
        acceptWsAfterBracketClose ? acceptWsAfterBracketClose(PERR_getErrorWsAfterBracketClose(arg)) : PERR_getErrorWsAfterBracketClose(arg));
  }
  if (PERR_isErrorWarning(arg)) {
    return PERR_makeErrorWarning(
        acceptWsAfterWarning ? acceptWsAfterWarning(PERR_getErrorWsAfterWarning(arg)) : PERR_getErrorWsAfterWarning(arg),
        acceptWsAfterParenOpen ? acceptWsAfterParenOpen(PERR_getErrorWsAfterParenOpen(arg)) : PERR_getErrorWsAfterParenOpen(arg),
        acceptDescription ? acceptDescription(PERR_getErrorDescription(arg)) : PERR_getErrorDescription(arg),
        acceptWsAfterDescription ? acceptWsAfterDescription(PERR_getErrorWsAfterDescription(arg)) : PERR_getErrorWsAfterDescription(arg),
        acceptWsAfterComma ? acceptWsAfterComma(PERR_getErrorWsAfterComma(arg)) : PERR_getErrorWsAfterComma(arg),
        acceptWsAfterBracketOpen ? acceptWsAfterBracketOpen(PERR_getErrorWsAfterBracketOpen(arg)) : PERR_getErrorWsAfterBracketOpen(arg),
        acceptList ? acceptList(PERR_getErrorList(arg)) : PERR_getErrorList(arg),
        acceptWsAfterList ? acceptWsAfterList(PERR_getErrorWsAfterList(arg)) : PERR_getErrorWsAfterList(arg),
        acceptWsAfterBracketClose ? acceptWsAfterBracketClose(PERR_getErrorWsAfterBracketClose(arg)) : PERR_getErrorWsAfterBracketClose(arg));
  }
  if (PERR_isErrorError(arg)) {
    return PERR_makeErrorError(
        acceptWsAfterError ? acceptWsAfterError(PERR_getErrorWsAfterError(arg)) : PERR_getErrorWsAfterError(arg),
        acceptWsAfterParenOpen ? acceptWsAfterParenOpen(PERR_getErrorWsAfterParenOpen(arg)) : PERR_getErrorWsAfterParenOpen(arg),
        acceptDescription ? acceptDescription(PERR_getErrorDescription(arg)) : PERR_getErrorDescription(arg),
        acceptWsAfterDescription ? acceptWsAfterDescription(PERR_getErrorWsAfterDescription(arg)) : PERR_getErrorWsAfterDescription(arg),
        acceptWsAfterComma ? acceptWsAfterComma(PERR_getErrorWsAfterComma(arg)) : PERR_getErrorWsAfterComma(arg),
        acceptWsAfterBracketOpen ? acceptWsAfterBracketOpen(PERR_getErrorWsAfterBracketOpen(arg)) : PERR_getErrorWsAfterBracketOpen(arg),
        acceptList ? acceptList(PERR_getErrorList(arg)) : PERR_getErrorList(arg),
        acceptWsAfterList ? acceptWsAfterList(PERR_getErrorWsAfterList(arg)) : PERR_getErrorWsAfterList(arg),
        acceptWsAfterBracketClose ? acceptWsAfterBracketClose(PERR_getErrorWsAfterBracketClose(arg)) : PERR_getErrorWsAfterBracketClose(arg));
  }
  if (PERR_isErrorFatal(arg)) {
    return PERR_makeErrorFatal(
        acceptWsAfterFatal ? acceptWsAfterFatal(PERR_getErrorWsAfterFatal(arg)) : PERR_getErrorWsAfterFatal(arg),
        acceptWsAfterParenOpen ? acceptWsAfterParenOpen(PERR_getErrorWsAfterParenOpen(arg)) : PERR_getErrorWsAfterParenOpen(arg),
        acceptDescription ? acceptDescription(PERR_getErrorDescription(arg)) : PERR_getErrorDescription(arg),
        acceptWsAfterDescription ? acceptWsAfterDescription(PERR_getErrorWsAfterDescription(arg)) : PERR_getErrorWsAfterDescription(arg),
        acceptWsAfterComma ? acceptWsAfterComma(PERR_getErrorWsAfterComma(arg)) : PERR_getErrorWsAfterComma(arg),
        acceptWsAfterBracketOpen ? acceptWsAfterBracketOpen(PERR_getErrorWsAfterBracketOpen(arg)) : PERR_getErrorWsAfterBracketOpen(arg),
        acceptList ? acceptList(PERR_getErrorList(arg)) : PERR_getErrorList(arg),
        acceptWsAfterList ? acceptWsAfterList(PERR_getErrorWsAfterList(arg)) : PERR_getErrorWsAfterList(arg),
        acceptWsAfterBracketClose ? acceptWsAfterBracketClose(PERR_getErrorWsAfterBracketClose(arg)) : PERR_getErrorWsAfterBracketClose(arg));
  }
  ATabort("not a Error: %t\n", arg);
  return (PERR_Error)NULL;
}
PERR_Summary PERR_visitSummary(PERR_Summary arg, PERR_OptLayout (*acceptWsAfterSummary)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterParenOpen)(PERR_OptLayout), PERR_StrCon (*acceptProducer)(PERR_StrCon), PERR_OptLayout (*acceptWsAfterProducer)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterComma)(PERR_OptLayout), PERR_StrCon (*acceptId)(PERR_StrCon), PERR_OptLayout (*acceptWsAfterId)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterComma1)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterBracketOpen)(PERR_OptLayout), PERR_ErrorList (*acceptList)(PERR_ErrorList), PERR_OptLayout (*acceptWsAfterList)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterBracketClose)(PERR_OptLayout)) {
  if (PERR_isSummarySummary(arg)) {
    return PERR_makeSummarySummary(
        acceptWsAfterSummary ? acceptWsAfterSummary(PERR_getSummaryWsAfterSummary(arg)) : PERR_getSummaryWsAfterSummary(arg),
        acceptWsAfterParenOpen ? acceptWsAfterParenOpen(PERR_getSummaryWsAfterParenOpen(arg)) : PERR_getSummaryWsAfterParenOpen(arg),
        acceptProducer ? acceptProducer(PERR_getSummaryProducer(arg)) : PERR_getSummaryProducer(arg),
        acceptWsAfterProducer ? acceptWsAfterProducer(PERR_getSummaryWsAfterProducer(arg)) : PERR_getSummaryWsAfterProducer(arg),
        acceptWsAfterComma ? acceptWsAfterComma(PERR_getSummaryWsAfterComma(arg)) : PERR_getSummaryWsAfterComma(arg),
        acceptId ? acceptId(PERR_getSummaryId(arg)) : PERR_getSummaryId(arg),
        acceptWsAfterId ? acceptWsAfterId(PERR_getSummaryWsAfterId(arg)) : PERR_getSummaryWsAfterId(arg),
        acceptWsAfterComma1 ? acceptWsAfterComma1(PERR_getSummaryWsAfterComma1(arg)) : PERR_getSummaryWsAfterComma1(arg),
        acceptWsAfterBracketOpen ? acceptWsAfterBracketOpen(PERR_getSummaryWsAfterBracketOpen(arg)) : PERR_getSummaryWsAfterBracketOpen(arg),
        acceptList ? acceptList(PERR_getSummaryList(arg)) : PERR_getSummaryList(arg),
        acceptWsAfterList ? acceptWsAfterList(PERR_getSummaryWsAfterList(arg)) : PERR_getSummaryWsAfterList(arg),
        acceptWsAfterBracketClose ? acceptWsAfterBracketClose(PERR_getSummaryWsAfterBracketClose(arg)) : PERR_getSummaryWsAfterBracketClose(arg));
  }
  ATabort("not a Summary: %t\n", arg);
  return (PERR_Summary)NULL;
}
PERR_SubjectList PERR_visitSubjectList(PERR_SubjectList arg, PERR_Subject (*acceptHead)(PERR_Subject), PERR_OptLayout (*acceptWsAfterHead)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterSep)(PERR_OptLayout)) {
  if (PERR_isSubjectListEmpty(arg)) {
    return PERR_makeSubjectListEmpty();
  }
  if (PERR_isSubjectListSingle(arg)) {
    return PERR_makeSubjectListSingle(
        acceptHead ? acceptHead(PERR_getSubjectListHead(arg)) : PERR_getSubjectListHead(arg));
  }
  if (PERR_isSubjectListMany(arg)) {
    return PERR_makeSubjectListMany(
        acceptHead ? acceptHead(PERR_getSubjectListHead(arg)) : PERR_getSubjectListHead(arg),
        acceptWsAfterHead ? acceptWsAfterHead(PERR_getSubjectListWsAfterHead(arg)) : PERR_getSubjectListWsAfterHead(arg),
        acceptWsAfterSep ? acceptWsAfterSep(PERR_getSubjectListWsAfterSep(arg)) : PERR_getSubjectListWsAfterSep(arg),
        PERR_visitSubjectList(PERR_getSubjectListTail(arg), acceptHead, acceptWsAfterHead, acceptWsAfterSep));
  }
  ATabort("not a SubjectList: %t\n", arg);
  return (PERR_SubjectList)NULL;
}
PERR_ErrorList PERR_visitErrorList(PERR_ErrorList arg, PERR_Error (*acceptHead)(PERR_Error), PERR_OptLayout (*acceptWsAfterHead)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterSep)(PERR_OptLayout)) {
  if (PERR_isErrorListEmpty(arg)) {
    return PERR_makeErrorListEmpty();
  }
  if (PERR_isErrorListSingle(arg)) {
    return PERR_makeErrorListSingle(
        acceptHead ? acceptHead(PERR_getErrorListHead(arg)) : PERR_getErrorListHead(arg));
  }
  if (PERR_isErrorListMany(arg)) {
    return PERR_makeErrorListMany(
        acceptHead ? acceptHead(PERR_getErrorListHead(arg)) : PERR_getErrorListHead(arg),
        acceptWsAfterHead ? acceptWsAfterHead(PERR_getErrorListWsAfterHead(arg)) : PERR_getErrorListWsAfterHead(arg),
        acceptWsAfterSep ? acceptWsAfterSep(PERR_getErrorListWsAfterSep(arg)) : PERR_getErrorListWsAfterSep(arg),
        PERR_visitErrorList(PERR_getErrorListTail(arg), acceptHead, acceptWsAfterHead, acceptWsAfterSep));
  }
  ATabort("not a ErrorList: %t\n", arg);
  return (PERR_ErrorList)NULL;
}
PERR_Location PERR_visitLocation(PERR_Location arg, PERR_OptLayout (*acceptWsAfterFile)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterParenOpen)(PERR_OptLayout), PERR_StrCon (*acceptFilename)(PERR_StrCon), PERR_OptLayout (*acceptWsAfterFilename)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterA)(PERR_OptLayout), PERR_Area (*acceptArea)(PERR_Area), PERR_OptLayout (*acceptWsAfterArea)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterAreaInFile)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterComma)(PERR_OptLayout)) {
  if (PERR_isLocationFile(arg)) {
    return PERR_makeLocationFile(
        acceptWsAfterFile ? acceptWsAfterFile(PERR_getLocationWsAfterFile(arg)) : PERR_getLocationWsAfterFile(arg),
        acceptWsAfterParenOpen ? acceptWsAfterParenOpen(PERR_getLocationWsAfterParenOpen(arg)) : PERR_getLocationWsAfterParenOpen(arg),
        acceptFilename ? acceptFilename(PERR_getLocationFilename(arg)) : PERR_getLocationFilename(arg),
        acceptWsAfterFilename ? acceptWsAfterFilename(PERR_getLocationWsAfterFilename(arg)) : PERR_getLocationWsAfterFilename(arg));
  }
  if (PERR_isLocationArea(arg)) {
    return PERR_makeLocationArea(
        acceptWsAfterA ? acceptWsAfterA(PERR_getLocationWsAfterA(arg)) : PERR_getLocationWsAfterA(arg),
        acceptWsAfterParenOpen ? acceptWsAfterParenOpen(PERR_getLocationWsAfterParenOpen(arg)) : PERR_getLocationWsAfterParenOpen(arg),
        acceptArea ? acceptArea(PERR_getLocationArea(arg)) : PERR_getLocationArea(arg),
        acceptWsAfterArea ? acceptWsAfterArea(PERR_getLocationWsAfterArea(arg)) : PERR_getLocationWsAfterArea(arg));
  }
  if (PERR_isLocationAreaInFile(arg)) {
    return PERR_makeLocationAreaInFile(
        acceptWsAfterAreaInFile ? acceptWsAfterAreaInFile(PERR_getLocationWsAfterAreaInFile(arg)) : PERR_getLocationWsAfterAreaInFile(arg),
        acceptWsAfterParenOpen ? acceptWsAfterParenOpen(PERR_getLocationWsAfterParenOpen(arg)) : PERR_getLocationWsAfterParenOpen(arg),
        acceptFilename ? acceptFilename(PERR_getLocationFilename(arg)) : PERR_getLocationFilename(arg),
        acceptWsAfterFilename ? acceptWsAfterFilename(PERR_getLocationWsAfterFilename(arg)) : PERR_getLocationWsAfterFilename(arg),
        acceptWsAfterComma ? acceptWsAfterComma(PERR_getLocationWsAfterComma(arg)) : PERR_getLocationWsAfterComma(arg),
        acceptArea ? acceptArea(PERR_getLocationArea(arg)) : PERR_getLocationArea(arg),
        acceptWsAfterArea ? acceptWsAfterArea(PERR_getLocationWsAfterArea(arg)) : PERR_getLocationWsAfterArea(arg));
  }
  ATabort("not a Location: %t\n", arg);
  return (PERR_Location)NULL;
}
PERR_Area PERR_visitArea(PERR_Area arg, PERR_OptLayout (*acceptWsAfterArea)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterParenOpen)(PERR_OptLayout), PERR_NatCon (*acceptBeginLine)(PERR_NatCon), PERR_OptLayout (*acceptWsAfterBeginLine)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterComma)(PERR_OptLayout), PERR_NatCon (*acceptBeginColumn)(PERR_NatCon), PERR_OptLayout (*acceptWsAfterBeginColumn)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterComma1)(PERR_OptLayout), PERR_NatCon (*acceptEndLine)(PERR_NatCon), PERR_OptLayout (*acceptWsAfterEndLine)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterComma2)(PERR_OptLayout), PERR_NatCon (*acceptEndColumn)(PERR_NatCon), PERR_OptLayout (*acceptWsAfterEndColumn)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterComma3)(PERR_OptLayout), PERR_NatCon (*acceptOffset)(PERR_NatCon), PERR_OptLayout (*acceptWsAfterOffset)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterComma4)(PERR_OptLayout), PERR_NatCon (*acceptLength)(PERR_NatCon), PERR_OptLayout (*acceptWsAfterLength)(PERR_OptLayout)) {
  if (PERR_isAreaArea(arg)) {
    return PERR_makeAreaArea(
        acceptWsAfterArea ? acceptWsAfterArea(PERR_getAreaWsAfterArea(arg)) : PERR_getAreaWsAfterArea(arg),
        acceptWsAfterParenOpen ? acceptWsAfterParenOpen(PERR_getAreaWsAfterParenOpen(arg)) : PERR_getAreaWsAfterParenOpen(arg),
        acceptBeginLine ? acceptBeginLine(PERR_getAreaBeginLine(arg)) : PERR_getAreaBeginLine(arg),
        acceptWsAfterBeginLine ? acceptWsAfterBeginLine(PERR_getAreaWsAfterBeginLine(arg)) : PERR_getAreaWsAfterBeginLine(arg),
        acceptWsAfterComma ? acceptWsAfterComma(PERR_getAreaWsAfterComma(arg)) : PERR_getAreaWsAfterComma(arg),
        acceptBeginColumn ? acceptBeginColumn(PERR_getAreaBeginColumn(arg)) : PERR_getAreaBeginColumn(arg),
        acceptWsAfterBeginColumn ? acceptWsAfterBeginColumn(PERR_getAreaWsAfterBeginColumn(arg)) : PERR_getAreaWsAfterBeginColumn(arg),
        acceptWsAfterComma1 ? acceptWsAfterComma1(PERR_getAreaWsAfterComma1(arg)) : PERR_getAreaWsAfterComma1(arg),
        acceptEndLine ? acceptEndLine(PERR_getAreaEndLine(arg)) : PERR_getAreaEndLine(arg),
        acceptWsAfterEndLine ? acceptWsAfterEndLine(PERR_getAreaWsAfterEndLine(arg)) : PERR_getAreaWsAfterEndLine(arg),
        acceptWsAfterComma2 ? acceptWsAfterComma2(PERR_getAreaWsAfterComma2(arg)) : PERR_getAreaWsAfterComma2(arg),
        acceptEndColumn ? acceptEndColumn(PERR_getAreaEndColumn(arg)) : PERR_getAreaEndColumn(arg),
        acceptWsAfterEndColumn ? acceptWsAfterEndColumn(PERR_getAreaWsAfterEndColumn(arg)) : PERR_getAreaWsAfterEndColumn(arg),
        acceptWsAfterComma3 ? acceptWsAfterComma3(PERR_getAreaWsAfterComma3(arg)) : PERR_getAreaWsAfterComma3(arg),
        acceptOffset ? acceptOffset(PERR_getAreaOffset(arg)) : PERR_getAreaOffset(arg),
        acceptWsAfterOffset ? acceptWsAfterOffset(PERR_getAreaWsAfterOffset(arg)) : PERR_getAreaWsAfterOffset(arg),
        acceptWsAfterComma4 ? acceptWsAfterComma4(PERR_getAreaWsAfterComma4(arg)) : PERR_getAreaWsAfterComma4(arg),
        acceptLength ? acceptLength(PERR_getAreaLength(arg)) : PERR_getAreaLength(arg),
        acceptWsAfterLength ? acceptWsAfterLength(PERR_getAreaWsAfterLength(arg)) : PERR_getAreaWsAfterLength(arg));
  }
  ATabort("not a Area: %t\n", arg);
  return (PERR_Area)NULL;
}
PERR_Slice PERR_visitSlice(PERR_Slice arg, PERR_OptLayout (*acceptWsAfterSlice)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterParenOpen)(PERR_OptLayout), PERR_StrCon (*acceptId)(PERR_StrCon), PERR_OptLayout (*acceptWsAfterId)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterComma)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterBracketOpen)(PERR_OptLayout), PERR_AreaAreas (*acceptAreas)(PERR_AreaAreas), PERR_OptLayout (*acceptWsAfterAreas)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterBracketClose)(PERR_OptLayout)) {
  if (PERR_isSliceSlice(arg)) {
    return PERR_makeSliceSlice(
        acceptWsAfterSlice ? acceptWsAfterSlice(PERR_getSliceWsAfterSlice(arg)) : PERR_getSliceWsAfterSlice(arg),
        acceptWsAfterParenOpen ? acceptWsAfterParenOpen(PERR_getSliceWsAfterParenOpen(arg)) : PERR_getSliceWsAfterParenOpen(arg),
        acceptId ? acceptId(PERR_getSliceId(arg)) : PERR_getSliceId(arg),
        acceptWsAfterId ? acceptWsAfterId(PERR_getSliceWsAfterId(arg)) : PERR_getSliceWsAfterId(arg),
        acceptWsAfterComma ? acceptWsAfterComma(PERR_getSliceWsAfterComma(arg)) : PERR_getSliceWsAfterComma(arg),
        acceptWsAfterBracketOpen ? acceptWsAfterBracketOpen(PERR_getSliceWsAfterBracketOpen(arg)) : PERR_getSliceWsAfterBracketOpen(arg),
        acceptAreas ? acceptAreas(PERR_getSliceAreas(arg)) : PERR_getSliceAreas(arg),
        acceptWsAfterAreas ? acceptWsAfterAreas(PERR_getSliceWsAfterAreas(arg)) : PERR_getSliceWsAfterAreas(arg),
        acceptWsAfterBracketClose ? acceptWsAfterBracketClose(PERR_getSliceWsAfterBracketClose(arg)) : PERR_getSliceWsAfterBracketClose(arg));
  }
  ATabort("not a Slice: %t\n", arg);
  return (PERR_Slice)NULL;
}
PERR_AreaAreas PERR_visitAreaAreas(PERR_AreaAreas arg, PERR_Area (*acceptHead)(PERR_Area), PERR_OptLayout (*acceptWsAfterHead)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterSep)(PERR_OptLayout)) {
  if (PERR_isAreaAreasEmpty(arg)) {
    return PERR_makeAreaAreasEmpty();
  }
  if (PERR_isAreaAreasSingle(arg)) {
    return PERR_makeAreaAreasSingle(
        acceptHead ? acceptHead(PERR_getAreaAreasHead(arg)) : PERR_getAreaAreasHead(arg));
  }
  if (PERR_isAreaAreasMany(arg)) {
    return PERR_makeAreaAreasMany(
        acceptHead ? acceptHead(PERR_getAreaAreasHead(arg)) : PERR_getAreaAreasHead(arg),
        acceptWsAfterHead ? acceptWsAfterHead(PERR_getAreaAreasWsAfterHead(arg)) : PERR_getAreaAreasWsAfterHead(arg),
        acceptWsAfterSep ? acceptWsAfterSep(PERR_getAreaAreasWsAfterSep(arg)) : PERR_getAreaAreasWsAfterSep(arg),
        PERR_visitAreaAreas(PERR_getAreaAreasTail(arg), acceptHead, acceptWsAfterHead, acceptWsAfterSep));
  }
  ATabort("not a AreaAreas: %t\n", arg);
  return (PERR_AreaAreas)NULL;
}

