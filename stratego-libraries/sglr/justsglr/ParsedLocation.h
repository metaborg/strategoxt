#ifndef _PARSEDLOCATION_H
#define _PARSEDLOCATION_H

#include <stdlib.h>
#include <string.h>
#include <aterm1.h>
#include "ParsedLocation_dict.h"

typedef struct _PLOC_OptLayout *PLOC_OptLayout;
typedef struct _PLOC_Layout *PLOC_Layout;
typedef struct _PLOC_LexLayoutList *PLOC_LexLayoutList;
typedef struct _PLOC_LexStrChar *PLOC_LexStrChar;
typedef struct _PLOC_StrChar *PLOC_StrChar;
typedef struct _PLOC_LexStrCon *PLOC_LexStrCon;
typedef struct _PLOC_StrCon *PLOC_StrCon;
typedef struct _PLOC_LexStrCharChars *PLOC_LexStrCharChars;
typedef struct _PLOC_LexNatCon *PLOC_LexNatCon;
typedef struct _PLOC_NatCon *PLOC_NatCon;
typedef struct _PLOC_LexLayout *PLOC_LexLayout;
typedef struct _PLOC_Location *PLOC_Location;
typedef struct _PLOC_Area *PLOC_Area;
typedef struct _PLOC_Slice *PLOC_Slice;
typedef struct _PLOC_AreaAreas *PLOC_AreaAreas;

void PLOC_initParsedLocationApi(void);

void PLOC_protectOptLayout(PLOC_OptLayout * arg);
void PLOC_unprotectOptLayout(PLOC_OptLayout * arg);
void PLOC_protectLayout(PLOC_Layout * arg);
void PLOC_unprotectLayout(PLOC_Layout * arg);
void PLOC_protectLexLayoutList(PLOC_LexLayoutList * arg);
void PLOC_unprotectLexLayoutList(PLOC_LexLayoutList * arg);
void PLOC_protectLexStrChar(PLOC_LexStrChar * arg);
void PLOC_unprotectLexStrChar(PLOC_LexStrChar * arg);
void PLOC_protectStrChar(PLOC_StrChar * arg);
void PLOC_unprotectStrChar(PLOC_StrChar * arg);
void PLOC_protectLexStrCon(PLOC_LexStrCon * arg);
void PLOC_unprotectLexStrCon(PLOC_LexStrCon * arg);
void PLOC_protectStrCon(PLOC_StrCon * arg);
void PLOC_unprotectStrCon(PLOC_StrCon * arg);
void PLOC_protectLexStrCharChars(PLOC_LexStrCharChars * arg);
void PLOC_unprotectLexStrCharChars(PLOC_LexStrCharChars * arg);
void PLOC_protectLexNatCon(PLOC_LexNatCon * arg);
void PLOC_unprotectLexNatCon(PLOC_LexNatCon * arg);
void PLOC_protectNatCon(PLOC_NatCon * arg);
void PLOC_unprotectNatCon(PLOC_NatCon * arg);
void PLOC_protectLexLayout(PLOC_LexLayout * arg);
void PLOC_unprotectLexLayout(PLOC_LexLayout * arg);
void PLOC_protectLocation(PLOC_Location * arg);
void PLOC_unprotectLocation(PLOC_Location * arg);
void PLOC_protectArea(PLOC_Area * arg);
void PLOC_unprotectArea(PLOC_Area * arg);
void PLOC_protectSlice(PLOC_Slice * arg);
void PLOC_unprotectSlice(PLOC_Slice * arg);
void PLOC_protectAreaAreas(PLOC_AreaAreas * arg);
void PLOC_unprotectAreaAreas(PLOC_AreaAreas * arg);
PLOC_OptLayout PLOC_OptLayoutFromTerm(ATerm t);
ATerm PLOC_OptLayoutToTerm(PLOC_OptLayout arg);
PLOC_Layout PLOC_LayoutFromTerm(ATerm t);
ATerm PLOC_LayoutToTerm(PLOC_Layout arg);
PLOC_LexLayoutList PLOC_LexLayoutListFromTerm(ATerm t);
ATerm PLOC_LexLayoutListToTerm(PLOC_LexLayoutList arg);
PLOC_LexStrChar PLOC_LexStrCharFromTerm(ATerm t);
ATerm PLOC_LexStrCharToTerm(PLOC_LexStrChar arg);
PLOC_StrChar PLOC_StrCharFromTerm(ATerm t);
ATerm PLOC_StrCharToTerm(PLOC_StrChar arg);
PLOC_LexStrCon PLOC_LexStrConFromTerm(ATerm t);
ATerm PLOC_LexStrConToTerm(PLOC_LexStrCon arg);
PLOC_StrCon PLOC_StrConFromTerm(ATerm t);
ATerm PLOC_StrConToTerm(PLOC_StrCon arg);
PLOC_LexStrCharChars PLOC_LexStrCharCharsFromTerm(ATerm t);
ATerm PLOC_LexStrCharCharsToTerm(PLOC_LexStrCharChars arg);
PLOC_LexNatCon PLOC_LexNatConFromTerm(ATerm t);
ATerm PLOC_LexNatConToTerm(PLOC_LexNatCon arg);
PLOC_NatCon PLOC_NatConFromTerm(ATerm t);
ATerm PLOC_NatConToTerm(PLOC_NatCon arg);
PLOC_LexLayout PLOC_LexLayoutFromTerm(ATerm t);
ATerm PLOC_LexLayoutToTerm(PLOC_LexLayout arg);
PLOC_Location PLOC_LocationFromTerm(ATerm t);
ATerm PLOC_LocationToTerm(PLOC_Location arg);
PLOC_Area PLOC_AreaFromTerm(ATerm t);
ATerm PLOC_AreaToTerm(PLOC_Area arg);
PLOC_Slice PLOC_SliceFromTerm(ATerm t);
ATerm PLOC_SliceToTerm(PLOC_Slice arg);
PLOC_AreaAreas PLOC_AreaAreasFromTerm(ATerm t);
ATerm PLOC_AreaAreasToTerm(PLOC_AreaAreas arg);
int PLOC_getLexLayoutListLength(PLOC_LexLayoutList arg);
PLOC_LexLayoutList PLOC_reverseLexLayoutList(PLOC_LexLayoutList arg);
PLOC_LexLayoutList PLOC_appendLexLayoutList(PLOC_LexLayoutList arg,
					    PLOC_LexLayout elem);
