#include <assert.h>

#include <aterm2.h>
#include <deprecated.h>
#include "ParsedLocation.h"

/*{{{  conversion functions */

ATerm PLOC_stringToChars(const char *str)
{
  int len = strlen(str);
  int i;
  ATermList result = ATempty;

  for (i = len - 1; i >= 0; i--) {
    result = ATinsert(result, (ATerm) ATmakeInt(str[i]));
  }

  return (ATerm) result;
}

char *PLOC_charsToString(ATerm arg)
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

typedef struct ATerm _PLOC_Normal;
typedef struct ATerm _PLOC_Escaped;
typedef struct ATerm _PLOC_StrCon;
typedef struct ATerm _PLOC_NatCon;
typedef struct ATerm _PLOC_Location;
typedef struct ATerm _PLOC_Area;
typedef struct ATerm _PLOC_Start;
typedef struct ATerm _PLOC_OptLayout;

/*}}}  */

/*{{{  void PLOC_initParsedLocationApi(void) */

void PLOC_initParsedLocationApi(void)
{
  init_ParsedLocation_dict();
}

/*}}}  */

/*{{{  protect functions */

void PLOC_protectNormal(PLOC_Normal *arg)
{
  ATprotect((ATerm*)((void*) arg));
}

void PLOC_protectEscaped(PLOC_Escaped *arg)
{
  ATprotect((ATerm*)((void*) arg));
}

void PLOC_protectStrCon(PLOC_StrCon *arg)
{
  ATprotect((ATerm*)((void*) arg));
}

void PLOC_protectNatCon(PLOC_NatCon *arg)
{
  ATprotect((ATerm*)((void*) arg));
}

void PLOC_protectLocation(PLOC_Location *arg)
{
  ATprotect((ATerm*)((void*) arg));
}

void PLOC_protectArea(PLOC_Area *arg)
{
  ATprotect((ATerm*)((void*) arg));
}

void PLOC_protectStart(PLOC_Start *arg)
{
  ATprotect((ATerm*)((void*) arg));
}

void PLOC_protectOptLayout(PLOC_OptLayout *arg)
{
  ATprotect((ATerm*)((void*) arg));
}


/*}}}  */
/*{{{  term conversion functions */

/*{{{  PLOC_Normal PLOC_NormalFromTerm(ATerm t) */

PLOC_Normal PLOC_NormalFromTerm(ATerm t)
{
  return (PLOC_Normal)t;
}

/*}}}  */
/*{{{  ATerm PLOC_NormalToTerm(PLOC_Normal arg) */

ATerm PLOC_NormalToTerm(PLOC_Normal arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  PLOC_Escaped PLOC_EscapedFromTerm(ATerm t) */

PLOC_Escaped PLOC_EscapedFromTerm(ATerm t)
{
  return (PLOC_Escaped)t;
}

/*}}}  */
/*{{{  ATerm PLOC_EscapedToTerm(PLOC_Escaped arg) */

ATerm PLOC_EscapedToTerm(PLOC_Escaped arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  PLOC_StrCon PLOC_StrConFromTerm(ATerm t) */

PLOC_StrCon PLOC_StrConFromTerm(ATerm t)
{
  return (PLOC_StrCon)t;
}

/*}}}  */
/*{{{  ATerm PLOC_StrConToTerm(PLOC_StrCon arg) */

ATerm PLOC_StrConToTerm(PLOC_StrCon arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  PLOC_NatCon PLOC_NatConFromTerm(ATerm t) */

PLOC_NatCon PLOC_NatConFromTerm(ATerm t)
{
  return (PLOC_NatCon)t;
}

/*}}}  */
/*{{{  ATerm PLOC_NatConToTerm(PLOC_NatCon arg) */

ATerm PLOC_NatConToTerm(PLOC_NatCon arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  PLOC_Location PLOC_LocationFromTerm(ATerm t) */

PLOC_Location PLOC_LocationFromTerm(ATerm t)
{
  return (PLOC_Location)t;
}

/*}}}  */
/*{{{  ATerm PLOC_LocationToTerm(PLOC_Location arg) */

ATerm PLOC_LocationToTerm(PLOC_Location arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  PLOC_Area PLOC_AreaFromTerm(ATerm t) */

PLOC_Area PLOC_AreaFromTerm(ATerm t)
{
  return (PLOC_Area)t;
}

/*}}}  */
/*{{{  ATerm PLOC_AreaToTerm(PLOC_Area arg) */

ATerm PLOC_AreaToTerm(PLOC_Area arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  PLOC_Start PLOC_StartFromTerm(ATerm t) */

PLOC_Start PLOC_StartFromTerm(ATerm t)
{
  return (PLOC_Start)t;
}

/*}}}  */
/*{{{  ATerm PLOC_StartToTerm(PLOC_Start arg) */

ATerm PLOC_StartToTerm(PLOC_Start arg)
{
  return (ATerm)arg;
}

/*}}}  */
/*{{{  PLOC_OptLayout PLOC_OptLayoutFromTerm(ATerm t) */

PLOC_OptLayout PLOC_OptLayoutFromTerm(ATerm t)
{
  return (PLOC_OptLayout)t;
}

/*}}}  */
/*{{{  ATerm PLOC_OptLayoutToTerm(PLOC_OptLayout arg) */

ATerm PLOC_OptLayoutToTerm(PLOC_OptLayout arg)
{
  return (ATerm)arg;
}

/*}}}  */

/*}}}  */
/*{{{  list functions */


/*}}}  */
/*{{{  constructors */

/*{{{  PLOC_Normal PLOC_makeNormalDefault(const char* string) */

PLOC_Normal PLOC_makeNormalDefault(const char* string)
{
  return (PLOC_Normal)(ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4))), (ATerm)ATmakeAppl0(PLOC_afun6)), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl1(PLOC_afun7, (ATerm)ATmakeAppl1(PLOC_afun8, (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PLOC_afun10, (ATerm)ATmakeInt(0), (ATerm)ATmakeInt(255)))))), (ATerm) ((ATerm) PLOC_stringToChars(string)))));
}

/*}}}  */
/*{{{  PLOC_Escaped PLOC_makeEscapedSpecialCharacter(const char* string) */

PLOC_Escaped PLOC_makeEscapedSpecialCharacter(const char* string)
{
  return (PLOC_Escaped)(ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun11)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun11))), (ATerm)ATmakeAppl0(PLOC_afun6)), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl1(PLOC_afun7, (ATerm)ATmakeAppl1(PLOC_afun8, (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PLOC_afun10, (ATerm)ATmakeInt(0), (ATerm)ATmakeInt(255)))))), (ATerm) ((ATerm) PLOC_stringToChars(string)))));
}

/*}}}  */
/*{{{  PLOC_Escaped PLOC_makeEscapedOctal(const char* string) */

PLOC_Escaped PLOC_makeEscapedOctal(const char* string)
{
  return (PLOC_Escaped)(ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun11)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun11))), (ATerm)ATmakeAppl0(PLOC_afun6)), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl1(PLOC_afun7, (ATerm)ATmakeAppl1(PLOC_afun8, (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PLOC_afun10, (ATerm)ATmakeInt(0), (ATerm)ATmakeInt(255)))))), (ATerm) ((ATerm) PLOC_stringToChars(string)))));
}

/*}}}  */
/*{{{  PLOC_StrCon PLOC_makeStrConDefault(const char* string) */

PLOC_StrCon PLOC_makeStrConDefault(const char* string)
{
  return (PLOC_StrCon)(ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun12)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun12))), (ATerm)ATmakeAppl0(PLOC_afun6)), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl1(PLOC_afun7, (ATerm)ATmakeAppl1(PLOC_afun8, (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PLOC_afun10, (ATerm)ATmakeInt(0), (ATerm)ATmakeInt(255)))))), (ATerm) ((ATerm) PLOC_stringToChars(string)))));
}

/*}}}  */
/*{{{  PLOC_NatCon PLOC_makeNatConDefault(const char* string) */

PLOC_NatCon PLOC_makeNatConDefault(const char* string)
{
  return (PLOC_NatCon)(ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun2, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun13)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun13))), (ATerm)ATmakeAppl0(PLOC_afun6)), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl1(PLOC_afun7, (ATerm)ATmakeAppl1(PLOC_afun8, (ATerm)ATmakeAppl1(PLOC_afun9, (ATerm)ATmakeList1((ATerm)ATmakeAppl2(PLOC_afun10, (ATerm)ATmakeInt(0), (ATerm)ATmakeInt(255)))))), (ATerm) ((ATerm) PLOC_stringToChars(string)))));
}

/*}}}  */
/*{{{  PLOC_Location PLOC_makeLocationFile(PLOC_OptLayout wsAfterFile, PLOC_OptLayout wsAfterParenOpen, PLOC_StrCon filename, PLOC_OptLayout wsAfterFilename) */

PLOC_Location PLOC_makeLocationFile(PLOC_OptLayout wsAfterFile, PLOC_OptLayout wsAfterParenOpen, PLOC_StrCon filename, PLOC_OptLayout wsAfterFilename)
{
  return (PLOC_Location)(ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl0(PLOC_afun15))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun12)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17)))), (ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl0(PLOC_afun18))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17)))), (ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl0(PLOC_afun19))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun20))), (ATerm)ATmakeAppl1(PLOC_afun21, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun22, (ATerm)ATmakeAppl1(PLOC_afun23, (ATerm)ATmakeAppl0(PLOC_afun19)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl0(PLOC_afun15))), (ATerm) wsAfterFilename), (ATerm) filename), (ATerm) wsAfterParenOpen), (ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl0(PLOC_afun18))), (ATerm) wsAfterFile), (ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl0(PLOC_afun19))));
}

/*}}}  */
/*{{{  PLOC_Location PLOC_makeLocationAreaInFile(PLOC_OptLayout wsAfterAreaInFile, PLOC_OptLayout wsAfterParenOpen, PLOC_StrCon filename, PLOC_OptLayout wsAfterFilename, PLOC_OptLayout wsAfterComma, PLOC_Area Area, PLOC_OptLayout wsAfterArea) */

