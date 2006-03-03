#include <assert.h>

#include <aterm2.h>
#include <deprecated.h>
#include "ParsedError.h"

/*{{{  conversion functions */

ATerm PERR_stringToChars(const char *str)
{
  int len = strlen(str);
  int i;
  ATermList result = ATempty;

  for (i = len - 1; i >= 0; i--) {
    result = ATinsert(result, (ATerm) ATmakeInt(str[i]));
  }

  return (ATerm) result;
}

char *PERR_charsToString(ATerm arg)
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

typedef struct ATerm _PERR_Normal;
typedef struct ATerm _PERR_Escaped;
typedef struct ATerm _PERR_StrCon;
typedef struct ATerm _PERR_NatCon;
typedef struct ATerm _PERR_Subject;
typedef struct ATerm _PERR_Error;
typedef struct ATerm _PERR_SubjectList;
typedef struct ATerm _PERR_Summary;
typedef struct ATerm _PERR_ErrorList;
typedef struct ATerm _PERR_Location;
typedef struct ATerm _PERR_Area;
typedef struct ATerm _PERR_Start;
typedef struct ATerm _PERR_OptLayout;

/*}}}  */

/*{{{  void PERR_initParsedErrorApi(void) */

void PERR_initParsedErrorApi(void)
{
  init_ParsedError_dict();
}

/*}}}  */

/*{{{  protect functions */

void PERR_protectNormal(PERR_Normal *arg)
{
  ATprotect((ATerm*)((void*) arg));
}

void PERR_protectEscaped(PERR_Escaped *arg)
{
  ATprotect((ATerm*)((void*) arg));
}

void PERR_protectStrCon(PERR_StrCon *arg)
{
  ATprotect((ATerm*)((void*) arg));
}

void PERR_protectNatCon(PERR_NatCon *arg)
{
  ATprotect((ATerm*)((void*) arg));
}

void PERR_protectSubject(PERR_Subject *arg)
{
  ATprotect((ATerm*)((void*) arg));
}

void PERR_protectError(PERR_Error *arg)
{
  ATprotect((ATerm*)((void*) arg));
}

void PERR_protectSubjectList(PERR_SubjectList *arg)
{
  ATprotect((ATerm*)((void*) arg));
}

void PERR_protectSummary(PERR_Summary *arg)
{
  ATprotect((ATerm*)((void*) arg));
}

void PERR_protectErrorList(PERR_ErrorList *arg)
{
  ATprotect((ATerm*)((void*) arg));
}

void PERR_protectLocation(PERR_Location *arg)
{
  ATprotect((ATerm*)((void*) arg));
}

void PERR_protectArea(PERR_Area *arg)
{
  ATprotect((ATerm*)((void*) arg));
}

void PERR_protectStart(PERR_Start *arg)
{
  ATprotect((ATerm*)((void*) arg));
}

void PERR_protectOptLayout(PERR_OptLayout *arg)
{
  ATprotect((ATerm*)((void*) arg));
}


/*}}}  */
/*{{{  term conversion functions */

/*{{{  PERR_Normal PERR_NormalFromTerm(ATerm t) */

PERR_Normal PERR_NormalFromTerm(ATerm t)
{
  return (PERR_Normal)t;
}

/*}}}  */
/*{{{  ATerm PERR_NormalToTerm(PERR_Normal arg) */

ATerm PERR_NormalToTerm(PERR_Normal arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  PERR_Escaped PERR_EscapedFromTerm(ATerm t) */

PERR_Escaped PERR_EscapedFromTerm(ATerm t)
{
  return (PERR_Escaped)t;
}

/*}}}  */
/*{{{  ATerm PERR_EscapedToTerm(PERR_Escaped arg) */

ATerm PERR_EscapedToTerm(PERR_Escaped arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  PERR_StrCon PERR_StrConFromTerm(ATerm t) */

PERR_StrCon PERR_StrConFromTerm(ATerm t)
{
  return (PERR_StrCon)t;
}

/*}}}  */
/*{{{  ATerm PERR_StrConToTerm(PERR_StrCon arg) */

ATerm PERR_StrConToTerm(PERR_StrCon arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  PERR_NatCon PERR_NatConFromTerm(ATerm t) */

PERR_NatCon PERR_NatConFromTerm(ATerm t)
{
  return (PERR_NatCon)t;
}

/*}}}  */
/*{{{  ATerm PERR_NatConToTerm(PERR_NatCon arg) */

ATerm PERR_NatConToTerm(PERR_NatCon arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  PERR_Subject PERR_SubjectFromTerm(ATerm t) */

PERR_Subject PERR_SubjectFromTerm(ATerm t)
{
  return (PERR_Subject)t;
}

/*}}}  */
/*{{{  ATerm PERR_SubjectToTerm(PERR_Subject arg) */

ATerm PERR_SubjectToTerm(PERR_Subject arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  PERR_Error PERR_ErrorFromTerm(ATerm t) */

PERR_Error PERR_ErrorFromTerm(ATerm t)
{
  return (PERR_Error)t;
}

/*}}}  */
/*{{{  ATerm PERR_ErrorToTerm(PERR_Error arg) */

ATerm PERR_ErrorToTerm(PERR_Error arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  PERR_SubjectList PERR_SubjectListFromTerm(ATerm t) */

PERR_SubjectList PERR_SubjectListFromTerm(ATerm t)
{
  return (PERR_SubjectList)t;
}

/*}}}  */
/*{{{  ATerm PERR_SubjectListToTerm(PERR_SubjectList arg) */

ATerm PERR_SubjectListToTerm(PERR_SubjectList arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  PERR_Summary PERR_SummaryFromTerm(ATerm t) */

PERR_Summary PERR_SummaryFromTerm(ATerm t)
{
  return (PERR_Summary)t;
}

/*}}}  */
/*{{{  ATerm PERR_SummaryToTerm(PERR_Summary arg) */

ATerm PERR_SummaryToTerm(PERR_Summary arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  PERR_ErrorList PERR_ErrorListFromTerm(ATerm t) */

PERR_ErrorList PERR_ErrorListFromTerm(ATerm t)
{
  return (PERR_ErrorList)t;
}

/*}}}  */
/*{{{  ATerm PERR_ErrorListToTerm(PERR_ErrorList arg) */

ATerm PERR_ErrorListToTerm(PERR_ErrorList arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  PERR_Location PERR_LocationFromTerm(ATerm t) */

PERR_Location PERR_LocationFromTerm(ATerm t)
{
  return (PERR_Location)t;
}

/*}}}  */
/*{{{  ATerm PERR_LocationToTerm(PERR_Location arg) */

ATerm PERR_LocationToTerm(PERR_Location arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  PERR_Area PERR_AreaFromTerm(ATerm t) */

PERR_Area PERR_AreaFromTerm(ATerm t)
{
  return (PERR_Area)t;
}

/*}}}  */
/*{{{  ATerm PERR_AreaToTerm(PERR_Area arg) */

ATerm PERR_AreaToTerm(PERR_Area arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  PERR_Start PERR_StartFromTerm(ATerm t) */

PERR_Start PERR_StartFromTerm(ATerm t)
{
  return (PERR_Start)t;
}

/*}}}  */
/*{{{  ATerm PERR_StartToTerm(PERR_Start arg) */

ATerm PERR_StartToTerm(PERR_Start arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_OptLayoutFromTerm(ATerm t) */

PERR_OptLayout PERR_OptLayoutFromTerm(ATerm t)
{
  return (PERR_OptLayout)t;
}

/*}}}  */
/*{{{  ATerm PERR_OptLayoutToTerm(PERR_OptLayout arg) */

ATerm PERR_OptLayoutToTerm(PERR_OptLayout arg)
{
  return (ATerm)arg;
}

/*}}}  */

/*}}}  */
/*{{{  list functions */

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

/*}}}  */
/*{{{  constructors */

/*{{{  PERR_Normal PERR_makeNormalDefault(const char* string) */

PERR_Normal PERR_makeNormalDefault(const char* string)
{
  return (PERR_Normal)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4))), (ATerm)ATmakeAppl0(PERR_afun6)), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl1(PERR_afun7, (ATerm)ATmakeAppl1(PERR_afun8, (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PERR_afun10, (ATerm)ATmakeInt(0), (ATerm)ATmakeInt(255)))))), (ATerm) ((ATerm) PERR_stringToChars(string)))));
}

/*}}}  */
/*{{{  PERR_Escaped PERR_makeEscapedSpecialCharacter(const char* string) */

PERR_Escaped PERR_makeEscapedSpecialCharacter(const char* string)
{
  return (PERR_Escaped)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun11)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun11))), (ATerm)ATmakeAppl0(PERR_afun6)), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl1(PERR_afun7, (ATerm)ATmakeAppl1(PERR_afun8, (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PERR_afun10, (ATerm)ATmakeInt(0), (ATerm)ATmakeInt(255)))))), (ATerm) ((ATerm) PERR_stringToChars(string)))));
}

/*}}}  */
/*{{{  PERR_Escaped PERR_makeEscapedOctal(const char* string) */

PERR_Escaped PERR_makeEscapedOctal(const char* string)
{
  return (PERR_Escaped)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun11)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun11))), (ATerm)ATmakeAppl0(PERR_afun6)), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl1(PERR_afun7, (ATerm)ATmakeAppl1(PERR_afun8, (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PERR_afun10, (ATerm)ATmakeInt(0), (ATerm)ATmakeInt(255)))))), (ATerm) ((ATerm) PERR_stringToChars(string)))));
}

/*}}}  */
/*{{{  PERR_StrCon PERR_makeStrConDefault(const char* string) */

PERR_StrCon PERR_makeStrConDefault(const char* string)
{
  return (PERR_StrCon)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun12)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun12))), (ATerm)ATmakeAppl0(PERR_afun6)), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl1(PERR_afun7, (ATerm)ATmakeAppl1(PERR_afun8, (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PERR_afun10, (ATerm)ATmakeInt(0), (ATerm)ATmakeInt(255)))))), (ATerm) ((ATerm) PERR_stringToChars(string)))));
}

/*}}}  */
/*{{{  PERR_NatCon PERR_makeNatConDefault(const char* string) */

PERR_NatCon PERR_makeNatConDefault(const char* string)
{
  return (PERR_NatCon)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun2, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun13)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun13))), (ATerm)ATmakeAppl0(PERR_afun6)), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl1(PERR_afun7, (ATerm)ATmakeAppl1(PERR_afun8, (ATerm)ATmakeAppl1(PERR_afun9, (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PERR_afun10, (ATerm)ATmakeInt(0), (ATerm)ATmakeInt(255)))))), (ATerm) ((ATerm) PERR_stringToChars(string)))));
}

/*}}}  */
/*{{{  PERR_Subject PERR_makeSubjectSubject(PERR_OptLayout wsAfterSubject, PERR_OptLayout wsAfterParenOpen, PERR_StrCon description, PERR_OptLayout wsAfterDescription) */

PERR_Subject PERR_makeSubjectSubject(PERR_OptLayout wsAfterSubject, PERR_OptLayout wsAfterParenOpen, PERR_StrCon description, PERR_OptLayout wsAfterDescription)
{
  return (PERR_Subject)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun15))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun12)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun18))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun19))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun20))), (ATerm)ATmakeAppl1(PERR_afun21, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun22, (ATerm)ATmakeAppl1(PERR_afun23, (ATerm)ATmakeAppl0(PERR_afun19)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun15))), (ATerm) wsAfterDescription), (ATerm) description), (ATerm) wsAfterParenOpen), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun18))), (ATerm) wsAfterSubject), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun19))));
}

/*}}}  */
/*{{{  PERR_Subject PERR_makeSubjectLocalized(PERR_OptLayout wsAfterLocalized, PERR_OptLayout wsAfterParenOpen, PERR_StrCon description, PERR_OptLayout wsAfterDescription, PERR_OptLayout wsAfterComma, PERR_Location Location, PERR_OptLayout wsAfterLocation) */

PERR_Subject PERR_makeSubjectLocalized(PERR_OptLayout wsAfterLocalized, PERR_OptLayout wsAfterParenOpen, PERR_StrCon description, PERR_OptLayout wsAfterDescription, PERR_OptLayout wsAfterComma, PERR_Location Location, PERR_OptLayout wsAfterLocation)
{
  return (PERR_Subject)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun15))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun24)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun12)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun18))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun26))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun20))), (ATerm)ATmakeAppl1(PERR_afun21, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun22, (ATerm)ATmakeAppl1(PERR_afun23, (ATerm)ATmakeAppl0(PERR_afun26)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun15))), (ATerm) wsAfterLocation), (ATerm) Location), (ATerm) wsAfterComma), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))), (ATerm) wsAfterDescription), (ATerm) description), (ATerm) wsAfterParenOpen), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun18))), (ATerm) wsAfterLocalized), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun26))));
}

/*}}}  */
/*{{{  PERR_Error PERR_makeErrorInfo(PERR_OptLayout wsAfterInfo, PERR_OptLayout wsAfterParenOpen, PERR_StrCon description, PERR_OptLayout wsAfterDescription, PERR_OptLayout wsAfterComma, PERR_OptLayout wsAfterBracketOpen, PERR_SubjectList list, PERR_OptLayout wsAfterList, PERR_OptLayout wsAfterBracketClose) */

PERR_Error PERR_makeErrorInfo(PERR_OptLayout wsAfterInfo, PERR_OptLayout wsAfterParenOpen, PERR_StrCon description, PERR_OptLayout wsAfterDescription, PERR_OptLayout wsAfterComma, PERR_OptLayout wsAfterBracketOpen, PERR_SubjectList list, PERR_OptLayout wsAfterList, PERR_OptLayout wsAfterBracketClose)
{
  return (PERR_Error)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun15))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun27))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl2(PERR_afun28, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun20)), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun29))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun12)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun18))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun30))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun31))), (ATerm)ATmakeAppl1(PERR_afun21, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun22, (ATerm)ATmakeAppl1(PERR_afun23, (ATerm)ATmakeAppl0(PERR_afun30)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun15))), (ATerm) wsAfterBracketClose), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun27))), (ATerm) wsAfterList), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl1(PERR_afun7, (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl2(PERR_afun28, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun20)), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))))), (ATerm) list)), (ATerm) wsAfterBracketOpen), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun29))), (ATerm) wsAfterComma), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))), (ATerm) wsAfterDescription), (ATerm) description), (ATerm) wsAfterParenOpen), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun18))), (ATerm) wsAfterInfo), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun30))));
}

/*}}}  */
/*{{{  PERR_Error PERR_makeErrorWarning(PERR_OptLayout wsAfterWarning, PERR_OptLayout wsAfterParenOpen, PERR_StrCon description, PERR_OptLayout wsAfterDescription, PERR_OptLayout wsAfterComma, PERR_OptLayout wsAfterBracketOpen, PERR_SubjectList list, PERR_OptLayout wsAfterList, PERR_OptLayout wsAfterBracketClose) */

PERR_Error PERR_makeErrorWarning(PERR_OptLayout wsAfterWarning, PERR_OptLayout wsAfterParenOpen, PERR_StrCon description, PERR_OptLayout wsAfterDescription, PERR_OptLayout wsAfterComma, PERR_OptLayout wsAfterBracketOpen, PERR_SubjectList list, PERR_OptLayout wsAfterList, PERR_OptLayout wsAfterBracketClose)
{
  return (PERR_Error)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun15))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun27))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl2(PERR_afun28, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun20)), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun29))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun12)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun18))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun32))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun31))), (ATerm)ATmakeAppl1(PERR_afun21, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun22, (ATerm)ATmakeAppl1(PERR_afun23, (ATerm)ATmakeAppl0(PERR_afun32)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun15))), (ATerm) wsAfterBracketClose), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun27))), (ATerm) wsAfterList), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl1(PERR_afun7, (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl2(PERR_afun28, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun20)), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))))), (ATerm) list)), (ATerm) wsAfterBracketOpen), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun29))), (ATerm) wsAfterComma), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))), (ATerm) wsAfterDescription), (ATerm) description), (ATerm) wsAfterParenOpen), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun18))), (ATerm) wsAfterWarning), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun32))));
}

/*}}}  */
/*{{{  PERR_Error PERR_makeErrorError(PERR_OptLayout wsAfterError, PERR_OptLayout wsAfterParenOpen, PERR_StrCon description, PERR_OptLayout wsAfterDescription, PERR_OptLayout wsAfterComma, PERR_OptLayout wsAfterBracketOpen, PERR_SubjectList list, PERR_OptLayout wsAfterList, PERR_OptLayout wsAfterBracketClose) */

PERR_Error PERR_makeErrorError(PERR_OptLayout wsAfterError, PERR_OptLayout wsAfterParenOpen, PERR_StrCon description, PERR_OptLayout wsAfterDescription, PERR_OptLayout wsAfterComma, PERR_OptLayout wsAfterBracketOpen, PERR_SubjectList list, PERR_OptLayout wsAfterList, PERR_OptLayout wsAfterBracketClose)
{
  return (PERR_Error)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun15))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun27))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl2(PERR_afun28, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun20)), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun29))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun12)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun18))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun33))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun31))), (ATerm)ATmakeAppl1(PERR_afun21, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun22, (ATerm)ATmakeAppl1(PERR_afun23, (ATerm)ATmakeAppl0(PERR_afun33)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun15))), (ATerm) wsAfterBracketClose), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun27))), (ATerm) wsAfterList), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl1(PERR_afun7, (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl2(PERR_afun28, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun20)), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))))), (ATerm) list)), (ATerm) wsAfterBracketOpen), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun29))), (ATerm) wsAfterComma), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))), (ATerm) wsAfterDescription), (ATerm) description), (ATerm) wsAfterParenOpen), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun18))), (ATerm) wsAfterError), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun33))));
}

