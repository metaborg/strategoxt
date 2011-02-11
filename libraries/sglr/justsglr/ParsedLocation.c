#include <assert.h>

#include <aterm2.h>
#include <deprecated.h>
#include "ParsedLocation.h"

ATerm PLOC_stringToChars(const char *str) {
  int len = strlen(str);
  int i;
  ATermList result = ATempty;

  for (i = len - 1; i >= 0; i--) {
    result = ATinsert(result, (ATerm) ATmakeInt(str[i]));
  }

  return (ATerm) result;
}

ATerm PLOC_byteToChar(char ch) {
    return (ATerm) ATmakeInt(ch);
}

char *PLOC_charsToString(ATerm arg) {
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

char PLOC_charToByte(ATerm arg) {
    return (char) ATgetInt((ATermInt) arg);
}


typedef struct ATerm _PLOC_OptLayout;
typedef struct ATerm _PLOC_Layout;
typedef struct ATerm _PLOC_LexLayoutList;
typedef struct ATerm _PLOC_LexStrChar;
typedef struct ATerm _PLOC_StrChar;
typedef struct ATerm _PLOC_LexStrCon;
typedef struct ATerm _PLOC_StrCon;
typedef struct ATerm _PLOC_LexStrCharChars;
typedef struct ATerm _PLOC_LexNatCon;
typedef struct ATerm _PLOC_NatCon;
typedef struct ATerm _PLOC_LexLayout;
typedef struct ATerm _PLOC_Location;
typedef struct ATerm _PLOC_Area;
typedef struct ATerm _PLOC_Slice;
typedef struct ATerm _PLOC_AreaAreas;

void PLOC_initParsedLocationApi(void) {
  init_ParsedLocation_dict();
}

void PLOC_protectOptLayout(PLOC_OptLayout *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PLOC_unprotectOptLayout(PLOC_OptLayout *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PLOC_protectLayout(PLOC_Layout *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PLOC_unprotectLayout(PLOC_Layout *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PLOC_protectLexLayoutList(PLOC_LexLayoutList *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PLOC_unprotectLexLayoutList(PLOC_LexLayoutList *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PLOC_protectLexStrChar(PLOC_LexStrChar *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PLOC_unprotectLexStrChar(PLOC_LexStrChar *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PLOC_protectStrChar(PLOC_StrChar *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PLOC_unprotectStrChar(PLOC_StrChar *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PLOC_protectLexStrCon(PLOC_LexStrCon *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PLOC_unprotectLexStrCon(PLOC_LexStrCon *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PLOC_protectStrCon(PLOC_StrCon *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PLOC_unprotectStrCon(PLOC_StrCon *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PLOC_protectLexStrCharChars(PLOC_LexStrCharChars *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PLOC_unprotectLexStrCharChars(PLOC_LexStrCharChars *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PLOC_protectLexNatCon(PLOC_LexNatCon *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PLOC_unprotectLexNatCon(PLOC_LexNatCon *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PLOC_protectNatCon(PLOC_NatCon *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PLOC_unprotectNatCon(PLOC_NatCon *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PLOC_protectLexLayout(PLOC_LexLayout *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PLOC_unprotectLexLayout(PLOC_LexLayout *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PLOC_protectLocation(PLOC_Location *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PLOC_unprotectLocation(PLOC_Location *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PLOC_protectArea(PLOC_Area *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PLOC_unprotectArea(PLOC_Area *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PLOC_protectSlice(PLOC_Slice *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PLOC_unprotectSlice(PLOC_Slice *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

void PLOC_protectAreaAreas(PLOC_AreaAreas *arg) {
  ATprotect((ATerm*)((void*) arg));
}

void PLOC_unprotectAreaAreas(PLOC_AreaAreas *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

PLOC_OptLayout PLOC_OptLayoutFromTerm(ATerm t) {
  return (PLOC_OptLayout)t;
}

ATerm PLOC_OptLayoutToTerm(PLOC_OptLayout arg) {
  return (ATerm)arg;
}

PLOC_Layout PLOC_LayoutFromTerm(ATerm t) {
  return (PLOC_Layout)t;
}

ATerm PLOC_LayoutToTerm(PLOC_Layout arg) {
  return (ATerm)arg;
}

PLOC_LexLayoutList PLOC_LexLayoutListFromTerm(ATerm t) {
  return (PLOC_LexLayoutList)t;
}

ATerm PLOC_LexLayoutListToTerm(PLOC_LexLayoutList arg) {
  return (ATerm)arg;
}

PLOC_LexStrChar PLOC_LexStrCharFromTerm(ATerm t) {
  return (PLOC_LexStrChar)t;
}

ATerm PLOC_LexStrCharToTerm(PLOC_LexStrChar arg) {
  return (ATerm)arg;
}

PLOC_StrChar PLOC_StrCharFromTerm(ATerm t) {
  return (PLOC_StrChar)t;
}

ATerm PLOC_StrCharToTerm(PLOC_StrChar arg) {
  return (ATerm)arg;
}

PLOC_LexStrCon PLOC_LexStrConFromTerm(ATerm t) {
  return (PLOC_LexStrCon)t;
}

ATerm PLOC_LexStrConToTerm(PLOC_LexStrCon arg) {
  return (ATerm)arg;
}

PLOC_StrCon PLOC_StrConFromTerm(ATerm t) {
  return (PLOC_StrCon)t;
}

ATerm PLOC_StrConToTerm(PLOC_StrCon arg) {
  return (ATerm)arg;
}

PLOC_LexStrCharChars PLOC_LexStrCharCharsFromTerm(ATerm t) {
  return (PLOC_LexStrCharChars)t;
}

ATerm PLOC_LexStrCharCharsToTerm(PLOC_LexStrCharChars arg) {
  return (ATerm)arg;
}

PLOC_LexNatCon PLOC_LexNatConFromTerm(ATerm t) {
  return (PLOC_LexNatCon)t;
}

ATerm PLOC_LexNatConToTerm(PLOC_LexNatCon arg) {
  return (ATerm)arg;
}

PLOC_NatCon PLOC_NatConFromTerm(ATerm t) {
  return (PLOC_NatCon)t;
}

ATerm PLOC_NatConToTerm(PLOC_NatCon arg) {
  return (ATerm)arg;
}

PLOC_LexLayout PLOC_LexLayoutFromTerm(ATerm t) {
  return (PLOC_LexLayout)t;
}

ATerm PLOC_LexLayoutToTerm(PLOC_LexLayout arg) {
  return (ATerm)arg;
}

PLOC_Location PLOC_LocationFromTerm(ATerm t) {
  return (PLOC_Location)t;
}

ATerm PLOC_LocationToTerm(PLOC_Location arg) {
  return (ATerm)arg;
}

PLOC_Area PLOC_AreaFromTerm(ATerm t) {
  return (PLOC_Area)t;
}

ATerm PLOC_AreaToTerm(PLOC_Area arg) {
  return (ATerm)arg;
}

PLOC_Slice PLOC_SliceFromTerm(ATerm t) {
  return (PLOC_Slice)t;
}

ATerm PLOC_SliceToTerm(PLOC_Slice arg) {
  return (ATerm)arg;
}

PLOC_AreaAreas PLOC_AreaAreasFromTerm(ATerm t) {
  return (PLOC_AreaAreas)t;
}

ATerm PLOC_AreaAreasToTerm(PLOC_AreaAreas arg) {
  return (ATerm)arg;
}

int PLOC_getLexLayoutListLength (PLOC_LexLayoutList arg) {
  return ATgetLength((ATermList) arg);
}

PLOC_LexLayoutList PLOC_reverseLexLayoutList(PLOC_LexLayoutList arg) {
  return (PLOC_LexLayoutList) ATreverse((ATermList) arg);
}

PLOC_LexLayoutList PLOC_appendLexLayoutList(PLOC_LexLayoutList arg, PLOC_LexLayout elem) {
  return (PLOC_LexLayoutList) ATappend((ATermList) arg, (ATerm) ((ATerm) elem));
}

PLOC_LexLayoutList PLOC_concatLexLayoutList(PLOC_LexLayoutList arg0, PLOC_LexLayoutList arg1) {
  return (PLOC_LexLayoutList) ATconcat((ATermList) arg0, (ATermList) arg1);
}

PLOC_LexLayoutList PLOC_sliceLexLayoutList(PLOC_LexLayoutList arg, int start, int end) {
  return (PLOC_LexLayoutList) ATgetSlice((ATermList) arg, start, end);
}

PLOC_LexLayout PLOC_getLexLayoutListLexLayoutAt(PLOC_LexLayoutList arg, int index) {
 return (PLOC_LexLayout)ATelementAt((ATermList) arg,index);
}

PLOC_LexLayoutList PLOC_replaceLexLayoutListLexLayoutAt(PLOC_LexLayoutList arg, PLOC_LexLayout elem, int index) {
 return (PLOC_LexLayoutList) ATreplace((ATermList) arg, (ATerm) ((ATerm) elem), index);
}

PLOC_LexLayoutList PLOC_makeLexLayoutList2(PLOC_LexLayout elem1, PLOC_LexLayout elem2) {
  return (PLOC_LexLayoutList) ATmakeList2((ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem2));
}

PLOC_LexLayoutList PLOC_makeLexLayoutList3(PLOC_LexLayout elem1, PLOC_LexLayout elem2, PLOC_LexLayout elem3) {
  return (PLOC_LexLayoutList) ATmakeList3((ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem3));
}

PLOC_LexLayoutList PLOC_makeLexLayoutList4(PLOC_LexLayout elem1, PLOC_LexLayout elem2, PLOC_LexLayout elem3, PLOC_LexLayout elem4) {
  return (PLOC_LexLayoutList) ATmakeList4((ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem4));
}

PLOC_LexLayoutList PLOC_makeLexLayoutList5(PLOC_LexLayout elem1, PLOC_LexLayout elem2, PLOC_LexLayout elem3, PLOC_LexLayout elem4, PLOC_LexLayout elem5) {
  return (PLOC_LexLayoutList) ATmakeList5((ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem5));
}

PLOC_LexLayoutList PLOC_makeLexLayoutList6(PLOC_LexLayout elem1, PLOC_LexLayout elem2, PLOC_LexLayout elem3, PLOC_LexLayout elem4, PLOC_LexLayout elem5, PLOC_LexLayout elem6) {
  return (PLOC_LexLayoutList) ATmakeList6((ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6));
}

int PLOC_getLexStrCharCharsLength (PLOC_LexStrCharChars arg) {
  return ATgetLength((ATermList) arg);
}

PLOC_LexStrCharChars PLOC_reverseLexStrCharChars(PLOC_LexStrCharChars arg) {
  return (PLOC_LexStrCharChars) ATreverse((ATermList) arg);
}

PLOC_LexStrCharChars PLOC_appendLexStrCharChars(PLOC_LexStrCharChars arg, PLOC_LexStrChar elem) {
  return (PLOC_LexStrCharChars) ATappend((ATermList) arg, (ATerm) ((ATerm) elem));
}

PLOC_LexStrCharChars PLOC_concatLexStrCharChars(PLOC_LexStrCharChars arg0, PLOC_LexStrCharChars arg1) {
  return (PLOC_LexStrCharChars) ATconcat((ATermList) arg0, (ATermList) arg1);
}

PLOC_LexStrCharChars PLOC_sliceLexStrCharChars(PLOC_LexStrCharChars arg, int start, int end) {
  return (PLOC_LexStrCharChars) ATgetSlice((ATermList) arg, start, end);
}

PLOC_LexStrChar PLOC_getLexStrCharCharsLexStrCharAt(PLOC_LexStrCharChars arg, int index) {
 return (PLOC_LexStrChar)ATelementAt((ATermList) arg,index);
}

PLOC_LexStrCharChars PLOC_replaceLexStrCharCharsLexStrCharAt(PLOC_LexStrCharChars arg, PLOC_LexStrChar elem, int index) {
 return (PLOC_LexStrCharChars) ATreplace((ATermList) arg, (ATerm) ((ATerm) elem), index);
}

PLOC_LexStrCharChars PLOC_makeLexStrCharChars2(PLOC_LexStrChar elem1, PLOC_LexStrChar elem2) {
  return (PLOC_LexStrCharChars) ATmakeList2((ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem2));
}

PLOC_LexStrCharChars PLOC_makeLexStrCharChars3(PLOC_LexStrChar elem1, PLOC_LexStrChar elem2, PLOC_LexStrChar elem3) {
  return (PLOC_LexStrCharChars) ATmakeList3((ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem3));
}

PLOC_LexStrCharChars PLOC_makeLexStrCharChars4(PLOC_LexStrChar elem1, PLOC_LexStrChar elem2, PLOC_LexStrChar elem3, PLOC_LexStrChar elem4) {
  return (PLOC_LexStrCharChars) ATmakeList4((ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem4));
}

PLOC_LexStrCharChars PLOC_makeLexStrCharChars5(PLOC_LexStrChar elem1, PLOC_LexStrChar elem2, PLOC_LexStrChar elem3, PLOC_LexStrChar elem4, PLOC_LexStrChar elem5) {
  return (PLOC_LexStrCharChars) ATmakeList5((ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem5));
}

PLOC_LexStrCharChars PLOC_makeLexStrCharChars6(PLOC_LexStrChar elem1, PLOC_LexStrChar elem2, PLOC_LexStrChar elem3, PLOC_LexStrChar elem4, PLOC_LexStrChar elem5, PLOC_LexStrChar elem6) {
  return (PLOC_LexStrCharChars) ATmakeList6((ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6), (ATerm) ((ATerm) elem6));
}

int PLOC_getAreaAreasLength (PLOC_AreaAreas arg) {
  if (ATisEmpty((ATermList) arg)) {
    return 0;
  }
  return (ATgetLength((ATermList) arg) / 4) + 1;
}

PLOC_AreaAreas PLOC_reverseAreaAreas(PLOC_AreaAreas arg) {
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

  return (PLOC_AreaAreas) result;
}

PLOC_AreaAreas PLOC_appendAreaAreas(PLOC_AreaAreas arg0, PLOC_OptLayout wsAfterHead, PLOC_OptLayout wsAfterSep, PLOC_Area arg1) {
  return PLOC_concatAreaAreas(arg0, wsAfterHead, wsAfterSep, PLOC_makeAreaAreasSingle(arg1));
}

PLOC_AreaAreas PLOC_concatAreaAreas(PLOC_AreaAreas arg0, PLOC_OptLayout wsAfterHead, PLOC_OptLayout wsAfterSep, PLOC_AreaAreas arg1) {
  if (ATisEmpty((ATermList) arg0)) {
    return arg1;
  }
  arg1 = PLOC_makeAreaAreasMany((PLOC_Area)ATgetFirst((ATermList) arg0), wsAfterHead, wsAfterSep,  arg1);
  arg1 = (PLOC_AreaAreas) ATgetNext((ATermList) arg1);
  return (PLOC_AreaAreas) ATconcat((ATermList) arg0, (ATermList) arg1);
}

PLOC_AreaAreas PLOC_sliceAreaAreas(PLOC_AreaAreas arg, int start, int end) {
  return (PLOC_AreaAreas) ATgetSlice((ATermList) arg, start * 4, end * 4);
}

PLOC_Area PLOC_getAreaAreasAreaAt(PLOC_AreaAreas arg, int index) {
 return (PLOC_Area)ATelementAt((ATermList) arg,index * 4);
}

PLOC_AreaAreas PLOC_replaceAreaAreasAreaAt(PLOC_AreaAreas arg, PLOC_Area elem, int index) {
 return (PLOC_AreaAreas) ATreplace((ATermList) arg, (ATerm) ((ATerm) elem), index * 4);
}

PLOC_AreaAreas PLOC_makeAreaAreas2(PLOC_OptLayout wsAfterHead, PLOC_OptLayout wsAfterSep, PLOC_Area elem1, PLOC_Area elem2) {
  return PLOC_makeAreaAreasMany(elem1, wsAfterHead, wsAfterSep, PLOC_makeAreaAreasSingle(elem2));
}

PLOC_AreaAreas PLOC_makeAreaAreas3(PLOC_OptLayout wsAfterHead, PLOC_OptLayout wsAfterSep, PLOC_Area elem1, PLOC_Area elem2, PLOC_Area elem3) {
  return PLOC_makeAreaAreasMany(elem1, wsAfterHead, wsAfterSep, PLOC_makeAreaAreas2(wsAfterHead, wsAfterSep, elem2, elem3));
}

PLOC_AreaAreas PLOC_makeAreaAreas4(PLOC_OptLayout wsAfterHead, PLOC_OptLayout wsAfterSep, PLOC_Area elem1, PLOC_Area elem2, PLOC_Area elem3, PLOC_Area elem4) {
  return PLOC_makeAreaAreasMany(elem1, wsAfterHead, wsAfterSep, PLOC_makeAreaAreas3(wsAfterHead, wsAfterSep, elem2, elem3, elem4));
}

PLOC_AreaAreas PLOC_makeAreaAreas5(PLOC_OptLayout wsAfterHead, PLOC_OptLayout wsAfterSep, PLOC_Area elem1, PLOC_Area elem2, PLOC_Area elem3, PLOC_Area elem4, PLOC_Area elem5) {
  return PLOC_makeAreaAreasMany(elem1, wsAfterHead, wsAfterSep, PLOC_makeAreaAreas4(wsAfterHead, wsAfterSep, elem2, elem3, elem4, elem5));
}

PLOC_AreaAreas PLOC_makeAreaAreas6(PLOC_OptLayout wsAfterHead, PLOC_OptLayout wsAfterSep, PLOC_Area elem1, PLOC_Area elem2, PLOC_Area elem3, PLOC_Area elem4, PLOC_Area elem5, PLOC_Area elem6) {
  return PLOC_makeAreaAreasMany(elem1, wsAfterHead, wsAfterSep, PLOC_makeAreaAreas5(wsAfterHead, wsAfterSep, elem2, elem3, elem4, elem5, elem6));
}

PLOC_OptLayout PLOC_makeOptLayoutAbsent(void) {
  return (PLOC_OptLayout)(ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATempty, (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4))), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATempty);
}
PLOC_OptLayout PLOC_makeOptLayoutPresent(PLOC_Layout layout) {
  return (PLOC_OptLayout)(ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl0(PLOC_afun4))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4))), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATmakeList1((ATerm) layout));
}
PLOC_Layout PLOC_makeLayoutLexToCf(PLOC_LexLayoutList list) {
  return (PLOC_Layout)(ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun6, (ATerm)ATmakeAppl1(PLOC_afun7, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl0(PLOC_afun4)), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl1(PLOC_afun8, (ATerm)ATmakeAppl1(PLOC_afun6, (ATerm)ATmakeAppl1(PLOC_afun7, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm) list)));
}
PLOC_LexLayoutList PLOC_makeLexLayoutListEmpty(void) {
  return (PLOC_LexLayoutList)(ATerm)ATempty;
}
PLOC_LexLayoutList PLOC_makeLexLayoutListSingle(PLOC_LexLayout head) {
  return (PLOC_LexLayoutList)(ATerm)ATmakeList1((ATerm) head);
}
PLOC_LexLayoutList PLOC_makeLexLayoutListMany(PLOC_LexLayout head, PLOC_LexLayoutList tail) {
  return (PLOC_LexLayoutList)(ATerm)ATinsert((ATermList)tail, (ATerm) head);
}
PLOC_LexStrChar PLOC_makeLexStrCharNewline(void) {
  return (PLOC_LexStrChar)(ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun10))), (ATerm)ATmakeAppl1(PLOC_afun6, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun12))), (ATerm)ATmakeAppl1(PLOC_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl1(PLOC_afun15, (ATerm)ATmakeAppl0(PLOC_afun16)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(110)))), (ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(92)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun10)), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeInt(110)), (ATerm)ATmakeInt(92)))));
}
PLOC_LexStrChar PLOC_makeLexStrCharTab(void) {
  return (PLOC_LexStrChar)(ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun18))), (ATerm)ATmakeAppl1(PLOC_afun6, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun12))), (ATerm)ATmakeAppl1(PLOC_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl1(PLOC_afun15, (ATerm)ATmakeAppl0(PLOC_afun19)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(116)))), (ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(92)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun18)), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeInt(116)), (ATerm)ATmakeInt(92)))));
}
PLOC_LexStrChar PLOC_makeLexStrCharQuote(void) {
  return (PLOC_LexStrChar)(ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun20))), (ATerm)ATmakeAppl1(PLOC_afun6, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun12))), (ATerm)ATmakeAppl1(PLOC_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl1(PLOC_afun15, (ATerm)ATmakeAppl0(PLOC_afun21)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(34)))), (ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(92)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun20)), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeInt(34)), (ATerm)ATmakeInt(92)))));
}
PLOC_LexStrChar PLOC_makeLexStrCharBackslash(void) {
  return (PLOC_LexStrChar)(ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun22))), (ATerm)ATmakeAppl1(PLOC_afun6, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun12))), (ATerm)ATmakeAppl1(PLOC_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl1(PLOC_afun15, (ATerm)ATmakeAppl0(PLOC_afun23)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(92)))), (ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(92)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun22)), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeInt(92)), (ATerm)ATmakeInt(92)))));
}
PLOC_LexStrChar PLOC_makeLexStrCharDecimal(char a, char b, char c) {
  return (PLOC_LexStrChar)(ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PLOC_afun24, (ATerm)ATmakeInt(48), (ATerm)ATmakeInt(57))))), (ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PLOC_afun24, (ATerm)ATmakeInt(48), (ATerm)ATmakeInt(57))))), (ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PLOC_afun24, (ATerm)ATmakeInt(48), (ATerm)ATmakeInt(57))))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun25))), (ATerm)ATmakeAppl1(PLOC_afun6, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun12))), (ATerm)ATmakeAppl1(PLOC_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl1(PLOC_afun15, (ATerm)ATmakeAppl0(PLOC_afun26)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm) ((ATerm) PLOC_byteToChar(c))), (ATerm) ((ATerm) PLOC_byteToChar(b))), (ATerm) ((ATerm) PLOC_byteToChar(a))), (ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(92)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun25)), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(92)))));
}
PLOC_LexStrChar PLOC_makeLexStrCharNormal(char ch) {
  return (PLOC_LexStrChar)(ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(PLOC_afun24, (ATerm)ATmakeInt(93), (ATerm)ATmakeInt(255))), (ATerm)ATmakeAppl2(PLOC_afun24, (ATerm)ATmakeInt(35), (ATerm)ATmakeInt(91))), (ATerm)ATmakeAppl2(PLOC_afun24, (ATerm)ATmakeInt(32), (ATerm)ATmakeInt(33))))), (ATerm)ATmakeAppl1(PLOC_afun6, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun12))), (ATerm)ATmakeAppl1(PLOC_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl1(PLOC_afun15, (ATerm)ATmakeAppl0(PLOC_afun27)))))), (ATerm)ATmakeList1((ATerm) ((ATerm) PLOC_byteToChar(ch))));
}
PLOC_StrChar PLOC_makeStrCharLexToCf(PLOC_LexStrChar StrChar) {
  return (PLOC_StrChar)(ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun6, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun12)))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun12))), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATmakeList1((ATerm) StrChar));
}
PLOC_LexStrCon PLOC_makeLexStrConDefault(PLOC_LexStrCharChars chars) {
  return (PLOC_LexStrCon)(ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(34)))), (ATerm)ATmakeAppl1(PLOC_afun6, (ATerm)ATmakeAppl1(PLOC_afun28, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun12))))), (ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(34)))), (ATerm)ATmakeAppl1(PLOC_afun6, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun29))), (ATerm)ATmakeAppl1(PLOC_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl1(PLOC_afun15, (ATerm)ATmakeAppl0(PLOC_afun30)))))), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeInt(34)), (ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl1(PLOC_afun8, (ATerm)ATmakeAppl1(PLOC_afun6, (ATerm)ATmakeAppl1(PLOC_afun28, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun12))))), (ATerm) chars)), (ATerm)ATmakeInt(34)));
}
PLOC_StrCon PLOC_makeStrConLexToCf(PLOC_LexStrCon StrCon) {
  return (PLOC_StrCon)(ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun6, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun29)))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun29))), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATmakeList1((ATerm) StrCon));
}
PLOC_LexStrCharChars PLOC_makeLexStrCharCharsEmpty(void) {
  return (PLOC_LexStrCharChars)(ATerm)ATempty;
}
PLOC_LexStrCharChars PLOC_makeLexStrCharCharsSingle(PLOC_LexStrChar head) {
  return (PLOC_LexStrCharChars)(ATerm)ATmakeList1((ATerm) head);
}
PLOC_LexStrCharChars PLOC_makeLexStrCharCharsMany(PLOC_LexStrChar head, PLOC_LexStrCharChars tail) {
  return (PLOC_LexStrCharChars)(ATerm)ATinsert((ATermList)tail, (ATerm) head);
}
PLOC_LexNatCon PLOC_makeLexNatConDigits(const char* list) {
  return (PLOC_LexNatCon)(ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun6, (ATerm)ATmakeAppl1(PLOC_afun7, (ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PLOC_afun24, (ATerm)ATmakeInt(48), (ATerm)ATmakeInt(57))))))), (ATerm)ATmakeAppl1(PLOC_afun6, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun31))), (ATerm)ATmakeAppl1(PLOC_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl1(PLOC_afun15, (ATerm)ATmakeAppl0(PLOC_afun32)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl1(PLOC_afun8, (ATerm)ATmakeAppl1(PLOC_afun6, (ATerm)ATmakeAppl1(PLOC_afun7, (ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PLOC_afun24, (ATerm)ATmakeInt(48), (ATerm)ATmakeInt(57))))))), (ATerm) ((ATerm) PLOC_stringToChars(list)))));
}
PLOC_NatCon PLOC_makeNatConLexToCf(PLOC_LexNatCon NatCon) {
  return (PLOC_NatCon)(ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun6, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun31)))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun31))), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATmakeList1((ATerm) NatCon));
}
PLOC_LexLayout PLOC_makeLexLayoutWhitespace(char ch) {
  return (PLOC_LexLayout)(ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeInt(32)), (ATerm)ATmakeInt(13)), (ATerm)ATmakeAppl2(PLOC_afun24, (ATerm)ATmakeInt(9), (ATerm)ATmakeInt(10))))), (ATerm)ATmakeAppl1(PLOC_afun6, (ATerm)ATmakeAppl0(PLOC_afun4)), (ATerm)ATmakeAppl1(PLOC_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl1(PLOC_afun15, (ATerm)ATmakeAppl0(PLOC_afun33)))))), (ATerm)ATmakeList1((ATerm) ((ATerm) PLOC_byteToChar(ch))));
}
PLOC_Location PLOC_makeLocationFile(PLOC_OptLayout wsAfterFile, PLOC_OptLayout wsAfterParenOpen, PLOC_StrCon filename, PLOC_OptLayout wsAfterFilename) {
  return (PLOC_Location)(ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun34))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun29)))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun35))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun36))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun37))), (ATerm)ATmakeAppl1(PLOC_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl1(PLOC_afun15, (ATerm)ATmakeAppl0(PLOC_afun36)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun34)), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm) wsAfterFilename), (ATerm) filename), (ATerm) wsAfterParenOpen), (ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun35)), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm) wsAfterFile), (ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(101)))), (ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(108)))), (ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(105)))), (ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(102)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun36)), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeInt(101)), (ATerm)ATmakeInt(108)), (ATerm)ATmakeInt(105)), (ATerm)ATmakeInt(102)))));
}
PLOC_Location PLOC_makeLocationArea(PLOC_OptLayout wsAfterA, PLOC_OptLayout wsAfterParenOpen, PLOC_Area Area, PLOC_OptLayout wsAfterArea) {
  return (PLOC_Location)(ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun34))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun38)))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun35))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun39))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun37))), (ATerm)ATmakeAppl1(PLOC_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl1(PLOC_afun15, (ATerm)ATmakeAppl0(PLOC_afun39)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun34)), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm) wsAfterArea), (ATerm) Area), (ATerm) wsAfterParenOpen), (ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun35)), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm) wsAfterA), (ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(97)))), (ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(101)))), (ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(114)))), (ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(97)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun39)), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeInt(97)), (ATerm)ATmakeInt(101)), (ATerm)ATmakeInt(114)), (ATerm)ATmakeInt(97)))));
}
PLOC_Location PLOC_makeLocationAreaInFile(PLOC_OptLayout wsAfterAreaInFile, PLOC_OptLayout wsAfterParenOpen, PLOC_StrCon filename, PLOC_OptLayout wsAfterFilename, PLOC_OptLayout wsAfterComma, PLOC_Area Area, PLOC_OptLayout wsAfterArea) {
  return (PLOC_Location)(ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun34))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun38)))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun40))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun29)))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun35))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun41))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun37))), (ATerm)ATmakeAppl1(PLOC_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl1(PLOC_afun15, (ATerm)ATmakeAppl0(PLOC_afun41)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun34)), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm) wsAfterArea), (ATerm) Area), (ATerm) wsAfterComma), (ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun40)), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm) wsAfterFilename), (ATerm) filename), (ATerm) wsAfterParenOpen), (ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun35)), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm) wsAfterAreaInFile), (ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(101)))), (ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(108)))), (ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(105)))), (ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(102)))), (ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(45)))), (ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(110)))), (ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(105)))), (ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(45)))), (ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(97)))), (ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(101)))), (ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(114)))), (ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(97)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun41)), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeInt(101)), (ATerm)ATmakeInt(108)), (ATerm)ATmakeInt(105)), (ATerm)ATmakeInt(102)), (ATerm)ATmakeInt(45)), (ATerm)ATmakeInt(110)), (ATerm)ATmakeInt(105)), (ATerm)ATmakeInt(45)), (ATerm)ATmakeInt(97)), (ATerm)ATmakeInt(101)), (ATerm)ATmakeInt(114)), (ATerm)ATmakeInt(97)))));
}
PLOC_Area PLOC_makeAreaArea(PLOC_OptLayout wsAfterArea, PLOC_OptLayout wsAfterParenOpen, PLOC_NatCon beginLine, PLOC_OptLayout wsAfterBeginLine, PLOC_OptLayout wsAfterComma, PLOC_NatCon beginColumn, PLOC_OptLayout wsAfterBeginColumn, PLOC_OptLayout wsAfterComma1, PLOC_NatCon endLine, PLOC_OptLayout wsAfterEndLine, PLOC_OptLayout wsAfterComma2, PLOC_NatCon endColumn, PLOC_OptLayout wsAfterEndColumn, PLOC_OptLayout wsAfterComma3, PLOC_NatCon offset, PLOC_OptLayout wsAfterOffset, PLOC_OptLayout wsAfterComma4, PLOC_NatCon length, PLOC_OptLayout wsAfterLength) {
  return (PLOC_Area)(ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun34))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun31)))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun40))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun31)))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun40))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun31)))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun40))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun31)))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun40))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun31)))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun40))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun31)))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun35))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun39))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun38))), (ATerm)ATmakeAppl1(PLOC_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl1(PLOC_afun15, (ATerm)ATmakeAppl0(PLOC_afun39)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun34)), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm) wsAfterLength), (ATerm) length), (ATerm) wsAfterComma4), (ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun40)), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm) wsAfterOffset), (ATerm) offset), (ATerm) wsAfterComma3), (ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun40)), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm) wsAfterEndColumn), (ATerm) endColumn), (ATerm) wsAfterComma2), (ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun40)), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm) wsAfterEndLine), (ATerm) endLine), (ATerm) wsAfterComma1), (ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun40)), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm) wsAfterBeginColumn), (ATerm) beginColumn), (ATerm) wsAfterComma), (ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun40)), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm) wsAfterBeginLine), (ATerm) beginLine), (ATerm) wsAfterParenOpen), (ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun35)), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm) wsAfterArea), (ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(97)))), (ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(101)))), (ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(114)))), (ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(97)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun39)), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeInt(97)), (ATerm)ATmakeInt(101)), (ATerm)ATmakeInt(114)), (ATerm)ATmakeInt(97)))));
}
PLOC_Slice PLOC_makeSliceSlice(PLOC_OptLayout wsAfterSlice, PLOC_OptLayout wsAfterParenOpen, PLOC_StrCon id, PLOC_OptLayout wsAfterId, PLOC_OptLayout wsAfterComma, PLOC_OptLayout wsAfterBracketOpen, PLOC_AreaAreas areas, PLOC_OptLayout wsAfterAreas, PLOC_OptLayout wsAfterBracketClose) {
  return (PLOC_Slice)(ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun34))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun42))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl2(PLOC_afun43, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun38)), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun40))))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun44))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun40))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun29)))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun35))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun45))), (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun46))), (ATerm)ATmakeAppl1(PLOC_afun13, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl1(PLOC_afun15, (ATerm)ATmakeAppl0(PLOC_afun45)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun34)), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm) wsAfterBracketClose), (ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(93)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun42)), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(93)))), (ATerm) wsAfterAreas), (ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl1(PLOC_afun8, (ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl2(PLOC_afun43, (ATerm)ATmakeAppl1(PLOC_afun11, (ATerm)ATmakeAppl0(PLOC_afun38)), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun40))))), (ATerm) areas)), (ATerm) wsAfterBracketOpen), (ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(91)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun44)), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(91)))), (ATerm) wsAfterComma), (ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun40)), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm) wsAfterId), (ATerm) id), (ATerm) wsAfterParenOpen), (ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun35)), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm) wsAfterSlice), (ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(101)))), (ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(99)))), (ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(105)))), (ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(108)))), (ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(115)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun45)), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeInt(101)), (ATerm)ATmakeInt(99)), (ATerm)ATmakeInt(105)), (ATerm)ATmakeInt(108)), (ATerm)ATmakeInt(115)))));
}
PLOC_AreaAreas PLOC_makeAreaAreasEmpty(void) {
  return (PLOC_AreaAreas)(ATerm)ATempty;
}
PLOC_AreaAreas PLOC_makeAreaAreasSingle(PLOC_Area head) {
  return (PLOC_AreaAreas)(ATerm)ATmakeList1((ATerm) head);
}
PLOC_AreaAreas PLOC_makeAreaAreasMany(PLOC_Area head, PLOC_OptLayout wsAfterHead, PLOC_OptLayout wsAfterSep, PLOC_AreaAreas tail) {
  if (PLOC_isAreaAreasEmpty(tail)) {
    return PLOC_makeAreaAreasSingle(head);
  }
  return (PLOC_AreaAreas)(ATerm)ATinsert(ATinsert(ATinsert(ATinsert((ATermList)tail, (ATerm) wsAfterSep), (ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun17, (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeAppl0(PLOC_afun40)), (ATerm)ATmakeAppl0(PLOC_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm) wsAfterHead), (ATerm) head);
}

ATbool PLOC_isEqualOptLayout(PLOC_OptLayout arg0, PLOC_OptLayout arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PLOC_isEqualLayout(PLOC_Layout arg0, PLOC_Layout arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PLOC_isEqualLexLayoutList(PLOC_LexLayoutList arg0, PLOC_LexLayoutList arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PLOC_isEqualLexStrChar(PLOC_LexStrChar arg0, PLOC_LexStrChar arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PLOC_isEqualStrChar(PLOC_StrChar arg0, PLOC_StrChar arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PLOC_isEqualLexStrCon(PLOC_LexStrCon arg0, PLOC_LexStrCon arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PLOC_isEqualStrCon(PLOC_StrCon arg0, PLOC_StrCon arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PLOC_isEqualLexStrCharChars(PLOC_LexStrCharChars arg0, PLOC_LexStrCharChars arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PLOC_isEqualLexNatCon(PLOC_LexNatCon arg0, PLOC_LexNatCon arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PLOC_isEqualNatCon(PLOC_NatCon arg0, PLOC_NatCon arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PLOC_isEqualLexLayout(PLOC_LexLayout arg0, PLOC_LexLayout arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PLOC_isEqualLocation(PLOC_Location arg0, PLOC_Location arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PLOC_isEqualArea(PLOC_Area arg0, PLOC_Area arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PLOC_isEqualSlice(PLOC_Slice arg0, PLOC_Slice arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PLOC_isEqualAreaAreas(PLOC_AreaAreas arg0, PLOC_AreaAreas arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PLOC_isValidOptLayout(PLOC_OptLayout arg) {
  if (PLOC_isOptLayoutAbsent(arg)) {
    return ATtrue;
  }
  else if (PLOC_isOptLayoutPresent(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PLOC_isOptLayoutAbsent(PLOC_OptLayout arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PLOC_patternOptLayoutAbsent);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool PLOC_isOptLayoutPresent(PLOC_OptLayout arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PLOC_patternOptLayoutPresent, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

ATbool PLOC_hasOptLayoutLayout(PLOC_OptLayout arg) {
  if (PLOC_isOptLayoutPresent(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

PLOC_Layout PLOC_getOptLayoutLayout(PLOC_OptLayout arg) {
  
    return (PLOC_Layout)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1));
}

PLOC_OptLayout PLOC_setOptLayoutLayout(PLOC_OptLayout arg, PLOC_Layout layout) {
  if (PLOC_isOptLayoutPresent(arg)) {
    return (PLOC_OptLayout)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) layout), 0), 1);
  }

  ATabort("OptLayout has no Layout: %t\n", arg);
  return (PLOC_OptLayout)NULL;
}

ATbool PLOC_isValidLayout(PLOC_Layout arg) {
  if (PLOC_isLayoutLexToCf(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PLOC_isLayoutLexToCf(PLOC_Layout arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PLOC_patternLayoutLexToCf, NULL));
#endif
  return ATtrue;
}

ATbool PLOC_hasLayoutList(PLOC_Layout arg) {
  if (PLOC_isLayoutLexToCf(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

PLOC_LexLayoutList PLOC_getLayoutList(PLOC_Layout arg) {
  
    return (PLOC_LexLayoutList)ATgetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), 1);
}

PLOC_Layout PLOC_setLayoutList(PLOC_Layout arg, PLOC_LexLayoutList list) {
  if (PLOC_isLayoutLexToCf(arg)) {
    return (PLOC_Layout)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), (ATerm)((ATerm) list), 1), 0), 1);
  }

  ATabort("Layout has no List: %t\n", arg);
  return (PLOC_Layout)NULL;
}

ATbool PLOC_isValidLexLayoutList(PLOC_LexLayoutList arg) {
  if (PLOC_isLexLayoutListEmpty(arg)) {
    return ATtrue;
  }
  else if (PLOC_isLexLayoutListSingle(arg)) {
    return ATtrue;
  }
  else if (PLOC_isLexLayoutListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PLOC_isLexLayoutListEmpty(PLOC_LexLayoutList arg) {
  if (!ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PLOC_patternLexLayoutListEmpty));
#endif
  return ATtrue;
}

inline ATbool PLOC_isLexLayoutListSingle(PLOC_LexLayoutList arg) {
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
      last_result = ATmatchTerm((ATerm)arg, PLOC_patternLexLayoutListSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool PLOC_isLexLayoutListMany(PLOC_LexLayoutList arg) {
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
      last_result = ATmatchTerm((ATerm)arg, PLOC_patternLexLayoutListMany, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

ATbool PLOC_hasLexLayoutListHead(PLOC_LexLayoutList arg) {
  if (PLOC_isLexLayoutListSingle(arg)) {
    return ATtrue;
  }
  else if (PLOC_isLexLayoutListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasLexLayoutListTail(PLOC_LexLayoutList arg) {
  if (PLOC_isLexLayoutListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

PLOC_LexLayout PLOC_getLexLayoutListHead(PLOC_LexLayoutList arg) {
  if (PLOC_isLexLayoutListSingle(arg)) {
    return (PLOC_LexLayout)ATgetFirst((ATermList)arg);
  }
  else 
    return (PLOC_LexLayout)ATgetFirst((ATermList)arg);
}

PLOC_LexLayoutList PLOC_getLexLayoutListTail(PLOC_LexLayoutList arg) {
  
    return (PLOC_LexLayoutList)ATgetNext((ATermList)arg);
}

PLOC_LexLayoutList PLOC_setLexLayoutListHead(PLOC_LexLayoutList arg, PLOC_LexLayout head) {
  if (PLOC_isLexLayoutListSingle(arg)) {
    return (PLOC_LexLayoutList)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }
  else if (PLOC_isLexLayoutListMany(arg)) {
    return (PLOC_LexLayoutList)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }

  ATabort("LexLayoutList has no Head: %t\n", arg);
  return (PLOC_LexLayoutList)NULL;
}

PLOC_LexLayoutList PLOC_setLexLayoutListTail(PLOC_LexLayoutList arg, PLOC_LexLayoutList tail) {
  if (PLOC_isLexLayoutListMany(arg)) {
    return (PLOC_LexLayoutList)ATreplaceTail((ATermList)arg, (ATermList)((ATerm) tail), 1);
  }

  ATabort("LexLayoutList has no Tail: %t\n", arg);
  return (PLOC_LexLayoutList)NULL;
}

ATbool PLOC_isValidLexStrChar(PLOC_LexStrChar arg) {
  if (PLOC_isLexStrCharNewline(arg)) {
    return ATtrue;
  }
  else if (PLOC_isLexStrCharTab(arg)) {
    return ATtrue;
  }
  else if (PLOC_isLexStrCharQuote(arg)) {
    return ATtrue;
  }
  else if (PLOC_isLexStrCharBackslash(arg)) {
    return ATtrue;
  }
  else if (PLOC_isLexStrCharDecimal(arg)) {
    return ATtrue;
  }
  else if (PLOC_isLexStrCharNormal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PLOC_isLexStrCharNewline(PLOC_LexStrChar arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PLOC_patternLexStrCharNewline);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool PLOC_isLexStrCharTab(PLOC_LexStrChar arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PLOC_patternLexStrCharTab);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool PLOC_isLexStrCharQuote(PLOC_LexStrChar arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PLOC_patternLexStrCharQuote);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool PLOC_isLexStrCharBackslash(PLOC_LexStrChar arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PLOC_patternLexStrCharBackslash);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool PLOC_isLexStrCharDecimal(PLOC_LexStrChar arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PLOC_patternLexStrCharDecimal, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool PLOC_isLexStrCharNormal(PLOC_LexStrChar arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PLOC_patternLexStrCharNormal, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

ATbool PLOC_hasLexStrCharA(PLOC_LexStrChar arg) {
  if (PLOC_isLexStrCharDecimal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasLexStrCharB(PLOC_LexStrChar arg) {
  if (PLOC_isLexStrCharDecimal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasLexStrCharC(PLOC_LexStrChar arg) {
  if (PLOC_isLexStrCharDecimal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasLexStrCharCh(PLOC_LexStrChar arg) {
  if (PLOC_isLexStrCharNormal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

char PLOC_getLexStrCharA(PLOC_LexStrChar arg) {
  
    return (char)PLOC_charToByte((ATerm)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1));
}

char PLOC_getLexStrCharB(PLOC_LexStrChar arg) {
  
    return (char)PLOC_charToByte((ATerm)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2));
}

char PLOC_getLexStrCharC(PLOC_LexStrChar arg) {
  
    return (char)PLOC_charToByte((ATerm)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3));
}

char PLOC_getLexStrCharCh(PLOC_LexStrChar arg) {
  
    return (char)PLOC_charToByte((ATerm)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)));
}

PLOC_LexStrChar PLOC_setLexStrCharA(PLOC_LexStrChar arg, char a) {
  if (PLOC_isLexStrCharDecimal(arg)) {
    return (PLOC_LexStrChar)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) ((ATerm) PLOC_byteToChar(a))), 1), 1);
  }

  ATabort("LexStrChar has no A: %t\n", arg);
  return (PLOC_LexStrChar)NULL;
}

PLOC_LexStrChar PLOC_setLexStrCharB(PLOC_LexStrChar arg, char b) {
  if (PLOC_isLexStrCharDecimal(arg)) {
    return (PLOC_LexStrChar)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) ((ATerm) PLOC_byteToChar(b))), 2), 1);
  }

  ATabort("LexStrChar has no B: %t\n", arg);
  return (PLOC_LexStrChar)NULL;
}

PLOC_LexStrChar PLOC_setLexStrCharC(PLOC_LexStrChar arg, char c) {
  if (PLOC_isLexStrCharDecimal(arg)) {
    return (PLOC_LexStrChar)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) ((ATerm) PLOC_byteToChar(c))), 3), 1);
  }

  ATabort("LexStrChar has no C: %t\n", arg);
  return (PLOC_LexStrChar)NULL;
}

PLOC_LexStrChar PLOC_setLexStrCharCh(PLOC_LexStrChar arg, char ch) {
  if (PLOC_isLexStrCharNormal(arg)) {
    return (PLOC_LexStrChar)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) ((ATerm) PLOC_byteToChar(ch))), 0), 1);
  }

  ATabort("LexStrChar has no Ch: %t\n", arg);
  return (PLOC_LexStrChar)NULL;
}

ATbool PLOC_isValidStrChar(PLOC_StrChar arg) {
  if (PLOC_isStrCharLexToCf(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PLOC_isStrCharLexToCf(PLOC_StrChar arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PLOC_patternStrCharLexToCf, NULL));
#endif
  return ATtrue;
}

ATbool PLOC_hasStrCharStrChar(PLOC_StrChar arg) {
  if (PLOC_isStrCharLexToCf(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

PLOC_LexStrChar PLOC_getStrCharStrChar(PLOC_StrChar arg) {
  
    return (PLOC_LexStrChar)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1));
}

PLOC_StrChar PLOC_setStrCharStrChar(PLOC_StrChar arg, PLOC_LexStrChar StrChar) {
  if (PLOC_isStrCharLexToCf(arg)) {
    return (PLOC_StrChar)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) StrChar), 0), 1);
  }

  ATabort("StrChar has no StrChar: %t\n", arg);
  return (PLOC_StrChar)NULL;
}

ATbool PLOC_isValidLexStrCon(PLOC_LexStrCon arg) {
  if (PLOC_isLexStrConDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PLOC_isLexStrConDefault(PLOC_LexStrCon arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PLOC_patternLexStrConDefault, NULL));
#endif
  return ATtrue;
}

ATbool PLOC_hasLexStrConChars(PLOC_LexStrCon arg) {
  if (PLOC_isLexStrConDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

PLOC_LexStrCharChars PLOC_getLexStrConChars(PLOC_LexStrCon arg) {
  
    return (PLOC_LexStrCharChars)ATgetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1), 1);
}

PLOC_LexStrCon PLOC_setLexStrConChars(PLOC_LexStrCon arg, PLOC_LexStrCharChars chars) {
  if (PLOC_isLexStrConDefault(arg)) {
    return (PLOC_LexStrCon)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1), (ATerm)((ATerm) chars), 1), 1), 1);
  }

  ATabort("LexStrCon has no Chars: %t\n", arg);
  return (PLOC_LexStrCon)NULL;
}

ATbool PLOC_isValidStrCon(PLOC_StrCon arg) {
  if (PLOC_isStrConLexToCf(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PLOC_isStrConLexToCf(PLOC_StrCon arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PLOC_patternStrConLexToCf, NULL));
#endif
  return ATtrue;
}

ATbool PLOC_hasStrConStrCon(PLOC_StrCon arg) {
  if (PLOC_isStrConLexToCf(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

PLOC_LexStrCon PLOC_getStrConStrCon(PLOC_StrCon arg) {
  
    return (PLOC_LexStrCon)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1));
}

PLOC_StrCon PLOC_setStrConStrCon(PLOC_StrCon arg, PLOC_LexStrCon StrCon) {
  if (PLOC_isStrConLexToCf(arg)) {
    return (PLOC_StrCon)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) StrCon), 0), 1);
  }

  ATabort("StrCon has no StrCon: %t\n", arg);
  return (PLOC_StrCon)NULL;
}

ATbool PLOC_isValidLexStrCharChars(PLOC_LexStrCharChars arg) {
  if (PLOC_isLexStrCharCharsEmpty(arg)) {
    return ATtrue;
  }
  else if (PLOC_isLexStrCharCharsSingle(arg)) {
    return ATtrue;
  }
  else if (PLOC_isLexStrCharCharsMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PLOC_isLexStrCharCharsEmpty(PLOC_LexStrCharChars arg) {
  if (!ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PLOC_patternLexStrCharCharsEmpty));
#endif
  return ATtrue;
}

inline ATbool PLOC_isLexStrCharCharsSingle(PLOC_LexStrCharChars arg) {
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
      last_result = ATmatchTerm((ATerm)arg, PLOC_patternLexStrCharCharsSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool PLOC_isLexStrCharCharsMany(PLOC_LexStrCharChars arg) {
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
      last_result = ATmatchTerm((ATerm)arg, PLOC_patternLexStrCharCharsMany, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

ATbool PLOC_hasLexStrCharCharsHead(PLOC_LexStrCharChars arg) {
  if (PLOC_isLexStrCharCharsSingle(arg)) {
    return ATtrue;
  }
  else if (PLOC_isLexStrCharCharsMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasLexStrCharCharsTail(PLOC_LexStrCharChars arg) {
  if (PLOC_isLexStrCharCharsMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

PLOC_LexStrChar PLOC_getLexStrCharCharsHead(PLOC_LexStrCharChars arg) {
  if (PLOC_isLexStrCharCharsSingle(arg)) {
    return (PLOC_LexStrChar)ATgetFirst((ATermList)arg);
  }
  else 
    return (PLOC_LexStrChar)ATgetFirst((ATermList)arg);
}

PLOC_LexStrCharChars PLOC_getLexStrCharCharsTail(PLOC_LexStrCharChars arg) {
  
    return (PLOC_LexStrCharChars)ATgetNext((ATermList)arg);
}

PLOC_LexStrCharChars PLOC_setLexStrCharCharsHead(PLOC_LexStrCharChars arg, PLOC_LexStrChar head) {
  if (PLOC_isLexStrCharCharsSingle(arg)) {
    return (PLOC_LexStrCharChars)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }
  else if (PLOC_isLexStrCharCharsMany(arg)) {
    return (PLOC_LexStrCharChars)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }

  ATabort("LexStrCharChars has no Head: %t\n", arg);
  return (PLOC_LexStrCharChars)NULL;
}

PLOC_LexStrCharChars PLOC_setLexStrCharCharsTail(PLOC_LexStrCharChars arg, PLOC_LexStrCharChars tail) {
  if (PLOC_isLexStrCharCharsMany(arg)) {
    return (PLOC_LexStrCharChars)ATreplaceTail((ATermList)arg, (ATermList)((ATerm) tail), 1);
  }

  ATabort("LexStrCharChars has no Tail: %t\n", arg);
  return (PLOC_LexStrCharChars)NULL;
}

ATbool PLOC_isValidLexNatCon(PLOC_LexNatCon arg) {
  if (PLOC_isLexNatConDigits(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PLOC_isLexNatConDigits(PLOC_LexNatCon arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PLOC_patternLexNatConDigits, NULL));
#endif
  return ATtrue;
}

ATbool PLOC_hasLexNatConList(PLOC_LexNatCon arg) {
  if (PLOC_isLexNatConDigits(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

char* PLOC_getLexNatConList(PLOC_LexNatCon arg) {
  
    return (char*)PLOC_charsToString((ATerm)ATgetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), 1));
}

PLOC_LexNatCon PLOC_setLexNatConList(PLOC_LexNatCon arg, const char* list) {
  if (PLOC_isLexNatConDigits(arg)) {
    return (PLOC_LexNatCon)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), (ATerm)((ATerm) ((ATerm) PLOC_stringToChars(list))), 1), 0), 1);
  }

  ATabort("LexNatCon has no List: %t\n", arg);
  return (PLOC_LexNatCon)NULL;
}

ATbool PLOC_isValidNatCon(PLOC_NatCon arg) {
  if (PLOC_isNatConLexToCf(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PLOC_isNatConLexToCf(PLOC_NatCon arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PLOC_patternNatConLexToCf, NULL));
#endif
  return ATtrue;
}

ATbool PLOC_hasNatConNatCon(PLOC_NatCon arg) {
  if (PLOC_isNatConLexToCf(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

PLOC_LexNatCon PLOC_getNatConNatCon(PLOC_NatCon arg) {
  
    return (PLOC_LexNatCon)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1));
}

PLOC_NatCon PLOC_setNatConNatCon(PLOC_NatCon arg, PLOC_LexNatCon NatCon) {
  if (PLOC_isNatConLexToCf(arg)) {
    return (PLOC_NatCon)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) NatCon), 0), 1);
  }

  ATabort("NatCon has no NatCon: %t\n", arg);
  return (PLOC_NatCon)NULL;
}

ATbool PLOC_isValidLexLayout(PLOC_LexLayout arg) {
  if (PLOC_isLexLayoutWhitespace(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PLOC_isLexLayoutWhitespace(PLOC_LexLayout arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PLOC_patternLexLayoutWhitespace, NULL));
#endif
  return ATtrue;
}

ATbool PLOC_hasLexLayoutCh(PLOC_LexLayout arg) {
  if (PLOC_isLexLayoutWhitespace(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

char PLOC_getLexLayoutCh(PLOC_LexLayout arg) {
  
    return (char)PLOC_charToByte((ATerm)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)));
}

PLOC_LexLayout PLOC_setLexLayoutCh(PLOC_LexLayout arg, char ch) {
  if (PLOC_isLexLayoutWhitespace(arg)) {
    return (PLOC_LexLayout)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) ((ATerm) PLOC_byteToChar(ch))), 0), 1);
  }

  ATabort("LexLayout has no Ch: %t\n", arg);
  return (PLOC_LexLayout)NULL;
}

ATbool PLOC_isValidLocation(PLOC_Location arg) {
  if (PLOC_isLocationFile(arg)) {
    return ATtrue;
  }
  else if (PLOC_isLocationArea(arg)) {
    return ATtrue;
  }
  else if (PLOC_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PLOC_isLocationFile(PLOC_Location arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PLOC_patternLocationFile, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool PLOC_isLocationArea(PLOC_Location arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PLOC_patternLocationArea, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool PLOC_isLocationAreaInFile(PLOC_Location arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PLOC_patternLocationAreaInFile, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

ATbool PLOC_hasLocationWsAfterFile(PLOC_Location arg) {
  if (PLOC_isLocationFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasLocationWsAfterParenOpen(PLOC_Location arg) {
  if (PLOC_isLocationFile(arg)) {
    return ATtrue;
  }
  else if (PLOC_isLocationArea(arg)) {
    return ATtrue;
  }
  else if (PLOC_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasLocationFilename(PLOC_Location arg) {
  if (PLOC_isLocationFile(arg)) {
    return ATtrue;
  }
  else if (PLOC_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasLocationWsAfterFilename(PLOC_Location arg) {
  if (PLOC_isLocationFile(arg)) {
    return ATtrue;
  }
  else if (PLOC_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasLocationWsAfterA(PLOC_Location arg) {
  if (PLOC_isLocationArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasLocationArea(PLOC_Location arg) {
  if (PLOC_isLocationArea(arg)) {
    return ATtrue;
  }
  else if (PLOC_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasLocationWsAfterArea(PLOC_Location arg) {
  if (PLOC_isLocationArea(arg)) {
    return ATtrue;
  }
  else if (PLOC_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasLocationWsAfterAreaInFile(PLOC_Location arg) {
  if (PLOC_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasLocationWsAfterComma(PLOC_Location arg) {
  if (PLOC_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

PLOC_OptLayout PLOC_getLocationWsAfterFile(PLOC_Location arg) {
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

PLOC_OptLayout PLOC_getLocationWsAfterParenOpen(PLOC_Location arg) {
  if (PLOC_isLocationFile(arg)) {
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
  }
  else if (PLOC_isLocationArea(arg)) {
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
  }
  else 
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
}

PLOC_StrCon PLOC_getLocationFilename(PLOC_Location arg) {
  if (PLOC_isLocationFile(arg)) {
    return (PLOC_StrCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4);
  }
  else 
    return (PLOC_StrCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4);
}

PLOC_OptLayout PLOC_getLocationWsAfterFilename(PLOC_Location arg) {
  if (PLOC_isLocationFile(arg)) {
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 5);
  }
  else 
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 5);
}

PLOC_OptLayout PLOC_getLocationWsAfterA(PLOC_Location arg) {
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

PLOC_Area PLOC_getLocationArea(PLOC_Location arg) {
  if (PLOC_isLocationArea(arg)) {
    return (PLOC_Area)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4);
  }
  else 
    return (PLOC_Area)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 8);
}

PLOC_OptLayout PLOC_getLocationWsAfterArea(PLOC_Location arg) {
  if (PLOC_isLocationArea(arg)) {
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 5);
  }
  else 
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 9);
}

PLOC_OptLayout PLOC_getLocationWsAfterAreaInFile(PLOC_Location arg) {
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

PLOC_OptLayout PLOC_getLocationWsAfterComma(PLOC_Location arg) {
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 7);
}

PLOC_Location PLOC_setLocationWsAfterFile(PLOC_Location arg, PLOC_OptLayout wsAfterFile) {
  if (PLOC_isLocationFile(arg)) {
    return (PLOC_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterFile), 1), 1);
  }

  ATabort("Location has no WsAfterFile: %t\n", arg);
  return (PLOC_Location)NULL;
}

PLOC_Location PLOC_setLocationWsAfterParenOpen(PLOC_Location arg, PLOC_OptLayout wsAfterParenOpen) {
  if (PLOC_isLocationFile(arg)) {
    return (PLOC_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterParenOpen), 3), 1);
  }
  else if (PLOC_isLocationArea(arg)) {
    return (PLOC_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterParenOpen), 3), 1);
  }
  else if (PLOC_isLocationAreaInFile(arg)) {
    return (PLOC_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterParenOpen), 3), 1);
  }

  ATabort("Location has no WsAfterParenOpen: %t\n", arg);
  return (PLOC_Location)NULL;
}

PLOC_Location PLOC_setLocationFilename(PLOC_Location arg, PLOC_StrCon filename) {
  if (PLOC_isLocationFile(arg)) {
    return (PLOC_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) filename), 4), 1);
  }
  else if (PLOC_isLocationAreaInFile(arg)) {
    return (PLOC_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) filename), 4), 1);
  }

  ATabort("Location has no Filename: %t\n", arg);
  return (PLOC_Location)NULL;
}

PLOC_Location PLOC_setLocationWsAfterFilename(PLOC_Location arg, PLOC_OptLayout wsAfterFilename) {
  if (PLOC_isLocationFile(arg)) {
    return (PLOC_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterFilename), 5), 1);
  }
  else if (PLOC_isLocationAreaInFile(arg)) {
    return (PLOC_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterFilename), 5), 1);
  }

  ATabort("Location has no WsAfterFilename: %t\n", arg);
  return (PLOC_Location)NULL;
}

PLOC_Location PLOC_setLocationWsAfterA(PLOC_Location arg, PLOC_OptLayout wsAfterA) {
  if (PLOC_isLocationArea(arg)) {
    return (PLOC_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterA), 1), 1);
  }

  ATabort("Location has no WsAfterA: %t\n", arg);
  return (PLOC_Location)NULL;
}

PLOC_Location PLOC_setLocationArea(PLOC_Location arg, PLOC_Area Area) {
  if (PLOC_isLocationArea(arg)) {
    return (PLOC_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) Area), 4), 1);
  }
  else if (PLOC_isLocationAreaInFile(arg)) {
    return (PLOC_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) Area), 8), 1);
  }

  ATabort("Location has no Area: %t\n", arg);
  return (PLOC_Location)NULL;
}

PLOC_Location PLOC_setLocationWsAfterArea(PLOC_Location arg, PLOC_OptLayout wsAfterArea) {
  if (PLOC_isLocationArea(arg)) {
    return (PLOC_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterArea), 5), 1);
  }
  else if (PLOC_isLocationAreaInFile(arg)) {
    return (PLOC_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterArea), 9), 1);
  }

  ATabort("Location has no WsAfterArea: %t\n", arg);
  return (PLOC_Location)NULL;
}