PLOC_Location PLOC_makeLocationAreaInFile(PLOC_OptLayout wsAfterAreaInFile, PLOC_OptLayout wsAfterParenOpen, PLOC_StrCon filename, PLOC_OptLayout wsAfterFilename, PLOC_OptLayout wsAfterComma, PLOC_Area Area, PLOC_OptLayout wsAfterArea)
{
  return (PLOC_Location)(ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl0(PLOC_afun15))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun24)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17)))), (ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl0(PLOC_afun25))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun12)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17)))), (ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl0(PLOC_afun18))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17)))), (ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl0(PLOC_afun26))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun20))), (ATerm)ATmakeAppl1(PLOC_afun21, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun22, (ATerm)ATmakeAppl1(PLOC_afun23, (ATerm)ATmakeAppl0(PLOC_afun26)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl0(PLOC_afun15))), (ATerm) wsAfterArea), (ATerm) Area), (ATerm) wsAfterComma), (ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl0(PLOC_afun25))), (ATerm) wsAfterFilename), (ATerm) filename), (ATerm) wsAfterParenOpen), (ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl0(PLOC_afun18))), (ATerm) wsAfterAreaInFile), (ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl0(PLOC_afun26))));
}

/*}}}  */
/*{{{  PLOC_Area PLOC_makeAreaArea(PLOC_OptLayout wsAfterArea, PLOC_OptLayout wsAfterParenOpen, PLOC_NatCon beginLine, PLOC_OptLayout wsAfterBeginLine, PLOC_OptLayout wsAfterComma, PLOC_NatCon beginColumn, PLOC_OptLayout wsAfterBeginColumn, PLOC_OptLayout wsAfterComma1, PLOC_NatCon endLine, PLOC_OptLayout wsAfterEndLine, PLOC_OptLayout wsAfterComma2, PLOC_NatCon endColumn, PLOC_OptLayout wsAfterEndColumn, PLOC_OptLayout wsAfterComma3, PLOC_NatCon offset, PLOC_OptLayout wsAfterOffset, PLOC_OptLayout wsAfterComma4, PLOC_NatCon length, PLOC_OptLayout wsAfterLength) */

PLOC_Area PLOC_makeAreaArea(PLOC_OptLayout wsAfterArea, PLOC_OptLayout wsAfterParenOpen, PLOC_NatCon beginLine, PLOC_OptLayout wsAfterBeginLine, PLOC_OptLayout wsAfterComma, PLOC_NatCon beginColumn, PLOC_OptLayout wsAfterBeginColumn, PLOC_OptLayout wsAfterComma1, PLOC_NatCon endLine, PLOC_OptLayout wsAfterEndLine, PLOC_OptLayout wsAfterComma2, PLOC_NatCon endColumn, PLOC_OptLayout wsAfterEndColumn, PLOC_OptLayout wsAfterComma3, PLOC_NatCon offset, PLOC_OptLayout wsAfterOffset, PLOC_OptLayout wsAfterComma4, PLOC_NatCon length, PLOC_OptLayout wsAfterLength)
{
  return (PLOC_Area)(ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl0(PLOC_afun15))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun13)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17)))), (ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl0(PLOC_afun25))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun13)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17)))), (ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl0(PLOC_afun25))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun13)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17)))), (ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl0(PLOC_afun25))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun13)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17)))), (ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl0(PLOC_afun25))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun13)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17)))), (ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl0(PLOC_afun25))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun13)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17)))), (ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl0(PLOC_afun18))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17)))), (ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl0(PLOC_afun27))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun24))), (ATerm)ATmakeAppl1(PLOC_afun21, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun22, (ATerm)ATmakeAppl1(PLOC_afun23, (ATerm)ATmakeAppl0(PLOC_afun27)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl0(PLOC_afun15))), (ATerm) wsAfterLength), (ATerm) length), (ATerm) wsAfterComma4), (ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl0(PLOC_afun25))), (ATerm) wsAfterOffset), (ATerm) offset), (ATerm) wsAfterComma3), (ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl0(PLOC_afun25))), (ATerm) wsAfterEndColumn), (ATerm) endColumn), (ATerm) wsAfterComma2), (ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl0(PLOC_afun25))), (ATerm) wsAfterEndLine), (ATerm) endLine), (ATerm) wsAfterComma1), (ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl0(PLOC_afun25))), (ATerm) wsAfterBeginColumn), (ATerm) beginColumn), (ATerm) wsAfterComma), (ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl0(PLOC_afun25))), (ATerm) wsAfterBeginLine), (ATerm) beginLine), (ATerm) wsAfterParenOpen), (ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl0(PLOC_afun18))), (ATerm) wsAfterArea), (ATerm)ATmakeAppl1(PLOC_afun14, (ATerm)ATmakeAppl0(PLOC_afun27))));
}

/*}}}  */
/*{{{  PLOC_Start PLOC_makeStartArea(PLOC_OptLayout wsBefore, PLOC_Area topArea, PLOC_OptLayout wsAfter, int ambCnt) */

PLOC_Start PLOC_makeStartArea(PLOC_OptLayout wsBefore, PLOC_Area topArea, PLOC_OptLayout wsAfter, int ambCnt)
{
  return (PLOC_Start)(ATerm)ATmakeAppl2(PLOC_afun28, (ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun24)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17)))), (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun29)), (ATerm)ATmakeAppl0(PLOC_afun6)), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm) wsAfter), (ATerm) topArea), (ATerm) wsBefore)), (ATerm) (ATerm) ATmakeInt(ambCnt));
}

/*}}}  */
/*{{{  PLOC_Start PLOC_makeStartLocation(PLOC_OptLayout wsBefore, PLOC_Location topLocation, PLOC_OptLayout wsAfter, int ambCnt) */

PLOC_Start PLOC_makeStartLocation(PLOC_OptLayout wsBefore, PLOC_Location topLocation, PLOC_OptLayout wsAfter, int ambCnt)
{
  return (PLOC_Start)(ATerm)ATmakeAppl2(PLOC_afun28, (ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun20)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17)))), (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun29)), (ATerm)ATmakeAppl0(PLOC_afun6)), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm) wsAfter), (ATerm) topLocation), (ATerm) wsBefore)), (ATerm) (ATerm) ATmakeInt(ambCnt));
}

/*}}}  */
/*{{{  PLOC_Start PLOC_makeStartNatCon(PLOC_OptLayout wsBefore, PLOC_NatCon topNatCon, PLOC_OptLayout wsAfter, int ambCnt) */

PLOC_Start PLOC_makeStartNatCon(PLOC_OptLayout wsBefore, PLOC_NatCon topNatCon, PLOC_OptLayout wsAfter, int ambCnt)
{
  return (PLOC_Start)(ATerm)ATmakeAppl2(PLOC_afun28, (ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun13)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17)))), (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun29)), (ATerm)ATmakeAppl0(PLOC_afun6)), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm) wsAfter), (ATerm) topNatCon), (ATerm) wsBefore)), (ATerm) (ATerm) ATmakeInt(ambCnt));
}

/*}}}  */
/*{{{  PLOC_Start PLOC_makeStartEscaped(PLOC_OptLayout wsBefore, PLOC_Escaped topEscaped, PLOC_OptLayout wsAfter, int ambCnt) */

PLOC_Start PLOC_makeStartEscaped(PLOC_OptLayout wsBefore, PLOC_Escaped topEscaped, PLOC_OptLayout wsAfter, int ambCnt)
{
  return (PLOC_Start)(ATerm)ATmakeAppl2(PLOC_afun28, (ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun11)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17)))), (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun29)), (ATerm)ATmakeAppl0(PLOC_afun6)), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm) wsAfter), (ATerm) topEscaped), (ATerm) wsBefore)), (ATerm) (ATerm) ATmakeInt(ambCnt));
}

/*}}}  */
/*{{{  PLOC_Start PLOC_makeStartNormal(PLOC_OptLayout wsBefore, PLOC_Normal topNormal, PLOC_OptLayout wsAfter, int ambCnt) */

PLOC_Start PLOC_makeStartNormal(PLOC_OptLayout wsBefore, PLOC_Normal topNormal, PLOC_OptLayout wsAfter, int ambCnt)
{
  return (PLOC_Start)(ATerm)ATmakeAppl2(PLOC_afun28, (ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun4)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17)))), (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun29)), (ATerm)ATmakeAppl0(PLOC_afun6)), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm) wsAfter), (ATerm) topNormal), (ATerm) wsBefore)), (ATerm) (ATerm) ATmakeInt(ambCnt));
}

/*}}}  */
/*{{{  PLOC_Start PLOC_makeStartStrCon(PLOC_OptLayout wsBefore, PLOC_StrCon topStrCon, PLOC_OptLayout wsAfter, int ambCnt) */

PLOC_Start PLOC_makeStartStrCon(PLOC_OptLayout wsBefore, PLOC_StrCon topStrCon, PLOC_OptLayout wsAfter, int ambCnt)
{
  return (PLOC_Start)(ATerm)ATmakeAppl2(PLOC_afun28, (ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun12)))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17)))), (ATerm)ATmakeAppl1(PLOC_afun3, (ATerm)ATmakeAppl0(PLOC_afun29)), (ATerm)ATmakeAppl0(PLOC_afun6)), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm) wsAfter), (ATerm) topStrCon), (ATerm) wsBefore)), (ATerm) (ATerm) ATmakeInt(ambCnt));
}

/*}}}  */
/*{{{  PLOC_OptLayout PLOC_makeOptLayoutAbsent(void) */

PLOC_OptLayout PLOC_makeOptLayoutAbsent(void)
{
  return (PLOC_OptLayout)(ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATempty, (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17))), (ATerm)ATmakeAppl0(PLOC_afun6)), (ATerm)ATempty);
}

/*}}}  */
/*{{{  PLOC_OptLayout PLOC_makeOptLayoutPresent(const char* string) */

PLOC_OptLayout PLOC_makeOptLayoutPresent(const char* string)
{
  return (PLOC_OptLayout)(ATerm)ATmakeAppl2(PLOC_afun0, (ATerm)ATmakeAppl3(PLOC_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl0(PLOC_afun17))), (ATerm)ATmakeAppl1(PLOC_afun5, (ATerm)ATmakeAppl1(PLOC_afun16, (ATerm)ATmakeAppl0(PLOC_afun17))), (ATerm)ATmakeAppl0(PLOC_afun6)), (ATerm) ((ATerm) PLOC_stringToChars(string)));
}

/*}}}  */

/*}}}  */
/*{{{  equality functions */