/*}}}  */
/*{{{  PERR_Error PERR_makeErrorFatal(PERR_OptLayout wsAfterFatal, PERR_OptLayout wsAfterParenOpen, PERR_StrCon description, PERR_OptLayout wsAfterDescription, PERR_OptLayout wsAfterComma, PERR_OptLayout wsAfterBracketOpen, PERR_SubjectList list, PERR_OptLayout wsAfterList, PERR_OptLayout wsAfterBracketClose) */

PERR_Error PERR_makeErrorFatal(PERR_OptLayout wsAfterFatal, PERR_OptLayout wsAfterParenOpen, PERR_StrCon description, PERR_OptLayout wsAfterDescription, PERR_OptLayout wsAfterComma, PERR_OptLayout wsAfterBracketOpen, PERR_SubjectList list, PERR_OptLayout wsAfterList, PERR_OptLayout wsAfterBracketClose)
{
  return (PERR_Error)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun15))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun27))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl2(PERR_afun28, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun20)), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun29))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun12)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun18))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun34))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun31))), (ATerm)ATmakeAppl1(PERR_afun21, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun22, (ATerm)ATmakeAppl1(PERR_afun23, (ATerm)ATmakeAppl0(PERR_afun34)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun15))), (ATerm) wsAfterBracketClose), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun27))), (ATerm) wsAfterList), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl1(PERR_afun7, (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl2(PERR_afun28, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun20)), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))))), (ATerm) list)), (ATerm) wsAfterBracketOpen), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun29))), (ATerm) wsAfterComma), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))), (ATerm) wsAfterDescription), (ATerm) description), (ATerm) wsAfterParenOpen), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun18))), (ATerm) wsAfterFatal), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun34))));
}

/*}}}  */
/*{{{  PERR_SubjectList PERR_makeSubjectListEmpty(void) */

PERR_SubjectList PERR_makeSubjectListEmpty(void)
{
  return (PERR_SubjectList)(ATerm)ATempty;
}

/*}}}  */
/*{{{  PERR_SubjectList PERR_makeSubjectListSingle(PERR_Subject head) */

PERR_SubjectList PERR_makeSubjectListSingle(PERR_Subject head)
{
  return (PERR_SubjectList)(ATerm)ATmakeList1((ATerm) head);
}

/*}}}  */
/*{{{  PERR_SubjectList PERR_makeSubjectListMany(PERR_Subject head, PERR_OptLayout wsAfterHead, PERR_OptLayout wsAfterSep, PERR_SubjectList tail) */

PERR_SubjectList PERR_makeSubjectListMany(PERR_Subject head, PERR_OptLayout wsAfterHead, PERR_OptLayout wsAfterSep, PERR_SubjectList tail)
{
  if (PERR_isSubjectListEmpty(tail)) {
    return PERR_makeSubjectListSingle(head);
  }
  return (PERR_SubjectList)(ATerm)ATinsert(ATinsert(ATinsert(ATinsert((ATermList)tail, (ATerm) wsAfterSep), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))), (ATerm) wsAfterHead), (ATerm) head);
}

/*}}}  */
/*{{{  PERR_Summary PERR_makeSummarySummary(PERR_OptLayout wsAfterSummary, PERR_OptLayout wsAfterParenOpen, PERR_StrCon producer, PERR_OptLayout wsAfterProducer, PERR_OptLayout wsAfterComma, PERR_StrCon id, PERR_OptLayout wsAfterId, PERR_OptLayout wsAfterComma1, PERR_OptLayout wsAfterBracketOpen, PERR_ErrorList list, PERR_OptLayout wsAfterList, PERR_OptLayout wsAfterBracketClose) */

PERR_Summary PERR_makeSummarySummary(PERR_OptLayout wsAfterSummary, PERR_OptLayout wsAfterParenOpen, PERR_StrCon producer, PERR_OptLayout wsAfterProducer, PERR_OptLayout wsAfterComma, PERR_StrCon id, PERR_OptLayout wsAfterId, PERR_OptLayout wsAfterComma1, PERR_OptLayout wsAfterBracketOpen, PERR_ErrorList list, PERR_OptLayout wsAfterList, PERR_OptLayout wsAfterBracketClose)
{
  return (PERR_Summary)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun15))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun27))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl2(PERR_afun28, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun31)), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun29))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun12)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun12)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun18))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun35))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun36))), (ATerm)ATmakeAppl1(PERR_afun21, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun22, (ATerm)ATmakeAppl1(PERR_afun23, (ATerm)ATmakeAppl0(PERR_afun35)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun15))), (ATerm) wsAfterBracketClose), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun27))), (ATerm) wsAfterList), (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl1(PERR_afun7, (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl2(PERR_afun28, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun31)), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))))), (ATerm) list)), (ATerm) wsAfterBracketOpen), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun29))), (ATerm) wsAfterComma1), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))), (ATerm) wsAfterId), (ATerm) id), (ATerm) wsAfterComma), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))), (ATerm) wsAfterProducer), (ATerm) producer), (ATerm) wsAfterParenOpen), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun18))), (ATerm) wsAfterSummary), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun35))));
}

/*}}}  */
/*{{{  PERR_ErrorList PERR_makeErrorListEmpty(void) */

PERR_ErrorList PERR_makeErrorListEmpty(void)
{
  return (PERR_ErrorList)(ATerm)ATempty;
}

/*}}}  */
/*{{{  PERR_ErrorList PERR_makeErrorListSingle(PERR_Error head) */

PERR_ErrorList PERR_makeErrorListSingle(PERR_Error head)
{
  return (PERR_ErrorList)(ATerm)ATmakeList1((ATerm) head);
}

/*}}}  */
/*{{{  PERR_ErrorList PERR_makeErrorListMany(PERR_Error head, PERR_OptLayout wsAfterHead, PERR_OptLayout wsAfterSep, PERR_ErrorList tail) */

PERR_ErrorList PERR_makeErrorListMany(PERR_Error head, PERR_OptLayout wsAfterHead, PERR_OptLayout wsAfterSep, PERR_ErrorList tail)
{
  if (PERR_isErrorListEmpty(tail)) {
    return PERR_makeErrorListSingle(head);
  }
  return (PERR_ErrorList)(ATerm)ATinsert(ATinsert(ATinsert(ATinsert((ATermList)tail, (ATerm) wsAfterSep), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))), (ATerm) wsAfterHead), (ATerm) head);
}

/*}}}  */
/*{{{  PERR_Location PERR_makeLocationFile(PERR_OptLayout wsAfterFile, PERR_OptLayout wsAfterParenOpen, PERR_StrCon filename, PERR_OptLayout wsAfterFilename) */

PERR_Location PERR_makeLocationFile(PERR_OptLayout wsAfterFile, PERR_OptLayout wsAfterParenOpen, PERR_StrCon filename, PERR_OptLayout wsAfterFilename)
{
  return (PERR_Location)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun15))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun12)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun18))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun37))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun24))), (ATerm)ATmakeAppl1(PERR_afun21, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun22, (ATerm)ATmakeAppl1(PERR_afun23, (ATerm)ATmakeAppl0(PERR_afun37)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun15))), (ATerm) wsAfterFilename), (ATerm) filename), (ATerm) wsAfterParenOpen), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun18))), (ATerm) wsAfterFile), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun37))));
}

/*}}}  */
/*{{{  PERR_Location PERR_makeLocationAreaInFile(PERR_OptLayout wsAfterAreaInFile, PERR_OptLayout wsAfterParenOpen, PERR_StrCon filename, PERR_OptLayout wsAfterFilename, PERR_OptLayout wsAfterComma, PERR_Area Area, PERR_OptLayout wsAfterArea) */

PERR_Location PERR_makeLocationAreaInFile(PERR_OptLayout wsAfterAreaInFile, PERR_OptLayout wsAfterParenOpen, PERR_StrCon filename, PERR_OptLayout wsAfterFilename, PERR_OptLayout wsAfterComma, PERR_Area Area, PERR_OptLayout wsAfterArea)
{
  return (PERR_Location)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun15))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun38)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun12)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun18))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun39))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun24))), (ATerm)ATmakeAppl1(PERR_afun21, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun22, (ATerm)ATmakeAppl1(PERR_afun23, (ATerm)ATmakeAppl0(PERR_afun39)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun15))), (ATerm) wsAfterArea), (ATerm) Area), (ATerm) wsAfterComma), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))), (ATerm) wsAfterFilename), (ATerm) filename), (ATerm) wsAfterParenOpen), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun18))), (ATerm) wsAfterAreaInFile), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun39))));
}

/*}}}  */
/*{{{  PERR_Area PERR_makeAreaArea(PERR_OptLayout wsAfterArea, PERR_OptLayout wsAfterParenOpen, PERR_NatCon beginLine, PERR_OptLayout wsAfterBeginLine, PERR_OptLayout wsAfterComma, PERR_NatCon beginColumn, PERR_OptLayout wsAfterBeginColumn, PERR_OptLayout wsAfterComma1, PERR_NatCon endLine, PERR_OptLayout wsAfterEndLine, PERR_OptLayout wsAfterComma2, PERR_NatCon endColumn, PERR_OptLayout wsAfterEndColumn, PERR_OptLayout wsAfterComma3, PERR_NatCon offset, PERR_OptLayout wsAfterOffset, PERR_OptLayout wsAfterComma4, PERR_NatCon length, PERR_OptLayout wsAfterLength) */

PERR_Area PERR_makeAreaArea(PERR_OptLayout wsAfterArea, PERR_OptLayout wsAfterParenOpen, PERR_NatCon beginLine, PERR_OptLayout wsAfterBeginLine, PERR_OptLayout wsAfterComma, PERR_NatCon beginColumn, PERR_OptLayout wsAfterBeginColumn, PERR_OptLayout wsAfterComma1, PERR_NatCon endLine, PERR_OptLayout wsAfterEndLine, PERR_OptLayout wsAfterComma2, PERR_NatCon endColumn, PERR_OptLayout wsAfterEndColumn, PERR_OptLayout wsAfterComma3, PERR_NatCon offset, PERR_OptLayout wsAfterOffset, PERR_OptLayout wsAfterComma4, PERR_NatCon length, PERR_OptLayout wsAfterLength)
{
  return (PERR_Area)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun15))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun13)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun13)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun13)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun13)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun13)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun13)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun18))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun40))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun38))), (ATerm)ATmakeAppl1(PERR_afun21, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun22, (ATerm)ATmakeAppl1(PERR_afun23, (ATerm)ATmakeAppl0(PERR_afun40)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun15))), (ATerm) wsAfterLength), (ATerm) length), (ATerm) wsAfterComma4), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))), (ATerm) wsAfterOffset), (ATerm) offset), (ATerm) wsAfterComma3), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))), (ATerm) wsAfterEndColumn), (ATerm) endColumn), (ATerm) wsAfterComma2), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))), (ATerm) wsAfterEndLine), (ATerm) endLine), (ATerm) wsAfterComma1), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))), (ATerm) wsAfterBeginColumn), (ATerm) beginColumn), (ATerm) wsAfterComma), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun25))), (ATerm) wsAfterBeginLine), (ATerm) beginLine), (ATerm) wsAfterParenOpen), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun18))), (ATerm) wsAfterArea), (ATerm)ATmakeAppl1(PERR_afun14, (ATerm)ATmakeAppl0(PERR_afun40))));
}

/*}}}  */
/*{{{  PERR_Start PERR_makeStartArea(PERR_OptLayout wsBefore, PERR_Area topArea, PERR_OptLayout wsAfter, int ambCnt) */

PERR_Start PERR_makeStartArea(PERR_OptLayout wsBefore, PERR_Area topArea, PERR_OptLayout wsAfter, int ambCnt)
{
  return (PERR_Start)(ATerm)ATmakeAppl2(PERR_afun41, (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun38)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun42)), (ATerm)ATmakeAppl0(PERR_afun6)), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm) wsAfter), (ATerm) topArea), (ATerm) wsBefore)), (ATerm) (ATerm) ATmakeInt(ambCnt));
}

/*}}}  */
/*{{{  PERR_Start PERR_makeStartLocation(PERR_OptLayout wsBefore, PERR_Location topLocation, PERR_OptLayout wsAfter, int ambCnt) */

PERR_Start PERR_makeStartLocation(PERR_OptLayout wsBefore, PERR_Location topLocation, PERR_OptLayout wsAfter, int ambCnt)
{
  return (PERR_Start)(ATerm)ATmakeAppl2(PERR_afun41, (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun24)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun42)), (ATerm)ATmakeAppl0(PERR_afun6)), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm) wsAfter), (ATerm) topLocation), (ATerm) wsBefore)), (ATerm) (ATerm) ATmakeInt(ambCnt));
}

/*}}}  */
/*{{{  PERR_Start PERR_makeStartSubject(PERR_OptLayout wsBefore, PERR_Subject topSubject, PERR_OptLayout wsAfter, int ambCnt) */

PERR_Start PERR_makeStartSubject(PERR_OptLayout wsBefore, PERR_Subject topSubject, PERR_OptLayout wsAfter, int ambCnt)
{
  return (PERR_Start)(ATerm)ATmakeAppl2(PERR_afun41, (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun20)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun42)), (ATerm)ATmakeAppl0(PERR_afun6)), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm) wsAfter), (ATerm) topSubject), (ATerm) wsBefore)), (ATerm) (ATerm) ATmakeInt(ambCnt));
}

/*}}}  */
/*{{{  PERR_Start PERR_makeStartError(PERR_OptLayout wsBefore, PERR_Error topError, PERR_OptLayout wsAfter, int ambCnt) */

PERR_Start PERR_makeStartError(PERR_OptLayout wsBefore, PERR_Error topError, PERR_OptLayout wsAfter, int ambCnt)
{
  return (PERR_Start)(ATerm)ATmakeAppl2(PERR_afun41, (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun31)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun42)), (ATerm)ATmakeAppl0(PERR_afun6)), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm) wsAfter), (ATerm) topError), (ATerm) wsBefore)), (ATerm) (ATerm) ATmakeInt(ambCnt));
}

/*}}}  */
/*{{{  PERR_Start PERR_makeStartSummary(PERR_OptLayout wsBefore, PERR_Summary topSummary, PERR_OptLayout wsAfter, int ambCnt) */

PERR_Start PERR_makeStartSummary(PERR_OptLayout wsBefore, PERR_Summary topSummary, PERR_OptLayout wsAfter, int ambCnt)
{
  return (PERR_Start)(ATerm)ATmakeAppl2(PERR_afun41, (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun36)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun42)), (ATerm)ATmakeAppl0(PERR_afun6)), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm) wsAfter), (ATerm) topSummary), (ATerm) wsBefore)), (ATerm) (ATerm) ATmakeInt(ambCnt));
}

/*}}}  */
/*{{{  PERR_Start PERR_makeStartNatCon(PERR_OptLayout wsBefore, PERR_NatCon topNatCon, PERR_OptLayout wsAfter, int ambCnt) */

PERR_Start PERR_makeStartNatCon(PERR_OptLayout wsBefore, PERR_NatCon topNatCon, PERR_OptLayout wsAfter, int ambCnt)
{
  return (PERR_Start)(ATerm)ATmakeAppl2(PERR_afun41, (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun13)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun42)), (ATerm)ATmakeAppl0(PERR_afun6)), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm) wsAfter), (ATerm) topNatCon), (ATerm) wsBefore)), (ATerm) (ATerm) ATmakeInt(ambCnt));
}

/*}}}  */
/*{{{  PERR_Start PERR_makeStartEscaped(PERR_OptLayout wsBefore, PERR_Escaped topEscaped, PERR_OptLayout wsAfter, int ambCnt) */

PERR_Start PERR_makeStartEscaped(PERR_OptLayout wsBefore, PERR_Escaped topEscaped, PERR_OptLayout wsAfter, int ambCnt)
{
  return (PERR_Start)(ATerm)ATmakeAppl2(PERR_afun41, (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun11)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun42)), (ATerm)ATmakeAppl0(PERR_afun6)), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm) wsAfter), (ATerm) topEscaped), (ATerm) wsBefore)), (ATerm) (ATerm) ATmakeInt(ambCnt));
}

/*}}}  */
/*{{{  PERR_Start PERR_makeStartNormal(PERR_OptLayout wsBefore, PERR_Normal topNormal, PERR_OptLayout wsAfter, int ambCnt) */

PERR_Start PERR_makeStartNormal(PERR_OptLayout wsBefore, PERR_Normal topNormal, PERR_OptLayout wsAfter, int ambCnt)
{
  return (PERR_Start)(ATerm)ATmakeAppl2(PERR_afun41, (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun4)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun42)), (ATerm)ATmakeAppl0(PERR_afun6)), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm) wsAfter), (ATerm) topNormal), (ATerm) wsBefore)), (ATerm) (ATerm) ATmakeInt(ambCnt));
}

/*}}}  */
/*{{{  PERR_Start PERR_makeStartStrCon(PERR_OptLayout wsBefore, PERR_StrCon topStrCon, PERR_OptLayout wsAfter, int ambCnt) */