PLOC_Location PLOC_setLocationWsAfterAreaInFile(PLOC_Location arg, PLOC_OptLayout wsAfterAreaInFile) {
  if (PLOC_isLocationAreaInFile(arg)) {
    return (PLOC_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterAreaInFile), 1), 1);
  }

  ATabort("Location has no WsAfterAreaInFile: %t\n", arg);
  return (PLOC_Location)NULL;
}

PLOC_Location PLOC_setLocationWsAfterComma(PLOC_Location arg, PLOC_OptLayout wsAfterComma) {
  if (PLOC_isLocationAreaInFile(arg)) {
    return (PLOC_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma), 7), 1);
  }

  ATabort("Location has no WsAfterComma: %t\n", arg);
  return (PLOC_Location)NULL;
}

ATbool PLOC_isValidArea(PLOC_Area arg) {
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PLOC_isAreaArea(PLOC_Area arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PLOC_patternAreaArea, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL));
#endif
  return ATtrue;
}

ATbool PLOC_hasAreaWsAfterArea(PLOC_Area arg) {
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasAreaWsAfterParenOpen(PLOC_Area arg) {
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasAreaBeginLine(PLOC_Area arg) {
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasAreaWsAfterBeginLine(PLOC_Area arg) {
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasAreaWsAfterComma(PLOC_Area arg) {
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasAreaBeginColumn(PLOC_Area arg) {
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasAreaWsAfterBeginColumn(PLOC_Area arg) {
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasAreaWsAfterComma1(PLOC_Area arg) {
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasAreaEndLine(PLOC_Area arg) {
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasAreaWsAfterEndLine(PLOC_Area arg) {
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasAreaWsAfterComma2(PLOC_Area arg) {
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasAreaEndColumn(PLOC_Area arg) {
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasAreaWsAfterEndColumn(PLOC_Area arg) {
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasAreaWsAfterComma3(PLOC_Area arg) {
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasAreaOffset(PLOC_Area arg) {
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasAreaWsAfterOffset(PLOC_Area arg) {
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasAreaWsAfterComma4(PLOC_Area arg) {
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasAreaLength(PLOC_Area arg) {
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasAreaWsAfterLength(PLOC_Area arg) {
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

PLOC_OptLayout PLOC_getAreaWsAfterArea(PLOC_Area arg) {
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

PLOC_OptLayout PLOC_getAreaWsAfterParenOpen(PLOC_Area arg) {
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
}

PLOC_NatCon PLOC_getAreaBeginLine(PLOC_Area arg) {
  
    return (PLOC_NatCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4);
}

PLOC_OptLayout PLOC_getAreaWsAfterBeginLine(PLOC_Area arg) {
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 5);
}

PLOC_OptLayout PLOC_getAreaWsAfterComma(PLOC_Area arg) {
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 7);
}

PLOC_NatCon PLOC_getAreaBeginColumn(PLOC_Area arg) {
  
    return (PLOC_NatCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 8);
}

PLOC_OptLayout PLOC_getAreaWsAfterBeginColumn(PLOC_Area arg) {
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 9);
}

PLOC_OptLayout PLOC_getAreaWsAfterComma1(PLOC_Area arg) {
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 11);
}

PLOC_NatCon PLOC_getAreaEndLine(PLOC_Area arg) {
  
    return (PLOC_NatCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 12);
}

PLOC_OptLayout PLOC_getAreaWsAfterEndLine(PLOC_Area arg) {
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 13);
}

PLOC_OptLayout PLOC_getAreaWsAfterComma2(PLOC_Area arg) {
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 15);
}

PLOC_NatCon PLOC_getAreaEndColumn(PLOC_Area arg) {
  
    return (PLOC_NatCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 16);
}

PLOC_OptLayout PLOC_getAreaWsAfterEndColumn(PLOC_Area arg) {
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 17);
}

PLOC_OptLayout PLOC_getAreaWsAfterComma3(PLOC_Area arg) {
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 19);
}

PLOC_NatCon PLOC_getAreaOffset(PLOC_Area arg) {
  
    return (PLOC_NatCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 20);
}

PLOC_OptLayout PLOC_getAreaWsAfterOffset(PLOC_Area arg) {
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 21);
}

PLOC_OptLayout PLOC_getAreaWsAfterComma4(PLOC_Area arg) {
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 23);
}

PLOC_NatCon PLOC_getAreaLength(PLOC_Area arg) {
  
    return (PLOC_NatCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 24);
}

PLOC_OptLayout PLOC_getAreaWsAfterLength(PLOC_Area arg) {
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 25);
}

PLOC_Area PLOC_setAreaWsAfterArea(PLOC_Area arg, PLOC_OptLayout wsAfterArea) {
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterArea), 1), 1);
  }

  ATabort("Area has no WsAfterArea: %t\n", arg);
  return (PLOC_Area)NULL;
}

PLOC_Area PLOC_setAreaWsAfterParenOpen(PLOC_Area arg, PLOC_OptLayout wsAfterParenOpen) {
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterParenOpen), 3), 1);
  }

  ATabort("Area has no WsAfterParenOpen: %t\n", arg);
  return (PLOC_Area)NULL;
}

PLOC_Area PLOC_setAreaBeginLine(PLOC_Area arg, PLOC_NatCon beginLine) {
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) beginLine), 4), 1);
  }

  ATabort("Area has no BeginLine: %t\n", arg);
  return (PLOC_Area)NULL;
}