ATbool PLOC_isEqualNormal(PLOC_Normal arg0, PLOC_Normal arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PLOC_isEqualEscaped(PLOC_Escaped arg0, PLOC_Escaped arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PLOC_isEqualStrCon(PLOC_StrCon arg0, PLOC_StrCon arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PLOC_isEqualNatCon(PLOC_NatCon arg0, PLOC_NatCon arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PLOC_isEqualLocation(PLOC_Location arg0, PLOC_Location arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PLOC_isEqualArea(PLOC_Area arg0, PLOC_Area arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PLOC_isEqualStart(PLOC_Start arg0, PLOC_Start arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

ATbool PLOC_isEqualOptLayout(PLOC_OptLayout arg0, PLOC_OptLayout arg1)
{
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/*}}}  */
/*{{{  PLOC_Normal accessors */

/*{{{  ATbool PLOC_isValidNormal(PLOC_Normal arg) */

ATbool PLOC_isValidNormal(PLOC_Normal arg)
{
  if (PLOC_isNormalDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool PLOC_isNormalDefault(PLOC_Normal arg) */

inline ATbool PLOC_isNormalDefault(PLOC_Normal arg)
{
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PLOC_patternNormalDefault, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool PLOC_hasNormalString(PLOC_Normal arg) */

ATbool PLOC_hasNormalString(PLOC_Normal arg)
{
  if (PLOC_isNormalDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  char* PLOC_getNormalString(PLOC_Normal arg) */

char* PLOC_getNormalString(PLOC_Normal arg)
{
  
    return (char*)PLOC_charsToString((ATerm)ATgetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), 1));
}

/*}}}  */
/*{{{  PLOC_Normal PLOC_setNormalString(PLOC_Normal arg, const char* string) */

PLOC_Normal PLOC_setNormalString(PLOC_Normal arg, const char* string)
{
  if (PLOC_isNormalDefault(arg)) {
    return (PLOC_Normal)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), (ATerm)((ATerm) ((ATerm) PLOC_stringToChars(string))), 1), 0), 1);
  }

  ATabort("Normal has no String: %t\n", arg);
  return (PLOC_Normal)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  PLOC_Escaped accessors */

/*{{{  ATbool PLOC_isValidEscaped(PLOC_Escaped arg) */

ATbool PLOC_isValidEscaped(PLOC_Escaped arg)
{
  if (PLOC_isEscapedSpecialCharacter(arg)) {
    return ATtrue;
  }
  else if (PLOC_isEscapedOctal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool PLOC_isEscapedSpecialCharacter(PLOC_Escaped arg) */

inline ATbool PLOC_isEscapedSpecialCharacter(PLOC_Escaped arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PLOC_patternEscapedSpecialCharacter, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PLOC_isEscapedOctal(PLOC_Escaped arg) */

inline ATbool PLOC_isEscapedOctal(PLOC_Escaped arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PLOC_patternEscapedOctal, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  ATbool PLOC_hasEscapedString(PLOC_Escaped arg) */

ATbool PLOC_hasEscapedString(PLOC_Escaped arg)
{
  if (PLOC_isEscapedSpecialCharacter(arg)) {
    return ATtrue;
  }
  else if (PLOC_isEscapedOctal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  char* PLOC_getEscapedString(PLOC_Escaped arg) */

char* PLOC_getEscapedString(PLOC_Escaped arg)
{
  if (PLOC_isEscapedSpecialCharacter(arg)) {
    return (char*)PLOC_charsToString((ATerm)ATgetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), 1));
  }
  else 
    return (char*)PLOC_charsToString((ATerm)ATgetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), 1));
}

/*}}}  */
/*{{{  PLOC_Escaped PLOC_setEscapedString(PLOC_Escaped arg, const char* string) */

PLOC_Escaped PLOC_setEscapedString(PLOC_Escaped arg, const char* string)
{
  if (PLOC_isEscapedSpecialCharacter(arg)) {
    return (PLOC_Escaped)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), (ATerm)((ATerm) ((ATerm) PLOC_stringToChars(string))), 1), 0), 1);
  }
  else if (PLOC_isEscapedOctal(arg)) {
    return (PLOC_Escaped)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), (ATerm)((ATerm) ((ATerm) PLOC_stringToChars(string))), 1), 0), 1);
  }

  ATabort("Escaped has no String: %t\n", arg);
  return (PLOC_Escaped)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  PLOC_StrCon accessors */

/*{{{  ATbool PLOC_isValidStrCon(PLOC_StrCon arg) */

ATbool PLOC_isValidStrCon(PLOC_StrCon arg)
{
  if (PLOC_isStrConDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool PLOC_isStrConDefault(PLOC_StrCon arg) */

inline ATbool PLOC_isStrConDefault(PLOC_StrCon arg)
{
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PLOC_patternStrConDefault, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool PLOC_hasStrConString(PLOC_StrCon arg) */

ATbool PLOC_hasStrConString(PLOC_StrCon arg)
{
  if (PLOC_isStrConDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  char* PLOC_getStrConString(PLOC_StrCon arg) */

char* PLOC_getStrConString(PLOC_StrCon arg)
{
  
    return (char*)PLOC_charsToString((ATerm)ATgetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), 1));
}

/*}}}  */
/*{{{  PLOC_StrCon PLOC_setStrConString(PLOC_StrCon arg, const char* string) */

PLOC_StrCon PLOC_setStrConString(PLOC_StrCon arg, const char* string)
{
  if (PLOC_isStrConDefault(arg)) {
    return (PLOC_StrCon)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), (ATerm)((ATerm) ((ATerm) PLOC_stringToChars(string))), 1), 0), 1);
  }

  ATabort("StrCon has no String: %t\n", arg);
  return (PLOC_StrCon)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  PLOC_NatCon accessors */

/*{{{  ATbool PLOC_isValidNatCon(PLOC_NatCon arg) */

ATbool PLOC_isValidNatCon(PLOC_NatCon arg)
{
  if (PLOC_isNatConDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool PLOC_isNatConDefault(PLOC_NatCon arg) */

inline ATbool PLOC_isNatConDefault(PLOC_NatCon arg)
{
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PLOC_patternNatConDefault, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool PLOC_hasNatConString(PLOC_NatCon arg) */

ATbool PLOC_hasNatConString(PLOC_NatCon arg)
{
  if (PLOC_isNatConDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  char* PLOC_getNatConString(PLOC_NatCon arg) */

char* PLOC_getNatConString(PLOC_NatCon arg)
{
  
    return (char*)PLOC_charsToString((ATerm)ATgetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), 1));
}

/*}}}  */
/*{{{  PLOC_NatCon PLOC_setNatConString(PLOC_NatCon arg, const char* string) */

PLOC_NatCon PLOC_setNatConString(PLOC_NatCon arg, const char* string)
{
  if (PLOC_isNatConDefault(arg)) {
    return (PLOC_NatCon)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), (ATerm)((ATerm) ((ATerm) PLOC_stringToChars(string))), 1), 0), 1);
  }

  ATabort("NatCon has no String: %t\n", arg);
  return (PLOC_NatCon)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  PLOC_Location accessors */

/*{{{  ATbool PLOC_isValidLocation(PLOC_Location arg) */

ATbool PLOC_isValidLocation(PLOC_Location arg)
{
  if (PLOC_isLocationFile(arg)) {
    return ATtrue;
  }
  else if (PLOC_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool PLOC_isLocationFile(PLOC_Location arg) */

inline ATbool PLOC_isLocationFile(PLOC_Location arg)
{
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

/*}}}  */
/*{{{  inline ATbool PLOC_isLocationAreaInFile(PLOC_Location arg) */

inline ATbool PLOC_isLocationAreaInFile(PLOC_Location arg)
{
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

/*}}}  */
/*{{{  ATbool PLOC_hasLocationWsAfterFile(PLOC_Location arg) */

ATbool PLOC_hasLocationWsAfterFile(PLOC_Location arg)
{
  if (PLOC_isLocationFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_OptLayout PLOC_getLocationWsAfterFile(PLOC_Location arg) */

PLOC_OptLayout PLOC_getLocationWsAfterFile(PLOC_Location arg)
{
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/*}}}  */
/*{{{  PLOC_Location PLOC_setLocationWsAfterFile(PLOC_Location arg, PLOC_OptLayout wsAfterFile) */

PLOC_Location PLOC_setLocationWsAfterFile(PLOC_Location arg, PLOC_OptLayout wsAfterFile)
{
  if (PLOC_isLocationFile(arg)) {
    return (PLOC_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterFile), 1), 1);
  }

  ATabort("Location has no WsAfterFile: %t\n", arg);
  return (PLOC_Location)NULL;
}

/*}}}  */
/*{{{  ATbool PLOC_hasLocationWsAfterParenOpen(PLOC_Location arg) */

ATbool PLOC_hasLocationWsAfterParenOpen(PLOC_Location arg)
{
  if (PLOC_isLocationFile(arg)) {
    return ATtrue;
  }
  else if (PLOC_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_OptLayout PLOC_getLocationWsAfterParenOpen(PLOC_Location arg) */

PLOC_OptLayout PLOC_getLocationWsAfterParenOpen(PLOC_Location arg)
{
  if (PLOC_isLocationFile(arg)) {
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
  }
  else 
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
}

/*}}}  */
/*{{{  PLOC_Location PLOC_setLocationWsAfterParenOpen(PLOC_Location arg, PLOC_OptLayout wsAfterParenOpen) */

PLOC_Location PLOC_setLocationWsAfterParenOpen(PLOC_Location arg, PLOC_OptLayout wsAfterParenOpen)
{
  if (PLOC_isLocationFile(arg)) {
    return (PLOC_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterParenOpen), 3), 1);
  }
  else if (PLOC_isLocationAreaInFile(arg)) {
    return (PLOC_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterParenOpen), 3), 1);
  }

  ATabort("Location has no WsAfterParenOpen: %t\n", arg);
  return (PLOC_Location)NULL;
}

/*}}}  */
/*{{{  ATbool PLOC_hasLocationFilename(PLOC_Location arg) */

ATbool PLOC_hasLocationFilename(PLOC_Location arg)
{
  if (PLOC_isLocationFile(arg)) {
    return ATtrue;
  }
  else if (PLOC_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_StrCon PLOC_getLocationFilename(PLOC_Location arg) */

PLOC_StrCon PLOC_getLocationFilename(PLOC_Location arg)
{
  if (PLOC_isLocationFile(arg)) {
    return (PLOC_StrCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4);
  }
  else 
    return (PLOC_StrCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4);
}

/*}}}  */
/*{{{  PLOC_Location PLOC_setLocationFilename(PLOC_Location arg, PLOC_StrCon filename) */

PLOC_Location PLOC_setLocationFilename(PLOC_Location arg, PLOC_StrCon filename)
{
  if (PLOC_isLocationFile(arg)) {
    return (PLOC_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) filename), 4), 1);
  }
  else if (PLOC_isLocationAreaInFile(arg)) {
    return (PLOC_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) filename), 4), 1);
  }

  ATabort("Location has no Filename: %t\n", arg);
  return (PLOC_Location)NULL;
}

/*}}}  */
/*{{{  ATbool PLOC_hasLocationWsAfterFilename(PLOC_Location arg) */

ATbool PLOC_hasLocationWsAfterFilename(PLOC_Location arg)
{
  if (PLOC_isLocationFile(arg)) {
    return ATtrue;
  }
  else if (PLOC_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_OptLayout PLOC_getLocationWsAfterFilename(PLOC_Location arg) */

PLOC_OptLayout PLOC_getLocationWsAfterFilename(PLOC_Location arg)
{
  if (PLOC_isLocationFile(arg)) {
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 5);
  }
  else 
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 5);
}

/*}}}  */
/*{{{  PLOC_Location PLOC_setLocationWsAfterFilename(PLOC_Location arg, PLOC_OptLayout wsAfterFilename) */

PLOC_Location PLOC_setLocationWsAfterFilename(PLOC_Location arg, PLOC_OptLayout wsAfterFilename)
{
  if (PLOC_isLocationFile(arg)) {
    return (PLOC_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterFilename), 5), 1);
  }
  else if (PLOC_isLocationAreaInFile(arg)) {
    return (PLOC_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterFilename), 5), 1);
  }

  ATabort("Location has no WsAfterFilename: %t\n", arg);
  return (PLOC_Location)NULL;
}