PLOC_LexLayoutList PLOC_concatLexLayoutList(PLOC_LexLayoutList arg0,
					    PLOC_LexLayoutList arg1);
PLOC_LexLayoutList PLOC_sliceLexLayoutList(PLOC_LexLayoutList arg, int start,
					   int end);
PLOC_LexLayout PLOC_getLexLayoutListLexLayoutAt(PLOC_LexLayoutList arg,
						int index);
PLOC_LexLayoutList PLOC_replaceLexLayoutListLexLayoutAt(PLOC_LexLayoutList
							arg,
							PLOC_LexLayout elem,
							int index);
PLOC_LexLayoutList PLOC_makeLexLayoutList2(PLOC_LexLayout elem1,
					   PLOC_LexLayout elem2);
PLOC_LexLayoutList PLOC_makeLexLayoutList3(PLOC_LexLayout elem1,
					   PLOC_LexLayout elem2,
					   PLOC_LexLayout elem3);
PLOC_LexLayoutList PLOC_makeLexLayoutList4(PLOC_LexLayout elem1,
					   PLOC_LexLayout elem2,
					   PLOC_LexLayout elem3,
					   PLOC_LexLayout elem4);
PLOC_LexLayoutList PLOC_makeLexLayoutList5(PLOC_LexLayout elem1,
					   PLOC_LexLayout elem2,
					   PLOC_LexLayout elem3,
					   PLOC_LexLayout elem4,
					   PLOC_LexLayout elem5);
PLOC_LexLayoutList PLOC_makeLexLayoutList6(PLOC_LexLayout elem1,
					   PLOC_LexLayout elem2,
					   PLOC_LexLayout elem3,
					   PLOC_LexLayout elem4,
					   PLOC_LexLayout elem5,
					   PLOC_LexLayout elem6);
int PLOC_getLexStrCharCharsLength(PLOC_LexStrCharChars arg);
PLOC_LexStrCharChars PLOC_reverseLexStrCharChars(PLOC_LexStrCharChars arg);
PLOC_LexStrCharChars PLOC_appendLexStrCharChars(PLOC_LexStrCharChars arg,
						PLOC_LexStrChar elem);
PLOC_LexStrCharChars PLOC_concatLexStrCharChars(PLOC_LexStrCharChars arg0,
						PLOC_LexStrCharChars arg1);
PLOC_LexStrCharChars PLOC_sliceLexStrCharChars(PLOC_LexStrCharChars arg,
					       int start, int end);
PLOC_LexStrChar PLOC_getLexStrCharCharsLexStrCharAt(PLOC_LexStrCharChars arg,
						    int index);
PLOC_LexStrCharChars
PLOC_replaceLexStrCharCharsLexStrCharAt(PLOC_LexStrCharChars arg,
					PLOC_LexStrChar elem, int index);
PLOC_LexStrCharChars PLOC_makeLexStrCharChars2(PLOC_LexStrChar elem1,
					       PLOC_LexStrChar elem2);
PLOC_LexStrCharChars PLOC_makeLexStrCharChars3(PLOC_LexStrChar elem1,
					       PLOC_LexStrChar elem2,
					       PLOC_LexStrChar elem3);
PLOC_LexStrCharChars PLOC_makeLexStrCharChars4(PLOC_LexStrChar elem1,
					       PLOC_LexStrChar elem2,
					       PLOC_LexStrChar elem3,
					       PLOC_LexStrChar elem4);
PLOC_LexStrCharChars PLOC_makeLexStrCharChars5(PLOC_LexStrChar elem1,
					       PLOC_LexStrChar elem2,
					       PLOC_LexStrChar elem3,
					       PLOC_LexStrChar elem4,
					       PLOC_LexStrChar elem5);
PLOC_LexStrCharChars PLOC_makeLexStrCharChars6(PLOC_LexStrChar elem1,
					       PLOC_LexStrChar elem2,
					       PLOC_LexStrChar elem3,
					       PLOC_LexStrChar elem4,
					       PLOC_LexStrChar elem5,
					       PLOC_LexStrChar elem6);
int PLOC_getAreaAreasLength(PLOC_AreaAreas arg);
PLOC_AreaAreas PLOC_reverseAreaAreas(PLOC_AreaAreas arg);
PLOC_AreaAreas PLOC_appendAreaAreas(PLOC_AreaAreas arg0,
				    PLOC_OptLayout wsAfterHead,
				    PLOC_OptLayout wsAfterSep,
				    PLOC_Area arg1);
PLOC_AreaAreas PLOC_concatAreaAreas(PLOC_AreaAreas arg0,
				    PLOC_OptLayout wsAfterHead,
				    PLOC_OptLayout wsAfterSep,
				    PLOC_AreaAreas arg1);
PLOC_AreaAreas PLOC_sliceAreaAreas(PLOC_AreaAreas arg, int start, int end);
PLOC_Area PLOC_getAreaAreasAreaAt(PLOC_AreaAreas arg, int index);
PLOC_AreaAreas PLOC_replaceAreaAreasAreaAt(PLOC_AreaAreas arg, PLOC_Area elem,
					   int index);
PLOC_AreaAreas PLOC_makeAreaAreas2(PLOC_OptLayout wsAfterHead,
				   PLOC_OptLayout wsAfterSep, PLOC_Area elem1,
				   PLOC_Area elem2);
PLOC_AreaAreas PLOC_makeAreaAreas3(PLOC_OptLayout wsAfterHead,
				   PLOC_OptLayout wsAfterSep, PLOC_Area elem1,
				   PLOC_Area elem2, PLOC_Area elem3);