PLOC_Area PLOC_setAreaWsAfterBeginLine(PLOC_Area arg, PLOC_OptLayout wsAfterBeginLine) {
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterBeginLine), 5), 1);
  }

  ATabort("Area has no WsAfterBeginLine: %t\n", arg);
  return (PLOC_Area)NULL;
}

PLOC_Area PLOC_setAreaWsAfterComma(PLOC_Area arg, PLOC_OptLayout wsAfterComma) {
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma), 7), 1);
  }

  ATabort("Area has no WsAfterComma: %t\n", arg);
  return (PLOC_Area)NULL;
}

PLOC_Area PLOC_setAreaBeginColumn(PLOC_Area arg, PLOC_NatCon beginColumn) {
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) beginColumn), 8), 1);
  }

  ATabort("Area has no BeginColumn: %t\n", arg);
  return (PLOC_Area)NULL;
}

PLOC_Area PLOC_setAreaWsAfterBeginColumn(PLOC_Area arg, PLOC_OptLayout wsAfterBeginColumn) {
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterBeginColumn), 9), 1);
  }

  ATabort("Area has no WsAfterBeginColumn: %t\n", arg);
  return (PLOC_Area)NULL;
}

PLOC_Area PLOC_setAreaWsAfterComma1(PLOC_Area arg, PLOC_OptLayout wsAfterComma1) {
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma1), 11), 1);
  }

  ATabort("Area has no WsAfterComma1: %t\n", arg);
  return (PLOC_Area)NULL;
}