/*}}}  */
/*{{{  ATbool PLOC_hasLocationWsAfterAreaInFile(PLOC_Location arg) */

ATbool PLOC_hasLocationWsAfterAreaInFile(PLOC_Location arg)
{
  if (PLOC_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_OptLayout PLOC_getLocationWsAfterAreaInFile(PLOC_Location arg) */

PLOC_OptLayout PLOC_getLocationWsAfterAreaInFile(PLOC_Location arg)
{
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/*}}}  */
/*{{{  PLOC_Location PLOC_setLocationWsAfterAreaInFile(PLOC_Location arg, PLOC_OptLayout wsAfterAreaInFile) */

PLOC_Location PLOC_setLocationWsAfterAreaInFile(PLOC_Location arg, PLOC_OptLayout wsAfterAreaInFile)
{
  if (PLOC_isLocationAreaInFile(arg)) {
    return (PLOC_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterAreaInFile), 1), 1);
  }

  ATabort("Location has no WsAfterAreaInFile: %t\n", arg);
  return (PLOC_Location)NULL;
}

/*}}}  */
/*{{{  ATbool PLOC_hasLocationWsAfterComma(PLOC_Location arg) */

ATbool PLOC_hasLocationWsAfterComma(PLOC_Location arg)
{
  if (PLOC_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_OptLayout PLOC_getLocationWsAfterComma(PLOC_Location arg) */

PLOC_OptLayout PLOC_getLocationWsAfterComma(PLOC_Location arg)
{
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 7);
}

/*}}}  */
/*{{{  PLOC_Location PLOC_setLocationWsAfterComma(PLOC_Location arg, PLOC_OptLayout wsAfterComma) */

PLOC_Location PLOC_setLocationWsAfterComma(PLOC_Location arg, PLOC_OptLayout wsAfterComma)
{
  if (PLOC_isLocationAreaInFile(arg)) {
    return (PLOC_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma), 7), 1);
  }

  ATabort("Location has no WsAfterComma: %t\n", arg);
  return (PLOC_Location)NULL;
}

/*}}}  */
/*{{{  ATbool PLOC_hasLocationArea(PLOC_Location arg) */

ATbool PLOC_hasLocationArea(PLOC_Location arg)
{
  if (PLOC_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_Area PLOC_getLocationArea(PLOC_Location arg) */

PLOC_Area PLOC_getLocationArea(PLOC_Location arg)
{
  
    return (PLOC_Area)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 8);
}

/*}}}  */
/*{{{  PLOC_Location PLOC_setLocationArea(PLOC_Location arg, PLOC_Area Area) */

PLOC_Location PLOC_setLocationArea(PLOC_Location arg, PLOC_Area Area)
{
  if (PLOC_isLocationAreaInFile(arg)) {
    return (PLOC_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) Area), 8), 1);
  }

  ATabort("Location has no Area: %t\n", arg);
  return (PLOC_Location)NULL;
}

/*}}}  */
/*{{{  ATbool PLOC_hasLocationWsAfterArea(PLOC_Location arg) */

ATbool PLOC_hasLocationWsAfterArea(PLOC_Location arg)
{
  if (PLOC_isLocationAreaInFile(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_OptLayout PLOC_getLocationWsAfterArea(PLOC_Location arg) */

PLOC_OptLayout PLOC_getLocationWsAfterArea(PLOC_Location arg)
{
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 9);
}

/*}}}  */
/*{{{  PLOC_Location PLOC_setLocationWsAfterArea(PLOC_Location arg, PLOC_OptLayout wsAfterArea) */

PLOC_Location PLOC_setLocationWsAfterArea(PLOC_Location arg, PLOC_OptLayout wsAfterArea)
{
  if (PLOC_isLocationAreaInFile(arg)) {
    return (PLOC_Location)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterArea), 9), 1);
  }

  ATabort("Location has no WsAfterArea: %t\n", arg);
  return (PLOC_Location)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  PLOC_Area accessors */

/*{{{  ATbool PLOC_isValidArea(PLOC_Area arg) */

ATbool PLOC_isValidArea(PLOC_Area arg)
{
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool PLOC_isAreaArea(PLOC_Area arg) */

inline ATbool PLOC_isAreaArea(PLOC_Area arg)
{
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PLOC_patternAreaArea, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL));
#endif
  return ATtrue;
}

/*}}}  */
/*{{{  ATbool PLOC_hasAreaWsAfterArea(PLOC_Area arg) */