PLOC_AreaAreas PLOC_makeAreaAreas4(PLOC_OptLayout wsAfterHead,
				   PLOC_OptLayout wsAfterSep, PLOC_Area elem1,
				   PLOC_Area elem2, PLOC_Area elem3,
				   PLOC_Area elem4);
PLOC_AreaAreas PLOC_makeAreaAreas5(PLOC_OptLayout wsAfterHead,
				   PLOC_OptLayout wsAfterSep, PLOC_Area elem1,
				   PLOC_Area elem2, PLOC_Area elem3,
				   PLOC_Area elem4, PLOC_Area elem5);
PLOC_AreaAreas PLOC_makeAreaAreas6(PLOC_OptLayout wsAfterHead,
				   PLOC_OptLayout wsAfterSep, PLOC_Area elem1,
				   PLOC_Area elem2, PLOC_Area elem3,
				   PLOC_Area elem4, PLOC_Area elem5,
				   PLOC_Area elem6);
PLOC_OptLayout PLOC_makeOptLayoutAbsent(void);
PLOC_OptLayout PLOC_makeOptLayoutPresent(PLOC_Layout layout);
PLOC_Layout PLOC_makeLayoutLexToCf(PLOC_LexLayoutList list);
PLOC_LexLayoutList PLOC_makeLexLayoutListEmpty(void);
PLOC_LexLayoutList PLOC_makeLexLayoutListSingle(PLOC_LexLayout head);
PLOC_LexLayoutList PLOC_makeLexLayoutListMany(PLOC_LexLayout head,
					      PLOC_LexLayoutList tail);
PLOC_LexStrChar PLOC_makeLexStrCharNewline(void);
PLOC_LexStrChar PLOC_makeLexStrCharTab(void);
PLOC_LexStrChar PLOC_makeLexStrCharQuote(void);
PLOC_LexStrChar PLOC_makeLexStrCharBackslash(void);
PLOC_LexStrChar PLOC_makeLexStrCharDecimal(char a, char b, char c);
PLOC_LexStrChar PLOC_makeLexStrCharNormal(char ch);
PLOC_StrChar PLOC_makeStrCharLexToCf(PLOC_LexStrChar StrChar);
PLOC_LexStrCon PLOC_makeLexStrConDefault(PLOC_LexStrCharChars chars);
PLOC_StrCon PLOC_makeStrConLexToCf(PLOC_LexStrCon StrCon);
PLOC_LexStrCharChars PLOC_makeLexStrCharCharsEmpty(void);
PLOC_LexStrCharChars PLOC_makeLexStrCharCharsSingle(PLOC_LexStrChar head);
PLOC_LexStrCharChars PLOC_makeLexStrCharCharsMany(PLOC_LexStrChar head,
						  PLOC_LexStrCharChars tail);
PLOC_LexNatCon PLOC_makeLexNatConDigits(const char *list);
PLOC_NatCon PLOC_makeNatConLexToCf(PLOC_LexNatCon NatCon);
PLOC_LexLayout PLOC_makeLexLayoutWhitespace(char ch);
PLOC_Location PLOC_makeLocationFile(PLOC_OptLayout wsAfterFile,
				    PLOC_OptLayout wsAfterParenOpen,
				    PLOC_StrCon filename,
				    PLOC_OptLayout wsAfterFilename);
PLOC_Location PLOC_makeLocationArea(PLOC_OptLayout wsAfterA,
				    PLOC_OptLayout wsAfterParenOpen,
				    PLOC_Area Area,
				    PLOC_OptLayout wsAfterArea);
PLOC_Location PLOC_makeLocationAreaInFile(PLOC_OptLayout wsAfterAreaInFile,
					  PLOC_OptLayout wsAfterParenOpen,
					  PLOC_StrCon filename,
					  PLOC_OptLayout wsAfterFilename,
					  PLOC_OptLayout wsAfterComma,
					  PLOC_Area Area,
					  PLOC_OptLayout wsAfterArea);
PLOC_Area PLOC_makeAreaArea(PLOC_OptLayout wsAfterArea,
			    PLOC_OptLayout wsAfterParenOpen,
			    PLOC_NatCon beginLine,
			    PLOC_OptLayout wsAfterBeginLine,
			    PLOC_OptLayout wsAfterComma,
			    PLOC_NatCon beginColumn,
			    PLOC_OptLayout wsAfterBeginColumn,
			    PLOC_OptLayout wsAfterComma1, PLOC_NatCon endLine,
			    PLOC_OptLayout wsAfterEndLine,
			    PLOC_OptLayout wsAfterComma2,
			    PLOC_NatCon endColumn,
			    PLOC_OptLayout wsAfterEndColumn,
			    PLOC_OptLayout wsAfterComma3, PLOC_NatCon offset,
			    PLOC_OptLayout wsAfterOffset,
			    PLOC_OptLayout wsAfterComma4, PLOC_NatCon length,
			    PLOC_OptLayout wsAfterLength);
PLOC_Slice PLOC_makeSliceSlice(PLOC_OptLayout wsAfterSlice,
			       PLOC_OptLayout wsAfterParenOpen,
			       PLOC_StrCon id, PLOC_OptLayout wsAfterId,
			       PLOC_OptLayout wsAfterComma,
			       PLOC_OptLayout wsAfterBracketOpen,
			       PLOC_AreaAreas areas,
			       PLOC_OptLayout wsAfterAreas,
			       PLOC_OptLayout wsAfterBracketClose);
PLOC_AreaAreas PLOC_makeAreaAreasEmpty(void);
PLOC_AreaAreas PLOC_makeAreaAreasSingle(PLOC_Area head);
PLOC_AreaAreas PLOC_makeAreaAreasMany(PLOC_Area head,
				      PLOC_OptLayout wsAfterHead,
				      PLOC_OptLayout wsAfterSep,
				      PLOC_AreaAreas tail);