PERR_Start PERR_makeStartStrCon(PERR_OptLayout wsBefore, PERR_StrCon topStrCon, PERR_OptLayout wsAfter, int ambCnt)
{
  return (PERR_Start)(ATerm)ATmakeAppl2(PERR_afun41, (ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun12)))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17)))), (ATerm)ATmakeAppl1(PERR_afun3, (ATerm)ATmakeAppl0(PERR_afun42)), (ATerm)ATmakeAppl0(PERR_afun6)), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm) wsAfter), (ATerm) topStrCon), (ATerm) wsBefore)), (ATerm) (ATerm) ATmakeInt(ambCnt));
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_makeOptLayoutAbsent(void) */

PERR_OptLayout PERR_makeOptLayoutAbsent(void)
{
  return (PERR_OptLayout)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATempty, (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17))), (ATerm)ATmakeAppl0(PERR_afun6)), (ATerm)ATempty);
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_makeOptLayoutPresent(const char* string) */

PERR_OptLayout PERR_makeOptLayoutPresent(const char* string)
{
  return (PERR_OptLayout)(ATerm)ATmakeAppl2(PERR_afun0, (ATerm)ATmakeAppl3(PERR_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl0(PERR_afun17))), (ATerm)ATmakeAppl1(PERR_afun5, (ATerm)ATmakeAppl1(PERR_afun16, (ATerm)ATmakeAppl0(PERR_afun17))), (ATerm)ATmakeAppl0(PERR_afun6)), (ATerm) ((ATerm) PERR_stringToChars(string)));
}

/*}}}  */

/*}}}  */
/*{{{  equality functions */