ATbool PLOC_hasAreaWsAfterArea(PLOC_Area arg)
{
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_OptLayout PLOC_getAreaWsAfterArea(PLOC_Area arg) */

PLOC_OptLayout PLOC_getAreaWsAfterArea(PLOC_Area arg)
{
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/*}}}  */
/*{{{  PLOC_Area PLOC_setAreaWsAfterArea(PLOC_Area arg, PLOC_OptLayout wsAfterArea) */

PLOC_Area PLOC_setAreaWsAfterArea(PLOC_Area arg, PLOC_OptLayout wsAfterArea)
{
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterArea), 1), 1);
  }

  ATabort("Area has no WsAfterArea: %t\n", arg);
  return (PLOC_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PLOC_hasAreaWsAfterParenOpen(PLOC_Area arg) */

ATbool PLOC_hasAreaWsAfterParenOpen(PLOC_Area arg)
{
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_OptLayout PLOC_getAreaWsAfterParenOpen(PLOC_Area arg) */

PLOC_OptLayout PLOC_getAreaWsAfterParenOpen(PLOC_Area arg)
{
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
}

/*}}}  */
/*{{{  PLOC_Area PLOC_setAreaWsAfterParenOpen(PLOC_Area arg, PLOC_OptLayout wsAfterParenOpen) */

PLOC_Area PLOC_setAreaWsAfterParenOpen(PLOC_Area arg, PLOC_OptLayout wsAfterParenOpen)
{
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterParenOpen), 3), 1);
  }

  ATabort("Area has no WsAfterParenOpen: %t\n", arg);
  return (PLOC_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PLOC_hasAreaBeginLine(PLOC_Area arg) */

ATbool PLOC_hasAreaBeginLine(PLOC_Area arg)
{
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_NatCon PLOC_getAreaBeginLine(PLOC_Area arg) */

PLOC_NatCon PLOC_getAreaBeginLine(PLOC_Area arg)
{
  
    return (PLOC_NatCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4);
}

/*}}}  */
/*{{{  PLOC_Area PLOC_setAreaBeginLine(PLOC_Area arg, PLOC_NatCon beginLine) */

PLOC_Area PLOC_setAreaBeginLine(PLOC_Area arg, PLOC_NatCon beginLine)
{
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) beginLine), 4), 1);
  }

  ATabort("Area has no BeginLine: %t\n", arg);
  return (PLOC_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PLOC_hasAreaWsAfterBeginLine(PLOC_Area arg) */

ATbool PLOC_hasAreaWsAfterBeginLine(PLOC_Area arg)
{
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_OptLayout PLOC_getAreaWsAfterBeginLine(PLOC_Area arg) */

PLOC_OptLayout PLOC_getAreaWsAfterBeginLine(PLOC_Area arg)
{
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 5);
}

/*}}}  */
/*{{{  PLOC_Area PLOC_setAreaWsAfterBeginLine(PLOC_Area arg, PLOC_OptLayout wsAfterBeginLine) */

PLOC_Area PLOC_setAreaWsAfterBeginLine(PLOC_Area arg, PLOC_OptLayout wsAfterBeginLine)
{
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterBeginLine), 5), 1);
  }

  ATabort("Area has no WsAfterBeginLine: %t\n", arg);
  return (PLOC_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PLOC_hasAreaWsAfterComma(PLOC_Area arg) */

ATbool PLOC_hasAreaWsAfterComma(PLOC_Area arg)
{
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_OptLayout PLOC_getAreaWsAfterComma(PLOC_Area arg) */

PLOC_OptLayout PLOC_getAreaWsAfterComma(PLOC_Area arg)
{
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 7);
}

/*}}}  */
/*{{{  PLOC_Area PLOC_setAreaWsAfterComma(PLOC_Area arg, PLOC_OptLayout wsAfterComma) */

PLOC_Area PLOC_setAreaWsAfterComma(PLOC_Area arg, PLOC_OptLayout wsAfterComma)
{
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma), 7), 1);
  }

  ATabort("Area has no WsAfterComma: %t\n", arg);
  return (PLOC_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PLOC_hasAreaBeginColumn(PLOC_Area arg) */

ATbool PLOC_hasAreaBeginColumn(PLOC_Area arg)
{
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_NatCon PLOC_getAreaBeginColumn(PLOC_Area arg) */

PLOC_NatCon PLOC_getAreaBeginColumn(PLOC_Area arg)
{
  
    return (PLOC_NatCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 8);
}

/*}}}  */
/*{{{  PLOC_Area PLOC_setAreaBeginColumn(PLOC_Area arg, PLOC_NatCon beginColumn) */

PLOC_Area PLOC_setAreaBeginColumn(PLOC_Area arg, PLOC_NatCon beginColumn)
{
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) beginColumn), 8), 1);
  }

  ATabort("Area has no BeginColumn: %t\n", arg);
  return (PLOC_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PLOC_hasAreaWsAfterBeginColumn(PLOC_Area arg) */

ATbool PLOC_hasAreaWsAfterBeginColumn(PLOC_Area arg)
{
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_OptLayout PLOC_getAreaWsAfterBeginColumn(PLOC_Area arg) */

PLOC_OptLayout PLOC_getAreaWsAfterBeginColumn(PLOC_Area arg)
{
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 9);
}

/*}}}  */
/*{{{  PLOC_Area PLOC_setAreaWsAfterBeginColumn(PLOC_Area arg, PLOC_OptLayout wsAfterBeginColumn) */

PLOC_Area PLOC_setAreaWsAfterBeginColumn(PLOC_Area arg, PLOC_OptLayout wsAfterBeginColumn)
{
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterBeginColumn), 9), 1);
  }

  ATabort("Area has no WsAfterBeginColumn: %t\n", arg);
  return (PLOC_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PLOC_hasAreaWsAfterComma1(PLOC_Area arg) */

ATbool PLOC_hasAreaWsAfterComma1(PLOC_Area arg)
{
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_OptLayout PLOC_getAreaWsAfterComma1(PLOC_Area arg) */

PLOC_OptLayout PLOC_getAreaWsAfterComma1(PLOC_Area arg)
{
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 11);
}

/*}}}  */
/*{{{  PLOC_Area PLOC_setAreaWsAfterComma1(PLOC_Area arg, PLOC_OptLayout wsAfterComma1) */

PLOC_Area PLOC_setAreaWsAfterComma1(PLOC_Area arg, PLOC_OptLayout wsAfterComma1)
{
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma1), 11), 1);
  }

  ATabort("Area has no WsAfterComma1: %t\n", arg);
  return (PLOC_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PLOC_hasAreaEndLine(PLOC_Area arg) */

ATbool PLOC_hasAreaEndLine(PLOC_Area arg)
{
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_NatCon PLOC_getAreaEndLine(PLOC_Area arg) */

PLOC_NatCon PLOC_getAreaEndLine(PLOC_Area arg)
{
  
    return (PLOC_NatCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 12);
}

/*}}}  */
/*{{{  PLOC_Area PLOC_setAreaEndLine(PLOC_Area arg, PLOC_NatCon endLine) */

PLOC_Area PLOC_setAreaEndLine(PLOC_Area arg, PLOC_NatCon endLine)
{
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) endLine), 12), 1);
  }

  ATabort("Area has no EndLine: %t\n", arg);
  return (PLOC_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PLOC_hasAreaWsAfterEndLine(PLOC_Area arg) */

ATbool PLOC_hasAreaWsAfterEndLine(PLOC_Area arg)
{
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_OptLayout PLOC_getAreaWsAfterEndLine(PLOC_Area arg) */

PLOC_OptLayout PLOC_getAreaWsAfterEndLine(PLOC_Area arg)
{
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 13);
}

/*}}}  */
/*{{{  PLOC_Area PLOC_setAreaWsAfterEndLine(PLOC_Area arg, PLOC_OptLayout wsAfterEndLine) */

PLOC_Area PLOC_setAreaWsAfterEndLine(PLOC_Area arg, PLOC_OptLayout wsAfterEndLine)
{
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterEndLine), 13), 1);
  }

  ATabort("Area has no WsAfterEndLine: %t\n", arg);
  return (PLOC_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PLOC_hasAreaWsAfterComma2(PLOC_Area arg) */

ATbool PLOC_hasAreaWsAfterComma2(PLOC_Area arg)
{
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_OptLayout PLOC_getAreaWsAfterComma2(PLOC_Area arg) */

PLOC_OptLayout PLOC_getAreaWsAfterComma2(PLOC_Area arg)
{
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 15);
}

/*}}}  */
/*{{{  PLOC_Area PLOC_setAreaWsAfterComma2(PLOC_Area arg, PLOC_OptLayout wsAfterComma2) */

PLOC_Area PLOC_setAreaWsAfterComma2(PLOC_Area arg, PLOC_OptLayout wsAfterComma2)
{
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma2), 15), 1);
  }

  ATabort("Area has no WsAfterComma2: %t\n", arg);
  return (PLOC_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PLOC_hasAreaEndColumn(PLOC_Area arg) */

ATbool PLOC_hasAreaEndColumn(PLOC_Area arg)
{
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_NatCon PLOC_getAreaEndColumn(PLOC_Area arg) */

PLOC_NatCon PLOC_getAreaEndColumn(PLOC_Area arg)
{
  
    return (PLOC_NatCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 16);
}

/*}}}  */
/*{{{  PLOC_Area PLOC_setAreaEndColumn(PLOC_Area arg, PLOC_NatCon endColumn) */

PLOC_Area PLOC_setAreaEndColumn(PLOC_Area arg, PLOC_NatCon endColumn)
{
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) endColumn), 16), 1);
  }

  ATabort("Area has no EndColumn: %t\n", arg);
  return (PLOC_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PLOC_hasAreaWsAfterEndColumn(PLOC_Area arg) */

ATbool PLOC_hasAreaWsAfterEndColumn(PLOC_Area arg)
{
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_OptLayout PLOC_getAreaWsAfterEndColumn(PLOC_Area arg) */

PLOC_OptLayout PLOC_getAreaWsAfterEndColumn(PLOC_Area arg)
{
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 17);
}

/*}}}  */
/*{{{  PLOC_Area PLOC_setAreaWsAfterEndColumn(PLOC_Area arg, PLOC_OptLayout wsAfterEndColumn) */

PLOC_Area PLOC_setAreaWsAfterEndColumn(PLOC_Area arg, PLOC_OptLayout wsAfterEndColumn)
{
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterEndColumn), 17), 1);
  }

  ATabort("Area has no WsAfterEndColumn: %t\n", arg);
  return (PLOC_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PLOC_hasAreaWsAfterComma3(PLOC_Area arg) */

ATbool PLOC_hasAreaWsAfterComma3(PLOC_Area arg)
{
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_OptLayout PLOC_getAreaWsAfterComma3(PLOC_Area arg) */

PLOC_OptLayout PLOC_getAreaWsAfterComma3(PLOC_Area arg)
{
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 19);
}

/*}}}  */
/*{{{  PLOC_Area PLOC_setAreaWsAfterComma3(PLOC_Area arg, PLOC_OptLayout wsAfterComma3) */

PLOC_Area PLOC_setAreaWsAfterComma3(PLOC_Area arg, PLOC_OptLayout wsAfterComma3)
{
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma3), 19), 1);
  }

  ATabort("Area has no WsAfterComma3: %t\n", arg);
  return (PLOC_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PLOC_hasAreaOffset(PLOC_Area arg) */

ATbool PLOC_hasAreaOffset(PLOC_Area arg)
{
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_NatCon PLOC_getAreaOffset(PLOC_Area arg) */

PLOC_NatCon PLOC_getAreaOffset(PLOC_Area arg)
{
  
    return (PLOC_NatCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 20);
}

/*}}}  */
/*{{{  PLOC_Area PLOC_setAreaOffset(PLOC_Area arg, PLOC_NatCon offset) */

PLOC_Area PLOC_setAreaOffset(PLOC_Area arg, PLOC_NatCon offset)
{
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) offset), 20), 1);
  }

  ATabort("Area has no Offset: %t\n", arg);
  return (PLOC_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PLOC_hasAreaWsAfterOffset(PLOC_Area arg) */

ATbool PLOC_hasAreaWsAfterOffset(PLOC_Area arg)
{
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_OptLayout PLOC_getAreaWsAfterOffset(PLOC_Area arg) */

PLOC_OptLayout PLOC_getAreaWsAfterOffset(PLOC_Area arg)
{
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 21);
}

/*}}}  */
/*{{{  PLOC_Area PLOC_setAreaWsAfterOffset(PLOC_Area arg, PLOC_OptLayout wsAfterOffset) */

PLOC_Area PLOC_setAreaWsAfterOffset(PLOC_Area arg, PLOC_OptLayout wsAfterOffset)
{
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterOffset), 21), 1);
  }

  ATabort("Area has no WsAfterOffset: %t\n", arg);
  return (PLOC_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PLOC_hasAreaWsAfterComma4(PLOC_Area arg) */

ATbool PLOC_hasAreaWsAfterComma4(PLOC_Area arg)
{
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_OptLayout PLOC_getAreaWsAfterComma4(PLOC_Area arg) */

PLOC_OptLayout PLOC_getAreaWsAfterComma4(PLOC_Area arg)
{
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 23);
}

/*}}}  */
/*{{{  PLOC_Area PLOC_setAreaWsAfterComma4(PLOC_Area arg, PLOC_OptLayout wsAfterComma4) */

PLOC_Area PLOC_setAreaWsAfterComma4(PLOC_Area arg, PLOC_OptLayout wsAfterComma4)
{
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterComma4), 23), 1);
  }

  ATabort("Area has no WsAfterComma4: %t\n", arg);
  return (PLOC_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PLOC_hasAreaLength(PLOC_Area arg) */

ATbool PLOC_hasAreaLength(PLOC_Area arg)
{
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_NatCon PLOC_getAreaLength(PLOC_Area arg) */

PLOC_NatCon PLOC_getAreaLength(PLOC_Area arg)
{
  
    return (PLOC_NatCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 24);
}

/*}}}  */
/*{{{  PLOC_Area PLOC_setAreaLength(PLOC_Area arg, PLOC_NatCon length) */

PLOC_Area PLOC_setAreaLength(PLOC_Area arg, PLOC_NatCon length)
{
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) length), 24), 1);
  }

  ATabort("Area has no Length: %t\n", arg);
  return (PLOC_Area)NULL;
}

/*}}}  */
/*{{{  ATbool PLOC_hasAreaWsAfterLength(PLOC_Area arg) */

ATbool PLOC_hasAreaWsAfterLength(PLOC_Area arg)
{
  if (PLOC_isAreaArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_OptLayout PLOC_getAreaWsAfterLength(PLOC_Area arg) */

PLOC_OptLayout PLOC_getAreaWsAfterLength(PLOC_Area arg)
{
  
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 25);
}

/*}}}  */
/*{{{  PLOC_Area PLOC_setAreaWsAfterLength(PLOC_Area arg, PLOC_OptLayout wsAfterLength) */

PLOC_Area PLOC_setAreaWsAfterLength(PLOC_Area arg, PLOC_OptLayout wsAfterLength)
{
  if (PLOC_isAreaArea(arg)) {
    return (PLOC_Area)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterLength), 25), 1);
  }

  ATabort("Area has no WsAfterLength: %t\n", arg);
  return (PLOC_Area)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  PLOC_Start accessors */