ATbool PLOC_isEqualOptLayout(PLOC_OptLayout arg0, PLOC_OptLayout arg1);
ATbool PLOC_isEqualLayout(PLOC_Layout arg0, PLOC_Layout arg1);
ATbool PLOC_isEqualLexLayoutList(PLOC_LexLayoutList arg0,
				 PLOC_LexLayoutList arg1);
ATbool PLOC_isEqualLexStrChar(PLOC_LexStrChar arg0, PLOC_LexStrChar arg1);
ATbool PLOC_isEqualStrChar(PLOC_StrChar arg0, PLOC_StrChar arg1);
ATbool PLOC_isEqualLexStrCon(PLOC_LexStrCon arg0, PLOC_LexStrCon arg1);
ATbool PLOC_isEqualStrCon(PLOC_StrCon arg0, PLOC_StrCon arg1);
ATbool PLOC_isEqualLexStrCharChars(PLOC_LexStrCharChars arg0,
				   PLOC_LexStrCharChars arg1);
ATbool PLOC_isEqualLexNatCon(PLOC_LexNatCon arg0, PLOC_LexNatCon arg1);
ATbool PLOC_isEqualNatCon(PLOC_NatCon arg0, PLOC_NatCon arg1);
ATbool PLOC_isEqualLexLayout(PLOC_LexLayout arg0, PLOC_LexLayout arg1);
ATbool PLOC_isEqualLocation(PLOC_Location arg0, PLOC_Location arg1);
ATbool PLOC_isEqualArea(PLOC_Area arg0, PLOC_Area arg1);
ATbool PLOC_isEqualSlice(PLOC_Slice arg0, PLOC_Slice arg1);
ATbool PLOC_isEqualAreaAreas(PLOC_AreaAreas arg0, PLOC_AreaAreas arg1);
ATbool PLOC_isValidOptLayout(PLOC_OptLayout arg);
inline ATbool PLOC_isOptLayoutAbsent(PLOC_OptLayout arg);
inline ATbool PLOC_isOptLayoutPresent(PLOC_OptLayout arg);
ATbool PLOC_hasOptLayoutLayout(PLOC_OptLayout arg);
PLOC_Layout PLOC_getOptLayoutLayout(PLOC_OptLayout arg);
PLOC_OptLayout PLOC_setOptLayoutLayout(PLOC_OptLayout arg,
				       PLOC_Layout layout);
ATbool PLOC_isValidLayout(PLOC_Layout arg);
inline ATbool PLOC_isLayoutLexToCf(PLOC_Layout arg);
ATbool PLOC_hasLayoutList(PLOC_Layout arg);
PLOC_LexLayoutList PLOC_getLayoutList(PLOC_Layout arg);
PLOC_Layout PLOC_setLayoutList(PLOC_Layout arg, PLOC_LexLayoutList list);
ATbool PLOC_isValidLexLayoutList(PLOC_LexLayoutList arg);
inline ATbool PLOC_isLexLayoutListEmpty(PLOC_LexLayoutList arg);
inline ATbool PLOC_isLexLayoutListSingle(PLOC_LexLayoutList arg);
inline ATbool PLOC_isLexLayoutListMany(PLOC_LexLayoutList arg);
ATbool PLOC_hasLexLayoutListHead(PLOC_LexLayoutList arg);
ATbool PLOC_hasLexLayoutListTail(PLOC_LexLayoutList arg);
PLOC_LexLayout PLOC_getLexLayoutListHead(PLOC_LexLayoutList arg);
PLOC_LexLayoutList PLOC_getLexLayoutListTail(PLOC_LexLayoutList arg);
PLOC_LexLayoutList PLOC_setLexLayoutListHead(PLOC_LexLayoutList arg,
					     PLOC_LexLayout head);
PLOC_LexLayoutList PLOC_setLexLayoutListTail(PLOC_LexLayoutList arg,
					     PLOC_LexLayoutList tail);
ATbool PLOC_isValidLexStrChar(PLOC_LexStrChar arg);
inline ATbool PLOC_isLexStrCharNewline(PLOC_LexStrChar arg);
inline ATbool PLOC_isLexStrCharTab(PLOC_LexStrChar arg);
inline ATbool PLOC_isLexStrCharQuote(PLOC_LexStrChar arg);
inline ATbool PLOC_isLexStrCharBackslash(PLOC_LexStrChar arg);
inline ATbool PLOC_isLexStrCharDecimal(PLOC_LexStrChar arg);
inline ATbool PLOC_isLexStrCharNormal(PLOC_LexStrChar arg);
ATbool PLOC_hasLexStrCharA(PLOC_LexStrChar arg);
ATbool PLOC_hasLexStrCharB(PLOC_LexStrChar arg);
ATbool PLOC_hasLexStrCharC(PLOC_LexStrChar arg);
ATbool PLOC_hasLexStrCharCh(PLOC_LexStrChar arg);
char PLOC_getLexStrCharA(PLOC_LexStrChar arg);
char PLOC_getLexStrCharB(PLOC_LexStrChar arg);
char PLOC_getLexStrCharC(PLOC_LexStrChar arg);
char PLOC_getLexStrCharCh(PLOC_LexStrChar arg);
PLOC_LexStrChar PLOC_setLexStrCharA(PLOC_LexStrChar arg, char a);
PLOC_LexStrChar PLOC_setLexStrCharB(PLOC_LexStrChar arg, char b);
PLOC_LexStrChar PLOC_setLexStrCharC(PLOC_LexStrChar arg, char c);
PLOC_LexStrChar PLOC_setLexStrCharCh(PLOC_LexStrChar arg, char ch);
ATbool PLOC_isValidStrChar(PLOC_StrChar arg);
inline ATbool PLOC_isStrCharLexToCf(PLOC_StrChar arg);
ATbool PLOC_hasStrCharStrChar(PLOC_StrChar arg);
PLOC_LexStrChar PLOC_getStrCharStrChar(PLOC_StrChar arg);
PLOC_StrChar PLOC_setStrCharStrChar(PLOC_StrChar arg,
				    PLOC_LexStrChar StrChar);