PLOC_Area PLOC_setAreaEndLine(PLOC_Area arg, PLOC_NatCon endLine) {
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) endLine), 12), 1);
  }

  ATabort("Area has no EndLine: %t\n", arg);
  return (PLOC_Area)NULL;
}

PLOC_Area PLOC_setAreaWsAfterEndLine(PLOC_Area arg, PLOC_OptLayout wsAfterEndLine) {
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterEndLine), 13), 1);
  }

  ATabort("Area has no WsAfterEndLine: %t\n", arg);
  return (PLOC_Area)NULL;
}

PLOC_Area PLOC_setAreaWsAfterComma2(PLOC_Area arg, PLOC_OptLayout wsAfterComma2) {
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma2), 15), 1);
  }

  ATabort("Area has no WsAfterComma2: %t\n", arg);
  return (PLOC_Area)NULL;
}

PLOC_Area PLOC_setAreaEndColumn(PLOC_Area arg, PLOC_NatCon endColumn) {
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) endColumn), 16), 1);
  }

  ATabort("Area has no EndColumn: %t\n", arg);
  return (PLOC_Area)NULL;
}

PLOC_Area PLOC_setAreaWsAfterEndColumn(PLOC_Area arg, PLOC_OptLayout wsAfterEndColumn) {
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterEndColumn), 17), 1);
  }

  ATabort("Area has no WsAfterEndColumn: %t\n", arg);
  return (PLOC_Area)NULL;
}