/*{{{  ATbool PLOC_isValidStart(PLOC_Start arg) */

ATbool PLOC_isValidStart(PLOC_Start arg)
{
  if (PLOC_isStartArea(arg)) {
    return ATtrue;
  }
  else if (PLOC_isStartLocation(arg)) {
    return ATtrue;
  }
  else if (PLOC_isStartNatCon(arg)) {
    return ATtrue;
  }
  else if (PLOC_isStartEscaped(arg)) {
    return ATtrue;
  }
  else if (PLOC_isStartNormal(arg)) {
    return ATtrue;
  }
  else if (PLOC_isStartStrCon(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool PLOC_isStartArea(PLOC_Start arg) */

inline ATbool PLOC_isStartArea(PLOC_Start arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PLOC_patternStartArea, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PLOC_isStartLocation(PLOC_Start arg) */

inline ATbool PLOC_isStartLocation(PLOC_Start arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PLOC_patternStartLocation, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PLOC_isStartNatCon(PLOC_Start arg) */

inline ATbool PLOC_isStartNatCon(PLOC_Start arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PLOC_patternStartNatCon, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PLOC_isStartEscaped(PLOC_Start arg) */

inline ATbool PLOC_isStartEscaped(PLOC_Start arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PLOC_patternStartEscaped, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PLOC_isStartNormal(PLOC_Start arg) */

inline ATbool PLOC_isStartNormal(PLOC_Start arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PLOC_patternStartNormal, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  inline ATbool PLOC_isStartStrCon(PLOC_Start arg) */

inline ATbool PLOC_isStartStrCon(PLOC_Start arg)
{
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PLOC_patternStartStrCon, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/*}}}  */
/*{{{  ATbool PLOC_hasStartWsBefore(PLOC_Start arg) */

ATbool PLOC_hasStartWsBefore(PLOC_Start arg)
{
  if (PLOC_isStartArea(arg)) {
    return ATtrue;
  }
  else if (PLOC_isStartLocation(arg)) {
    return ATtrue;
  }
  else if (PLOC_isStartNatCon(arg)) {
    return ATtrue;
  }
  else if (PLOC_isStartEscaped(arg)) {
    return ATtrue;
  }
  else if (PLOC_isStartNormal(arg)) {
    return ATtrue;
  }
  else if (PLOC_isStartStrCon(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_OptLayout PLOC_getStartWsBefore(PLOC_Start arg) */

PLOC_OptLayout PLOC_getStartWsBefore(PLOC_Start arg)
{
  if (PLOC_isStartArea(arg)) {
    return (PLOC_OptLayout)ATgetFirst((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1));
  }
  else if (PLOC_isStartLocation(arg)) {
    return (PLOC_OptLayout)ATgetFirst((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1));
  }
  else if (PLOC_isStartNatCon(arg)) {
    return (PLOC_OptLayout)ATgetFirst((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1));
  }
  else if (PLOC_isStartEscaped(arg)) {
    return (PLOC_OptLayout)ATgetFirst((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1));
  }
  else if (PLOC_isStartNormal(arg)) {
    return (PLOC_OptLayout)ATgetFirst((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1));
  }
  else 
    return (PLOC_OptLayout)ATgetFirst((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1));
}

/*}}}  */
/*{{{  PLOC_Start PLOC_setStartWsBefore(PLOC_Start arg, PLOC_OptLayout wsBefore) */

PLOC_Start PLOC_setStartWsBefore(PLOC_Start arg, PLOC_OptLayout wsBefore)
{
  if (PLOC_isStartArea(arg)) {
    return (PLOC_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsBefore), 0), 1), 0);
  }
  else if (PLOC_isStartLocation(arg)) {
    return (PLOC_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsBefore), 0), 1), 0);
  }
  else if (PLOC_isStartNatCon(arg)) {
    return (PLOC_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsBefore), 0), 1), 0);
  }
  else if (PLOC_isStartEscaped(arg)) {
    return (PLOC_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsBefore), 0), 1), 0);
  }
  else if (PLOC_isStartNormal(arg)) {
    return (PLOC_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsBefore), 0), 1), 0);
  }
  else if (PLOC_isStartStrCon(arg)) {
    return (PLOC_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsBefore), 0), 1), 0);
  }

  ATabort("Start has no WsBefore: %t\n", arg);
  return (PLOC_Start)NULL;
}

/*}}}  */
/*{{{  ATbool PLOC_hasStartTopArea(PLOC_Start arg) */

ATbool PLOC_hasStartTopArea(PLOC_Start arg)
{
  if (PLOC_isStartArea(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_Area PLOC_getStartTopArea(PLOC_Start arg) */

PLOC_Area PLOC_getStartTopArea(PLOC_Start arg)
{
  
    return (PLOC_Area)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 1);
}

/*}}}  */
/*{{{  PLOC_Start PLOC_setStartTopArea(PLOC_Start arg, PLOC_Area topArea) */

PLOC_Start PLOC_setStartTopArea(PLOC_Start arg, PLOC_Area topArea)
{
  if (PLOC_isStartArea(arg)) {
    return (PLOC_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) topArea), 1), 1), 0);
  }

  ATabort("Start has no TopArea: %t\n", arg);
  return (PLOC_Start)NULL;
}

/*}}}  */
/*{{{  ATbool PLOC_hasStartWsAfter(PLOC_Start arg) */

ATbool PLOC_hasStartWsAfter(PLOC_Start arg)
{
  if (PLOC_isStartArea(arg)) {
    return ATtrue;
  }
  else if (PLOC_isStartLocation(arg)) {
    return ATtrue;
  }
  else if (PLOC_isStartNatCon(arg)) {
    return ATtrue;
  }
  else if (PLOC_isStartEscaped(arg)) {
    return ATtrue;
  }
  else if (PLOC_isStartNormal(arg)) {
    return ATtrue;
  }
  else if (PLOC_isStartStrCon(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_OptLayout PLOC_getStartWsAfter(PLOC_Start arg) */

PLOC_OptLayout PLOC_getStartWsAfter(PLOC_Start arg)
{
  if (PLOC_isStartArea(arg)) {
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 2);
  }
  else if (PLOC_isStartLocation(arg)) {
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 2);
  }
  else if (PLOC_isStartNatCon(arg)) {
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 2);
  }
  else if (PLOC_isStartEscaped(arg)) {
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 2);
  }
  else if (PLOC_isStartNormal(arg)) {
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 2);
  }
  else 
    return (PLOC_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 2);
}

/*}}}  */
/*{{{  PLOC_Start PLOC_setStartWsAfter(PLOC_Start arg, PLOC_OptLayout wsAfter) */

PLOC_Start PLOC_setStartWsAfter(PLOC_Start arg, PLOC_OptLayout wsAfter)
{
  if (PLOC_isStartArea(arg)) {
    return (PLOC_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsAfter), 2), 1), 0);
  }
  else if (PLOC_isStartLocation(arg)) {
    return (PLOC_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsAfter), 2), 1), 0);
  }
  else if (PLOC_isStartNatCon(arg)) {
    return (PLOC_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsAfter), 2), 1), 0);
  }
  else if (PLOC_isStartEscaped(arg)) {
    return (PLOC_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsAfter), 2), 1), 0);
  }
  else if (PLOC_isStartNormal(arg)) {
    return (PLOC_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsAfter), 2), 1), 0);
  }
  else if (PLOC_isStartStrCon(arg)) {
    return (PLOC_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsAfter), 2), 1), 0);
  }

  ATabort("Start has no WsAfter: %t\n", arg);
  return (PLOC_Start)NULL;
}

/*}}}  */
/*{{{  ATbool PLOC_hasStartAmbCnt(PLOC_Start arg) */

ATbool PLOC_hasStartAmbCnt(PLOC_Start arg)
{
  if (PLOC_isStartArea(arg)) {
    return ATtrue;
  }
  else if (PLOC_isStartLocation(arg)) {
    return ATtrue;
  }
  else if (PLOC_isStartNatCon(arg)) {
    return ATtrue;
  }
  else if (PLOC_isStartEscaped(arg)) {
    return ATtrue;
  }
  else if (PLOC_isStartNormal(arg)) {
    return ATtrue;
  }
  else if (PLOC_isStartStrCon(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  int PLOC_getStartAmbCnt(PLOC_Start arg) */

int PLOC_getStartAmbCnt(PLOC_Start arg)
{
  if (PLOC_isStartArea(arg)) {
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 1));
  }
  else if (PLOC_isStartLocation(arg)) {
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 1));
  }
  else if (PLOC_isStartNatCon(arg)) {
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 1));
  }
  else if (PLOC_isStartEscaped(arg)) {
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 1));
  }
  else if (PLOC_isStartNormal(arg)) {
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 1));
  }
  else 
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 1));
}

/*}}}  */
/*{{{  PLOC_Start PLOC_setStartAmbCnt(PLOC_Start arg, int ambCnt) */

PLOC_Start PLOC_setStartAmbCnt(PLOC_Start arg, int ambCnt)
{
  if (PLOC_isStartArea(arg)) {
    return (PLOC_Start)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(ambCnt)), 1);
  }
  else if (PLOC_isStartLocation(arg)) {
    return (PLOC_Start)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(ambCnt)), 1);
  }
  else if (PLOC_isStartNatCon(arg)) {
    return (PLOC_Start)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(ambCnt)), 1);
  }
  else if (PLOC_isStartEscaped(arg)) {
    return (PLOC_Start)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(ambCnt)), 1);
  }
  else if (PLOC_isStartNormal(arg)) {
    return (PLOC_Start)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(ambCnt)), 1);
  }
  else if (PLOC_isStartStrCon(arg)) {
    return (PLOC_Start)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(ambCnt)), 1);
  }

  ATabort("Start has no AmbCnt: %t\n", arg);
  return (PLOC_Start)NULL;
}

/*}}}  */
/*{{{  ATbool PLOC_hasStartTopLocation(PLOC_Start arg) */