ATbool PLOC_isValidLexStrCon(PLOC_LexStrCon arg);
inline ATbool PLOC_isLexStrConDefault(PLOC_LexStrCon arg);
ATbool PLOC_hasLexStrConChars(PLOC_LexStrCon arg);
PLOC_LexStrCharChars PLOC_getLexStrConChars(PLOC_LexStrCon arg);
PLOC_LexStrCon PLOC_setLexStrConChars(PLOC_LexStrCon arg,
				      PLOC_LexStrCharChars chars);
ATbool PLOC_isValidStrCon(PLOC_StrCon arg);
inline ATbool PLOC_isStrConLexToCf(PLOC_StrCon arg);
ATbool PLOC_hasStrConStrCon(PLOC_StrCon arg);
PLOC_LexStrCon PLOC_getStrConStrCon(PLOC_StrCon arg);
PLOC_StrCon PLOC_setStrConStrCon(PLOC_StrCon arg, PLOC_LexStrCon StrCon);
ATbool PLOC_isValidLexStrCharChars(PLOC_LexStrCharChars arg);
inline ATbool PLOC_isLexStrCharCharsEmpty(PLOC_LexStrCharChars arg);
inline ATbool PLOC_isLexStrCharCharsSingle(PLOC_LexStrCharChars arg);
inline ATbool PLOC_isLexStrCharCharsMany(PLOC_LexStrCharChars arg);
ATbool PLOC_hasLexStrCharCharsHead(PLOC_LexStrCharChars arg);
ATbool PLOC_hasLexStrCharCharsTail(PLOC_LexStrCharChars arg);
PLOC_LexStrChar PLOC_getLexStrCharCharsHead(PLOC_LexStrCharChars arg);
PLOC_LexStrCharChars PLOC_getLexStrCharCharsTail(PLOC_LexStrCharChars arg);
PLOC_LexStrCharChars PLOC_setLexStrCharCharsHead(PLOC_LexStrCharChars arg,
						 PLOC_LexStrChar head);
PLOC_LexStrCharChars PLOC_setLexStrCharCharsTail(PLOC_LexStrCharChars arg,
						 PLOC_LexStrCharChars tail);
ATbool PLOC_isValidLexNatCon(PLOC_LexNatCon arg);
inline ATbool PLOC_isLexNatConDigits(PLOC_LexNatCon arg);
ATbool PLOC_hasLexNatConList(PLOC_LexNatCon arg);
char *PLOC_getLexNatConList(PLOC_LexNatCon arg);
PLOC_LexNatCon PLOC_setLexNatConList(PLOC_LexNatCon arg, const char *list);
ATbool PLOC_isValidNatCon(PLOC_NatCon arg);
inline ATbool PLOC_isNatConLexToCf(PLOC_NatCon arg);
ATbool PLOC_hasNatConNatCon(PLOC_NatCon arg);
PLOC_LexNatCon PLOC_getNatConNatCon(PLOC_NatCon arg);
PLOC_NatCon PLOC_setNatConNatCon(PLOC_NatCon arg, PLOC_LexNatCon NatCon);
ATbool PLOC_isValidLexLayout(PLOC_LexLayout arg);
inline ATbool PLOC_isLexLayoutWhitespace(PLOC_LexLayout arg);
ATbool PLOC_hasLexLayoutCh(PLOC_LexLayout arg);
char PLOC_getLexLayoutCh(PLOC_LexLayout arg);
PLOC_LexLayout PLOC_setLexLayoutCh(PLOC_LexLayout arg, char ch);
ATbool PLOC_isValidLocation(PLOC_Location arg);
inline ATbool PLOC_isLocationFile(PLOC_Location arg);
inline ATbool PLOC_isLocationArea(PLOC_Location arg);
inline ATbool PLOC_isLocationAreaInFile(PLOC_Location arg);
ATbool PLOC_hasLocationWsAfterFile(PLOC_Location arg);
ATbool PLOC_hasLocationWsAfterParenOpen(PLOC_Location arg);
ATbool PLOC_hasLocationFilename(PLOC_Location arg);
ATbool PLOC_hasLocationWsAfterFilename(PLOC_Location arg);
ATbool PLOC_hasLocationWsAfterA(PLOC_Location arg);
ATbool PLOC_hasLocationArea(PLOC_Location arg);
ATbool PLOC_hasLocationWsAfterArea(PLOC_Location arg);
ATbool PLOC_hasLocationWsAfterAreaInFile(PLOC_Location arg);
ATbool PLOC_hasLocationWsAfterComma(PLOC_Location arg);
PLOC_OptLayout PLOC_getLocationWsAfterFile(PLOC_Location arg);
PLOC_OptLayout PLOC_getLocationWsAfterParenOpen(PLOC_Location arg);
PLOC_StrCon PLOC_getLocationFilename(PLOC_Location arg);
PLOC_OptLayout PLOC_getLocationWsAfterFilename(PLOC_Location arg);
PLOC_OptLayout PLOC_getLocationWsAfterA(PLOC_Location arg);
PLOC_Area PLOC_getLocationArea(PLOC_Location arg);
PLOC_OptLayout PLOC_getLocationWsAfterArea(PLOC_Location arg);
PLOC_OptLayout PLOC_getLocationWsAfterAreaInFile(PLOC_Location arg);
PLOC_OptLayout PLOC_getLocationWsAfterComma(PLOC_Location arg);
PLOC_Location PLOC_setLocationWsAfterFile(PLOC_Location arg,
					  PLOC_OptLayout wsAfterFile);
PLOC_Location PLOC_setLocationWsAfterParenOpen(PLOC_Location arg,
					       PLOC_OptLayout
					       wsAfterParenOpen);
PLOC_Location PLOC_setLocationFilename(PLOC_Location arg,
				       PLOC_StrCon filename);
PLOC_Location PLOC_setLocationWsAfterFilename(PLOC_Location arg,
					      PLOC_OptLayout wsAfterFilename);