PLOC_Area PLOC_setAreaWsAfterComma3(PLOC_Area arg, PLOC_OptLayout wsAfterComma3) {
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma3), 19), 1);
  }

  ATabort("Area has no WsAfterComma3: %t\n", arg);
  return (PLOC_Area)NULL;
}

PLOC_Area PLOC_setAreaOffset(PLOC_Area arg, PLOC_NatCon offset) {
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) offset), 20), 1);
  }

  ATabort("Area has no Offset: %t\n", arg);
  return (PLOC_Area)NULL;
}

PLOC_Area PLOC_setAreaWsAfterOffset(PLOC_Area arg, PLOC_OptLayout wsAfterOffset) {
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterOffset), 21), 1);
  }

  ATabort("Area has no WsAfterOffset: %t\n", arg);
  return (PLOC_Area)NULL;
}

PLOC_Area PLOC_setAreaWsAfterComma4(PLOC_Area arg, PLOC_OptLayout wsAfterComma4) {
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma4), 23), 1);
  }

  ATabort("Area has no WsAfterComma4: %t\n", arg);
  return (PLOC_Area)NULL;
}

PLOC_Area PLOC_setAreaLength(PLOC_Area arg, PLOC_NatCon length) {
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) length), 24), 1);
  }

  ATabort("Area has no Length: %t\n", arg);
  return (PLOC_Area)NULL;
}