ATbool PLOC_hasStartTopLocation(PLOC_Start arg)
{
  if (PLOC_isStartLocation(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_Location PLOC_getStartTopLocation(PLOC_Start arg) */

PLOC_Location PLOC_getStartTopLocation(PLOC_Start arg)
{
  
    return (PLOC_Location)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 1);
}

/*}}}  */
/*{{{  PLOC_Start PLOC_setStartTopLocation(PLOC_Start arg, PLOC_Location topLocation) */

PLOC_Start PLOC_setStartTopLocation(PLOC_Start arg, PLOC_Location topLocation)
{
  if (PLOC_isStartLocation(arg)) {
    return (PLOC_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) topLocation), 1), 1), 0);
  }

  ATabort("Start has no TopLocation: %t\n", arg);
  return (PLOC_Start)NULL;
}

/*}}}  */
/*{{{  ATbool PLOC_hasStartTopNatCon(PLOC_Start arg) */

ATbool PLOC_hasStartTopNatCon(PLOC_Start arg)
{
  if (PLOC_isStartNatCon(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_NatCon PLOC_getStartTopNatCon(PLOC_Start arg) */

PLOC_NatCon PLOC_getStartTopNatCon(PLOC_Start arg)
{
  
    return (PLOC_NatCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 1);
}

/*}}}  */
/*{{{  PLOC_Start PLOC_setStartTopNatCon(PLOC_Start arg, PLOC_NatCon topNatCon) */

PLOC_Start PLOC_setStartTopNatCon(PLOC_Start arg, PLOC_NatCon topNatCon)
{
  if (PLOC_isStartNatCon(arg)) {
    return (PLOC_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) topNatCon), 1), 1), 0);
  }

  ATabort("Start has no TopNatCon: %t\n", arg);
  return (PLOC_Start)NULL;
}

/*}}}  */
/*{{{  ATbool PLOC_hasStartTopEscaped(PLOC_Start arg) */

ATbool PLOC_hasStartTopEscaped(PLOC_Start arg)
{
  if (PLOC_isStartEscaped(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_Escaped PLOC_getStartTopEscaped(PLOC_Start arg) */

PLOC_Escaped PLOC_getStartTopEscaped(PLOC_Start arg)
{
  
    return (PLOC_Escaped)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 1);
}

/*}}}  */
/*{{{  PLOC_Start PLOC_setStartTopEscaped(PLOC_Start arg, PLOC_Escaped topEscaped) */

PLOC_Start PLOC_setStartTopEscaped(PLOC_Start arg, PLOC_Escaped topEscaped)
{
  if (PLOC_isStartEscaped(arg)) {
    return (PLOC_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) topEscaped), 1), 1), 0);
  }

  ATabort("Start has no TopEscaped: %t\n", arg);
  return (PLOC_Start)NULL;
}

/*}}}  */
/*{{{  ATbool PLOC_hasStartTopNormal(PLOC_Start arg) */

ATbool PLOC_hasStartTopNormal(PLOC_Start arg)
{
  if (PLOC_isStartNormal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_Normal PLOC_getStartTopNormal(PLOC_Start arg) */

PLOC_Normal PLOC_getStartTopNormal(PLOC_Start arg)
{
  
    return (PLOC_Normal)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 1);
}

/*}}}  */
/*{{{  PLOC_Start PLOC_setStartTopNormal(PLOC_Start arg, PLOC_Normal topNormal) */

PLOC_Start PLOC_setStartTopNormal(PLOC_Start arg, PLOC_Normal topNormal)
{
  if (PLOC_isStartNormal(arg)) {
    return (PLOC_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) topNormal), 1), 1), 0);
  }

  ATabort("Start has no TopNormal: %t\n", arg);
  return (PLOC_Start)NULL;
}

/*}}}  */
/*{{{  ATbool PLOC_hasStartTopStrCon(PLOC_Start arg) */

ATbool PLOC_hasStartTopStrCon(PLOC_Start arg)
{
  if (PLOC_isStartStrCon(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  PLOC_StrCon PLOC_getStartTopStrCon(PLOC_Start arg) */

PLOC_StrCon PLOC_getStartTopStrCon(PLOC_Start arg)
{
  
    return (PLOC_StrCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 1);
}

/*}}}  */
/*{{{  PLOC_Start PLOC_setStartTopStrCon(PLOC_Start arg, PLOC_StrCon topStrCon) */

PLOC_Start PLOC_setStartTopStrCon(PLOC_Start arg, PLOC_StrCon topStrCon)
{
  if (PLOC_isStartStrCon(arg)) {
    return (PLOC_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) topStrCon), 1), 1), 0);
  }

  ATabort("Start has no TopStrCon: %t\n", arg);
  return (PLOC_Start)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  PLOC_OptLayout accessors */

/*{{{  ATbool PLOC_isValidOptLayout(PLOC_OptLayout arg) */