ATbool PERR_isEqualNormal(PERR_Normal arg0, PERR_Normal arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PERR_isEqualEscaped(PERR_Escaped arg0, PERR_Escaped arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PERR_isEqualStrCon(PERR_StrCon arg0, PERR_StrCon arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PERR_isEqualNatCon(PERR_NatCon arg0, PERR_NatCon arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PERR_isEqualSubject(PERR_Subject arg0, PERR_Subject arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PERR_isEqualError(PERR_Error arg0, PERR_Error arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PERR_isEqualSubjectList(PERR_SubjectList arg0, PERR_SubjectList arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PERR_isEqualSummary(PERR_Summary arg0, PERR_Summary arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PERR_isEqualErrorList(PERR_ErrorList arg0, PERR_ErrorList arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PERR_isEqualLocation(PERR_Location arg0, PERR_Location arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PERR_isEqualArea(PERR_Area arg0, PERR_Area arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PERR_isEqualStart(PERR_Start arg0, PERR_Start arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PERR_isEqualOptLayout(PERR_OptLayout arg0, PERR_OptLayout arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/*}}}  */
/*{{{  PERR_Normal accessors */

/*{{{  ATbool PERR_isValidNormal(PERR_Normal arg) */

ATbool PERR_isValidNormal(PERR_Normal arg)
{
  if (PERR_isNormalDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool PERR_isNormalDefault(PERR_Normal arg) */

inline ATbool PERR_isNormalDefault(PERR_Normal arg)
{
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PERR_patternNormalDefault, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool PERR_hasNormalString(PERR_Normal arg) */

ATbool PERR_hasNormalString(PERR_Normal arg)
{
  if (PERR_isNormalDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  char* PERR_getNormalString(PERR_Normal arg) */

char* PERR_getNormalString(PERR_Normal arg)
{
  
    return (char*)PERR_charsToString((ATerm)ATgetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), 1));
}

/*}}}  */
/*{{{  PERR_Normal PERR_setNormalString(PERR_Normal arg, const char* string) */

PERR_Normal PERR_setNormalString(PERR_Normal arg, const char* string)
{
  if (PERR_isNormalDefault(arg)) {
    return (PERR_Normal)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), (ATerm)((ATerm) ((ATerm) PERR_stringToChars(string))), 1), 0), 1);
  }

  ATabort("Normal has no String: %t\n", arg);
  return (PERR_Normal)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  PERR_Escaped accessors */

/*{{{  ATbool PERR_isValidEscaped(PERR_Escaped arg) */

ATbool PERR_isValidEscaped(PERR_Escaped arg)
{
  if (PERR_isEscapedSpecialCharacter(arg)) {
    return ATtrue;
  }
  else if (PERR_isEscapedOctal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool PERR_isEscapedSpecialCharacter(PERR_Escaped arg) */

inline ATbool PERR_isEscapedSpecialCharacter(PERR_Escaped arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PERR_patternEscapedSpecialCharacter, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PERR_isEscapedOctal(PERR_Escaped arg) */

inline ATbool PERR_isEscapedOctal(PERR_Escaped arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PERR_patternEscapedOctal, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  ATbool PERR_hasEscapedString(PERR_Escaped arg) */

ATbool PERR_hasEscapedString(PERR_Escaped arg)
{
  if (PERR_isEscapedSpecialCharacter(arg)) {
    return ATtrue;
  }
  else if (PERR_isEscapedOctal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  char* PERR_getEscapedString(PERR_Escaped arg) */

char* PERR_getEscapedString(PERR_Escaped arg)
{
  if (PERR_isEscapedSpecialCharacter(arg)) {
    return (char*)PERR_charsToString((ATerm)ATgetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), 1));
  }
  else 
    return (char*)PERR_charsToString((ATerm)ATgetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), 1));
}

/*}}}  */
/*{{{  PERR_Escaped PERR_setEscapedString(PERR_Escaped arg, const char* string) */

PERR_Escaped PERR_setEscapedString(PERR_Escaped arg, const char* string)
{
  if (PERR_isEscapedSpecialCharacter(arg)) {
    return (PERR_Escaped)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), (ATerm)((ATerm) ((ATerm) PERR_stringToChars(string))), 1), 0), 1);
  }
  else if (PERR_isEscapedOctal(arg)) {
    return (PERR_Escaped)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), (ATerm)((ATerm) ((ATerm) PERR_stringToChars(string))), 1), 0), 1);
  }

  ATabort("Escaped has no String: %t\n", arg);
  return (PERR_Escaped)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  PERR_StrCon accessors */

/*{{{  ATbool PERR_isValidStrCon(PERR_StrCon arg) */

ATbool PERR_isValidStrCon(PERR_StrCon arg)
{
  if (PERR_isStrConDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool PERR_isStrConDefault(PERR_StrCon arg) */

inline ATbool PERR_isStrConDefault(PERR_StrCon arg)
{
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PERR_patternStrConDefault, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool PERR_hasStrConString(PERR_StrCon arg) */

ATbool PERR_hasStrConString(PERR_StrCon arg)
{
  if (PERR_isStrConDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  char* PERR_getStrConString(PERR_StrCon arg) */

char* PERR_getStrConString(PERR_StrCon arg)
{
  
    return (char*)PERR_charsToString((ATerm)ATgetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), 1));
}

/*}}}  */
/*{{{  PERR_StrCon PERR_setStrConString(PERR_StrCon arg, const char* string) */

PERR_StrCon PERR_setStrConString(PERR_StrCon arg, const char* string)
{
  if (PERR_isStrConDefault(arg)) {
    return (PERR_StrCon)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), (ATerm)((ATerm) ((ATerm) PERR_stringToChars(string))), 1), 0), 1);
  }

  ATabort("StrCon has no String: %t\n", arg);
  return (PERR_StrCon)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  PERR_NatCon accessors */

/*{{{  ATbool PERR_isValidNatCon(PERR_NatCon arg) */

ATbool PERR_isValidNatCon(PERR_NatCon arg)
{
  if (PERR_isNatConDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool PERR_isNatConDefault(PERR_NatCon arg) */

inline ATbool PERR_isNatConDefault(PERR_NatCon arg)
{
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PERR_patternNatConDefault, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool PERR_hasNatConString(PERR_NatCon arg) */

ATbool PERR_hasNatConString(PERR_NatCon arg)
{
  if (PERR_isNatConDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  char* PERR_getNatConString(PERR_NatCon arg) */

char* PERR_getNatConString(PERR_NatCon arg)
{
  
    return (char*)PERR_charsToString((ATerm)ATgetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), 1));
}

/*}}}  */
/*{{{  PERR_NatCon PERR_setNatConString(PERR_NatCon arg, const char* string) */

PERR_NatCon PERR_setNatConString(PERR_NatCon arg, const char* string)
{
  if (PERR_isNatConDefault(arg)) {
    return (PERR_NatCon)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), (ATerm)((ATerm) ((ATerm) PERR_stringToChars(string))), 1), 0), 1);
  }

  ATabort("NatCon has no String: %t\n", arg);
  return (PERR_NatCon)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  PERR_Subject accessors */

/*{{{  ATbool PERR_isValidSubject(PERR_Subject arg) */

ATbool PERR_isValidSubject(PERR_Subject arg)
{
  if (PERR_isSubjectSubject(arg)) {
    return ATtrue;
  }
  else if (PERR_isSubjectLocalized(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool PERR_isSubjectSubject(PERR_Subject arg) */

inline ATbool PERR_isSubjectSubject(PERR_Subject arg)
{
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

/*}}}  */
/*{{{  inline ATbool PERR_isSubjectLocalized(PERR_Subject arg) */

inline ATbool PERR_isSubjectLocalized(PERR_Subject arg)
{
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

/*}}}  */
/*{{{  ATbool PERR_hasSubjectWsAfterSubject(PERR_Subject arg) */

ATbool PERR_hasSubjectWsAfterSubject(PERR_Subject arg)
{
  if (PERR_isSubjectSubject(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getSubjectWsAfterSubject(PERR_Subject arg) */

PERR_OptLayout PERR_getSubjectWsAfterSubject(PERR_Subject arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/*}}}  */
/*{{{  PERR_Subject PERR_setSubjectWsAfterSubject(PERR_Subject arg, PERR_OptLayout wsAfterSubject) */

PERR_Subject PERR_setSubjectWsAfterSubject(PERR_Subject arg, PERR_OptLayout wsAfterSubject)
{
  if (PERR_isSubjectSubject(arg)) {
    return (PERR_Subject)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterSubject), 1), 1);
  }

  ATabort("Subject has no WsAfterSubject: %t\n", arg);
  return (PERR_Subject)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasSubjectWsAfterParenOpen(PERR_Subject arg) */

ATbool PERR_hasSubjectWsAfterParenOpen(PERR_Subject arg)
{
  if (PERR_isSubjectSubject(arg)) {
    return ATtrue;
  }
  else if (PERR_isSubjectLocalized(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getSubjectWsAfterParenOpen(PERR_Subject arg) */

PERR_OptLayout PERR_getSubjectWsAfterParenOpen(PERR_Subject arg)
{
  if (PERR_isSubjectSubject(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
  }
  else 
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
}

/*}}}  */
/*{{{  PERR_Subject PERR_setSubjectWsAfterParenOpen(PERR_Subject arg, PERR_OptLayout wsAfterParenOpen) */

PERR_Subject PERR_setSubjectWsAfterParenOpen(PERR_Subject arg, PERR_OptLayout wsAfterParenOpen)
{
  if (PERR_isSubjectSubject(arg)) {
    return (PERR_Subject)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterParenOpen), 3), 1);
  }
  else if (PERR_isSubjectLocalized(arg)) {
    return (PERR_Subject)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterParenOpen), 3), 1);
  }

  ATabort("Subject has no WsAfterParenOpen: %t\n", arg);
  return (PERR_Subject)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasSubjectDescription(PERR_Subject arg) */

ATbool PERR_hasSubjectDescription(PERR_Subject arg)
{
  if (PERR_isSubjectSubject(arg)) {
    return ATtrue;
  }
  else if (PERR_isSubjectLocalized(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_StrCon PERR_getSubjectDescription(PERR_Subject arg) */

PERR_StrCon PERR_getSubjectDescription(PERR_Subject arg)
{
  if (PERR_isSubjectSubject(arg)) {
    return (PERR_StrCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4);
  }
  else 
    return (PERR_StrCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4);
}

/*}}}  */
/*{{{  PERR_Subject PERR_setSubjectDescription(PERR_Subject arg, PERR_StrCon description) */

PERR_Subject PERR_setSubjectDescription(PERR_Subject arg, PERR_StrCon description)
{
  if (PERR_isSubjectSubject(arg)) {
    return (PERR_Subject)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) description), 4), 1);
  }
  else if (PERR_isSubjectLocalized(arg)) {
    return (PERR_Subject)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) description), 4), 1);
  }

  ATabort("Subject has no Description: %t\n", arg);
  return (PERR_Subject)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasSubjectWsAfterDescription(PERR_Subject arg) */

ATbool PERR_hasSubjectWsAfterDescription(PERR_Subject arg)
{
  if (PERR_isSubjectSubject(arg)) {
    return ATtrue;
  }
  else if (PERR_isSubjectLocalized(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getSubjectWsAfterDescription(PERR_Subject arg) */

PERR_OptLayout PERR_getSubjectWsAfterDescription(PERR_Subject arg)
{
  if (PERR_isSubjectSubject(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 5);
  }
  else 
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 5);
}

/*}}}  */
/*{{{  PERR_Subject PERR_setSubjectWsAfterDescription(PERR_Subject arg, PERR_OptLayout wsAfterDescription) */

PERR_Subject PERR_setSubjectWsAfterDescription(PERR_Subject arg, PERR_OptLayout wsAfterDescription)
{
  if (PERR_isSubjectSubject(arg)) {
    return (PERR_Subject)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterDescription), 5), 1);
  }
  else if (PERR_isSubjectLocalized(arg)) {
    return (PERR_Subject)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterDescription), 5), 1);
  }

  ATabort("Subject has no WsAfterDescription: %t\n", arg);
  return (PERR_Subject)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasSubjectWsAfterLocalized(PERR_Subject arg) */

ATbool PERR_hasSubjectWsAfterLocalized(PERR_Subject arg)
{
  if (PERR_isSubjectLocalized(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getSubjectWsAfterLocalized(PERR_Subject arg) */

PERR_OptLayout PERR_getSubjectWsAfterLocalized(PERR_Subject arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/*}}}  */
/*{{{  PERR_Subject PERR_setSubjectWsAfterLocalized(PERR_Subject arg, PERR_OptLayout wsAfterLocalized) */

PERR_Subject PERR_setSubjectWsAfterLocalized(PERR_Subject arg, PERR_OptLayout wsAfterLocalized)
{
  if (PERR_isSubjectLocalized(arg)) {
    return (PERR_Subject)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterLocalized), 1), 1);
  }

  ATabort("Subject has no WsAfterLocalized: %t\n", arg);
  return (PERR_Subject)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasSubjectWsAfterComma(PERR_Subject arg) */

ATbool PERR_hasSubjectWsAfterComma(PERR_Subject arg)
{
  if (PERR_isSubjectLocalized(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getSubjectWsAfterComma(PERR_Subject arg) */

PERR_OptLayout PERR_getSubjectWsAfterComma(PERR_Subject arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 7);
}

/*}}}  */
/*{{{  PERR_Subject PERR_setSubjectWsAfterComma(PERR_Subject arg, PERR_OptLayout wsAfterComma) */

PERR_Subject PERR_setSubjectWsAfterComma(PERR_Subject arg, PERR_OptLayout wsAfterComma)
{
  if (PERR_isSubjectLocalized(arg)) {
    return (PERR_Subject)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma), 7), 1);
  }

  ATabort("Subject has no WsAfterComma: %t\n", arg);
  return (PERR_Subject)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasSubjectLocation(PERR_Subject arg) */

ATbool PERR_hasSubjectLocation(PERR_Subject arg)
{
  if (PERR_isSubjectLocalized(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_Location PERR_getSubjectLocation(PERR_Subject arg) */

PERR_Location PERR_getSubjectLocation(PERR_Subject arg)
{
  
    return (PERR_Location)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 8);
}

/*}}}  */
/*{{{  PERR_Subject PERR_setSubjectLocation(PERR_Subject arg, PERR_Location Location) */

PERR_Subject PERR_setSubjectLocation(PERR_Subject arg, PERR_Location Location)
{
  if (PERR_isSubjectLocalized(arg)) {
    return (PERR_Subject)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) Location), 8), 1);
  }

  ATabort("Subject has no Location: %t\n", arg);
  return (PERR_Subject)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasSubjectWsAfterLocation(PERR_Subject arg) */

ATbool PERR_hasSubjectWsAfterLocation(PERR_Subject arg)
{
  if (PERR_isSubjectLocalized(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getSubjectWsAfterLocation(PERR_Subject arg) */

PERR_OptLayout PERR_getSubjectWsAfterLocation(PERR_Subject arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 9);
}

/*}}}  */
/*{{{  PERR_Subject PERR_setSubjectWsAfterLocation(PERR_Subject arg, PERR_OptLayout wsAfterLocation) */

PERR_Subject PERR_setSubjectWsAfterLocation(PERR_Subject arg, PERR_OptLayout wsAfterLocation)
{
  if (PERR_isSubjectLocalized(arg)) {
    return (PERR_Subject)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterLocation), 9), 1);
  }

  ATabort("Subject has no WsAfterLocation: %t\n", arg);
  return (PERR_Subject)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  PERR_Error accessors */

/*{{{  ATbool PERR_isValidError(PERR_Error arg) */

ATbool PERR_isValidError(PERR_Error arg)
{
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

/*}}}  */
/*{{{  inline ATbool PERR_isErrorInfo(PERR_Error arg) */

inline ATbool PERR_isErrorInfo(PERR_Error arg)
{
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

/*}}}  */
/*{{{  inline ATbool PERR_isErrorWarning(PERR_Error arg) */

inline ATbool PERR_isErrorWarning(PERR_Error arg)
{
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

/*}}}  */
/*{{{  inline ATbool PERR_isErrorError(PERR_Error arg) */

inline ATbool PERR_isErrorError(PERR_Error arg)
{
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

/*}}}  */
/*{{{  inline ATbool PERR_isErrorFatal(PERR_Error arg) */

inline ATbool PERR_isErrorFatal(PERR_Error arg)
{
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

/*}}}  */
/*{{{  ATbool PERR_hasErrorWsAfterInfo(PERR_Error arg) */

ATbool PERR_hasErrorWsAfterInfo(PERR_Error arg)
{
  if (PERR_isErrorInfo(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getErrorWsAfterInfo(PERR_Error arg) */

PERR_OptLayout PERR_getErrorWsAfterInfo(PERR_Error arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/*}}}  */
/*{{{  PERR_Error PERR_setErrorWsAfterInfo(PERR_Error arg, PERR_OptLayout wsAfterInfo) */

PERR_Error PERR_setErrorWsAfterInfo(PERR_Error arg, PERR_OptLayout wsAfterInfo)
{
  if (PERR_isErrorInfo(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterInfo), 1), 1);
  }

  ATabort("Error has no WsAfterInfo: %t\n", arg);
  return (PERR_Error)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasErrorWsAfterParenOpen(PERR_Error arg) */

ATbool PERR_hasErrorWsAfterParenOpen(PERR_Error arg)
{
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

/*}}}  */
/*{{{  PERR_OptLayout PERR_getErrorWsAfterParenOpen(PERR_Error arg) */

PERR_OptLayout PERR_getErrorWsAfterParenOpen(PERR_Error arg)
{
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

/*}}}  */
/*{{{  PERR_Error PERR_setErrorWsAfterParenOpen(PERR_Error arg, PERR_OptLayout wsAfterParenOpen) */

PERR_Error PERR_setErrorWsAfterParenOpen(PERR_Error arg, PERR_OptLayout wsAfterParenOpen)
{
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

/*}}}  */
/*{{{  ATbool PERR_hasErrorDescription(PERR_Error arg) */

ATbool PERR_hasErrorDescription(PERR_Error arg)
{
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

/*}}}  */
/*{{{  PERR_StrCon PERR_getErrorDescription(PERR_Error arg) */

PERR_StrCon PERR_getErrorDescription(PERR_Error arg)
{
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

/*}}}  */
/*{{{  PERR_Error PERR_setErrorDescription(PERR_Error arg, PERR_StrCon description) */

PERR_Error PERR_setErrorDescription(PERR_Error arg, PERR_StrCon description)
{
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

/*}}}  */
/*{{{  ATbool PERR_hasErrorWsAfterDescription(PERR_Error arg) */

ATbool PERR_hasErrorWsAfterDescription(PERR_Error arg)
{
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

/*}}}  */
/*{{{  PERR_OptLayout PERR_getErrorWsAfterDescription(PERR_Error arg) */

PERR_OptLayout PERR_getErrorWsAfterDescription(PERR_Error arg)
{
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

/*}}}  */
/*{{{  PERR_Error PERR_setErrorWsAfterDescription(PERR_Error arg, PERR_OptLayout wsAfterDescription) */

PERR_Error PERR_setErrorWsAfterDescription(PERR_Error arg, PERR_OptLayout wsAfterDescription)
{
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

/*}}}  */
/*{{{  ATbool PERR_hasErrorWsAfterComma(PERR_Error arg) */

ATbool PERR_hasErrorWsAfterComma(PERR_Error arg)
{
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

/*}}}  */
/*{{{  PERR_OptLayout PERR_getErrorWsAfterComma(PERR_Error arg) */

PERR_OptLayout PERR_getErrorWsAfterComma(PERR_Error arg)
{
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

/*}}}  */
/*{{{  PERR_Error PERR_setErrorWsAfterComma(PERR_Error arg, PERR_OptLayout wsAfterComma) */

PERR_Error PERR_setErrorWsAfterComma(PERR_Error arg, PERR_OptLayout wsAfterComma)
{
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

/*}}}  */
/*{{{  ATbool PERR_hasErrorWsAfterBracketOpen(PERR_Error arg) */

ATbool PERR_hasErrorWsAfterBracketOpen(PERR_Error arg)
{
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

/*}}}  */
/*{{{  PERR_OptLayout PERR_getErrorWsAfterBracketOpen(PERR_Error arg) */

PERR_OptLayout PERR_getErrorWsAfterBracketOpen(PERR_Error arg)
{
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

/*}}}  */
/*{{{  PERR_Error PERR_setErrorWsAfterBracketOpen(PERR_Error arg, PERR_OptLayout wsAfterBracketOpen) */

PERR_Error PERR_setErrorWsAfterBracketOpen(PERR_Error arg, PERR_OptLayout wsAfterBracketOpen)
{
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

/*}}}  */
/*{{{  ATbool PERR_hasErrorList(PERR_Error arg) */

ATbool PERR_hasErrorList(PERR_Error arg)
{
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

/*}}}  */
/*{{{  PERR_SubjectList PERR_getErrorList(PERR_Error arg) */

PERR_SubjectList PERR_getErrorList(PERR_Error arg)
{
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

/*}}}  */
/*{{{  PERR_Error PERR_setErrorList(PERR_Error arg, PERR_SubjectList list) */

PERR_Error PERR_setErrorList(PERR_Error arg, PERR_SubjectList list)
{
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

/*}}}  */
/*{{{  ATbool PERR_hasErrorWsAfterList(PERR_Error arg) */

ATbool PERR_hasErrorWsAfterList(PERR_Error arg)
{
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

/*}}}  */
/*{{{  PERR_OptLayout PERR_getErrorWsAfterList(PERR_Error arg) */

PERR_OptLayout PERR_getErrorWsAfterList(PERR_Error arg)
{
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

/*}}}  */
/*{{{  PERR_Error PERR_setErrorWsAfterList(PERR_Error arg, PERR_OptLayout wsAfterList) */

PERR_Error PERR_setErrorWsAfterList(PERR_Error arg, PERR_OptLayout wsAfterList)
{
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

/*}}}  */
/*{{{  ATbool PERR_hasErrorWsAfterBracketClose(PERR_Error arg) */

ATbool PERR_hasErrorWsAfterBracketClose(PERR_Error arg)
{
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

/*}}}  */
/*{{{  PERR_OptLayout PERR_getErrorWsAfterBracketClose(PERR_Error arg) */

PERR_OptLayout PERR_getErrorWsAfterBracketClose(PERR_Error arg)
{
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

/*}}}  */
/*{{{  PERR_Error PERR_setErrorWsAfterBracketClose(PERR_Error arg, PERR_OptLayout wsAfterBracketClose) */

PERR_Error PERR_setErrorWsAfterBracketClose(PERR_Error arg, PERR_OptLayout wsAfterBracketClose)
{
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

/*}}}  */
/*{{{  ATbool PERR_hasErrorWsAfterWarning(PERR_Error arg) */

ATbool PERR_hasErrorWsAfterWarning(PERR_Error arg)
{
  if (PERR_isErrorWarning(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getErrorWsAfterWarning(PERR_Error arg) */

PERR_OptLayout PERR_getErrorWsAfterWarning(PERR_Error arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/*}}}  */
/*{{{  PERR_Error PERR_setErrorWsAfterWarning(PERR_Error arg, PERR_OptLayout wsAfterWarning) */

PERR_Error PERR_setErrorWsAfterWarning(PERR_Error arg, PERR_OptLayout wsAfterWarning)
{
  if (PERR_isErrorWarning(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterWarning), 1), 1);
  }

  ATabort("Error has no WsAfterWarning: %t\n", arg);
  return (PERR_Error)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasErrorWsAfterError(PERR_Error arg) */

ATbool PERR_hasErrorWsAfterError(PERR_Error arg)
{
  if (PERR_isErrorError(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getErrorWsAfterError(PERR_Error arg) */

PERR_OptLayout PERR_getErrorWsAfterError(PERR_Error arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/*}}}  */
/*{{{  PERR_Error PERR_setErrorWsAfterError(PERR_Error arg, PERR_OptLayout wsAfterError) */

PERR_Error PERR_setErrorWsAfterError(PERR_Error arg, PERR_OptLayout wsAfterError)
{
  if (PERR_isErrorError(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterError), 1), 1);
  }

  ATabort("Error has no WsAfterError: %t\n", arg);
  return (PERR_Error)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasErrorWsAfterFatal(PERR_Error arg) */

ATbool PERR_hasErrorWsAfterFatal(PERR_Error arg)
{
  if (PERR_isErrorFatal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getErrorWsAfterFatal(PERR_Error arg) */

PERR_OptLayout PERR_getErrorWsAfterFatal(PERR_Error arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/*}}}  */
/*{{{  PERR_Error PERR_setErrorWsAfterFatal(PERR_Error arg, PERR_OptLayout wsAfterFatal) */

PERR_Error PERR_setErrorWsAfterFatal(PERR_Error arg, PERR_OptLayout wsAfterFatal)
{
  if (PERR_isErrorFatal(arg)) {
    return (PERR_Error)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterFatal), 1), 1);
  }

  ATabort("Error has no WsAfterFatal: %t\n", arg);
  return (PERR_Error)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  PERR_SubjectList accessors */

/*{{{  ATbool PERR_isValidSubjectList(PERR_SubjectList arg) */

ATbool PERR_isValidSubjectList(PERR_SubjectList arg)
{
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

/*}}}  */
/*{{{  inline ATbool PERR_isSubjectListEmpty(PERR_SubjectList arg) */

inline ATbool PERR_isSubjectListEmpty(PERR_SubjectList arg)
{
  if (!ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PERR_patternSubjectListEmpty));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool PERR_isSubjectListSingle(PERR_SubjectList arg) */

inline ATbool PERR_isSubjectListSingle(PERR_SubjectList arg)
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
      last_result = ATmatchTerm((ATerm)arg, PERR_patternSubjectListSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PERR_isSubjectListMany(PERR_SubjectList arg) */

inline ATbool PERR_isSubjectListMany(PERR_SubjectList arg)
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
      last_result = ATmatchTerm((ATerm)arg, PERR_patternSubjectListMany, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  ATbool PERR_hasSubjectListHead(PERR_SubjectList arg) */

ATbool PERR_hasSubjectListHead(PERR_SubjectList arg)
{
  if (PERR_isSubjectListSingle(arg)) {
    return ATtrue;
  }
  else if (PERR_isSubjectListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_Subject PERR_getSubjectListHead(PERR_SubjectList arg) */

PERR_Subject PERR_getSubjectListHead(PERR_SubjectList arg)
{
  if (PERR_isSubjectListSingle(arg)) {
    return (PERR_Subject)ATgetFirst((ATermList)arg);
  }
  else 
    return (PERR_Subject)ATgetFirst((ATermList)arg);
}

/*}}}  */
/*{{{  PERR_SubjectList PERR_setSubjectListHead(PERR_SubjectList arg, PERR_Subject head) */

PERR_SubjectList PERR_setSubjectListHead(PERR_SubjectList arg, PERR_Subject head)
{
  if (PERR_isSubjectListSingle(arg)) {
    return (PERR_SubjectList)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }
  else if (PERR_isSubjectListMany(arg)) {
    return (PERR_SubjectList)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }

  ATabort("SubjectList has no Head: %t\n", arg);
  return (PERR_SubjectList)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasSubjectListWsAfterHead(PERR_SubjectList arg) */

ATbool PERR_hasSubjectListWsAfterHead(PERR_SubjectList arg)
{
  if (PERR_isSubjectListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getSubjectListWsAfterHead(PERR_SubjectList arg) */

PERR_OptLayout PERR_getSubjectListWsAfterHead(PERR_SubjectList arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)arg, 1);
}

/*}}}  */
/*{{{  PERR_SubjectList PERR_setSubjectListWsAfterHead(PERR_SubjectList arg, PERR_OptLayout wsAfterHead) */

PERR_SubjectList PERR_setSubjectListWsAfterHead(PERR_SubjectList arg, PERR_OptLayout wsAfterHead)
{
  if (PERR_isSubjectListMany(arg)) {
    return (PERR_SubjectList)ATreplace((ATermList)arg, (ATerm)((ATerm) wsAfterHead), 1);
  }

  ATabort("SubjectList has no WsAfterHead: %t\n", arg);
  return (PERR_SubjectList)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasSubjectListWsAfterSep(PERR_SubjectList arg) */

ATbool PERR_hasSubjectListWsAfterSep(PERR_SubjectList arg)
{
  if (PERR_isSubjectListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getSubjectListWsAfterSep(PERR_SubjectList arg) */

PERR_OptLayout PERR_getSubjectListWsAfterSep(PERR_SubjectList arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)arg, 3);
}

/*}}}  */
/*{{{  PERR_SubjectList PERR_setSubjectListWsAfterSep(PERR_SubjectList arg, PERR_OptLayout wsAfterSep) */

PERR_SubjectList PERR_setSubjectListWsAfterSep(PERR_SubjectList arg, PERR_OptLayout wsAfterSep)
{
  if (PERR_isSubjectListMany(arg)) {
    return (PERR_SubjectList)ATreplace((ATermList)arg, (ATerm)((ATerm) wsAfterSep), 3);
  }

  ATabort("SubjectList has no WsAfterSep: %t\n", arg);
  return (PERR_SubjectList)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasSubjectListTail(PERR_SubjectList arg) */

ATbool PERR_hasSubjectListTail(PERR_SubjectList arg)
{
  if (PERR_isSubjectListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_SubjectList PERR_getSubjectListTail(PERR_SubjectList arg) */

PERR_SubjectList PERR_getSubjectListTail(PERR_SubjectList arg)
{
  
    return (PERR_SubjectList)ATgetTail((ATermList)arg, 4);
}

/*}}}  */
/*{{{  PERR_SubjectList PERR_setSubjectListTail(PERR_SubjectList arg, PERR_SubjectList tail) */

PERR_SubjectList PERR_setSubjectListTail(PERR_SubjectList arg, PERR_SubjectList tail)
{
  if (PERR_isSubjectListMany(arg)) {
    return (PERR_SubjectList)ATreplaceTail((ATermList)arg, (ATermList)((ATerm) tail), 4);
  }

  ATabort("SubjectList has no Tail: %t\n", arg);
  return (PERR_SubjectList)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  PERR_Summary accessors */

/*{{{  ATbool PERR_isValidSummary(PERR_Summary arg) */

ATbool PERR_isValidSummary(PERR_Summary arg)
{
  if (PERR_isSummarySummary(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool PERR_isSummarySummary(PERR_Summary arg) */

inline ATbool PERR_isSummarySummary(PERR_Summary arg)
{
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PERR_patternSummarySummary, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool PERR_hasSummaryWsAfterSummary(PERR_Summary arg) */

ATbool PERR_hasSummaryWsAfterSummary(PERR_Summary arg)
{
  if (PERR_isSummarySummary(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getSummaryWsAfterSummary(PERR_Summary arg) */

PERR_OptLayout PERR_getSummaryWsAfterSummary(PERR_Summary arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/*}}}  */
/*{{{  PERR_Summary PERR_setSummaryWsAfterSummary(PERR_Summary arg, PERR_OptLayout wsAfterSummary) */

PERR_Summary PERR_setSummaryWsAfterSummary(PERR_Summary arg, PERR_OptLayout wsAfterSummary)
{
  if (PERR_isSummarySummary(arg)) {
    return (PERR_Summary)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterSummary), 1), 1);
  }

  ATabort("Summary has no WsAfterSummary: %t\n", arg);
  return (PERR_Summary)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasSummaryWsAfterParenOpen(PERR_Summary arg) */

ATbool PERR_hasSummaryWsAfterParenOpen(PERR_Summary arg)
{
  if (PERR_isSummarySummary(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getSummaryWsAfterParenOpen(PERR_Summary arg) */

PERR_OptLayout PERR_getSummaryWsAfterParenOpen(PERR_Summary arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
}

/*}}}  */
/*{{{  PERR_Summary PERR_setSummaryWsAfterParenOpen(PERR_Summary arg, PERR_OptLayout wsAfterParenOpen) */

PERR_Summary PERR_setSummaryWsAfterParenOpen(PERR_Summary arg, PERR_OptLayout wsAfterParenOpen)
{
  if (PERR_isSummarySummary(arg)) {
    return (PERR_Summary)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterParenOpen), 3), 1);
  }

  ATabort("Summary has no WsAfterParenOpen: %t\n", arg);
  return (PERR_Summary)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasSummaryProducer(PERR_Summary arg) */

ATbool PERR_hasSummaryProducer(PERR_Summary arg)
{
  if (PERR_isSummarySummary(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_StrCon PERR_getSummaryProducer(PERR_Summary arg) */

PERR_StrCon PERR_getSummaryProducer(PERR_Summary arg)
{
  
    return (PERR_StrCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4);
}

/*}}}  */
/*{{{  PERR_Summary PERR_setSummaryProducer(PERR_Summary arg, PERR_StrCon producer) */

PERR_Summary PERR_setSummaryProducer(PERR_Summary arg, PERR_StrCon producer)
{
  if (PERR_isSummarySummary(arg)) {
    return (PERR_Summary)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) producer), 4), 1);
  }

  ATabort("Summary has no Producer: %t\n", arg);
  return (PERR_Summary)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasSummaryWsAfterProducer(PERR_Summary arg) */

ATbool PERR_hasSummaryWsAfterProducer(PERR_Summary arg)
{
  if (PERR_isSummarySummary(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getSummaryWsAfterProducer(PERR_Summary arg) */

PERR_OptLayout PERR_getSummaryWsAfterProducer(PERR_Summary arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 5);
}

/*}}}  */
/*{{{  PERR_Summary PERR_setSummaryWsAfterProducer(PERR_Summary arg, PERR_OptLayout wsAfterProducer) */

PERR_Summary PERR_setSummaryWsAfterProducer(PERR_Summary arg, PERR_OptLayout wsAfterProducer)
{
  if (PERR_isSummarySummary(arg)) {
    return (PERR_Summary)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterProducer), 5), 1);
  }

  ATabort("Summary has no WsAfterProducer: %t\n", arg);
  return (PERR_Summary)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasSummaryWsAfterComma(PERR_Summary arg) */

ATbool PERR_hasSummaryWsAfterComma(PERR_Summary arg)
{
  if (PERR_isSummarySummary(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getSummaryWsAfterComma(PERR_Summary arg) */

PERR_OptLayout PERR_getSummaryWsAfterComma(PERR_Summary arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 7);
}

/*}}}  */
/*{{{  PERR_Summary PERR_setSummaryWsAfterComma(PERR_Summary arg, PERR_OptLayout wsAfterComma) */

PERR_Summary PERR_setSummaryWsAfterComma(PERR_Summary arg, PERR_OptLayout wsAfterComma)
{
  if (PERR_isSummarySummary(arg)) {
    return (PERR_Summary)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma), 7), 1);
  }

  ATabort("Summary has no WsAfterComma: %t\n", arg);
  return (PERR_Summary)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasSummaryId(PERR_Summary arg) */

ATbool PERR_hasSummaryId(PERR_Summary arg)
{
  if (PERR_isSummarySummary(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_StrCon PERR_getSummaryId(PERR_Summary arg) */

PERR_StrCon PERR_getSummaryId(PERR_Summary arg)
{
  
    return (PERR_StrCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 8);
}

/*}}}  */
/*{{{  PERR_Summary PERR_setSummaryId(PERR_Summary arg, PERR_StrCon id) */

PERR_Summary PERR_setSummaryId(PERR_Summary arg, PERR_StrCon id)
{
  if (PERR_isSummarySummary(arg)) {
    return (PERR_Summary)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) id), 8), 1);
  }

  ATabort("Summary has no Id: %t\n", arg);
  return (PERR_Summary)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasSummaryWsAfterId(PERR_Summary arg) */

ATbool PERR_hasSummaryWsAfterId(PERR_Summary arg)
{
  if (PERR_isSummarySummary(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getSummaryWsAfterId(PERR_Summary arg) */

PERR_OptLayout PERR_getSummaryWsAfterId(PERR_Summary arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 9);
}

/*}}}  */
/*{{{  PERR_Summary PERR_setSummaryWsAfterId(PERR_Summary arg, PERR_OptLayout wsAfterId) */

PERR_Summary PERR_setSummaryWsAfterId(PERR_Summary arg, PERR_OptLayout wsAfterId)
{
  if (PERR_isSummarySummary(arg)) {
    return (PERR_Summary)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterId), 9), 1);
  }

  ATabort("Summary has no WsAfterId: %t\n", arg);
  return (PERR_Summary)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasSummaryWsAfterComma1(PERR_Summary arg) */

ATbool PERR_hasSummaryWsAfterComma1(PERR_Summary arg)
{
  if (PERR_isSummarySummary(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getSummaryWsAfterComma1(PERR_Summary arg) */

PERR_OptLayout PERR_getSummaryWsAfterComma1(PERR_Summary arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 11);
}

/*}}}  */
/*{{{  PERR_Summary PERR_setSummaryWsAfterComma1(PERR_Summary arg, PERR_OptLayout wsAfterComma1) */

PERR_Summary PERR_setSummaryWsAfterComma1(PERR_Summary arg, PERR_OptLayout wsAfterComma1)
{
  if (PERR_isSummarySummary(arg)) {
    return (PERR_Summary)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma1), 11), 1);
  }

  ATabort("Summary has no WsAfterComma1: %t\n", arg);
  return (PERR_Summary)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasSummaryWsAfterBracketOpen(PERR_Summary arg) */

ATbool PERR_hasSummaryWsAfterBracketOpen(PERR_Summary arg)
{
  if (PERR_isSummarySummary(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getSummaryWsAfterBracketOpen(PERR_Summary arg) */

PERR_OptLayout PERR_getSummaryWsAfterBracketOpen(PERR_Summary arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 13);
}

/*}}}  */
/*{{{  PERR_Summary PERR_setSummaryWsAfterBracketOpen(PERR_Summary arg, PERR_OptLayout wsAfterBracketOpen) */

PERR_Summary PERR_setSummaryWsAfterBracketOpen(PERR_Summary arg, PERR_OptLayout wsAfterBracketOpen)
{
  if (PERR_isSummarySummary(arg)) {
    return (PERR_Summary)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterBracketOpen), 13), 1);
  }

  ATabort("Summary has no WsAfterBracketOpen: %t\n", arg);
  return (PERR_Summary)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasSummaryList(PERR_Summary arg) */

ATbool PERR_hasSummaryList(PERR_Summary arg)
{
  if (PERR_isSummarySummary(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_ErrorList PERR_getSummaryList(PERR_Summary arg) */

PERR_ErrorList PERR_getSummaryList(PERR_Summary arg)
{
  
    return (PERR_ErrorList)ATgetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 14), 1);
}

/*}}}  */
/*{{{  PERR_Summary PERR_setSummaryList(PERR_Summary arg, PERR_ErrorList list) */

PERR_Summary PERR_setSummaryList(PERR_Summary arg, PERR_ErrorList list)
{
  if (PERR_isSummarySummary(arg)) {
    return (PERR_Summary)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 14), (ATerm)((ATerm) list), 1), 14), 1);
  }

  ATabort("Summary has no List: %t\n", arg);
  return (PERR_Summary)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasSummaryWsAfterList(PERR_Summary arg) */

ATbool PERR_hasSummaryWsAfterList(PERR_Summary arg)
{
  if (PERR_isSummarySummary(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getSummaryWsAfterList(PERR_Summary arg) */

PERR_OptLayout PERR_getSummaryWsAfterList(PERR_Summary arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 15);
}

/*}}}  */
/*{{{  PERR_Summary PERR_setSummaryWsAfterList(PERR_Summary arg, PERR_OptLayout wsAfterList) */

PERR_Summary PERR_setSummaryWsAfterList(PERR_Summary arg, PERR_OptLayout wsAfterList)
{
  if (PERR_isSummarySummary(arg)) {
    return (PERR_Summary)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterList), 15), 1);
  }

  ATabort("Summary has no WsAfterList: %t\n", arg);
  return (PERR_Summary)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasSummaryWsAfterBracketClose(PERR_Summary arg) */

ATbool PERR_hasSummaryWsAfterBracketClose(PERR_Summary arg)
{
  if (PERR_isSummarySummary(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getSummaryWsAfterBracketClose(PERR_Summary arg) */

PERR_OptLayout PERR_getSummaryWsAfterBracketClose(PERR_Summary arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 17);
}

/*}}}  */
/*{{{  PERR_Summary PERR_setSummaryWsAfterBracketClose(PERR_Summary arg, PERR_OptLayout wsAfterBracketClose) */

PERR_Summary PERR_setSummaryWsAfterBracketClose(PERR_Summary arg, PERR_OptLayout wsAfterBracketClose)
{
  if (PERR_isSummarySummary(arg)) {
    return (PERR_Summary)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterBracketClose), 17), 1);
  }

  ATabort("Summary has no WsAfterBracketClose: %t\n", arg);
  return (PERR_Summary)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  PERR_ErrorList accessors */

/*{{{  ATbool PERR_isValidErrorList(PERR_ErrorList arg) */

ATbool PERR_isValidErrorList(PERR_ErrorList arg)
{
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

/*}}}  */
/*{{{  inline ATbool PERR_isErrorListEmpty(PERR_ErrorList arg) */

inline ATbool PERR_isErrorListEmpty(PERR_ErrorList arg)
{
  if (!ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PERR_patternErrorListEmpty));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  inline ATbool PERR_isErrorListSingle(PERR_ErrorList arg) */

inline ATbool PERR_isErrorListSingle(PERR_ErrorList arg)
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
      last_result = ATmatchTerm((ATerm)arg, PERR_patternErrorListSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PERR_isErrorListMany(PERR_ErrorList arg) */

inline ATbool PERR_isErrorListMany(PERR_ErrorList arg)
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
      last_result = ATmatchTerm((ATerm)arg, PERR_patternErrorListMany, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  ATbool PERR_hasErrorListHead(PERR_ErrorList arg) */

ATbool PERR_hasErrorListHead(PERR_ErrorList arg)
{
  if (PERR_isErrorListSingle(arg)) {
    return ATtrue;
  }
  else if (PERR_isErrorListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_Error PERR_getErrorListHead(PERR_ErrorList arg) */

PERR_Error PERR_getErrorListHead(PERR_ErrorList arg)
{
  if (PERR_isErrorListSingle(arg)) {
    return (PERR_Error)ATgetFirst((ATermList)arg);
  }
  else 
    return (PERR_Error)ATgetFirst((ATermList)arg);
}

/*}}}  */
/*{{{  PERR_ErrorList PERR_setErrorListHead(PERR_ErrorList arg, PERR_Error head) */

PERR_ErrorList PERR_setErrorListHead(PERR_ErrorList arg, PERR_Error head)
{
  if (PERR_isErrorListSingle(arg)) {
    return (PERR_ErrorList)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }
  else if (PERR_isErrorListMany(arg)) {
    return (PERR_ErrorList)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }

  ATabort("ErrorList has no Head: %t\n", arg);
  return (PERR_ErrorList)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasErrorListWsAfterHead(PERR_ErrorList arg) */

ATbool PERR_hasErrorListWsAfterHead(PERR_ErrorList arg)
{
  if (PERR_isErrorListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getErrorListWsAfterHead(PERR_ErrorList arg) */

PERR_OptLayout PERR_getErrorListWsAfterHead(PERR_ErrorList arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)arg, 1);
}

/*}}}  */
/*{{{  PERR_ErrorList PERR_setErrorListWsAfterHead(PERR_ErrorList arg, PERR_OptLayout wsAfterHead) */

PERR_ErrorList PERR_setErrorListWsAfterHead(PERR_ErrorList arg, PERR_OptLayout wsAfterHead)
{
  if (PERR_isErrorListMany(arg)) {
    return (PERR_ErrorList)ATreplace((ATermList)arg, (ATerm)((ATerm) wsAfterHead), 1);
  }

  ATabort("ErrorList has no WsAfterHead: %t\n", arg);
  return (PERR_ErrorList)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasErrorListWsAfterSep(PERR_ErrorList arg) */

ATbool PERR_hasErrorListWsAfterSep(PERR_ErrorList arg)
{
  if (PERR_isErrorListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getErrorListWsAfterSep(PERR_ErrorList arg) */

PERR_OptLayout PERR_getErrorListWsAfterSep(PERR_ErrorList arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)arg, 3);
}

/*}}}  */
/*{{{  PERR_ErrorList PERR_setErrorListWsAfterSep(PERR_ErrorList arg, PERR_OptLayout wsAfterSep) */

PERR_ErrorList PERR_setErrorListWsAfterSep(PERR_ErrorList arg, PERR_OptLayout wsAfterSep)
{
  if (PERR_isErrorListMany(arg)) {
    return (PERR_ErrorList)ATreplace((ATermList)arg, (ATerm)((ATerm) wsAfterSep), 3);
  }

  ATabort("ErrorList has no WsAfterSep: %t\n", arg);
  return (PERR_ErrorList)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasErrorListTail(PERR_ErrorList arg) */

ATbool PERR_hasErrorListTail(PERR_ErrorList arg)
{
  if (PERR_isErrorListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_ErrorList PERR_getErrorListTail(PERR_ErrorList arg) */

PERR_ErrorList PERR_getErrorListTail(PERR_ErrorList arg)
{
  
    return (PERR_ErrorList)ATgetTail((ATermList)arg, 4);
}

/*}}}  */
/*{{{  PERR_ErrorList PERR_setErrorListTail(PERR_ErrorList arg, PERR_ErrorList tail) */

PERR_ErrorList PERR_setErrorListTail(PERR_ErrorList arg, PERR_ErrorList tail)
{
  if (PERR_isErrorListMany(arg)) {
    return (PERR_ErrorList)ATreplaceTail((ATermList)arg, (ATermList)((ATerm) tail), 4);
  }

  ATabort("ErrorList has no Tail: %t\n", arg);
  return (PERR_ErrorList)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  PERR_Location accessors */

/*{{{  ATbool PERR_isValidLocation(PERR_Location arg) */

ATbool PERR_isValidLocation(PERR_Location arg)
{
  if (PERR_isLocationFile(arg)) {
    return ATtrue;
  }
  else if (PERR_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool PERR_isLocationFile(PERR_Location arg) */

inline ATbool PERR_isLocationFile(PERR_Location arg)
{
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

/*}}}  */
/*{{{  inline ATbool PERR_isLocationAreaInFile(PERR_Location arg) */

inline ATbool PERR_isLocationAreaInFile(PERR_Location arg)
{
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

/*}}}  */
/*{{{  ATbool PERR_hasLocationWsAfterFile(PERR_Location arg) */

ATbool PERR_hasLocationWsAfterFile(PERR_Location arg)
{
  if (PERR_isLocationFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getLocationWsAfterFile(PERR_Location arg) */

PERR_OptLayout PERR_getLocationWsAfterFile(PERR_Location arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/*}}}  */
/*{{{  PERR_Location PERR_setLocationWsAfterFile(PERR_Location arg, PERR_OptLayout wsAfterFile) */

PERR_Location PERR_setLocationWsAfterFile(PERR_Location arg, PERR_OptLayout wsAfterFile)
{
  if (PERR_isLocationFile(arg)) {
    return (PERR_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterFile), 1), 1);
  }

  ATabort("Location has no WsAfterFile: %t\n", arg);
  return (PERR_Location)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasLocationWsAfterParenOpen(PERR_Location arg) */

ATbool PERR_hasLocationWsAfterParenOpen(PERR_Location arg)
{
  if (PERR_isLocationFile(arg)) {
    return ATtrue;
  }
  else if (PERR_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getLocationWsAfterParenOpen(PERR_Location arg) */

PERR_OptLayout PERR_getLocationWsAfterParenOpen(PERR_Location arg)
{
  if (PERR_isLocationFile(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
  }
  else 
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
}

/*}}}  */
/*{{{  PERR_Location PERR_setLocationWsAfterParenOpen(PERR_Location arg, PERR_OptLayout wsAfterParenOpen) */

PERR_Location PERR_setLocationWsAfterParenOpen(PERR_Location arg, PERR_OptLayout wsAfterParenOpen)
{
  if (PERR_isLocationFile(arg)) {
    return (PERR_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterParenOpen), 3), 1);
  }
  else if (PERR_isLocationAreaInFile(arg)) {
    return (PERR_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterParenOpen), 3), 1);
  }

  ATabort("Location has no WsAfterParenOpen: %t\n", arg);
  return (PERR_Location)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasLocationFilename(PERR_Location arg) */

ATbool PERR_hasLocationFilename(PERR_Location arg)
{
  if (PERR_isLocationFile(arg)) {
    return ATtrue;
  }
  else if (PERR_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_StrCon PERR_getLocationFilename(PERR_Location arg) */

PERR_StrCon PERR_getLocationFilename(PERR_Location arg)
{
  if (PERR_isLocationFile(arg)) {
    return (PERR_StrCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4);
  }
  else 
    return (PERR_StrCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4);
}

/*}}}  */
/*{{{  PERR_Location PERR_setLocationFilename(PERR_Location arg, PERR_StrCon filename) */

PERR_Location PERR_setLocationFilename(PERR_Location arg, PERR_StrCon filename)
{
  if (PERR_isLocationFile(arg)) {
    return (PERR_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) filename), 4), 1);
  }
  else if (PERR_isLocationAreaInFile(arg)) {
    return (PERR_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) filename), 4), 1);
  }

  ATabort("Location has no Filename: %t\n", arg);
  return (PERR_Location)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasLocationWsAfterFilename(PERR_Location arg) */

ATbool PERR_hasLocationWsAfterFilename(PERR_Location arg)
{
  if (PERR_isLocationFile(arg)) {
    return ATtrue;
  }
  else if (PERR_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getLocationWsAfterFilename(PERR_Location arg) */

PERR_OptLayout PERR_getLocationWsAfterFilename(PERR_Location arg)
{
  if (PERR_isLocationFile(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 5);
  }
  else 
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 5);
}

/*}}}  */
/*{{{  PERR_Location PERR_setLocationWsAfterFilename(PERR_Location arg, PERR_OptLayout wsAfterFilename) */

PERR_Location PERR_setLocationWsAfterFilename(PERR_Location arg, PERR_OptLayout wsAfterFilename)
{
  if (PERR_isLocationFile(arg)) {
    return (PERR_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterFilename), 5), 1);
  }
  else if (PERR_isLocationAreaInFile(arg)) {
    return (PERR_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterFilename), 5), 1);
  }

  ATabort("Location has no WsAfterFilename: %t\n", arg);
  return (PERR_Location)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasLocationWsAfterAreaInFile(PERR_Location arg) */

ATbool PERR_hasLocationWsAfterAreaInFile(PERR_Location arg)
{
  if (PERR_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getLocationWsAfterAreaInFile(PERR_Location arg) */

PERR_OptLayout PERR_getLocationWsAfterAreaInFile(PERR_Location arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/*}}}  */
/*{{{  PERR_Location PERR_setLocationWsAfterAreaInFile(PERR_Location arg, PERR_OptLayout wsAfterAreaInFile) */

PERR_Location PERR_setLocationWsAfterAreaInFile(PERR_Location arg, PERR_OptLayout wsAfterAreaInFile)
{
  if (PERR_isLocationAreaInFile(arg)) {
    return (PERR_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterAreaInFile), 1), 1);
  }

  ATabort("Location has no WsAfterAreaInFile: %t\n", arg);
  return (PERR_Location)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasLocationWsAfterComma(PERR_Location arg) */

ATbool PERR_hasLocationWsAfterComma(PERR_Location arg)
{
  if (PERR_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getLocationWsAfterComma(PERR_Location arg) */

PERR_OptLayout PERR_getLocationWsAfterComma(PERR_Location arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 7);
}

/*}}}  */
/*{{{  PERR_Location PERR_setLocationWsAfterComma(PERR_Location arg, PERR_OptLayout wsAfterComma) */

PERR_Location PERR_setLocationWsAfterComma(PERR_Location arg, PERR_OptLayout wsAfterComma)
{
  if (PERR_isLocationAreaInFile(arg)) {
    return (PERR_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma), 7), 1);
  }

  ATabort("Location has no WsAfterComma: %t\n", arg);
  return (PERR_Location)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasLocationArea(PERR_Location arg) */

ATbool PERR_hasLocationArea(PERR_Location arg)
{
  if (PERR_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_Area PERR_getLocationArea(PERR_Location arg) */

PERR_Area PERR_getLocationArea(PERR_Location arg)
{
  
    return (PERR_Area)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 8);
}

/*}}}  */
/*{{{  PERR_Location PERR_setLocationArea(PERR_Location arg, PERR_Area Area) */

PERR_Location PERR_setLocationArea(PERR_Location arg, PERR_Area Area)
{
  if (PERR_isLocationAreaInFile(arg)) {
    return (PERR_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) Area), 8), 1);
  }

  ATabort("Location has no Area: %t\n", arg);
  return (PERR_Location)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasLocationWsAfterArea(PERR_Location arg) */

ATbool PERR_hasLocationWsAfterArea(PERR_Location arg)
{
  if (PERR_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getLocationWsAfterArea(PERR_Location arg) */

PERR_OptLayout PERR_getLocationWsAfterArea(PERR_Location arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 9);
}

/*}}}  */
/*{{{  PERR_Location PERR_setLocationWsAfterArea(PERR_Location arg, PERR_OptLayout wsAfterArea) */

PERR_Location PERR_setLocationWsAfterArea(PERR_Location arg, PERR_OptLayout wsAfterArea)
{
  if (PERR_isLocationAreaInFile(arg)) {
    return (PERR_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterArea), 9), 1);
  }

  ATabort("Location has no WsAfterArea: %t\n", arg);
  return (PERR_Location)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  PERR_Area accessors */

/*{{{  ATbool PERR_isValidArea(PERR_Area arg) */

ATbool PERR_isValidArea(PERR_Area arg)
{
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool PERR_isAreaArea(PERR_Area arg) */

inline ATbool PERR_isAreaArea(PERR_Area arg)
{
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PERR_patternAreaArea, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool PERR_hasAreaWsAfterArea(PERR_Area arg) */

ATbool PERR_hasAreaWsAfterArea(PERR_Area arg)
{
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getAreaWsAfterArea(PERR_Area arg) */

PERR_OptLayout PERR_getAreaWsAfterArea(PERR_Area arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/*}}}  */
/*{{{  PERR_Area PERR_setAreaWsAfterArea(PERR_Area arg, PERR_OptLayout wsAfterArea) */

PERR_Area PERR_setAreaWsAfterArea(PERR_Area arg, PERR_OptLayout wsAfterArea)
{
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterArea), 1), 1);
  }

  ATabort("Area has no WsAfterArea: %t\n", arg);
  return (PERR_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasAreaWsAfterParenOpen(PERR_Area arg) */

ATbool PERR_hasAreaWsAfterParenOpen(PERR_Area arg)
{
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getAreaWsAfterParenOpen(PERR_Area arg) */

PERR_OptLayout PERR_getAreaWsAfterParenOpen(PERR_Area arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
}

/*}}}  */
/*{{{  PERR_Area PERR_setAreaWsAfterParenOpen(PERR_Area arg, PERR_OptLayout wsAfterParenOpen) */

PERR_Area PERR_setAreaWsAfterParenOpen(PERR_Area arg, PERR_OptLayout wsAfterParenOpen)
{
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterParenOpen), 3), 1);
  }

  ATabort("Area has no WsAfterParenOpen: %t\n", arg);
  return (PERR_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasAreaBeginLine(PERR_Area arg) */

ATbool PERR_hasAreaBeginLine(PERR_Area arg)
{
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_NatCon PERR_getAreaBeginLine(PERR_Area arg) */

PERR_NatCon PERR_getAreaBeginLine(PERR_Area arg)
{
  
    return (PERR_NatCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4);
}

/*}}}  */
/*{{{  PERR_Area PERR_setAreaBeginLine(PERR_Area arg, PERR_NatCon beginLine) */

PERR_Area PERR_setAreaBeginLine(PERR_Area arg, PERR_NatCon beginLine)
{
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) beginLine), 4), 1);
  }

  ATabort("Area has no BeginLine: %t\n", arg);
  return (PERR_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasAreaWsAfterBeginLine(PERR_Area arg) */

ATbool PERR_hasAreaWsAfterBeginLine(PERR_Area arg)
{
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getAreaWsAfterBeginLine(PERR_Area arg) */

PERR_OptLayout PERR_getAreaWsAfterBeginLine(PERR_Area arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 5);
}

/*}}}  */
/*{{{  PERR_Area PERR_setAreaWsAfterBeginLine(PERR_Area arg, PERR_OptLayout wsAfterBeginLine) */

PERR_Area PERR_setAreaWsAfterBeginLine(PERR_Area arg, PERR_OptLayout wsAfterBeginLine)
{
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterBeginLine), 5), 1);
  }

  ATabort("Area has no WsAfterBeginLine: %t\n", arg);
  return (PERR_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasAreaWsAfterComma(PERR_Area arg) */

ATbool PERR_hasAreaWsAfterComma(PERR_Area arg)
{
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getAreaWsAfterComma(PERR_Area arg) */

PERR_OptLayout PERR_getAreaWsAfterComma(PERR_Area arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 7);
}

/*}}}  */
/*{{{  PERR_Area PERR_setAreaWsAfterComma(PERR_Area arg, PERR_OptLayout wsAfterComma) */

PERR_Area PERR_setAreaWsAfterComma(PERR_Area arg, PERR_OptLayout wsAfterComma)
{
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma), 7), 1);
  }

  ATabort("Area has no WsAfterComma: %t\n", arg);
  return (PERR_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasAreaBeginColumn(PERR_Area arg) */

ATbool PERR_hasAreaBeginColumn(PERR_Area arg)
{
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_NatCon PERR_getAreaBeginColumn(PERR_Area arg) */

PERR_NatCon PERR_getAreaBeginColumn(PERR_Area arg)
{
  
    return (PERR_NatCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 8);
}

/*}}}  */
/*{{{  PERR_Area PERR_setAreaBeginColumn(PERR_Area arg, PERR_NatCon beginColumn) */

PERR_Area PERR_setAreaBeginColumn(PERR_Area arg, PERR_NatCon beginColumn)
{
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) beginColumn), 8), 1);
  }

  ATabort("Area has no BeginColumn: %t\n", arg);
  return (PERR_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasAreaWsAfterBeginColumn(PERR_Area arg) */

ATbool PERR_hasAreaWsAfterBeginColumn(PERR_Area arg)
{
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getAreaWsAfterBeginColumn(PERR_Area arg) */

PERR_OptLayout PERR_getAreaWsAfterBeginColumn(PERR_Area arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 9);
}

/*}}}  */
/*{{{  PERR_Area PERR_setAreaWsAfterBeginColumn(PERR_Area arg, PERR_OptLayout wsAfterBeginColumn) */

PERR_Area PERR_setAreaWsAfterBeginColumn(PERR_Area arg, PERR_OptLayout wsAfterBeginColumn)
{
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterBeginColumn), 9), 1);
  }

  ATabort("Area has no WsAfterBeginColumn: %t\n", arg);
  return (PERR_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasAreaWsAfterComma1(PERR_Area arg) */

ATbool PERR_hasAreaWsAfterComma1(PERR_Area arg)
{
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getAreaWsAfterComma1(PERR_Area arg) */

PERR_OptLayout PERR_getAreaWsAfterComma1(PERR_Area arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 11);
}

/*}}}  */
/*{{{  PERR_Area PERR_setAreaWsAfterComma1(PERR_Area arg, PERR_OptLayout wsAfterComma1) */

PERR_Area PERR_setAreaWsAfterComma1(PERR_Area arg, PERR_OptLayout wsAfterComma1)
{
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma1), 11), 1);
  }

  ATabort("Area has no WsAfterComma1: %t\n", arg);
  return (PERR_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasAreaEndLine(PERR_Area arg) */

ATbool PERR_hasAreaEndLine(PERR_Area arg)
{
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_NatCon PERR_getAreaEndLine(PERR_Area arg) */

PERR_NatCon PERR_getAreaEndLine(PERR_Area arg)
{
  
    return (PERR_NatCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 12);
}

/*}}}  */
/*{{{  PERR_Area PERR_setAreaEndLine(PERR_Area arg, PERR_NatCon endLine) */

PERR_Area PERR_setAreaEndLine(PERR_Area arg, PERR_NatCon endLine)
{
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) endLine), 12), 1);
  }

  ATabort("Area has no EndLine: %t\n", arg);
  return (PERR_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasAreaWsAfterEndLine(PERR_Area arg) */

ATbool PERR_hasAreaWsAfterEndLine(PERR_Area arg)
{
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getAreaWsAfterEndLine(PERR_Area arg) */

PERR_OptLayout PERR_getAreaWsAfterEndLine(PERR_Area arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 13);
}

/*}}}  */
/*{{{  PERR_Area PERR_setAreaWsAfterEndLine(PERR_Area arg, PERR_OptLayout wsAfterEndLine) */

PERR_Area PERR_setAreaWsAfterEndLine(PERR_Area arg, PERR_OptLayout wsAfterEndLine)
{
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterEndLine), 13), 1);
  }

  ATabort("Area has no WsAfterEndLine: %t\n", arg);
  return (PERR_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasAreaWsAfterComma2(PERR_Area arg) */

ATbool PERR_hasAreaWsAfterComma2(PERR_Area arg)
{
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getAreaWsAfterComma2(PERR_Area arg) */

PERR_OptLayout PERR_getAreaWsAfterComma2(PERR_Area arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 15);
}

/*}}}  */
/*{{{  PERR_Area PERR_setAreaWsAfterComma2(PERR_Area arg, PERR_OptLayout wsAfterComma2) */

PERR_Area PERR_setAreaWsAfterComma2(PERR_Area arg, PERR_OptLayout wsAfterComma2)
{
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma2), 15), 1);
  }

  ATabort("Area has no WsAfterComma2: %t\n", arg);
  return (PERR_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasAreaEndColumn(PERR_Area arg) */

ATbool PERR_hasAreaEndColumn(PERR_Area arg)
{
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_NatCon PERR_getAreaEndColumn(PERR_Area arg) */

PERR_NatCon PERR_getAreaEndColumn(PERR_Area arg)
{
  
    return (PERR_NatCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 16);
}

/*}}}  */
/*{{{  PERR_Area PERR_setAreaEndColumn(PERR_Area arg, PERR_NatCon endColumn) */

PERR_Area PERR_setAreaEndColumn(PERR_Area arg, PERR_NatCon endColumn)
{
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) endColumn), 16), 1);
  }

  ATabort("Area has no EndColumn: %t\n", arg);
  return (PERR_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasAreaWsAfterEndColumn(PERR_Area arg) */

ATbool PERR_hasAreaWsAfterEndColumn(PERR_Area arg)
{
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getAreaWsAfterEndColumn(PERR_Area arg) */

PERR_OptLayout PERR_getAreaWsAfterEndColumn(PERR_Area arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 17);
}

/*}}}  */
/*{{{  PERR_Area PERR_setAreaWsAfterEndColumn(PERR_Area arg, PERR_OptLayout wsAfterEndColumn) */

PERR_Area PERR_setAreaWsAfterEndColumn(PERR_Area arg, PERR_OptLayout wsAfterEndColumn)
{
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterEndColumn), 17), 1);
  }

  ATabort("Area has no WsAfterEndColumn: %t\n", arg);
  return (PERR_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasAreaWsAfterComma3(PERR_Area arg) */

ATbool PERR_hasAreaWsAfterComma3(PERR_Area arg)
{
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getAreaWsAfterComma3(PERR_Area arg) */

PERR_OptLayout PERR_getAreaWsAfterComma3(PERR_Area arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 19);
}

/*}}}  */
/*{{{  PERR_Area PERR_setAreaWsAfterComma3(PERR_Area arg, PERR_OptLayout wsAfterComma3) */

PERR_Area PERR_setAreaWsAfterComma3(PERR_Area arg, PERR_OptLayout wsAfterComma3)
{
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma3), 19), 1);
  }

  ATabort("Area has no WsAfterComma3: %t\n", arg);
  return (PERR_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasAreaOffset(PERR_Area arg) */

ATbool PERR_hasAreaOffset(PERR_Area arg)
{
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_NatCon PERR_getAreaOffset(PERR_Area arg) */

PERR_NatCon PERR_getAreaOffset(PERR_Area arg)
{
  
    return (PERR_NatCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 20);
}

/*}}}  */
/*{{{  PERR_Area PERR_setAreaOffset(PERR_Area arg, PERR_NatCon offset) */

PERR_Area PERR_setAreaOffset(PERR_Area arg, PERR_NatCon offset)
{
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) offset), 20), 1);
  }

  ATabort("Area has no Offset: %t\n", arg);
  return (PERR_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasAreaWsAfterOffset(PERR_Area arg) */

ATbool PERR_hasAreaWsAfterOffset(PERR_Area arg)
{
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getAreaWsAfterOffset(PERR_Area arg) */

PERR_OptLayout PERR_getAreaWsAfterOffset(PERR_Area arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 21);
}

/*}}}  */
/*{{{  PERR_Area PERR_setAreaWsAfterOffset(PERR_Area arg, PERR_OptLayout wsAfterOffset) */

PERR_Area PERR_setAreaWsAfterOffset(PERR_Area arg, PERR_OptLayout wsAfterOffset)
{
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterOffset), 21), 1);
  }

  ATabort("Area has no WsAfterOffset: %t\n", arg);
  return (PERR_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasAreaWsAfterComma4(PERR_Area arg) */

ATbool PERR_hasAreaWsAfterComma4(PERR_Area arg)
{
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getAreaWsAfterComma4(PERR_Area arg) */

PERR_OptLayout PERR_getAreaWsAfterComma4(PERR_Area arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 23);
}

/*}}}  */
/*{{{  PERR_Area PERR_setAreaWsAfterComma4(PERR_Area arg, PERR_OptLayout wsAfterComma4) */

PERR_Area PERR_setAreaWsAfterComma4(PERR_Area arg, PERR_OptLayout wsAfterComma4)
{
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma4), 23), 1);
  }

  ATabort("Area has no WsAfterComma4: %t\n", arg);
  return (PERR_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasAreaLength(PERR_Area arg) */

ATbool PERR_hasAreaLength(PERR_Area arg)
{
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_NatCon PERR_getAreaLength(PERR_Area arg) */

PERR_NatCon PERR_getAreaLength(PERR_Area arg)
{
  
    return (PERR_NatCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 24);
}

/*}}}  */
/*{{{  PERR_Area PERR_setAreaLength(PERR_Area arg, PERR_NatCon length) */

PERR_Area PERR_setAreaLength(PERR_Area arg, PERR_NatCon length)
{
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) length), 24), 1);
  }

  ATabort("Area has no Length: %t\n", arg);
  return (PERR_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasAreaWsAfterLength(PERR_Area arg) */

ATbool PERR_hasAreaWsAfterLength(PERR_Area arg)
{
  if (PERR_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getAreaWsAfterLength(PERR_Area arg) */

PERR_OptLayout PERR_getAreaWsAfterLength(PERR_Area arg)
{
  
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 25);
}

/*}}}  */
/*{{{  PERR_Area PERR_setAreaWsAfterLength(PERR_Area arg, PERR_OptLayout wsAfterLength) */

PERR_Area PERR_setAreaWsAfterLength(PERR_Area arg, PERR_OptLayout wsAfterLength)
{
  if (PERR_isAreaArea(arg)) {
    return (PERR_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterLength), 25), 1);
  }

  ATabort("Area has no WsAfterLength: %t\n", arg);
  return (PERR_Area)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  PERR_Start accessors */

/*{{{  ATbool PERR_isValidStart(PERR_Start arg) */

ATbool PERR_isValidStart(PERR_Start arg)
{
  if (PERR_isStartArea(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartLocation(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartSubject(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartError(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartSummary(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartNatCon(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartEscaped(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartNormal(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartStrCon(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool PERR_isStartArea(PERR_Start arg) */

inline ATbool PERR_isStartArea(PERR_Start arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PERR_patternStartArea, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PERR_isStartLocation(PERR_Start arg) */

inline ATbool PERR_isStartLocation(PERR_Start arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PERR_patternStartLocation, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PERR_isStartSubject(PERR_Start arg) */

inline ATbool PERR_isStartSubject(PERR_Start arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PERR_patternStartSubject, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PERR_isStartError(PERR_Start arg) */

inline ATbool PERR_isStartError(PERR_Start arg)
{
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

/*}}}  */
/*{{{  inline ATbool PERR_isStartSummary(PERR_Start arg) */

inline ATbool PERR_isStartSummary(PERR_Start arg)
{
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

/*}}}  */
/*{{{  inline ATbool PERR_isStartNatCon(PERR_Start arg) */

inline ATbool PERR_isStartNatCon(PERR_Start arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PERR_patternStartNatCon, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PERR_isStartEscaped(PERR_Start arg) */

inline ATbool PERR_isStartEscaped(PERR_Start arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PERR_patternStartEscaped, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PERR_isStartNormal(PERR_Start arg) */

inline ATbool PERR_isStartNormal(PERR_Start arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PERR_patternStartNormal, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PERR_isStartStrCon(PERR_Start arg) */

inline ATbool PERR_isStartStrCon(PERR_Start arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PERR_patternStartStrCon, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  ATbool PERR_hasStartWsBefore(PERR_Start arg) */

ATbool PERR_hasStartWsBefore(PERR_Start arg)
{
  if (PERR_isStartArea(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartLocation(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartSubject(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartError(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartSummary(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartNatCon(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartEscaped(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartNormal(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartStrCon(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getStartWsBefore(PERR_Start arg) */

PERR_OptLayout PERR_getStartWsBefore(PERR_Start arg)
{
  if (PERR_isStartArea(arg)) {
    return (PERR_OptLayout)ATgetFirst((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1));
  }
  else if (PERR_isStartLocation(arg)) {
    return (PERR_OptLayout)ATgetFirst((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1));
  }
  else if (PERR_isStartSubject(arg)) {
    return (PERR_OptLayout)ATgetFirst((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1));
  }
  else if (PERR_isStartError(arg)) {
    return (PERR_OptLayout)ATgetFirst((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1));
  }
  else if (PERR_isStartSummary(arg)) {
    return (PERR_OptLayout)ATgetFirst((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1));
  }
  else if (PERR_isStartNatCon(arg)) {
    return (PERR_OptLayout)ATgetFirst((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1));
  }
  else if (PERR_isStartEscaped(arg)) {
    return (PERR_OptLayout)ATgetFirst((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1));
  }
  else if (PERR_isStartNormal(arg)) {
    return (PERR_OptLayout)ATgetFirst((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1));
  }
  else 
    return (PERR_OptLayout)ATgetFirst((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1));
}

/*}}}  */
/*{{{  PERR_Start PERR_setStartWsBefore(PERR_Start arg, PERR_OptLayout wsBefore) */

PERR_Start PERR_setStartWsBefore(PERR_Start arg, PERR_OptLayout wsBefore)
{
  if (PERR_isStartArea(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsBefore), 0), 1), 0);
  }
  else if (PERR_isStartLocation(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsBefore), 0), 1), 0);
  }
  else if (PERR_isStartSubject(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsBefore), 0), 1), 0);
  }
  else if (PERR_isStartError(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsBefore), 0), 1), 0);
  }
  else if (PERR_isStartSummary(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsBefore), 0), 1), 0);
  }
  else if (PERR_isStartNatCon(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsBefore), 0), 1), 0);
  }
  else if (PERR_isStartEscaped(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsBefore), 0), 1), 0);
  }
  else if (PERR_isStartNormal(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsBefore), 0), 1), 0);
  }
  else if (PERR_isStartStrCon(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsBefore), 0), 1), 0);
  }

  ATabort("Start has no WsBefore: %t\n", arg);
  return (PERR_Start)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasStartTopArea(PERR_Start arg) */

ATbool PERR_hasStartTopArea(PERR_Start arg)
{
  if (PERR_isStartArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_Area PERR_getStartTopArea(PERR_Start arg) */

PERR_Area PERR_getStartTopArea(PERR_Start arg)
{
  
    return (PERR_Area)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 1);
}

/*}}}  */
/*{{{  PERR_Start PERR_setStartTopArea(PERR_Start arg, PERR_Area topArea) */

PERR_Start PERR_setStartTopArea(PERR_Start arg, PERR_Area topArea)
{
  if (PERR_isStartArea(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) topArea), 1), 1), 0);
  }

  ATabort("Start has no TopArea: %t\n", arg);
  return (PERR_Start)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasStartWsAfter(PERR_Start arg) */

ATbool PERR_hasStartWsAfter(PERR_Start arg)
{
  if (PERR_isStartArea(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartLocation(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartSubject(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartError(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartSummary(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartNatCon(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartEscaped(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartNormal(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartStrCon(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_getStartWsAfter(PERR_Start arg) */

PERR_OptLayout PERR_getStartWsAfter(PERR_Start arg)
{
  if (PERR_isStartArea(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 2);
  }
  else if (PERR_isStartLocation(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 2);
  }
  else if (PERR_isStartSubject(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 2);
  }
  else if (PERR_isStartError(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 2);
  }
  else if (PERR_isStartSummary(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 2);
  }
  else if (PERR_isStartNatCon(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 2);
  }
  else if (PERR_isStartEscaped(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 2);
  }
  else if (PERR_isStartNormal(arg)) {
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 2);
  }
  else 
    return (PERR_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 2);
}

/*}}}  */
/*{{{  PERR_Start PERR_setStartWsAfter(PERR_Start arg, PERR_OptLayout wsAfter) */

PERR_Start PERR_setStartWsAfter(PERR_Start arg, PERR_OptLayout wsAfter)
{
  if (PERR_isStartArea(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsAfter), 2), 1), 0);
  }
  else if (PERR_isStartLocation(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsAfter), 2), 1), 0);
  }
  else if (PERR_isStartSubject(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsAfter), 2), 1), 0);
  }
  else if (PERR_isStartError(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsAfter), 2), 1), 0);
  }
  else if (PERR_isStartSummary(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsAfter), 2), 1), 0);
  }
  else if (PERR_isStartNatCon(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsAfter), 2), 1), 0);
  }
  else if (PERR_isStartEscaped(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsAfter), 2), 1), 0);
  }
  else if (PERR_isStartNormal(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsAfter), 2), 1), 0);
  }
  else if (PERR_isStartStrCon(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsAfter), 2), 1), 0);
  }

  ATabort("Start has no WsAfter: %t\n", arg);
  return (PERR_Start)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasStartAmbCnt(PERR_Start arg) */

ATbool PERR_hasStartAmbCnt(PERR_Start arg)
{
  if (PERR_isStartArea(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartLocation(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartSubject(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartError(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartSummary(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartNatCon(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartEscaped(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartNormal(arg)) {
    return ATtrue;
  }
  else if (PERR_isStartStrCon(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  int PERR_getStartAmbCnt(PERR_Start arg) */

int PERR_getStartAmbCnt(PERR_Start arg)
{
  if (PERR_isStartArea(arg)) {
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 1));
  }
  else if (PERR_isStartLocation(arg)) {
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 1));
  }
  else if (PERR_isStartSubject(arg)) {
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 1));
  }
  else if (PERR_isStartError(arg)) {
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 1));
  }
  else if (PERR_isStartSummary(arg)) {
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 1));
  }
  else if (PERR_isStartNatCon(arg)) {
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 1));
  }
  else if (PERR_isStartEscaped(arg)) {
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 1));
  }
  else if (PERR_isStartNormal(arg)) {
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 1));
  }
  else 
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 1));
}

/*}}}  */
/*{{{  PERR_Start PERR_setStartAmbCnt(PERR_Start arg, int ambCnt) */

PERR_Start PERR_setStartAmbCnt(PERR_Start arg, int ambCnt)
{
  if (PERR_isStartArea(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(ambCnt)), 1);
  }
  else if (PERR_isStartLocation(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(ambCnt)), 1);
  }
  else if (PERR_isStartSubject(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(ambCnt)), 1);
  }
  else if (PERR_isStartError(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(ambCnt)), 1);
  }
  else if (PERR_isStartSummary(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(ambCnt)), 1);
  }
  else if (PERR_isStartNatCon(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(ambCnt)), 1);
  }
  else if (PERR_isStartEscaped(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(ambCnt)), 1);
  }
  else if (PERR_isStartNormal(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(ambCnt)), 1);
  }
  else if (PERR_isStartStrCon(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(ambCnt)), 1);
  }

  ATabort("Start has no AmbCnt: %t\n", arg);
  return (PERR_Start)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasStartTopLocation(PERR_Start arg) */

ATbool PERR_hasStartTopLocation(PERR_Start arg)
{
  if (PERR_isStartLocation(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_Location PERR_getStartTopLocation(PERR_Start arg) */

PERR_Location PERR_getStartTopLocation(PERR_Start arg)
{
  
    return (PERR_Location)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 1);
}

/*}}}  */
/*{{{  PERR_Start PERR_setStartTopLocation(PERR_Start arg, PERR_Location topLocation) */

PERR_Start PERR_setStartTopLocation(PERR_Start arg, PERR_Location topLocation)
{
  if (PERR_isStartLocation(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) topLocation), 1), 1), 0);
  }

  ATabort("Start has no TopLocation: %t\n", arg);
  return (PERR_Start)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasStartTopSubject(PERR_Start arg) */

ATbool PERR_hasStartTopSubject(PERR_Start arg)
{
  if (PERR_isStartSubject(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_Subject PERR_getStartTopSubject(PERR_Start arg) */

PERR_Subject PERR_getStartTopSubject(PERR_Start arg)
{
  
    return (PERR_Subject)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 1);
}

/*}}}  */
/*{{{  PERR_Start PERR_setStartTopSubject(PERR_Start arg, PERR_Subject topSubject) */

PERR_Start PERR_setStartTopSubject(PERR_Start arg, PERR_Subject topSubject)
{
  if (PERR_isStartSubject(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) topSubject), 1), 1), 0);
  }

  ATabort("Start has no TopSubject: %t\n", arg);
  return (PERR_Start)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasStartTopError(PERR_Start arg) */

ATbool PERR_hasStartTopError(PERR_Start arg)
{
  if (PERR_isStartError(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_Error PERR_getStartTopError(PERR_Start arg) */

PERR_Error PERR_getStartTopError(PERR_Start arg)
{
  
    return (PERR_Error)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 1);
}

/*}}}  */
/*{{{  PERR_Start PERR_setStartTopError(PERR_Start arg, PERR_Error topError) */

PERR_Start PERR_setStartTopError(PERR_Start arg, PERR_Error topError)
{
  if (PERR_isStartError(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) topError), 1), 1), 0);
  }

  ATabort("Start has no TopError: %t\n", arg);
  return (PERR_Start)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasStartTopSummary(PERR_Start arg) */

ATbool PERR_hasStartTopSummary(PERR_Start arg)
{
  if (PERR_isStartSummary(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_Summary PERR_getStartTopSummary(PERR_Start arg) */

PERR_Summary PERR_getStartTopSummary(PERR_Start arg)
{
  
    return (PERR_Summary)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 1);
}

/*}}}  */
/*{{{  PERR_Start PERR_setStartTopSummary(PERR_Start arg, PERR_Summary topSummary) */

PERR_Start PERR_setStartTopSummary(PERR_Start arg, PERR_Summary topSummary)
{
  if (PERR_isStartSummary(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) topSummary), 1), 1), 0);
  }

  ATabort("Start has no TopSummary: %t\n", arg);
  return (PERR_Start)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasStartTopNatCon(PERR_Start arg) */

ATbool PERR_hasStartTopNatCon(PERR_Start arg)
{
  if (PERR_isStartNatCon(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_NatCon PERR_getStartTopNatCon(PERR_Start arg) */

PERR_NatCon PERR_getStartTopNatCon(PERR_Start arg)
{
  
    return (PERR_NatCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 1);
}

/*}}}  */
/*{{{  PERR_Start PERR_setStartTopNatCon(PERR_Start arg, PERR_NatCon topNatCon) */

PERR_Start PERR_setStartTopNatCon(PERR_Start arg, PERR_NatCon topNatCon)
{
  if (PERR_isStartNatCon(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) topNatCon), 1), 1), 0);
  }

  ATabort("Start has no TopNatCon: %t\n", arg);
  return (PERR_Start)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasStartTopEscaped(PERR_Start arg) */

ATbool PERR_hasStartTopEscaped(PERR_Start arg)
{
  if (PERR_isStartEscaped(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_Escaped PERR_getStartTopEscaped(PERR_Start arg) */

PERR_Escaped PERR_getStartTopEscaped(PERR_Start arg)
{
  
    return (PERR_Escaped)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 1);
}

/*}}}  */
/*{{{  PERR_Start PERR_setStartTopEscaped(PERR_Start arg, PERR_Escaped topEscaped) */

PERR_Start PERR_setStartTopEscaped(PERR_Start arg, PERR_Escaped topEscaped)
{
  if (PERR_isStartEscaped(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) topEscaped), 1), 1), 0);
  }

  ATabort("Start has no TopEscaped: %t\n", arg);
  return (PERR_Start)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasStartTopNormal(PERR_Start arg) */

ATbool PERR_hasStartTopNormal(PERR_Start arg)
{
  if (PERR_isStartNormal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_Normal PERR_getStartTopNormal(PERR_Start arg) */

PERR_Normal PERR_getStartTopNormal(PERR_Start arg)
{
  
    return (PERR_Normal)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 1);
}

/*}}}  */
/*{{{  PERR_Start PERR_setStartTopNormal(PERR_Start arg, PERR_Normal topNormal) */

PERR_Start PERR_setStartTopNormal(PERR_Start arg, PERR_Normal topNormal)
{
  if (PERR_isStartNormal(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) topNormal), 1), 1), 0);
  }

  ATabort("Start has no TopNormal: %t\n", arg);
  return (PERR_Start)NULL;
}

/*}}}  */
/*{{{  ATbool PERR_hasStartTopStrCon(PERR_Start arg) */

ATbool PERR_hasStartTopStrCon(PERR_Start arg)
{
  if (PERR_isStartStrCon(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PERR_StrCon PERR_getStartTopStrCon(PERR_Start arg) */

PERR_StrCon PERR_getStartTopStrCon(PERR_Start arg)
{
  
    return (PERR_StrCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 1);
}

/*}}}  */
/*{{{  PERR_Start PERR_setStartTopStrCon(PERR_Start arg, PERR_StrCon topStrCon) */

PERR_Start PERR_setStartTopStrCon(PERR_Start arg, PERR_StrCon topStrCon)
{
  if (PERR_isStartStrCon(arg)) {
    return (PERR_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) topStrCon), 1), 1), 0);
  }

  ATabort("Start has no TopStrCon: %t\n", arg);
  return (PERR_Start)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  PERR_OptLayout accessors */

/*{{{  ATbool PERR_isValidOptLayout(PERR_OptLayout arg) */

ATbool PERR_isValidOptLayout(PERR_OptLayout arg)
{
  if (PERR_isOptLayoutAbsent(arg)) {
    return ATtrue;
  }
  else if (PERR_isOptLayoutPresent(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool PERR_isOptLayoutAbsent(PERR_OptLayout arg) */

inline ATbool PERR_isOptLayoutAbsent(PERR_OptLayout arg)
{
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

/*}}}  */
/*{{{  inline ATbool PERR_isOptLayoutPresent(PERR_OptLayout arg) */

inline ATbool PERR_isOptLayoutPresent(PERR_OptLayout arg)
{
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

/*}}}  */
/*{{{  ATbool PERR_hasOptLayoutString(PERR_OptLayout arg) */

ATbool PERR_hasOptLayoutString(PERR_OptLayout arg)
{
  if (PERR_isOptLayoutPresent(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  char* PERR_getOptLayoutString(PERR_OptLayout arg) */

char* PERR_getOptLayoutString(PERR_OptLayout arg)
{
  
    return (char*)PERR_charsToString((ATerm)ATgetArgument((ATermAppl)arg, 1));
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_setOptLayoutString(PERR_OptLayout arg, const char* string) */

PERR_OptLayout PERR_setOptLayoutString(PERR_OptLayout arg, const char* string)
{
  if (PERR_isOptLayoutPresent(arg)) {
    return (PERR_OptLayout)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) ((ATerm) PERR_stringToChars(string))), 1);
  }

  ATabort("OptLayout has no String: %t\n", arg);
  return (PERR_OptLayout)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  sort visitors */

/*{{{  PERR_Normal PERR_visitNormal(PERR_Normal arg, char* (*acceptString)(char*)) */

PERR_Normal PERR_visitNormal(PERR_Normal arg, char* (*acceptString)(char*))
{
  if (PERR_isNormalDefault(arg)) {
    return PERR_makeNormalDefault(
        acceptString ? acceptString(PERR_getNormalString(arg)) : PERR_getNormalString(arg));
  }
  ATabort("not a Normal: %t\n", arg);
  return (PERR_Normal)NULL;
}

/*}}}  */
/*{{{  PERR_Escaped PERR_visitEscaped(PERR_Escaped arg, char* (*acceptString)(char*)) */

PERR_Escaped PERR_visitEscaped(PERR_Escaped arg, char* (*acceptString)(char*))
{
  if (PERR_isEscapedSpecialCharacter(arg)) {
    return PERR_makeEscapedSpecialCharacter(
        acceptString ? acceptString(PERR_getEscapedString(arg)) : PERR_getEscapedString(arg));
  }
  if (PERR_isEscapedOctal(arg)) {
    return PERR_makeEscapedOctal(
        acceptString ? acceptString(PERR_getEscapedString(arg)) : PERR_getEscapedString(arg));
  }
  ATabort("not a Escaped: %t\n", arg);
  return (PERR_Escaped)NULL;
}

/*}}}  */
/*{{{  PERR_StrCon PERR_visitStrCon(PERR_StrCon arg, char* (*acceptString)(char*)) */

PERR_StrCon PERR_visitStrCon(PERR_StrCon arg, char* (*acceptString)(char*))
{
  if (PERR_isStrConDefault(arg)) {
    return PERR_makeStrConDefault(
        acceptString ? acceptString(PERR_getStrConString(arg)) : PERR_getStrConString(arg));
  }
  ATabort("not a StrCon: %t\n", arg);
  return (PERR_StrCon)NULL;
}

/*}}}  */
/*{{{  PERR_NatCon PERR_visitNatCon(PERR_NatCon arg, char* (*acceptString)(char*)) */

PERR_NatCon PERR_visitNatCon(PERR_NatCon arg, char* (*acceptString)(char*))
{
  if (PERR_isNatConDefault(arg)) {
    return PERR_makeNatConDefault(
        acceptString ? acceptString(PERR_getNatConString(arg)) : PERR_getNatConString(arg));
  }
  ATabort("not a NatCon: %t\n", arg);
  return (PERR_NatCon)NULL;
}

/*}}}  */
/*{{{  PERR_Subject PERR_visitSubject(PERR_Subject arg, PERR_OptLayout (*acceptWsAfterSubject)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterParenOpen)(PERR_OptLayout), PERR_StrCon (*acceptDescription)(PERR_StrCon), PERR_OptLayout (*acceptWsAfterDescription)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterLocalized)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterComma)(PERR_OptLayout), PERR_Location (*acceptLocation)(PERR_Location), PERR_OptLayout (*acceptWsAfterLocation)(PERR_OptLayout)) */

PERR_Subject PERR_visitSubject(PERR_Subject arg, PERR_OptLayout (*acceptWsAfterSubject)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterParenOpen)(PERR_OptLayout), PERR_StrCon (*acceptDescription)(PERR_StrCon), PERR_OptLayout (*acceptWsAfterDescription)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterLocalized)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterComma)(PERR_OptLayout), PERR_Location (*acceptLocation)(PERR_Location), PERR_OptLayout (*acceptWsAfterLocation)(PERR_OptLayout))
{
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

/*}}}  */
/*{{{  PERR_Error PERR_visitError(PERR_Error arg, PERR_OptLayout (*acceptWsAfterInfo)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterParenOpen)(PERR_OptLayout), PERR_StrCon (*acceptDescription)(PERR_StrCon), PERR_OptLayout (*acceptWsAfterDescription)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterComma)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterBracketOpen)(PERR_OptLayout), PERR_SubjectList (*acceptList)(PERR_SubjectList), PERR_OptLayout (*acceptWsAfterList)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterBracketClose)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterWarning)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterError)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterFatal)(PERR_OptLayout)) */

PERR_Error PERR_visitError(PERR_Error arg, PERR_OptLayout (*acceptWsAfterInfo)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterParenOpen)(PERR_OptLayout), PERR_StrCon (*acceptDescription)(PERR_StrCon), PERR_OptLayout (*acceptWsAfterDescription)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterComma)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterBracketOpen)(PERR_OptLayout), PERR_SubjectList (*acceptList)(PERR_SubjectList), PERR_OptLayout (*acceptWsAfterList)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterBracketClose)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterWarning)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterError)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterFatal)(PERR_OptLayout))
{
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

/*}}}  */
/*{{{  PERR_SubjectList PERR_visitSubjectList(PERR_SubjectList arg, PERR_Subject (*acceptHead)(PERR_Subject), PERR_OptLayout (*acceptWsAfterHead)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterSep)(PERR_OptLayout)) */

PERR_SubjectList PERR_visitSubjectList(PERR_SubjectList arg, PERR_Subject (*acceptHead)(PERR_Subject), PERR_OptLayout (*acceptWsAfterHead)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterSep)(PERR_OptLayout))
{
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

/*}}}  */
/*{{{  PERR_Summary PERR_visitSummary(PERR_Summary arg, PERR_OptLayout (*acceptWsAfterSummary)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterParenOpen)(PERR_OptLayout), PERR_StrCon (*acceptProducer)(PERR_StrCon), PERR_OptLayout (*acceptWsAfterProducer)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterComma)(PERR_OptLayout), PERR_StrCon (*acceptId)(PERR_StrCon), PERR_OptLayout (*acceptWsAfterId)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterComma1)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterBracketOpen)(PERR_OptLayout), PERR_ErrorList (*acceptList)(PERR_ErrorList), PERR_OptLayout (*acceptWsAfterList)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterBracketClose)(PERR_OptLayout)) */

PERR_Summary PERR_visitSummary(PERR_Summary arg, PERR_OptLayout (*acceptWsAfterSummary)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterParenOpen)(PERR_OptLayout), PERR_StrCon (*acceptProducer)(PERR_StrCon), PERR_OptLayout (*acceptWsAfterProducer)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterComma)(PERR_OptLayout), PERR_StrCon (*acceptId)(PERR_StrCon), PERR_OptLayout (*acceptWsAfterId)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterComma1)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterBracketOpen)(PERR_OptLayout), PERR_ErrorList (*acceptList)(PERR_ErrorList), PERR_OptLayout (*acceptWsAfterList)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterBracketClose)(PERR_OptLayout))
{
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

/*}}}  */
/*{{{  PERR_ErrorList PERR_visitErrorList(PERR_ErrorList arg, PERR_Error (*acceptHead)(PERR_Error), PERR_OptLayout (*acceptWsAfterHead)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterSep)(PERR_OptLayout)) */

PERR_ErrorList PERR_visitErrorList(PERR_ErrorList arg, PERR_Error (*acceptHead)(PERR_Error), PERR_OptLayout (*acceptWsAfterHead)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterSep)(PERR_OptLayout))
{
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

/*}}}  */
/*{{{  PERR_Location PERR_visitLocation(PERR_Location arg, PERR_OptLayout (*acceptWsAfterFile)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterParenOpen)(PERR_OptLayout), PERR_StrCon (*acceptFilename)(PERR_StrCon), PERR_OptLayout (*acceptWsAfterFilename)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterAreaInFile)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterComma)(PERR_OptLayout), PERR_Area (*acceptArea)(PERR_Area), PERR_OptLayout (*acceptWsAfterArea)(PERR_OptLayout)) */

PERR_Location PERR_visitLocation(PERR_Location arg, PERR_OptLayout (*acceptWsAfterFile)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterParenOpen)(PERR_OptLayout), PERR_StrCon (*acceptFilename)(PERR_StrCon), PERR_OptLayout (*acceptWsAfterFilename)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterAreaInFile)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterComma)(PERR_OptLayout), PERR_Area (*acceptArea)(PERR_Area), PERR_OptLayout (*acceptWsAfterArea)(PERR_OptLayout))
{
  if (PERR_isLocationFile(arg)) {
    return PERR_makeLocationFile(
        acceptWsAfterFile ? acceptWsAfterFile(PERR_getLocationWsAfterFile(arg)) : PERR_getLocationWsAfterFile(arg),
        acceptWsAfterParenOpen ? acceptWsAfterParenOpen(PERR_getLocationWsAfterParenOpen(arg)) : PERR_getLocationWsAfterParenOpen(arg),
        acceptFilename ? acceptFilename(PERR_getLocationFilename(arg)) : PERR_getLocationFilename(arg),
        acceptWsAfterFilename ? acceptWsAfterFilename(PERR_getLocationWsAfterFilename(arg)) : PERR_getLocationWsAfterFilename(arg));
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

/*}}}  */
/*{{{  PERR_Area PERR_visitArea(PERR_Area arg, PERR_OptLayout (*acceptWsAfterArea)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterParenOpen)(PERR_OptLayout), PERR_NatCon (*acceptBeginLine)(PERR_NatCon), PERR_OptLayout (*acceptWsAfterBeginLine)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterComma)(PERR_OptLayout), PERR_NatCon (*acceptBeginColumn)(PERR_NatCon), PERR_OptLayout (*acceptWsAfterBeginColumn)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterComma1)(PERR_OptLayout), PERR_NatCon (*acceptEndLine)(PERR_NatCon), PERR_OptLayout (*acceptWsAfterEndLine)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterComma2)(PERR_OptLayout), PERR_NatCon (*acceptEndColumn)(PERR_NatCon), PERR_OptLayout (*acceptWsAfterEndColumn)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterComma3)(PERR_OptLayout), PERR_NatCon (*acceptOffset)(PERR_NatCon), PERR_OptLayout (*acceptWsAfterOffset)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterComma4)(PERR_OptLayout), PERR_NatCon (*acceptLength)(PERR_NatCon), PERR_OptLayout (*acceptWsAfterLength)(PERR_OptLayout)) */

PERR_Area PERR_visitArea(PERR_Area arg, PERR_OptLayout (*acceptWsAfterArea)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterParenOpen)(PERR_OptLayout), PERR_NatCon (*acceptBeginLine)(PERR_NatCon), PERR_OptLayout (*acceptWsAfterBeginLine)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterComma)(PERR_OptLayout), PERR_NatCon (*acceptBeginColumn)(PERR_NatCon), PERR_OptLayout (*acceptWsAfterBeginColumn)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterComma1)(PERR_OptLayout), PERR_NatCon (*acceptEndLine)(PERR_NatCon), PERR_OptLayout (*acceptWsAfterEndLine)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterComma2)(PERR_OptLayout), PERR_NatCon (*acceptEndColumn)(PERR_NatCon), PERR_OptLayout (*acceptWsAfterEndColumn)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterComma3)(PERR_OptLayout), PERR_NatCon (*acceptOffset)(PERR_NatCon), PERR_OptLayout (*acceptWsAfterOffset)(PERR_OptLayout), PERR_OptLayout (*acceptWsAfterComma4)(PERR_OptLayout), PERR_NatCon (*acceptLength)(PERR_NatCon), PERR_OptLayout (*acceptWsAfterLength)(PERR_OptLayout))
{
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

/*}}}  */
/*{{{  PERR_Start PERR_visitStart(PERR_Start arg, PERR_OptLayout (*acceptWsBefore)(PERR_OptLayout), PERR_Area (*acceptTopArea)(PERR_Area), PERR_OptLayout (*acceptWsAfter)(PERR_OptLayout), int (*acceptAmbCnt)(int), PERR_Location (*acceptTopLocation)(PERR_Location), PERR_Subject (*acceptTopSubject)(PERR_Subject), PERR_Error (*acceptTopError)(PERR_Error), PERR_Summary (*acceptTopSummary)(PERR_Summary), PERR_NatCon (*acceptTopNatCon)(PERR_NatCon), PERR_Escaped (*acceptTopEscaped)(PERR_Escaped), PERR_Normal (*acceptTopNormal)(PERR_Normal), PERR_StrCon (*acceptTopStrCon)(PERR_StrCon)) */

PERR_Start PERR_visitStart(PERR_Start arg, PERR_OptLayout (*acceptWsBefore)(PERR_OptLayout), PERR_Area (*acceptTopArea)(PERR_Area), PERR_OptLayout (*acceptWsAfter)(PERR_OptLayout), int (*acceptAmbCnt)(int), PERR_Location (*acceptTopLocation)(PERR_Location), PERR_Subject (*acceptTopSubject)(PERR_Subject), PERR_Error (*acceptTopError)(PERR_Error), PERR_Summary (*acceptTopSummary)(PERR_Summary), PERR_NatCon (*acceptTopNatCon)(PERR_NatCon), PERR_Escaped (*acceptTopEscaped)(PERR_Escaped), PERR_Normal (*acceptTopNormal)(PERR_Normal), PERR_StrCon (*acceptTopStrCon)(PERR_StrCon))
{
  if (PERR_isStartArea(arg)) {
    return PERR_makeStartArea(
        acceptWsBefore ? acceptWsBefore(PERR_getStartWsBefore(arg)) : PERR_getStartWsBefore(arg),
        acceptTopArea ? acceptTopArea(PERR_getStartTopArea(arg)) : PERR_getStartTopArea(arg),
        acceptWsAfter ? acceptWsAfter(PERR_getStartWsAfter(arg)) : PERR_getStartWsAfter(arg),
        acceptAmbCnt ? acceptAmbCnt(PERR_getStartAmbCnt(arg)) : PERR_getStartAmbCnt(arg));
  }
  if (PERR_isStartLocation(arg)) {
    return PERR_makeStartLocation(
        acceptWsBefore ? acceptWsBefore(PERR_getStartWsBefore(arg)) : PERR_getStartWsBefore(arg),
        acceptTopLocation ? acceptTopLocation(PERR_getStartTopLocation(arg)) : PERR_getStartTopLocation(arg),
        acceptWsAfter ? acceptWsAfter(PERR_getStartWsAfter(arg)) : PERR_getStartWsAfter(arg),
        acceptAmbCnt ? acceptAmbCnt(PERR_getStartAmbCnt(arg)) : PERR_getStartAmbCnt(arg));
  }
  if (PERR_isStartSubject(arg)) {
    return PERR_makeStartSubject(
        acceptWsBefore ? acceptWsBefore(PERR_getStartWsBefore(arg)) : PERR_getStartWsBefore(arg),
        acceptTopSubject ? acceptTopSubject(PERR_getStartTopSubject(arg)) : PERR_getStartTopSubject(arg),
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
  if (PERR_isStartSummary(arg)) {
    return PERR_makeStartSummary(
        acceptWsBefore ? acceptWsBefore(PERR_getStartWsBefore(arg)) : PERR_getStartWsBefore(arg),
        acceptTopSummary ? acceptTopSummary(PERR_getStartTopSummary(arg)) : PERR_getStartTopSummary(arg),
        acceptWsAfter ? acceptWsAfter(PERR_getStartWsAfter(arg)) : PERR_getStartWsAfter(arg),
        acceptAmbCnt ? acceptAmbCnt(PERR_getStartAmbCnt(arg)) : PERR_getStartAmbCnt(arg));
  }
  if (PERR_isStartNatCon(arg)) {
    return PERR_makeStartNatCon(
        acceptWsBefore ? acceptWsBefore(PERR_getStartWsBefore(arg)) : PERR_getStartWsBefore(arg),
        acceptTopNatCon ? acceptTopNatCon(PERR_getStartTopNatCon(arg)) : PERR_getStartTopNatCon(arg),
        acceptWsAfter ? acceptWsAfter(PERR_getStartWsAfter(arg)) : PERR_getStartWsAfter(arg),
        acceptAmbCnt ? acceptAmbCnt(PERR_getStartAmbCnt(arg)) : PERR_getStartAmbCnt(arg));
  }
  if (PERR_isStartEscaped(arg)) {
    return PERR_makeStartEscaped(
        acceptWsBefore ? acceptWsBefore(PERR_getStartWsBefore(arg)) : PERR_getStartWsBefore(arg),
        acceptTopEscaped ? acceptTopEscaped(PERR_getStartTopEscaped(arg)) : PERR_getStartTopEscaped(arg),
        acceptWsAfter ? acceptWsAfter(PERR_getStartWsAfter(arg)) : PERR_getStartWsAfter(arg),
        acceptAmbCnt ? acceptAmbCnt(PERR_getStartAmbCnt(arg)) : PERR_getStartAmbCnt(arg));
  }
  if (PERR_isStartNormal(arg)) {
    return PERR_makeStartNormal(
        acceptWsBefore ? acceptWsBefore(PERR_getStartWsBefore(arg)) : PERR_getStartWsBefore(arg),
        acceptTopNormal ? acceptTopNormal(PERR_getStartTopNormal(arg)) : PERR_getStartTopNormal(arg),
        acceptWsAfter ? acceptWsAfter(PERR_getStartWsAfter(arg)) : PERR_getStartWsAfter(arg),
        acceptAmbCnt ? acceptAmbCnt(PERR_getStartAmbCnt(arg)) : PERR_getStartAmbCnt(arg));
  }
  if (PERR_isStartStrCon(arg)) {
    return PERR_makeStartStrCon(
        acceptWsBefore ? acceptWsBefore(PERR_getStartWsBefore(arg)) : PERR_getStartWsBefore(arg),
        acceptTopStrCon ? acceptTopStrCon(PERR_getStartTopStrCon(arg)) : PERR_getStartTopStrCon(arg),
        acceptWsAfter ? acceptWsAfter(PERR_getStartWsAfter(arg)) : PERR_getStartWsAfter(arg),
        acceptAmbCnt ? acceptAmbCnt(PERR_getStartAmbCnt(arg)) : PERR_getStartAmbCnt(arg));
  }
  ATabort("not a Start: %t\n", arg);
  return (PERR_Start)NULL;
}

/*}}}  */
/*{{{  PERR_OptLayout PERR_visitOptLayout(PERR_OptLayout arg, char* (*acceptString)(char*)) */

PERR_OptLayout PERR_visitOptLayout(PERR_OptLayout arg, char* (*acceptString)(char*))
{
  if (PERR_isOptLayoutAbsent(arg)) {
    return PERR_makeOptLayoutAbsent();
  }
  if (PERR_isOptLayoutPresent(arg)) {
    return PERR_makeOptLayoutPresent(
        acceptString ? acceptString(PERR_getOptLayoutString(arg)) : PERR_getOptLayoutString(arg));
  }
  ATabort("not a OptLayout: %t\n", arg);
  return (PERR_OptLayout)NULL;
}

/*}}}  */

/*}}}  */