PLOC_Area PLOC_setAreaWsAfterLength(PLOC_Area arg, PLOC_OptLayout wsAfterLength) {
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterLength), 25), 1);
  }

  ATabort("Area has no WsAfterLength: %t\n", arg);
  return (PLOC_Area)NULL;
}

ATbool PLOC_isValidSlice(PLOC_Slice arg) {
  if (PLOC_isSliceSlice(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PLOC_isSliceSlice(PLOC_Slice arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PLOC_patternSliceSlice, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL));
#endif
  return ATtrue;
}

ATbool PLOC_hasSliceWsAfterSlice(PLOC_Slice arg) {
  if (PLOC_isSliceSlice(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasSliceWsAfterParenOpen(PLOC_Slice arg) {
  if (PLOC_isSliceSlice(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasSliceId(PLOC_Slice arg) {
  if (PLOC_isSliceSlice(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasSliceWsAfterId(PLOC_Slice arg) {
  if (PLOC_isSliceSlice(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasSliceWsAfterComma(PLOC_Slice arg) {
  if (PLOC_isSliceSlice(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasSliceWsAfterBracketOpen(PLOC_Slice arg) {
  if (PLOC_isSliceSlice(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasSliceAreas(PLOC_Slice arg) {
  if (PLOC_isSliceSlice(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasSliceWsAfterAreas(PLOC_Slice arg) {
  if (PLOC_isSliceSlice(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasSliceWsAfterBracketClose(PLOC_Slice arg) {
  if (PLOC_isSliceSlice(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

PLOC_OptLayout PLOC_getSliceWsAfterSlice(PLOC_Slice arg) {
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

PLOC_OptLayout PLOC_getSliceWsAfterParenOpen(PLOC_Slice arg) {
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
}

PLOC_StrCon PLOC_getSliceId(PLOC_Slice arg) {
  
    return (PLOC_StrCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4);
}

PLOC_OptLayout PLOC_getSliceWsAfterId(PLOC_Slice arg) {
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 5);
}

PLOC_OptLayout PLOC_getSliceWsAfterComma(PLOC_Slice arg) {
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 7);
}

PLOC_OptLayout PLOC_getSliceWsAfterBracketOpen(PLOC_Slice arg) {
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 9);
}

PLOC_AreaAreas PLOC_getSliceAreas(PLOC_Slice arg) {
  
    return (PLOC_AreaAreas)ATgetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 10), 1);
}

PLOC_OptLayout PLOC_getSliceWsAfterAreas(PLOC_Slice arg) {
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 11);
}

PLOC_OptLayout PLOC_getSliceWsAfterBracketClose(PLOC_Slice arg) {
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 13);
}

PLOC_Slice PLOC_setSliceWsAfterSlice(PLOC_Slice arg, PLOC_OptLayout wsAfterSlice) {
  if (PLOC_isSliceSlice(arg)) {
    return (PLOC_Slice)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterSlice), 1), 1);
  }

  ATabort("Slice has no WsAfterSlice: %t\n", arg);
  return (PLOC_Slice)NULL;
}

PLOC_Slice PLOC_setSliceWsAfterParenOpen(PLOC_Slice arg, PLOC_OptLayout wsAfterParenOpen) {
  if (PLOC_isSliceSlice(arg)) {
    return (PLOC_Slice)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterParenOpen), 3), 1);
  }

  ATabort("Slice has no WsAfterParenOpen: %t\n", arg);
  return (PLOC_Slice)NULL;
}

PLOC_Slice PLOC_setSliceId(PLOC_Slice arg, PLOC_StrCon id) {
  if (PLOC_isSliceSlice(arg)) {
    return (PLOC_Slice)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) id), 4), 1);
  }

  ATabort("Slice has no Id: %t\n", arg);
  return (PLOC_Slice)NULL;
}

PLOC_Slice PLOC_setSliceWsAfterId(PLOC_Slice arg, PLOC_OptLayout wsAfterId) {
  if (PLOC_isSliceSlice(arg)) {
    return (PLOC_Slice)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterId), 5), 1);
  }

  ATabort("Slice has no WsAfterId: %t\n", arg);
  return (PLOC_Slice)NULL;
}

PLOC_Slice PLOC_setSliceWsAfterComma(PLOC_Slice arg, PLOC_OptLayout wsAfterComma) {
  if (PLOC_isSliceSlice(arg)) {
    return (PLOC_Slice)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma), 7), 1);
  }

  ATabort("Slice has no WsAfterComma: %t\n", arg);
  return (PLOC_Slice)NULL;
}

PLOC_Slice PLOC_setSliceWsAfterBracketOpen(PLOC_Slice arg, PLOC_OptLayout wsAfterBracketOpen) {
  if (PLOC_isSliceSlice(arg)) {
    return (PLOC_Slice)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterBracketOpen), 9), 1);
  }

  ATabort("Slice has no WsAfterBracketOpen: %t\n", arg);
  return (PLOC_Slice)NULL;
}

PLOC_Slice PLOC_setSliceAreas(PLOC_Slice arg, PLOC_AreaAreas areas) {
  if (PLOC_isSliceSlice(arg)) {
    return (PLOC_Slice)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 10), (ATerm)((ATerm) areas), 1), 10), 1);
  }

  ATabort("Slice has no Areas: %t\n", arg);
  return (PLOC_Slice)NULL;
}

PLOC_Slice PLOC_setSliceWsAfterAreas(PLOC_Slice arg, PLOC_OptLayout wsAfterAreas) {
  if (PLOC_isSliceSlice(arg)) {
    return (PLOC_Slice)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterAreas), 11), 1);
  }

  ATabort("Slice has no WsAfterAreas: %t\n", arg);
  return (PLOC_Slice)NULL;
}

PLOC_Slice PLOC_setSliceWsAfterBracketClose(PLOC_Slice arg, PLOC_OptLayout wsAfterBracketClose) {
  if (PLOC_isSliceSlice(arg)) {
    return (PLOC_Slice)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterBracketClose), 13), 1);
  }

  ATabort("Slice has no WsAfterBracketClose: %t\n", arg);
  return (PLOC_Slice)NULL;
}