PLOC_Location PLOC_setLocationWsAfterA(PLOC_Location arg,
				       PLOC_OptLayout wsAfterA);
PLOC_Location PLOC_setLocationArea(PLOC_Location arg, PLOC_Area Area);
PLOC_Location PLOC_setLocationWsAfterArea(PLOC_Location arg,
					  PLOC_OptLayout wsAfterArea);
PLOC_Location PLOC_setLocationWsAfterAreaInFile(PLOC_Location arg,
						PLOC_OptLayout
						wsAfterAreaInFile);
PLOC_Location PLOC_setLocationWsAfterComma(PLOC_Location arg,
					   PLOC_OptLayout wsAfterComma);
ATbool PLOC_isValidArea(PLOC_Area arg);
inline ATbool PLOC_isAreaArea(PLOC_Area arg);
ATbool PLOC_hasAreaWsAfterArea(PLOC_Area arg);
ATbool PLOC_hasAreaWsAfterParenOpen(PLOC_Area arg);
ATbool PLOC_hasAreaBeginLine(PLOC_Area arg);
ATbool PLOC_hasAreaWsAfterBeginLine(PLOC_Area arg);
ATbool PLOC_hasAreaWsAfterComma(PLOC_Area arg);
ATbool PLOC_hasAreaBeginColumn(PLOC_Area arg);
ATbool PLOC_hasAreaWsAfterBeginColumn(PLOC_Area arg);
ATbool PLOC_hasAreaWsAfterComma1(PLOC_Area arg);
ATbool PLOC_hasAreaEndLine(PLOC_Area arg);
ATbool PLOC_hasAreaWsAfterEndLine(PLOC_Area arg);
ATbool PLOC_hasAreaWsAfterComma2(PLOC_Area arg);
ATbool PLOC_hasAreaEndColumn(PLOC_Area arg);
ATbool PLOC_hasAreaWsAfterEndColumn(PLOC_Area arg);
ATbool PLOC_hasAreaWsAfterComma3(PLOC_Area arg);
ATbool PLOC_hasAreaOffset(PLOC_Area arg);
ATbool PLOC_hasAreaWsAfterOffset(PLOC_Area arg);
ATbool PLOC_hasAreaWsAfterComma4(PLOC_Area arg);
ATbool PLOC_hasAreaLength(PLOC_Area arg);
ATbool PLOC_hasAreaWsAfterLength(PLOC_Area arg);
PLOC_OptLayout PLOC_getAreaWsAfterArea(PLOC_Area arg);
PLOC_OptLayout PLOC_getAreaWsAfterParenOpen(PLOC_Area arg);
PLOC_NatCon PLOC_getAreaBeginLine(PLOC_Area arg);
PLOC_OptLayout PLOC_getAreaWsAfterBeginLine(PLOC_Area arg);
PLOC_OptLayout PLOC_getAreaWsAfterComma(PLOC_Area arg);
PLOC_NatCon PLOC_getAreaBeginColumn(PLOC_Area arg);
PLOC_OptLayout PLOC_getAreaWsAfterBeginColumn(PLOC_Area arg);
PLOC_OptLayout PLOC_getAreaWsAfterComma1(PLOC_Area arg);
PLOC_NatCon PLOC_getAreaEndLine(PLOC_Area arg);
PLOC_OptLayout PLOC_getAreaWsAfterEndLine(PLOC_Area arg);
PLOC_OptLayout PLOC_getAreaWsAfterComma2(PLOC_Area arg);
PLOC_NatCon PLOC_getAreaEndColumn(PLOC_Area arg);
PLOC_OptLayout PLOC_getAreaWsAfterEndColumn(PLOC_Area arg);
PLOC_OptLayout PLOC_getAreaWsAfterComma3(PLOC_Area arg);
PLOC_NatCon PLOC_getAreaOffset(PLOC_Area arg);
PLOC_OptLayout PLOC_getAreaWsAfterOffset(PLOC_Area arg);
PLOC_OptLayout PLOC_getAreaWsAfterComma4(PLOC_Area arg);
PLOC_NatCon PLOC_getAreaLength(PLOC_Area arg);
PLOC_OptLayout PLOC_getAreaWsAfterLength(PLOC_Area arg);
PLOC_Area PLOC_setAreaWsAfterArea(PLOC_Area arg, PLOC_OptLayout wsAfterArea);
PLOC_Area PLOC_setAreaWsAfterParenOpen(PLOC_Area arg,
				       PLOC_OptLayout wsAfterParenOpen);
PLOC_Area PLOC_setAreaBeginLine(PLOC_Area arg, PLOC_NatCon beginLine);
PLOC_Area PLOC_setAreaWsAfterBeginLine(PLOC_Area arg,
				       PLOC_OptLayout wsAfterBeginLine);
PLOC_Area PLOC_setAreaWsAfterComma(PLOC_Area arg,
				   PLOC_OptLayout wsAfterComma);
PLOC_Area PLOC_setAreaBeginColumn(PLOC_Area arg, PLOC_NatCon beginColumn);
PLOC_Area PLOC_setAreaWsAfterBeginColumn(PLOC_Area arg,
					 PLOC_OptLayout wsAfterBeginColumn);
PLOC_Area PLOC_setAreaWsAfterComma1(PLOC_Area arg,
				    PLOC_OptLayout wsAfterComma1);
PLOC_Area PLOC_setAreaEndLine(PLOC_Area arg, PLOC_NatCon endLine);
PLOC_Area PLOC_setAreaWsAfterEndLine(PLOC_Area arg,
				     PLOC_OptLayout wsAfterEndLine);
PLOC_Area PLOC_setAreaWsAfterComma2(PLOC_Area arg,
				    PLOC_OptLayout wsAfterComma2);
PLOC_Area PLOC_setAreaEndColumn(PLOC_Area arg, PLOC_NatCon endColumn);
PLOC_Area PLOC_setAreaWsAfterEndColumn(PLOC_Area arg,
				       PLOC_OptLayout wsAfterEndColumn);