ATbool PLOC_isValidOptLayout(PLOC_OptLayout arg)
{
  if (PLOC_isOptLayoutAbsent(arg)) {
    return ATtrue;
  }
  else if (PLOC_isOptLayoutPresent(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  inline ATbool PLOC_isOptLayoutAbsent(PLOC_OptLayout arg) */

inline ATbool PLOC_isOptLayoutAbsent(PLOC_OptLayout arg)
{
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

/*}}}  */
/*{{{  inline ATbool PLOC_isOptLayoutPresent(PLOC_OptLayout arg) */

inline ATbool PLOC_isOptLayoutPresent(PLOC_OptLayout arg)
{
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

/*}}}  */
/*{{{  ATbool PLOC_hasOptLayoutString(PLOC_OptLayout arg) */

ATbool PLOC_hasOptLayoutString(PLOC_OptLayout arg)
{
  if (PLOC_isOptLayoutPresent(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/*}}}  */
/*{{{  char* PLOC_getOptLayoutString(PLOC_OptLayout arg) */

char* PLOC_getOptLayoutString(PLOC_OptLayout arg)
{
  
    return (char*)PLOC_charsToString((ATerm)ATgetArgument((ATermAppl)arg, 1));
}

/*}}}  */
/*{{{  PLOC_OptLayout PLOC_setOptLayoutString(PLOC_OptLayout arg, const char* string) */

PLOC_OptLayout PLOC_setOptLayoutString(PLOC_OptLayout arg, const char* string)
{
  if (PLOC_isOptLayoutPresent(arg)) {
    return (PLOC_OptLayout)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) ((ATerm) PLOC_stringToChars(string))), 1);
  }

  ATabort("OptLayout has no String: %t\n", arg);
  return (PLOC_OptLayout)NULL;
}

/*}}}  */

/*}}}  */
/*{{{  sort visitors */

/*{{{  PLOC_Normal PLOC_visitNormal(PLOC_Normal arg, char* (*acceptString)(char*)) */

PLOC_Normal PLOC_visitNormal(PLOC_Normal arg, char* (*acceptString)(char*))
{
  if (PLOC_isNormalDefault(arg)) {
    return PLOC_makeNormalDefault(
        acceptString ? acceptString(PLOC_getNormalString(arg)) : PLOC_getNormalString(arg));
  }
  ATabort("not a Normal: %t\n", arg);
  return (PLOC_Normal)NULL;
}

/*}}}  */
/*{{{  PLOC_Escaped PLOC_visitEscaped(PLOC_Escaped arg, char* (*acceptString)(char*)) */

PLOC_Escaped PLOC_visitEscaped(PLOC_Escaped arg, char* (*acceptString)(char*))
{
  if (PLOC_isEscapedSpecialCharacter(arg)) {
    return PLOC_makeEscapedSpecialCharacter(
        acceptString ? acceptString(PLOC_getEscapedString(arg)) : PLOC_getEscapedString(arg));
  }
  if (PLOC_isEscapedOctal(arg)) {
    return PLOC_makeEscapedOctal(
        acceptString ? acceptString(PLOC_getEscapedString(arg)) : PLOC_getEscapedString(arg));
  }
  ATabort("not a Escaped: %t\n", arg);
  return (PLOC_Escaped)NULL;
}

/*}}}  */
/*{{{  PLOC_StrCon PLOC_visitStrCon(PLOC_StrCon arg, char* (*acceptString)(char*)) */

PLOC_StrCon PLOC_visitStrCon(PLOC_StrCon arg, char* (*acceptString)(char*))
{
  if (PLOC_isStrConDefault(arg)) {
    return PLOC_makeStrConDefault(
        acceptString ? acceptString(PLOC_getStrConString(arg)) : PLOC_getStrConString(arg));
  }
  ATabort("not a StrCon: %t\n", arg);
  return (PLOC_StrCon)NULL;
}

/*}}}  */
/*{{{  PLOC_NatCon PLOC_visitNatCon(PLOC_NatCon arg, char* (*acceptString)(char*)) */

PLOC_NatCon PLOC_visitNatCon(PLOC_NatCon arg, char* (*acceptString)(char*))
{
  if (PLOC_isNatConDefault(arg)) {
    return PLOC_makeNatConDefault(
        acceptString ? acceptString(PLOC_getNatConString(arg)) : PLOC_getNatConString(arg));
  }
  ATabort("not a NatCon: %t\n", arg);
  return (PLOC_NatCon)NULL;
}

/*}}}  */
/*{{{  PLOC_Location PLOC_visitLocation(PLOC_Location arg, PLOC_OptLayout (*acceptWsAfterFile)(PLOC_OptLayout), PLOC_OptLayout (*acceptWsAfterParenOpen)(PLOC_OptLayout), PLOC_StrCon (*acceptFilename)(PLOC_StrCon), PLOC_OptLayout (*acceptWsAfterFilename)(PLOC_OptLayout), PLOC_OptLayout (*acceptWsAfterAreaInFile)(PLOC_OptLayout), PLOC_OptLayout (*acceptWsAfterComma)(PLOC_OptLayout), PLOC_Area (*acceptArea)(PLOC_Area), PLOC_OptLayout (*acceptWsAfterArea)(PLOC_OptLayout)) */

PLOC_Location PLOC_visitLocation(PLOC_Location arg, PLOC_OptLayout (*acceptWsAfterFile)(PLOC_OptLayout), PLOC_OptLayout (*acceptWsAfterParenOpen)(PLOC_OptLayout), PLOC_StrCon (*acceptFilename)(PLOC_StrCon), PLOC_OptLayout (*acceptWsAfterFilename)(PLOC_OptLayout), PLOC_OptLayout (*acceptWsAfterAreaInFile)(PLOC_OptLayout), PLOC_OptLayout (*acceptWsAfterComma)(PLOC_OptLayout), PLOC_Area (*acceptArea)(PLOC_Area), PLOC_OptLayout (*acceptWsAfterArea)(PLOC_OptLayout))
{
  if (PLOC_isLocationFile(arg)) {
    return PLOC_makeLocationFile(
        acceptWsAfterFile ? acceptWsAfterFile(PLOC_getLocationWsAfterFile(arg)) : PLOC_getLocationWsAfterFile(arg),
        acceptWsAfterParenOpen ? acceptWsAfterParenOpen(PLOC_getLocationWsAfterParenOpen(arg)) : PLOC_getLocationWsAfterParenOpen(arg),
        acceptFilename ? acceptFilename(PLOC_getLocationFilename(arg)) : PLOC_getLocationFilename(arg),
        acceptWsAfterFilename ? acceptWsAfterFilename(PLOC_getLocationWsAfterFilename(arg)) : PLOC_getLocationWsAfterFilename(arg));
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

/*}}}  */
/*{{{  PLOC_Area PLOC_visitArea(PLOC_Area arg, PLOC_OptLayout (*acceptWsAfterArea)(PLOC_OptLayout), PLOC_OptLayout (*acceptWsAfterParenOpen)(PLOC_OptLayout), PLOC_NatCon (*acceptBeginLine)(PLOC_NatCon), PLOC_OptLayout (*acceptWsAfterBeginLine)(PLOC_OptLayout), PLOC_OptLayout (*acceptWsAfterComma)(PLOC_OptLayout), PLOC_NatCon (*acceptBeginColumn)(PLOC_NatCon), PLOC_OptLayout (*acceptWsAfterBeginColumn)(PLOC_OptLayout), PLOC_OptLayout (*acceptWsAfterComma1)(PLOC_OptLayout), PLOC_NatCon (*acceptEndLine)(PLOC_NatCon), PLOC_OptLayout (*acceptWsAfterEndLine)(PLOC_OptLayout), PLOC_OptLayout (*acceptWsAfterComma2)(PLOC_OptLayout), PLOC_NatCon (*acceptEndColumn)(PLOC_NatCon), PLOC_OptLayout (*acceptWsAfterEndColumn)(PLOC_OptLayout), PLOC_OptLayout (*acceptWsAfterComma3)(PLOC_OptLayout), PLOC_NatCon (*acceptOffset)(PLOC_NatCon), PLOC_OptLayout (*acceptWsAfterOffset)(PLOC_OptLayout), PLOC_OptLayout (*acceptWsAfterComma4)(PLOC_OptLayout), PLOC_NatCon (*acceptLength)(PLOC_NatCon), PLOC_OptLayout (*acceptWsAfterLength)(PLOC_OptLayout)) */

PLOC_Area PLOC_visitArea(PLOC_Area arg, PLOC_OptLayout (*acceptWsAfterArea)(PLOC_OptLayout), PLOC_OptLayout (*acceptWsAfterParenOpen)(PLOC_OptLayout), PLOC_NatCon (*acceptBeginLine)(PLOC_NatCon), PLOC_OptLayout (*acceptWsAfterBeginLine)(PLOC_OptLayout), PLOC_OptLayout (*acceptWsAfterComma)(PLOC_OptLayout), PLOC_NatCon (*acceptBeginColumn)(PLOC_NatCon), PLOC_OptLayout (*acceptWsAfterBeginColumn)(PLOC_OptLayout), PLOC_OptLayout (*acceptWsAfterComma1)(PLOC_OptLayout), PLOC_NatCon (*acceptEndLine)(PLOC_NatCon), PLOC_OptLayout (*acceptWsAfterEndLine)(PLOC_OptLayout), PLOC_OptLayout (*acceptWsAfterComma2)(PLOC_OptLayout), PLOC_NatCon (*acceptEndColumn)(PLOC_NatCon), PLOC_OptLayout (*acceptWsAfterEndColumn)(PLOC_OptLayout), PLOC_OptLayout (*acceptWsAfterComma3)(PLOC_OptLayout), PLOC_NatCon (*acceptOffset)(PLOC_NatCon), PLOC_OptLayout (*acceptWsAfterOffset)(PLOC_OptLayout), PLOC_OptLayout (*acceptWsAfterComma4)(PLOC_OptLayout), PLOC_NatCon (*acceptLength)(PLOC_NatCon), PLOC_OptLayout (*acceptWsAfterLength)(PLOC_OptLayout))
{
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

/*}}}  */
/*{{{  PLOC_Start PLOC_visitStart(PLOC_Start arg, PLOC_OptLayout (*acceptWsBefore)(PLOC_OptLayout), PLOC_Area (*acceptTopArea)(PLOC_Area), PLOC_OptLayout (*acceptWsAfter)(PLOC_OptLayout), int (*acceptAmbCnt)(int), PLOC_Location (*acceptTopLocation)(PLOC_Location), PLOC_NatCon (*acceptTopNatCon)(PLOC_NatCon), PLOC_Escaped (*acceptTopEscaped)(PLOC_Escaped), PLOC_Normal (*acceptTopNormal)(PLOC_Normal), PLOC_StrCon (*acceptTopStrCon)(PLOC_StrCon)) */

PLOC_Start PLOC_visitStart(PLOC_Start arg, PLOC_OptLayout (*acceptWsBefore)(PLOC_OptLayout), PLOC_Area (*acceptTopArea)(PLOC_Area), PLOC_OptLayout (*acceptWsAfter)(PLOC_OptLayout), int (*acceptAmbCnt)(int), PLOC_Location (*acceptTopLocation)(PLOC_Location), PLOC_NatCon (*acceptTopNatCon)(PLOC_NatCon), PLOC_Escaped (*acceptTopEscaped)(PLOC_Escaped), PLOC_Normal (*acceptTopNormal)(PLOC_Normal), PLOC_StrCon (*acceptTopStrCon)(PLOC_StrCon))
{
  if (PLOC_isStartArea(arg)) {
    return PLOC_makeStartArea(
        acceptWsBefore ? acceptWsBefore(PLOC_getStartWsBefore(arg)) : PLOC_getStartWsBefore(arg),
        acceptTopArea ? acceptTopArea(PLOC_getStartTopArea(arg)) : PLOC_getStartTopArea(arg),
        acceptWsAfter ? acceptWsAfter(PLOC_getStartWsAfter(arg)) : PLOC_getStartWsAfter(arg),
        acceptAmbCnt ? acceptAmbCnt(PLOC_getStartAmbCnt(arg)) : PLOC_getStartAmbCnt(arg));
  }
  if (PLOC_isStartLocation(arg)) {
    return PLOC_makeStartLocation(
        acceptWsBefore ? acceptWsBefore(PLOC_getStartWsBefore(arg)) : PLOC_getStartWsBefore(arg),
        acceptTopLocation ? acceptTopLocation(PLOC_getStartTopLocation(arg)) : PLOC_getStartTopLocation(arg),
        acceptWsAfter ? acceptWsAfter(PLOC_getStartWsAfter(arg)) : PLOC_getStartWsAfter(arg),
        acceptAmbCnt ? acceptAmbCnt(PLOC_getStartAmbCnt(arg)) : PLOC_getStartAmbCnt(arg));
  }
  if (PLOC_isStartNatCon(arg)) {
    return PLOC_makeStartNatCon(
        acceptWsBefore ? acceptWsBefore(PLOC_getStartWsBefore(arg)) : PLOC_getStartWsBefore(arg),
        acceptTopNatCon ? acceptTopNatCon(PLOC_getStartTopNatCon(arg)) : PLOC_getStartTopNatCon(arg),
        acceptWsAfter ? acceptWsAfter(PLOC_getStartWsAfter(arg)) : PLOC_getStartWsAfter(arg),
        acceptAmbCnt ? acceptAmbCnt(PLOC_getStartAmbCnt(arg)) : PLOC_getStartAmbCnt(arg));
  }
  if (PLOC_isStartEscaped(arg)) {
    return PLOC_makeStartEscaped(
        acceptWsBefore ? acceptWsBefore(PLOC_getStartWsBefore(arg)) : PLOC_getStartWsBefore(arg),
        acceptTopEscaped ? acceptTopEscaped(PLOC_getStartTopEscaped(arg)) : PLOC_getStartTopEscaped(arg),
        acceptWsAfter ? acceptWsAfter(PLOC_getStartWsAfter(arg)) : PLOC_getStartWsAfter(arg),
        acceptAmbCnt ? acceptAmbCnt(PLOC_getStartAmbCnt(arg)) : PLOC_getStartAmbCnt(arg));
  }
  if (PLOC_isStartNormal(arg)) {
    return PLOC_makeStartNormal(
        acceptWsBefore ? acceptWsBefore(PLOC_getStartWsBefore(arg)) : PLOC_getStartWsBefore(arg),
        acceptTopNormal ? acceptTopNormal(PLOC_getStartTopNormal(arg)) : PLOC_getStartTopNormal(arg),
        acceptWsAfter ? acceptWsAfter(PLOC_getStartWsAfter(arg)) : PLOC_getStartWsAfter(arg),
        acceptAmbCnt ? acceptAmbCnt(PLOC_getStartAmbCnt(arg)) : PLOC_getStartAmbCnt(arg));
  }
  if (PLOC_isStartStrCon(arg)) {
    return PLOC_makeStartStrCon(
        acceptWsBefore ? acceptWsBefore(PLOC_getStartWsBefore(arg)) : PLOC_getStartWsBefore(arg),
        acceptTopStrCon ? acceptTopStrCon(PLOC_getStartTopStrCon(arg)) : PLOC_getStartTopStrCon(arg),
        acceptWsAfter ? acceptWsAfter(PLOC_getStartWsAfter(arg)) : PLOC_getStartWsAfter(arg),
        acceptAmbCnt ? acceptAmbCnt(PLOC_getStartAmbCnt(arg)) : PLOC_getStartAmbCnt(arg));
  }
  ATabort("not a Start: %t\n", arg);
  return (PLOC_Start)NULL;
}

/*}}}  */
/*{{{  PLOC_OptLayout PLOC_visitOptLayout(PLOC_OptLayout arg, char* (*acceptString)(char*)) */

PLOC_OptLayout PLOC_visitOptLayout(PLOC_OptLayout arg, char* (*acceptString)(char*))
{
  if (PLOC_isOptLayoutAbsent(arg)) {
    return PLOC_makeOptLayoutAbsent();
  }
  if (PLOC_isOptLayoutPresent(arg)) {
    return PLOC_makeOptLayoutPresent(
        acceptString ? acceptString(PLOC_getOptLayoutString(arg)) : PLOC_getOptLayoutString(arg));
  }
  ATabort("not a OptLayout: %t\n", arg);
  return (PLOC_OptLayout)NULL;
}

/*}}}  */

/*}}}  */