ATbool PLOC_isValidAreaAreas(PLOC_AreaAreas arg) {
  if (PLOC_isAreaAreasEmpty(arg)) {
    return ATtrue;
  }
  else if (PLOC_isAreaAreasSingle(arg)) {
    return ATtrue;
  }
  else if (PLOC_isAreaAreasMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

inline ATbool PLOC_isAreaAreasEmpty(PLOC_AreaAreas arg) {
  if (!ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PLOC_patternAreaAreasEmpty));
#endif
  return ATtrue;
}

inline ATbool PLOC_isAreaAreasSingle(PLOC_AreaAreas arg) {
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
      last_result = ATmatchTerm((ATerm)arg, PLOC_patternAreaAreasSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

inline ATbool PLOC_isAreaAreasMany(PLOC_AreaAreas arg) {
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
      last_result = ATmatchTerm((ATerm)arg, PLOC_patternAreaAreasMany, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

ATbool PLOC_hasAreaAreasHead(PLOC_AreaAreas arg) {
  if (PLOC_isAreaAreasSingle(arg)) {
    return ATtrue;
  }
  else if (PLOC_isAreaAreasMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasAreaAreasWsAfterHead(PLOC_AreaAreas arg) {
  if (PLOC_isAreaAreasMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasAreaAreasWsAfterSep(PLOC_AreaAreas arg) {
  if (PLOC_isAreaAreasMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

ATbool PLOC_hasAreaAreasTail(PLOC_AreaAreas arg) {
  if (PLOC_isAreaAreasMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

PLOC_AreaAreas PLOC_getAreaAreasTail(PLOC_AreaAreas arg) {
  assert(!PLOC_isAreaAreasEmpty(arg) && "getTail on an empty list");
  if (PLOC_isAreaAreasSingle(arg)) {
    return (PLOC_AreaAreas) PLOC_makeAreaAreasEmpty();
  }
  else {
  
    return (PLOC_AreaAreas)ATgetTail((ATermList)arg, 4);
  }
}

PLOC_Area PLOC_getAreaAreasHead(PLOC_AreaAreas arg) {
  if (PLOC_isAreaAreasSingle(arg)) {
    return (PLOC_Area)ATgetFirst((ATermList)arg);
  }
  else 
    return (PLOC_Area)ATgetFirst((ATermList)arg);
}

PLOC_OptLayout PLOC_getAreaAreasWsAfterHead(PLOC_AreaAreas arg) {
  
    return (PLOC_OptLayout)ATelementAt((ATermList)arg, 1);
}

PLOC_OptLayout PLOC_getAreaAreasWsAfterSep(PLOC_AreaAreas arg) {
  
    return (PLOC_OptLayout)ATelementAt((ATermList)arg, 3);
}

PLOC_AreaAreas PLOC_setAreaAreasHead(PLOC_AreaAreas arg, PLOC_Area head) {
  if (PLOC_isAreaAreasSingle(arg)) {
    return (PLOC_AreaAreas)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }
  else if (PLOC_isAreaAreasMany(arg)) {
    return (PLOC_AreaAreas)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }

  ATabort("AreaAreas has no Head: %t\n", arg);
  return (PLOC_AreaAreas)NULL;
}

PLOC_AreaAreas PLOC_setAreaAreasWsAfterHead(PLOC_AreaAreas arg, PLOC_OptLayout wsAfterHead) {
  if (PLOC_isAreaAreasMany(arg)) {
    return (PLOC_AreaAreas)ATreplace((ATermList)arg, (ATerm)((ATerm) wsAfterHead), 1);
  }

  ATabort("AreaAreas has no WsAfterHead: %t\n", arg);
  return (PLOC_AreaAreas)NULL;
}

PLOC_AreaAreas PLOC_setAreaAreasWsAfterSep(PLOC_AreaAreas arg, PLOC_OptLayout wsAfterSep) {
  if (PLOC_isAreaAreasMany(arg)) {
    return (PLOC_AreaAreas)ATreplace((ATermList)arg, (ATerm)((ATerm) wsAfterSep), 3);
  }

  ATabort("AreaAreas has no WsAfterSep: %t\n", arg);
  return (PLOC_AreaAreas)NULL;
}

PLOC_AreaAreas PLOC_setAreaAreasTail(PLOC_AreaAreas arg, PLOC_AreaAreas tail) {
  if (PLOC_isAreaAreasMany(arg)) {
    return (PLOC_AreaAreas)ATreplaceTail((ATermList)arg, (ATermList)((ATerm) tail), 4);
  }

  ATabort("AreaAreas has no Tail: %t\n", arg);
  return (PLOC_AreaAreas)NULL;
}

PLOC_OptLayout PLOC_visitOptLayout(PLOC_OptLayout arg, PLOC_Layout (*acceptLayout)(PLOC_Layout)) {
  if (PLOC_isOptLayoutAbsent(arg)) {
    return PLOC_makeOptLayoutAbsent();
  }
  if (PLOC_isOptLayoutPresent(arg)) {
    return PLOC_makeOptLayoutPresent(
        acceptLayout ? acceptLayout(PLOC_getOptLayoutLayout(arg)) : PLOC_getOptLayoutLayout(arg));
  }
  ATabort("not a OptLayout: %t\n", arg);
  return (PLOC_OptLayout)NULL;
}
PLOC_Layout PLOC_visitLayout(PLOC_Layout arg, PLOC_LexLayoutList (*acceptList)(PLOC_LexLayoutList)) {
  if (PLOC_isLayoutLexToCf(arg)) {
    return PLOC_makeLayoutLexToCf(
        acceptList ? acceptList(PLOC_getLayoutList(arg)) : PLOC_getLayoutList(arg));
  }
  ATabort("not a Layout: %t\n", arg);
  return (PLOC_Layout)NULL;
}
PLOC_LexLayoutList PLOC_visitLexLayoutList(PLOC_LexLayoutList arg, PLOC_LexLayout (*acceptHead)(PLOC_LexLayout)) {
  if (PLOC_isLexLayoutListEmpty(arg)) {
    return PLOC_makeLexLayoutListEmpty();
  }
  if (PLOC_isLexLayoutListSingle(arg)) {
    return PLOC_makeLexLayoutListSingle(
        acceptHead ? acceptHead(PLOC_getLexLayoutListHead(arg)) : PLOC_getLexLayoutListHead(arg));
  }
  if (PLOC_isLexLayoutListMany(arg)) {
    return PLOC_makeLexLayoutListMany(
        acceptHead ? acceptHead(PLOC_getLexLayoutListHead(arg)) : PLOC_getLexLayoutListHead(arg),
        PLOC_visitLexLayoutList(PLOC_getLexLayoutListTail(arg), acceptHead));
  }
  ATabort("not a LexLayoutList: %t\n", arg);
  return (PLOC_LexLayoutList)NULL;
}
PLOC_LexStrChar PLOC_visitLexStrChar(PLOC_LexStrChar arg, char (*acceptA)(char), char (*acceptB)(char), char (*acceptC)(char), char (*acceptCh)(char)) {
  if (PLOC_isLexStrCharNewline(arg)) {
    return PLOC_makeLexStrCharNewline();
  }
  if (PLOC_isLexStrCharTab(arg)) {
    return PLOC_makeLexStrCharTab();
  }
  if (PLOC_isLexStrCharQuote(arg)) {
    return PLOC_makeLexStrCharQuote();
  }
  if (PLOC_isLexStrCharBackslash(arg)) {
    return PLOC_makeLexStrCharBackslash();
  }
  if (PLOC_isLexStrCharDecimal(arg)) {
    return PLOC_makeLexStrCharDecimal(
        acceptA ? acceptA(PLOC_getLexStrCharA(arg)) : PLOC_getLexStrCharA(arg),
        acceptB ? acceptB(PLOC_getLexStrCharB(arg)) : PLOC_getLexStrCharB(arg),
        acceptC ? acceptC(PLOC_getLexStrCharC(arg)) : PLOC_getLexStrCharC(arg));
  }
  if (PLOC_isLexStrCharNormal(arg)) {
    return PLOC_makeLexStrCharNormal(
        acceptCh ? acceptCh(PLOC_getLexStrCharCh(arg)) : PLOC_getLexStrCharCh(arg));
  }
  ATabort("not a LexStrChar: %t\n", arg);
  return (PLOC_LexStrChar)NULL;
}
PLOC_StrChar PLOC_visitStrChar(PLOC_StrChar arg, PLOC_LexStrChar (*acceptStrChar)(PLOC_LexStrChar)) {
  if (PLOC_isStrCharLexToCf(arg)) {
    return PLOC_makeStrCharLexToCf(
        acceptStrChar ? acceptStrChar(PLOC_getStrCharStrChar(arg)) : PLOC_getStrCharStrChar(arg));
  }
  ATabort("not a StrChar: %t\n", arg);
  return (PLOC_StrChar)NULL;
}
PLOC_LexStrCon PLOC_visitLexStrCon(PLOC_LexStrCon arg, PLOC_LexStrCharChars (*acceptChars)(PLOC_LexStrCharChars)) {
  if (PLOC_isLexStrConDefault(arg)) {
    return PLOC_makeLexStrConDefault(
        acceptChars ? acceptChars(PLOC_getLexStrConChars(arg)) : PLOC_getLexStrConChars(arg));
  }
  ATabort("not a LexStrCon: %t\n", arg);
  return (PLOC_LexStrCon)NULL;
}
PLOC_StrCon PLOC_visitStrCon(PLOC_StrCon arg, PLOC_LexStrCon (*acceptStrCon)(PLOC_LexStrCon)) {
  if (PLOC_isStrConLexToCf(arg)) {
    return PLOC_makeStrConLexToCf(
        acceptStrCon ? acceptStrCon(PLOC_getStrConStrCon(arg)) : PLOC_getStrConStrCon(arg));
  }
  ATabort("not a StrCon: %t\n", arg);
  return (PLOC_StrCon)NULL;
}
PLOC_LexStrCharChars PLOC_visitLexStrCharChars(PLOC_LexStrCharChars arg, PLOC_LexStrChar (*acceptHead)(PLOC_LexStrChar)) {
  if (PLOC_isLexStrCharCharsEmpty(arg)) {
    return PLOC_makeLexStrCharCharsEmpty();
  }
  if (PLOC_isLexStrCharCharsSingle(arg)) {
    return PLOC_makeLexStrCharCharsSingle(
        acceptHead ? acceptHead(PLOC_getLexStrCharCharsHead(arg)) : PLOC_getLexStrCharCharsHead(arg));
  }
  if (PLOC_isLexStrCharCharsMany(arg)) {
    return PLOC_makeLexStrCharCharsMany(
        acceptHead ? acceptHead(PLOC_getLexStrCharCharsHead(arg)) : PLOC_getLexStrCharCharsHead(arg),
        PLOC_visitLexStrCharChars(PLOC_getLexStrCharCharsTail(arg), acceptHead));
  }
  ATabort("not a LexStrCharChars: %t\n", arg);
  return (PLOC_LexStrCharChars)NULL;
}
PLOC_LexNatCon PLOC_visitLexNatCon(PLOC_LexNatCon arg, char* (*acceptList)(char*)) {
  if (PLOC_isLexNatConDigits(arg)) {
    return PLOC_makeLexNatConDigits(
        acceptList ? acceptList(PLOC_getLexNatConList(arg)) : PLOC_getLexNatConList(arg));
  }
  ATabort("not a LexNatCon: %t\n", arg);
  return (PLOC_LexNatCon)NULL;
}
PLOC_NatCon PLOC_visitNatCon(PLOC_NatCon arg, PLOC_LexNatCon (*acceptNatCon)(PLOC_LexNatCon)) {
  if (PLOC_isNatConLexToCf(arg)) {
    return PLOC_makeNatConLexToCf(
        acceptNatCon ? acceptNatCon(PLOC_getNatConNatCon(arg)) : PLOC_getNatConNatCon(arg));
  }
  ATabort("not a NatCon: %t\n", arg);
  return (PLOC_NatCon)NULL;
}
PLOC_LexLayout PLOC_visitLexLayout(PLOC_LexLayout arg, char (*acceptCh)(char)) {
  if (PLOC_isLexLayoutWhitespace(arg)) {
    return PLOC_makeLexLayoutWhitespace(
        acceptCh ? acceptCh(PLOC_getLexLayoutCh(arg)) : PLOC_getLexLayoutCh(arg));
  }
  ATabort("not a LexLayout: %t\n", arg);
  return (PLOC_LexLayout)NULL;
}
PLOC_Location PLOC_visitLocation(PLOC_Location arg, PLOC_OptLayout (*acceptWsAfterFile)(PLOC_OptLayout), PLOC_OptLayout (*acceptWsAfterParenOpen)(PLOC_OptLayout), PLOC_StrCon (*acceptFilename)(PLOC_StrCon), PLOC_OptLayout (*acceptWsAfterFilename)(PLOC_OptLayout), PLOC_OptLayout (*acceptWsAfterA)(PLOC_OptLayout), PLOC_Area (*acceptArea)(PLOC_Area), PLOC_OptLayout (*acceptWsAfterArea)(PLOC_OptLayout), PLOC_OptLayout (*acceptWsAfterAreaInFile)(PLOC_OptLayout), PLOC_OptLayout (*acceptWsAfterComma)(PLOC_OptLayout)) {
  if (PLOC_isLocationFile(arg)) {
    return PLOC_makeLocationFile(
        acceptWsAfterFile ? acceptWsAfterFile(PLOC_getLocationWsAfterFile(arg)) : PLOC_getLocationWsAfterFile(arg),
        acceptWsAfterParenOpen ? acceptWsAfterParenOpen(PLOC_getLocationWsAfterParenOpen(arg)) : PLOC_getLocationWsAfterParenOpen(arg),
        acceptFilename ? acceptFilename(PLOC_getLocationFilename(arg)) : PLOC_getLocationFilename(arg),
        acceptWsAfterFilename ? acceptWsAfterFilename(PLOC_getLocationWsAfterFilename(arg)) : PLOC_getLocationWsAfterFilename(arg));
  }
  if (PLOC_isLocationArea(arg)) {
    return PLOC_makeLocationArea(
        acceptWsAfterA ? acceptWsAfterA(PLOC_getLocationWsAfterA(arg)) : PLOC_getLocationWsAfterA(arg),
        acceptWsAfterParenOpen ? acceptWsAfterParenOpen(PLOC_getLocationWsAfterParenOpen(arg)) : PLOC_getLocationWsAfterParenOpen(arg),
        acceptArea ? acceptArea(PLOC_getLocationArea(arg)) : PLOC_getLocationArea(arg),
        acceptWsAfterArea ? acceptWsAfterArea(PLOC_getLocationWsAfterArea(arg)) : PLOC_getLocationWsAfterArea(arg));
  }
  if (PLOC_isLocationAreaInFile(arg)) {
    return PLOC_makeLocationAreaInFile(
        acceptWsAfterAreaInFile ? acceptWsAfterAreaInFile(PLOC_getLocationWsAfterAreaInFile(arg)) : PLOC_getLocationWsAfterAreaInFile(arg),
        acceptWsAfterParenOpen ? acceptWsAfterParenOpen(PLOC_getLocationWsAfterParenOpen(arg)) : PLOC_getLocationWsAfterParenOpen(arg),
        acceptFilename ? acceptFilename(PLOC_getLocationFilename(arg)) : PLOC_getLocationFilename(arg),
        acceptWsAfterFilename ? acceptWsAfterFilename(PLOC_getLocationWsAfterFilename(arg)) : PLOC_getLocationWsAfterFilename(arg),
        acceptWsAfterComma ? acceptWsAfterComma(PLOC_getLocationWsAfterComma(arg)) : PLOC_getLocationWsAfterComma(arg),
        acceptArea ? acceptArea(PLOC_getLocationArea(arg)) : PLOC_getLocationArea(arg),
        acceptWsAfterArea ? acceptWsAfterArea(PLOC_getLocationWsAfterArea(arg)) : PLOC_getLocationWsAfterArea(arg));
  }
  ATabort("not a Location: %t\n", arg);
  return (PLOC_Location)NULL;
}
PLOC_Area PLOC_visitArea(PLOC_Area arg, PLOC_OptLayout (*acceptWsAfterArea)(PLOC_OptLayout), PLOC_OptLayout (*acceptWsAfterParenOpen)(PLOC_OptLayout), PLOC_NatCon (*acceptBeginLine)(PLOC_NatCon), PLOC_OptLayout (*acceptWsAfterBeginLine)(PLOC_OptLayout), PLOC_OptLayout (*acceptWsAfterComma)(PLOC_OptLayout), PLOC_NatCon (*acceptBeginColumn)(PLOC_NatCon), PLOC_OptLayout (*acceptWsAfterBeginColumn)(PLOC_OptLayout), PLOC_OptLayout (*acceptWsAfterComma1)(PLOC_OptLayout), PLOC_NatCon (*acceptEndLine)(PLOC_NatCon), PLOC_OptLayout (*acceptWsAfterEndLine)(PLOC_OptLayout), PLOC_OptLayout (*acceptWsAfterComma2)(PLOC_OptLayout), PLOC_NatCon (*acceptEndColumn)(PLOC_NatCon), PLOC_OptLayout (*acceptWsAfterEndColumn)(PLOC_OptLayout), PLOC_OptLayout (*acceptWsAfterComma3)(PLOC_OptLayout), PLOC_NatCon (*acceptOffset)(PLOC_NatCon), PLOC_OptLayout (*acceptWsAfterOffset)(PLOC_OptLayout), PLOC_OptLayout (*acceptWsAfterComma4)(PLOC_OptLayout), PLOC_NatCon (*acceptLength)(PLOC_NatCon), PLOC_OptLayout (*acceptWsAfterLength)(PLOC_OptLayout)) {
  if (PLOC_isAreaArea(arg)) {
    return PLOC_makeAreaArea(
        acceptWsAfterArea ? acceptWsAfterArea(PLOC_getAreaWsAfterArea(arg)) : PLOC_getAreaWsAfterArea(arg),
        acceptWsAfterParenOpen ? acceptWsAfterParenOpen(PLOC_getAreaWsAfterParenOpen(arg)) : PLOC_getAreaWsAfterParenOpen(arg),
        acceptBeginLine ? acceptBeginLine(PLOC_getAreaBeginLine(arg)) : PLOC_getAreaBeginLine(arg),
        acceptWsAfterBeginLine ? acceptWsAfterBeginLine(PLOC_getAreaWsAfterBeginLine(arg)) : PLOC_getAreaWsAfterBeginLine(arg),
        acceptWsAfterComma ? acceptWsAfterComma(PLOC_getAreaWsAfterComma(arg)) : PLOC_getAreaWsAfterComma(arg),
        acceptBeginColumn ? acceptBeginColumn(PLOC_getAreaBeginColumn(arg)) : PLOC_getAreaBeginColumn(arg),
        acceptWsAfterBeginColumn ? acceptWsAfterBeginColumn(PLOC_getAreaWsAfterBeginColumn(arg)) : PLOC_getAreaWsAfterBeginColumn(arg),
        acceptWsAfterComma1 ? acceptWsAfterComma1(PLOC_getAreaWsAfterComma1(arg)) : PLOC_getAreaWsAfterComma1(arg),
        acceptEndLine ? acceptEndLine(PLOC_getAreaEndLine(arg)) : PLOC_getAreaEndLine(arg),
        acceptWsAfterEndLine ? acceptWsAfterEndLine(PLOC_getAreaWsAfterEndLine(arg)) : PLOC_getAreaWsAfterEndLine(arg),
        acceptWsAfterComma2 ? acceptWsAfterComma2(PLOC_getAreaWsAfterComma2(arg)) : PLOC_getAreaWsAfterComma2(arg),
        acceptEndColumn ? acceptEndColumn(PLOC_getAreaEndColumn(arg)) : PLOC_getAreaEndColumn(arg),
        acceptWsAfterEndColumn ? acceptWsAfterEndColumn(PLOC_getAreaWsAfterEndColumn(arg)) : PLOC_getAreaWsAfterEndColumn(arg),
        acceptWsAfterComma3 ? acceptWsAfterComma3(PLOC_getAreaWsAfterComma3(arg)) : PLOC_getAreaWsAfterComma3(arg),
        acceptOffset ? acceptOffset(PLOC_getAreaOffset(arg)) : PLOC_getAreaOffset(arg),
        acceptWsAfterOffset ? acceptWsAfterOffset(PLOC_getAreaWsAfterOffset(arg)) : PLOC_getAreaWsAfterOffset(arg),
        acceptWsAfterComma4 ? acceptWsAfterComma4(PLOC_getAreaWsAfterComma4(arg)) : PLOC_getAreaWsAfterComma4(arg),
        acceptLength ? acceptLength(PLOC_getAreaLength(arg)) : PLOC_getAreaLength(arg),
        acceptWsAfterLength ? acceptWsAfterLength(PLOC_getAreaWsAfterLength(arg)) : PLOC_getAreaWsAfterLength(arg));
  }
  ATabort("not a Area: %t\n", arg);
  return (PLOC_Area)NULL;
}
PLOC_Slice PLOC_visitSlice(PLOC_Slice arg, PLOC_OptLayout (*acceptWsAfterSlice)(PLOC_OptLayout), PLOC_OptLayout (*acceptWsAfterParenOpen)(PLOC_OptLayout), PLOC_StrCon (*acceptId)(PLOC_StrCon), PLOC_OptLayout (*acceptWsAfterId)(PLOC_OptLayout), PLOC_OptLayout (*acceptWsAfterComma)(PLOC_OptLayout), PLOC_OptLayout (*acceptWsAfterBracketOpen)(PLOC_OptLayout), PLOC_AreaAreas (*acceptAreas)(PLOC_AreaAreas), PLOC_OptLayout (*acceptWsAfterAreas)(PLOC_OptLayout), PLOC_OptLayout (*acceptWsAfterBracketClose)(PLOC_OptLayout)) {
  if (PLOC_isSliceSlice(arg)) {
    return PLOC_makeSliceSlice(
        acceptWsAfterSlice ? acceptWsAfterSlice(PLOC_getSliceWsAfterSlice(arg)) : PLOC_getSliceWsAfterSlice(arg),
        acceptWsAfterParenOpen ? acceptWsAfterParenOpen(PLOC_getSliceWsAfterParenOpen(arg)) : PLOC_getSliceWsAfterParenOpen(arg),
        acceptId ? acceptId(PLOC_getSliceId(arg)) : PLOC_getSliceId(arg),
        acceptWsAfterId ? acceptWsAfterId(PLOC_getSliceWsAfterId(arg)) : PLOC_getSliceWsAfterId(arg),
        acceptWsAfterComma ? acceptWsAfterComma(PLOC_getSliceWsAfterComma(arg)) : PLOC_getSliceWsAfterComma(arg),
        acceptWsAfterBracketOpen ? acceptWsAfterBracketOpen(PLOC_getSliceWsAfterBracketOpen(arg)) : PLOC_getSliceWsAfterBracketOpen(arg),
        acceptAreas ? acceptAreas(PLOC_getSliceAreas(arg)) : PLOC_getSliceAreas(arg),
        acceptWsAfterAreas ? acceptWsAfterAreas(PLOC_getSliceWsAfterAreas(arg)) : PLOC_getSliceWsAfterAreas(arg),
        acceptWsAfterBracketClose ? acceptWsAfterBracketClose(PLOC_getSliceWsAfterBracketClose(arg)) : PLOC_getSliceWsAfterBracketClose(arg));
  }
  ATabort("not a Slice: %t\n", arg);
  return (PLOC_Slice)NULL;
}
PLOC_AreaAreas PLOC_visitAreaAreas(PLOC_AreaAreas arg, PLOC_Area (*acceptHead)(PLOC_Area), PLOC_OptLayout (*acceptWsAfterHead)(PLOC_OptLayout), PLOC_OptLayout (*acceptWsAfterSep)(PLOC_OptLayout)) {
  if (PLOC_isAreaAreasEmpty(arg)) {
    return PLOC_makeAreaAreasEmpty();
  }
  if (PLOC_isAreaAreasSingle(arg)) {
    return PLOC_makeAreaAreasSingle(
        acceptHead ? acceptHead(PLOC_getAreaAreasHead(arg)) : PLOC_getAreaAreasHead(arg));
  }
  if (PLOC_isAreaAreasMany(arg)) {
    return PLOC_makeAreaAreasMany(
        acceptHead ? acceptHead(PLOC_getAreaAreasHead(arg)) : PLOC_getAreaAreasHead(arg),
        acceptWsAfterHead ? acceptWsAfterHead(PLOC_getAreaAreasWsAfterHead(arg)) : PLOC_getAreaAreasWsAfterHead(arg),
        acceptWsAfterSep ? acceptWsAfterSep(PLOC_getAreaAreasWsAfterSep(arg)) : PLOC_getAreaAreasWsAfterSep(arg),
        PLOC_visitAreaAreas(PLOC_getAreaAreasTail(arg), acceptHead, acceptWsAfterHead, acceptWsAfterSep));
  }
  ATabort("not a AreaAreas: %t\n", arg);
  return (PLOC_AreaAreas)NULL;
}