PLOC_Area PLOC_setAreaWsAfterComma3(PLOC_Area arg,
				    PLOC_OptLayout wsAfterComma3);
PLOC_Area PLOC_setAreaOffset(PLOC_Area arg, PLOC_NatCon offset);
PLOC_Area PLOC_setAreaWsAfterOffset(PLOC_Area arg,
				    PLOC_OptLayout wsAfterOffset);
PLOC_Area PLOC_setAreaWsAfterComma4(PLOC_Area arg,
				    PLOC_OptLayout wsAfterComma4);
PLOC_Area PLOC_setAreaLength(PLOC_Area arg, PLOC_NatCon length);
PLOC_Area PLOC_setAreaWsAfterLength(PLOC_Area arg,
				    PLOC_OptLayout wsAfterLength);
ATbool PLOC_isValidSlice(PLOC_Slice arg);
inline ATbool PLOC_isSliceSlice(PLOC_Slice arg);
ATbool PLOC_hasSliceWsAfterSlice(PLOC_Slice arg);
ATbool PLOC_hasSliceWsAfterParenOpen(PLOC_Slice arg);
ATbool PLOC_hasSliceId(PLOC_Slice arg);
ATbool PLOC_hasSliceWsAfterId(PLOC_Slice arg);
ATbool PLOC_hasSliceWsAfterComma(PLOC_Slice arg);
ATbool PLOC_hasSliceWsAfterBracketOpen(PLOC_Slice arg);
ATbool PLOC_hasSliceAreas(PLOC_Slice arg);
ATbool PLOC_hasSliceWsAfterAreas(PLOC_Slice arg);
ATbool PLOC_hasSliceWsAfterBracketClose(PLOC_Slice arg);
PLOC_OptLayout PLOC_getSliceWsAfterSlice(PLOC_Slice arg);
PLOC_OptLayout PLOC_getSliceWsAfterParenOpen(PLOC_Slice arg);
PLOC_StrCon PLOC_getSliceId(PLOC_Slice arg);
PLOC_OptLayout PLOC_getSliceWsAfterId(PLOC_Slice arg);
PLOC_OptLayout PLOC_getSliceWsAfterComma(PLOC_Slice arg);
PLOC_OptLayout PLOC_getSliceWsAfterBracketOpen(PLOC_Slice arg);
PLOC_AreaAreas PLOC_getSliceAreas(PLOC_Slice arg);
PLOC_OptLayout PLOC_getSliceWsAfterAreas(PLOC_Slice arg);
PLOC_OptLayout PLOC_getSliceWsAfterBracketClose(PLOC_Slice arg);
PLOC_Slice PLOC_setSliceWsAfterSlice(PLOC_Slice arg,
				     PLOC_OptLayout wsAfterSlice);
PLOC_Slice PLOC_setSliceWsAfterParenOpen(PLOC_Slice arg,
					 PLOC_OptLayout wsAfterParenOpen);
PLOC_Slice PLOC_setSliceId(PLOC_Slice arg, PLOC_StrCon id);
PLOC_Slice PLOC_setSliceWsAfterId(PLOC_Slice arg, PLOC_OptLayout wsAfterId);
PLOC_Slice PLOC_setSliceWsAfterComma(PLOC_Slice arg,
				     PLOC_OptLayout wsAfterComma);
PLOC_Slice PLOC_setSliceWsAfterBracketOpen(PLOC_Slice arg,
					   PLOC_OptLayout wsAfterBracketOpen);
PLOC_Slice PLOC_setSliceAreas(PLOC_Slice arg, PLOC_AreaAreas areas);
PLOC_Slice PLOC_setSliceWsAfterAreas(PLOC_Slice arg,
				     PLOC_OptLayout wsAfterAreas);
PLOC_Slice PLOC_setSliceWsAfterBracketClose(PLOC_Slice arg,
					    PLOC_OptLayout
					    wsAfterBracketClose);
ATbool PLOC_isValidAreaAreas(PLOC_AreaAreas arg);
inline ATbool PLOC_isAreaAreasEmpty(PLOC_AreaAreas arg);
inline ATbool PLOC_isAreaAreasSingle(PLOC_AreaAreas arg);
inline ATbool PLOC_isAreaAreasMany(PLOC_AreaAreas arg);
ATbool PLOC_hasAreaAreasHead(PLOC_AreaAreas arg);
ATbool PLOC_hasAreaAreasWsAfterHead(PLOC_AreaAreas arg);
ATbool PLOC_hasAreaAreasWsAfterSep(PLOC_AreaAreas arg);
ATbool PLOC_hasAreaAreasTail(PLOC_AreaAreas arg);
PLOC_AreaAreas PLOC_getAreaAreasTail(PLOC_AreaAreas arg);
PLOC_Area PLOC_getAreaAreasHead(PLOC_AreaAreas arg);
PLOC_OptLayout PLOC_getAreaAreasWsAfterHead(PLOC_AreaAreas arg);
PLOC_OptLayout PLOC_getAreaAreasWsAfterSep(PLOC_AreaAreas arg);
PLOC_AreaAreas PLOC_setAreaAreasHead(PLOC_AreaAreas arg, PLOC_Area head);
PLOC_AreaAreas PLOC_setAreaAreasWsAfterHead(PLOC_AreaAreas arg,
					    PLOC_OptLayout wsAfterHead);
PLOC_AreaAreas PLOC_setAreaAreasWsAfterSep(PLOC_AreaAreas arg,
					   PLOC_OptLayout wsAfterSep);
PLOC_AreaAreas PLOC_setAreaAreasTail(PLOC_AreaAreas arg, PLOC_AreaAreas tail);
PLOC_OptLayout PLOC_visitOptLayout(PLOC_OptLayout arg,
				   PLOC_Layout(*acceptLayout) (PLOC_Layout));
PLOC_Layout PLOC_visitLayout(PLOC_Layout arg,
			     PLOC_LexLayoutList(*acceptList)
			     (PLOC_LexLayoutList));
PLOC_LexLayoutList PLOC_visitLexLayoutList(PLOC_LexLayoutList arg,
					   PLOC_LexLayout(*acceptHead)
					   (PLOC_LexLayout));
PLOC_LexStrChar PLOC_visitLexStrChar(PLOC_LexStrChar arg,
				     char (*acceptA) (char),
				     char (*acceptB) (char),
				     char (*acceptC) (char),
				     char (*acceptCh) (char));
PLOC_StrChar PLOC_visitStrChar(PLOC_StrChar arg,
			       PLOC_LexStrChar(*acceptStrChar)
			       (PLOC_LexStrChar));
PLOC_LexStrCon PLOC_visitLexStrCon(PLOC_LexStrCon arg,
				   PLOC_LexStrCharChars(*acceptChars)
				   (PLOC_LexStrCharChars));
PLOC_StrCon PLOC_visitStrCon(PLOC_StrCon arg,
			     PLOC_LexStrCon(*acceptStrCon) (PLOC_LexStrCon));
PLOC_LexStrCharChars PLOC_visitLexStrCharChars(PLOC_LexStrCharChars arg,
					       PLOC_LexStrChar(*acceptHead)
					       (PLOC_LexStrChar));
PLOC_LexNatCon PLOC_visitLexNatCon(PLOC_LexNatCon arg,
				   char *(*acceptList) (char *));
PLOC_NatCon PLOC_visitNatCon(PLOC_NatCon arg,
			     PLOC_LexNatCon(*acceptNatCon) (PLOC_LexNatCon));
PLOC_LexLayout PLOC_visitLexLayout(PLOC_LexLayout arg,
				   char (*acceptCh) (char));
PLOC_Location PLOC_visitLocation(PLOC_Location arg,
				 PLOC_OptLayout(*acceptWsAfterFile)
				 (PLOC_OptLayout),
				 PLOC_OptLayout(*acceptWsAfterParenOpen)
				 (PLOC_OptLayout),
				 PLOC_StrCon(*acceptFilename) (PLOC_StrCon),
				 PLOC_OptLayout(*acceptWsAfterFilename)
				 (PLOC_OptLayout),
				 PLOC_OptLayout(*acceptWsAfterA)
				 (PLOC_OptLayout),
				 PLOC_Area(*acceptArea) (PLOC_Area),
				 PLOC_OptLayout(*acceptWsAfterArea)
				 (PLOC_OptLayout),
				 PLOC_OptLayout(*acceptWsAfterAreaInFile)
				 (PLOC_OptLayout),
				 PLOC_OptLayout(*acceptWsAfterComma)
				 (PLOC_OptLayout));
PLOC_Area PLOC_visitArea(PLOC_Area arg,
			 PLOC_OptLayout(*acceptWsAfterArea) (PLOC_OptLayout),
			 PLOC_OptLayout(*acceptWsAfterParenOpen)
			 (PLOC_OptLayout),
			 PLOC_NatCon(*acceptBeginLine) (PLOC_NatCon),
			 PLOC_OptLayout(*acceptWsAfterBeginLine)
			 (PLOC_OptLayout),
			 PLOC_OptLayout(*acceptWsAfterComma) (PLOC_OptLayout),
			 PLOC_NatCon(*acceptBeginColumn) (PLOC_NatCon),
			 PLOC_OptLayout(*acceptWsAfterBeginColumn)
			 (PLOC_OptLayout),
			 PLOC_OptLayout(*acceptWsAfterComma1)
			 (PLOC_OptLayout),
			 PLOC_NatCon(*acceptEndLine) (PLOC_NatCon),
			 PLOC_OptLayout(*acceptWsAfterEndLine)
			 (PLOC_OptLayout),
			 PLOC_OptLayout(*acceptWsAfterComma2)
			 (PLOC_OptLayout),
			 PLOC_NatCon(*acceptEndColumn) (PLOC_NatCon),
			 PLOC_OptLayout(*acceptWsAfterEndColumn)
			 (PLOC_OptLayout),
			 PLOC_OptLayout(*acceptWsAfterComma3)
			 (PLOC_OptLayout),
			 PLOC_NatCon(*acceptOffset) (PLOC_NatCon),
			 PLOC_OptLayout(*acceptWsAfterOffset)
			 (PLOC_OptLayout),
			 PLOC_OptLayout(*acceptWsAfterComma4)
			 (PLOC_OptLayout),
			 PLOC_NatCon(*acceptLength) (PLOC_NatCon),
			 PLOC_OptLayout(*acceptWsAfterLength)
			 (PLOC_OptLayout));
PLOC_Slice PLOC_visitSlice(PLOC_Slice arg,
			   PLOC_OptLayout(*acceptWsAfterSlice)
			   (PLOC_OptLayout),
			   PLOC_OptLayout(*acceptWsAfterParenOpen)
			   (PLOC_OptLayout),
			   PLOC_StrCon(*acceptId) (PLOC_StrCon),
			   PLOC_OptLayout(*acceptWsAfterId) (PLOC_OptLayout),
			   PLOC_OptLayout(*acceptWsAfterComma)
			   (PLOC_OptLayout),
			   PLOC_OptLayout(*acceptWsAfterBracketOpen)
			   (PLOC_OptLayout),
			   PLOC_AreaAreas(*acceptAreas) (PLOC_AreaAreas),
			   PLOC_OptLayout(*acceptWsAfterAreas)
			   (PLOC_OptLayout),
			   PLOC_OptLayout(*acceptWsAfterBracketClose)
			   (PLOC_OptLayout));
PLOC_AreaAreas PLOC_visitAreaAreas(PLOC_AreaAreas arg,
				   PLOC_Area(*acceptHead) (PLOC_Area),
				   PLOC_OptLayout(*acceptWsAfterHead)
				   (PLOC_OptLayout),
				   PLOC_OptLayout(*acceptWsAfterSep)
				   (PLOC_OptLayout));

#endif /* _PARSEDLOCATION_H */
