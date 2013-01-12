#ifndef _PARSEDERROR_H
#define _PARSEDERROR_H

#include <stdlib.h>
#include <string.h>
#include <aterm1.h>
#include "ParsedError_dict.h"

typedef struct _PERR_OptLayout *PERR_OptLayout;
typedef struct _PERR_Layout *PERR_Layout;
typedef struct _PERR_LexLayoutList *PERR_LexLayoutList;
typedef struct _PERR_LexStrChar *PERR_LexStrChar;
typedef struct _PERR_StrChar *PERR_StrChar;
typedef struct _PERR_LexStrCon *PERR_LexStrCon;
typedef struct _PERR_StrCon *PERR_StrCon;
typedef struct _PERR_LexStrCharChars *PERR_LexStrCharChars;
typedef struct _PERR_LexNatCon *PERR_LexNatCon;
typedef struct _PERR_NatCon *PERR_NatCon;
typedef struct _PERR_LexLayout *PERR_LexLayout;
typedef struct _PERR_Start *PERR_Start;
typedef struct _PERR_Subject *PERR_Subject;
typedef struct _PERR_Error *PERR_Error;
typedef struct _PERR_Summary *PERR_Summary;
typedef struct _PERR_SubjectList *PERR_SubjectList;
typedef struct _PERR_ErrorList *PERR_ErrorList;
typedef struct _PERR_Location *PERR_Location;
typedef struct _PERR_Area *PERR_Area;
typedef struct _PERR_Slice *PERR_Slice;
typedef struct _PERR_AreaAreas *PERR_AreaAreas;

void PERR_initParsedErrorApi(void);

void PERR_protectOptLayout(PERR_OptLayout * arg);
void PERR_unprotectOptLayout(PERR_OptLayout * arg);
void PERR_protectLayout(PERR_Layout * arg);
void PERR_unprotectLayout(PERR_Layout * arg);
void PERR_protectLexLayoutList(PERR_LexLayoutList * arg);
void PERR_unprotectLexLayoutList(PERR_LexLayoutList * arg);
void PERR_protectLexStrChar(PERR_LexStrChar * arg);
void PERR_unprotectLexStrChar(PERR_LexStrChar * arg);
void PERR_protectStrChar(PERR_StrChar * arg);
void PERR_unprotectStrChar(PERR_StrChar * arg);
void PERR_protectLexStrCon(PERR_LexStrCon * arg);
void PERR_unprotectLexStrCon(PERR_LexStrCon * arg);
void PERR_protectStrCon(PERR_StrCon * arg);
void PERR_unprotectStrCon(PERR_StrCon * arg);
void PERR_protectLexStrCharChars(PERR_LexStrCharChars * arg);
void PERR_unprotectLexStrCharChars(PERR_LexStrCharChars * arg);
void PERR_protectLexNatCon(PERR_LexNatCon * arg);
void PERR_unprotectLexNatCon(PERR_LexNatCon * arg);
void PERR_protectNatCon(PERR_NatCon * arg);
void PERR_unprotectNatCon(PERR_NatCon * arg);
void PERR_protectLexLayout(PERR_LexLayout * arg);
void PERR_unprotectLexLayout(PERR_LexLayout * arg);
void PERR_protectStart(PERR_Start * arg);
void PERR_unprotectStart(PERR_Start * arg);
void PERR_protectSubject(PERR_Subject * arg);
void PERR_unprotectSubject(PERR_Subject * arg);
void PERR_protectError(PERR_Error * arg);
void PERR_unprotectError(PERR_Error * arg);
void PERR_protectSummary(PERR_Summary * arg);
void PERR_unprotectSummary(PERR_Summary * arg);
void PERR_protectSubjectList(PERR_SubjectList * arg);
void PERR_unprotectSubjectList(PERR_SubjectList * arg);
void PERR_protectErrorList(PERR_ErrorList * arg);
void PERR_unprotectErrorList(PERR_ErrorList * arg);
void PERR_protectLocation(PERR_Location * arg);
void PERR_unprotectLocation(PERR_Location * arg);
void PERR_protectArea(PERR_Area * arg);
void PERR_unprotectArea(PERR_Area * arg);
void PERR_protectSlice(PERR_Slice * arg);
void PERR_unprotectSlice(PERR_Slice * arg);
void PERR_protectAreaAreas(PERR_AreaAreas * arg);
void PERR_unprotectAreaAreas(PERR_AreaAreas * arg);
PERR_OptLayout PERR_OptLayoutFromTerm(ATerm t);
ATerm PERR_OptLayoutToTerm(PERR_OptLayout arg);
PERR_Layout PERR_LayoutFromTerm(ATerm t);
ATerm PERR_LayoutToTerm(PERR_Layout arg);
PERR_LexLayoutList PERR_LexLayoutListFromTerm(ATerm t);
ATerm PERR_LexLayoutListToTerm(PERR_LexLayoutList arg);
PERR_LexStrChar PERR_LexStrCharFromTerm(ATerm t);
ATerm PERR_LexStrCharToTerm(PERR_LexStrChar arg);
PERR_StrChar PERR_StrCharFromTerm(ATerm t);
ATerm PERR_StrCharToTerm(PERR_StrChar arg);
PERR_LexStrCon PERR_LexStrConFromTerm(ATerm t);
ATerm PERR_LexStrConToTerm(PERR_LexStrCon arg);
PERR_StrCon PERR_StrConFromTerm(ATerm t);
ATerm PERR_StrConToTerm(PERR_StrCon arg);
PERR_LexStrCharChars PERR_LexStrCharCharsFromTerm(ATerm t);
ATerm PERR_LexStrCharCharsToTerm(PERR_LexStrCharChars arg);
PERR_LexNatCon PERR_LexNatConFromTerm(ATerm t);
ATerm PERR_LexNatConToTerm(PERR_LexNatCon arg);
PERR_NatCon PERR_NatConFromTerm(ATerm t);
ATerm PERR_NatConToTerm(PERR_NatCon arg);
PERR_LexLayout PERR_LexLayoutFromTerm(ATerm t);
ATerm PERR_LexLayoutToTerm(PERR_LexLayout arg);
PERR_Start PERR_StartFromTerm(ATerm t);
ATerm PERR_StartToTerm(PERR_Start arg);
PERR_Subject PERR_SubjectFromTerm(ATerm t);
ATerm PERR_SubjectToTerm(PERR_Subject arg);
PERR_Error PERR_ErrorFromTerm(ATerm t);
ATerm PERR_ErrorToTerm(PERR_Error arg);
PERR_Summary PERR_SummaryFromTerm(ATerm t);
ATerm PERR_SummaryToTerm(PERR_Summary arg);
PERR_SubjectList PERR_SubjectListFromTerm(ATerm t);
ATerm PERR_SubjectListToTerm(PERR_SubjectList arg);
PERR_ErrorList PERR_ErrorListFromTerm(ATerm t);
ATerm PERR_ErrorListToTerm(PERR_ErrorList arg);
PERR_Location PERR_LocationFromTerm(ATerm t);
ATerm PERR_LocationToTerm(PERR_Location arg);
PERR_Area PERR_AreaFromTerm(ATerm t);
ATerm PERR_AreaToTerm(PERR_Area arg);
PERR_Slice PERR_SliceFromTerm(ATerm t);
ATerm PERR_SliceToTerm(PERR_Slice arg);
PERR_AreaAreas PERR_AreaAreasFromTerm(ATerm t);
ATerm PERR_AreaAreasToTerm(PERR_AreaAreas arg);
int PERR_getLexLayoutListLength(PERR_LexLayoutList arg);
PERR_LexLayoutList PERR_reverseLexLayoutList(PERR_LexLayoutList arg);
PERR_LexLayoutList PERR_appendLexLayoutList(PERR_LexLayoutList arg,
					    PERR_LexLayout elem);
PERR_LexLayoutList PERR_concatLexLayoutList(PERR_LexLayoutList arg0,
					    PERR_LexLayoutList arg1);
PERR_LexLayoutList PERR_sliceLexLayoutList(PERR_LexLayoutList arg, int start,
					   int end);
PERR_LexLayout PERR_getLexLayoutListLexLayoutAt(PERR_LexLayoutList arg,
						int index);
PERR_LexLayoutList PERR_replaceLexLayoutListLexLayoutAt(PERR_LexLayoutList
							arg,
							PERR_LexLayout elem,
							int index);
PERR_LexLayoutList PERR_makeLexLayoutList2(PERR_LexLayout elem1,
					   PERR_LexLayout elem2);
PERR_LexLayoutList PERR_makeLexLayoutList3(PERR_LexLayout elem1,
					   PERR_LexLayout elem2,
					   PERR_LexLayout elem3);
PERR_LexLayoutList PERR_makeLexLayoutList4(PERR_LexLayout elem1,
					   PERR_LexLayout elem2,
					   PERR_LexLayout elem3,
					   PERR_LexLayout elem4);
PERR_LexLayoutList PERR_makeLexLayoutList5(PERR_LexLayout elem1,
					   PERR_LexLayout elem2,
					   PERR_LexLayout elem3,
					   PERR_LexLayout elem4,
					   PERR_LexLayout elem5);
PERR_LexLayoutList PERR_makeLexLayoutList6(PERR_LexLayout elem1,
					   PERR_LexLayout elem2,
					   PERR_LexLayout elem3,
					   PERR_LexLayout elem4,
					   PERR_LexLayout elem5,
					   PERR_LexLayout elem6);
int PERR_getLexStrCharCharsLength(PERR_LexStrCharChars arg);
PERR_LexStrCharChars PERR_reverseLexStrCharChars(PERR_LexStrCharChars arg);
PERR_LexStrCharChars PERR_appendLexStrCharChars(PERR_LexStrCharChars arg,
						PERR_LexStrChar elem);
PERR_LexStrCharChars PERR_concatLexStrCharChars(PERR_LexStrCharChars arg0,
						PERR_LexStrCharChars arg1);
PERR_LexStrCharChars PERR_sliceLexStrCharChars(PERR_LexStrCharChars arg,
					       int start, int end);
PERR_LexStrChar PERR_getLexStrCharCharsLexStrCharAt(PERR_LexStrCharChars arg,
						    int index);
PERR_LexStrCharChars
PERR_replaceLexStrCharCharsLexStrCharAt(PERR_LexStrCharChars arg,
					PERR_LexStrChar elem, int index);
PERR_LexStrCharChars PERR_makeLexStrCharChars2(PERR_LexStrChar elem1,
					       PERR_LexStrChar elem2);
PERR_LexStrCharChars PERR_makeLexStrCharChars3(PERR_LexStrChar elem1,
					       PERR_LexStrChar elem2,
					       PERR_LexStrChar elem3);
PERR_LexStrCharChars PERR_makeLexStrCharChars4(PERR_LexStrChar elem1,
					       PERR_LexStrChar elem2,
					       PERR_LexStrChar elem3,
					       PERR_LexStrChar elem4);
PERR_LexStrCharChars PERR_makeLexStrCharChars5(PERR_LexStrChar elem1,
					       PERR_LexStrChar elem2,
					       PERR_LexStrChar elem3,
					       PERR_LexStrChar elem4,
					       PERR_LexStrChar elem5);
PERR_LexStrCharChars PERR_makeLexStrCharChars6(PERR_LexStrChar elem1,
					       PERR_LexStrChar elem2,
					       PERR_LexStrChar elem3,
					       PERR_LexStrChar elem4,
					       PERR_LexStrChar elem5,
					       PERR_LexStrChar elem6);
int PERR_getSubjectListLength(PERR_SubjectList arg);
PERR_SubjectList PERR_reverseSubjectList(PERR_SubjectList arg);
PERR_SubjectList PERR_appendSubjectList(PERR_SubjectList arg0,
					PERR_OptLayout wsAfterHead,
					PERR_OptLayout wsAfterSep,
					PERR_Subject arg1);
PERR_SubjectList PERR_concatSubjectList(PERR_SubjectList arg0,
					PERR_OptLayout wsAfterHead,
					PERR_OptLayout wsAfterSep,
					PERR_SubjectList arg1);
PERR_SubjectList PERR_sliceSubjectList(PERR_SubjectList arg, int start,
				       int end);
PERR_Subject PERR_getSubjectListSubjectAt(PERR_SubjectList arg, int index);
PERR_SubjectList PERR_replaceSubjectListSubjectAt(PERR_SubjectList arg,
						  PERR_Subject elem,
						  int index);
PERR_SubjectList PERR_makeSubjectList2(PERR_OptLayout wsAfterHead,
				       PERR_OptLayout wsAfterSep,
				       PERR_Subject elem1,
				       PERR_Subject elem2);
PERR_SubjectList PERR_makeSubjectList3(PERR_OptLayout wsAfterHead,
				       PERR_OptLayout wsAfterSep,
				       PERR_Subject elem1, PERR_Subject elem2,
				       PERR_Subject elem3);
PERR_SubjectList PERR_makeSubjectList4(PERR_OptLayout wsAfterHead,
				       PERR_OptLayout wsAfterSep,
				       PERR_Subject elem1, PERR_Subject elem2,
				       PERR_Subject elem3,
				       PERR_Subject elem4);
PERR_SubjectList PERR_makeSubjectList5(PERR_OptLayout wsAfterHead,
				       PERR_OptLayout wsAfterSep,
				       PERR_Subject elem1, PERR_Subject elem2,
				       PERR_Subject elem3, PERR_Subject elem4,
				       PERR_Subject elem5);
PERR_SubjectList PERR_makeSubjectList6(PERR_OptLayout wsAfterHead,
				       PERR_OptLayout wsAfterSep,
				       PERR_Subject elem1, PERR_Subject elem2,
				       PERR_Subject elem3, PERR_Subject elem4,
				       PERR_Subject elem5,
				       PERR_Subject elem6);
int PERR_getErrorListLength(PERR_ErrorList arg);
PERR_ErrorList PERR_reverseErrorList(PERR_ErrorList arg);
PERR_ErrorList PERR_appendErrorList(PERR_ErrorList arg0,
				    PERR_OptLayout wsAfterHead,
				    PERR_OptLayout wsAfterSep,
				    PERR_Error arg1);
PERR_ErrorList PERR_concatErrorList(PERR_ErrorList arg0,
				    PERR_OptLayout wsAfterHead,
				    PERR_OptLayout wsAfterSep,
				    PERR_ErrorList arg1);
PERR_ErrorList PERR_sliceErrorList(PERR_ErrorList arg, int start, int end);
PERR_Error PERR_getErrorListErrorAt(PERR_ErrorList arg, int index);
PERR_ErrorList PERR_replaceErrorListErrorAt(PERR_ErrorList arg,
					    PERR_Error elem, int index);
PERR_ErrorList PERR_makeErrorList2(PERR_OptLayout wsAfterHead,
				   PERR_OptLayout wsAfterSep,
				   PERR_Error elem1, PERR_Error elem2);
PERR_ErrorList PERR_makeErrorList3(PERR_OptLayout wsAfterHead,
				   PERR_OptLayout wsAfterSep,
				   PERR_Error elem1, PERR_Error elem2,
				   PERR_Error elem3);
PERR_ErrorList PERR_makeErrorList4(PERR_OptLayout wsAfterHead,
				   PERR_OptLayout wsAfterSep,
				   PERR_Error elem1, PERR_Error elem2,
				   PERR_Error elem3, PERR_Error elem4);
PERR_ErrorList PERR_makeErrorList5(PERR_OptLayout wsAfterHead,
				   PERR_OptLayout wsAfterSep,
				   PERR_Error elem1, PERR_Error elem2,
				   PERR_Error elem3, PERR_Error elem4,
				   PERR_Error elem5);
PERR_ErrorList PERR_makeErrorList6(PERR_OptLayout wsAfterHead,
				   PERR_OptLayout wsAfterSep,
				   PERR_Error elem1, PERR_Error elem2,
				   PERR_Error elem3, PERR_Error elem4,
				   PERR_Error elem5, PERR_Error elem6);
int PERR_getAreaAreasLength(PERR_AreaAreas arg);
PERR_AreaAreas PERR_reverseAreaAreas(PERR_AreaAreas arg);
PERR_AreaAreas PERR_appendAreaAreas(PERR_AreaAreas arg0,
				    PERR_OptLayout wsAfterHead,
				    PERR_OptLayout wsAfterSep,
				    PERR_Area arg1);
PERR_AreaAreas PERR_concatAreaAreas(PERR_AreaAreas arg0,
				    PERR_OptLayout wsAfterHead,
				    PERR_OptLayout wsAfterSep,
				    PERR_AreaAreas arg1);
PERR_AreaAreas PERR_sliceAreaAreas(PERR_AreaAreas arg, int start, int end);
PERR_Area PERR_getAreaAreasAreaAt(PERR_AreaAreas arg, int index);
PERR_AreaAreas PERR_replaceAreaAreasAreaAt(PERR_AreaAreas arg, PERR_Area elem,
					   int index);
PERR_AreaAreas PERR_makeAreaAreas2(PERR_OptLayout wsAfterHead,
				   PERR_OptLayout wsAfterSep, PERR_Area elem1,
				   PERR_Area elem2);
PERR_AreaAreas PERR_makeAreaAreas3(PERR_OptLayout wsAfterHead,
				   PERR_OptLayout wsAfterSep, PERR_Area elem1,
				   PERR_Area elem2, PERR_Area elem3);
PERR_AreaAreas PERR_makeAreaAreas4(PERR_OptLayout wsAfterHead,
				   PERR_OptLayout wsAfterSep, PERR_Area elem1,
				   PERR_Area elem2, PERR_Area elem3,
				   PERR_Area elem4);
PERR_AreaAreas PERR_makeAreaAreas5(PERR_OptLayout wsAfterHead,
				   PERR_OptLayout wsAfterSep, PERR_Area elem1,
				   PERR_Area elem2, PERR_Area elem3,
				   PERR_Area elem4, PERR_Area elem5);
PERR_AreaAreas PERR_makeAreaAreas6(PERR_OptLayout wsAfterHead,
				   PERR_OptLayout wsAfterSep, PERR_Area elem1,
				   PERR_Area elem2, PERR_Area elem3,
				   PERR_Area elem4, PERR_Area elem5,
				   PERR_Area elem6);
PERR_OptLayout PERR_makeOptLayoutAbsent(void);
PERR_OptLayout PERR_makeOptLayoutPresent(PERR_Layout layout);
PERR_Layout PERR_makeLayoutLexToCf(PERR_LexLayoutList list);
PERR_LexLayoutList PERR_makeLexLayoutListEmpty(void);
PERR_LexLayoutList PERR_makeLexLayoutListSingle(PERR_LexLayout head);
PERR_LexLayoutList PERR_makeLexLayoutListMany(PERR_LexLayout head,
					      PERR_LexLayoutList tail);
PERR_LexStrChar PERR_makeLexStrCharNewline(void);
PERR_LexStrChar PERR_makeLexStrCharTab(void);
PERR_LexStrChar PERR_makeLexStrCharQuote(void);
PERR_LexStrChar PERR_makeLexStrCharBackslash(void);
PERR_LexStrChar PERR_makeLexStrCharDecimal(char a, char b, char c);
PERR_LexStrChar PERR_makeLexStrCharNormal(char ch);
PERR_StrChar PERR_makeStrCharLexToCf(PERR_LexStrChar StrChar);
PERR_LexStrCon PERR_makeLexStrConDefault(PERR_LexStrCharChars chars);
PERR_StrCon PERR_makeStrConLexToCf(PERR_LexStrCon StrCon);
PERR_LexStrCharChars PERR_makeLexStrCharCharsEmpty(void);
PERR_LexStrCharChars PERR_makeLexStrCharCharsSingle(PERR_LexStrChar head);
PERR_LexStrCharChars PERR_makeLexStrCharCharsMany(PERR_LexStrChar head,
						  PERR_LexStrCharChars tail);
PERR_LexNatCon PERR_makeLexNatConDigits(const char *list);
PERR_NatCon PERR_makeNatConLexToCf(PERR_LexNatCon NatCon);
PERR_LexLayout PERR_makeLexLayoutWhitespace(char ch);
PERR_Start PERR_makeStartSummary(PERR_OptLayout wsBefore,
				 PERR_Summary topSummary,
				 PERR_OptLayout wsAfter, int ambCnt);
PERR_Start PERR_makeStartError(PERR_OptLayout wsBefore, PERR_Error topError,
			       PERR_OptLayout wsAfter, int ambCnt);
PERR_Subject PERR_makeSubjectSubject(PERR_OptLayout wsAfterSubject,
				     PERR_OptLayout wsAfterParenOpen,
				     PERR_StrCon description,
				     PERR_OptLayout wsAfterDescription);
PERR_Subject PERR_makeSubjectLocalized(PERR_OptLayout wsAfterLocalized,
				       PERR_OptLayout wsAfterParenOpen,
				       PERR_StrCon description,
				       PERR_OptLayout wsAfterDescription,
				       PERR_OptLayout wsAfterComma,
				       PERR_Location Location,
				       PERR_OptLayout wsAfterLocation);
PERR_Error PERR_makeErrorInfo(PERR_OptLayout wsAfterInfo,
			      PERR_OptLayout wsAfterParenOpen,
			      PERR_StrCon description,
			      PERR_OptLayout wsAfterDescription,
			      PERR_OptLayout wsAfterComma,
			      PERR_OptLayout wsAfterBracketOpen,
			      PERR_SubjectList list,
			      PERR_OptLayout wsAfterList,
			      PERR_OptLayout wsAfterBracketClose);
PERR_Error PERR_makeErrorWarning(PERR_OptLayout wsAfterWarning,
				 PERR_OptLayout wsAfterParenOpen,
				 PERR_StrCon description,
				 PERR_OptLayout wsAfterDescription,
				 PERR_OptLayout wsAfterComma,
				 PERR_OptLayout wsAfterBracketOpen,
				 PERR_SubjectList list,
				 PERR_OptLayout wsAfterList,
				 PERR_OptLayout wsAfterBracketClose);
PERR_Error PERR_makeErrorError(PERR_OptLayout wsAfterError,
			       PERR_OptLayout wsAfterParenOpen,
			       PERR_StrCon description,
			       PERR_OptLayout wsAfterDescription,
			       PERR_OptLayout wsAfterComma,
			       PERR_OptLayout wsAfterBracketOpen,
			       PERR_SubjectList list,
			       PERR_OptLayout wsAfterList,
			       PERR_OptLayout wsAfterBracketClose);
PERR_Error PERR_makeErrorFatal(PERR_OptLayout wsAfterFatal,
			       PERR_OptLayout wsAfterParenOpen,
			       PERR_StrCon description,
			       PERR_OptLayout wsAfterDescription,
			       PERR_OptLayout wsAfterComma,
			       PERR_OptLayout wsAfterBracketOpen,
			       PERR_SubjectList list,
			       PERR_OptLayout wsAfterList,
			       PERR_OptLayout wsAfterBracketClose);
PERR_Summary PERR_makeSummarySummary(PERR_OptLayout wsAfterSummary,
				     PERR_OptLayout wsAfterParenOpen,
				     PERR_StrCon producer,
				     PERR_OptLayout wsAfterProducer,
				     PERR_OptLayout wsAfterComma,
				     PERR_StrCon id, PERR_OptLayout wsAfterId,
				     PERR_OptLayout wsAfterComma1,
				     PERR_OptLayout wsAfterBracketOpen,
				     PERR_ErrorList list,
				     PERR_OptLayout wsAfterList,
				     PERR_OptLayout wsAfterBracketClose);
PERR_SubjectList PERR_makeSubjectListEmpty(void);
PERR_SubjectList PERR_makeSubjectListSingle(PERR_Subject head);
PERR_SubjectList PERR_makeSubjectListMany(PERR_Subject head,
					  PERR_OptLayout wsAfterHead,
					  PERR_OptLayout wsAfterSep,
					  PERR_SubjectList tail);
PERR_ErrorList PERR_makeErrorListEmpty(void);
PERR_ErrorList PERR_makeErrorListSingle(PERR_Error head);
PERR_ErrorList PERR_makeErrorListMany(PERR_Error head,
				      PERR_OptLayout wsAfterHead,
				      PERR_OptLayout wsAfterSep,
				      PERR_ErrorList tail);
PERR_Location PERR_makeLocationFile(PERR_OptLayout wsAfterFile,
				    PERR_OptLayout wsAfterParenOpen,
				    PERR_StrCon filename,
				    PERR_OptLayout wsAfterFilename);
PERR_Location PERR_makeLocationArea(PERR_OptLayout wsAfterA,
				    PERR_OptLayout wsAfterParenOpen,
				    PERR_Area Area,
				    PERR_OptLayout wsAfterArea);
PERR_Location PERR_makeLocationAreaInFile(PERR_OptLayout wsAfterAreaInFile,
					  PERR_OptLayout wsAfterParenOpen,
					  PERR_StrCon filename,
					  PERR_OptLayout wsAfterFilename,
					  PERR_OptLayout wsAfterComma,
					  PERR_Area Area,
					  PERR_OptLayout wsAfterArea);
PERR_Area PERR_makeAreaArea(PERR_OptLayout wsAfterArea,
			    PERR_OptLayout wsAfterParenOpen,
			    PERR_NatCon beginLine,
			    PERR_OptLayout wsAfterBeginLine,
			    PERR_OptLayout wsAfterComma,
			    PERR_NatCon beginColumn,
			    PERR_OptLayout wsAfterBeginColumn,
			    PERR_OptLayout wsAfterComma1, PERR_NatCon endLine,
			    PERR_OptLayout wsAfterEndLine,
			    PERR_OptLayout wsAfterComma2,
			    PERR_NatCon endColumn,
			    PERR_OptLayout wsAfterEndColumn,
			    PERR_OptLayout wsAfterComma3, PERR_NatCon offset,
			    PERR_OptLayout wsAfterOffset,
			    PERR_OptLayout wsAfterComma4, PERR_NatCon length,
			    PERR_OptLayout wsAfterLength);
PERR_Slice PERR_makeSliceSlice(PERR_OptLayout wsAfterSlice,
			       PERR_OptLayout wsAfterParenOpen,
			       PERR_StrCon id, PERR_OptLayout wsAfterId,
			       PERR_OptLayout wsAfterComma,
			       PERR_OptLayout wsAfterBracketOpen,
			       PERR_AreaAreas areas,
			       PERR_OptLayout wsAfterAreas,
			       PERR_OptLayout wsAfterBracketClose);
PERR_AreaAreas PERR_makeAreaAreasEmpty(void);
PERR_AreaAreas PERR_makeAreaAreasSingle(PERR_Area head);
PERR_AreaAreas PERR_makeAreaAreasMany(PERR_Area head,
				      PERR_OptLayout wsAfterHead,
				      PERR_OptLayout wsAfterSep,
				      PERR_AreaAreas tail);
ATbool PERR_isEqualOptLayout(PERR_OptLayout arg0, PERR_OptLayout arg1);
ATbool PERR_isEqualLayout(PERR_Layout arg0, PERR_Layout arg1);
ATbool PERR_isEqualLexLayoutList(PERR_LexLayoutList arg0,
				 PERR_LexLayoutList arg1);
ATbool PERR_isEqualLexStrChar(PERR_LexStrChar arg0, PERR_LexStrChar arg1);
ATbool PERR_isEqualStrChar(PERR_StrChar arg0, PERR_StrChar arg1);
ATbool PERR_isEqualLexStrCon(PERR_LexStrCon arg0, PERR_LexStrCon arg1);
ATbool PERR_isEqualStrCon(PERR_StrCon arg0, PERR_StrCon arg1);
ATbool PERR_isEqualLexStrCharChars(PERR_LexStrCharChars arg0,
				   PERR_LexStrCharChars arg1);
ATbool PERR_isEqualLexNatCon(PERR_LexNatCon arg0, PERR_LexNatCon arg1);
ATbool PERR_isEqualNatCon(PERR_NatCon arg0, PERR_NatCon arg1);
ATbool PERR_isEqualLexLayout(PERR_LexLayout arg0, PERR_LexLayout arg1);
ATbool PERR_isEqualStart(PERR_Start arg0, PERR_Start arg1);
ATbool PERR_isEqualSubject(PERR_Subject arg0, PERR_Subject arg1);
ATbool PERR_isEqualError(PERR_Error arg0, PERR_Error arg1);
ATbool PERR_isEqualSummary(PERR_Summary arg0, PERR_Summary arg1);
ATbool PERR_isEqualSubjectList(PERR_SubjectList arg0, PERR_SubjectList arg1);
ATbool PERR_isEqualErrorList(PERR_ErrorList arg0, PERR_ErrorList arg1);
ATbool PERR_isEqualLocation(PERR_Location arg0, PERR_Location arg1);
ATbool PERR_isEqualArea(PERR_Area arg0, PERR_Area arg1);
ATbool PERR_isEqualSlice(PERR_Slice arg0, PERR_Slice arg1);
ATbool PERR_isEqualAreaAreas(PERR_AreaAreas arg0, PERR_AreaAreas arg1);
ATbool PERR_isValidOptLayout(PERR_OptLayout arg);
inline ATbool PERR_isOptLayoutAbsent(PERR_OptLayout arg);
inline ATbool PERR_isOptLayoutPresent(PERR_OptLayout arg);
ATbool PERR_hasOptLayoutLayout(PERR_OptLayout arg);
PERR_Layout PERR_getOptLayoutLayout(PERR_OptLayout arg);
PERR_OptLayout PERR_setOptLayoutLayout(PERR_OptLayout arg,
				       PERR_Layout layout);
ATbool PERR_isValidLayout(PERR_Layout arg);
inline ATbool PERR_isLayoutLexToCf(PERR_Layout arg);
ATbool PERR_hasLayoutList(PERR_Layout arg);
PERR_LexLayoutList PERR_getLayoutList(PERR_Layout arg);
PERR_Layout PERR_setLayoutList(PERR_Layout arg, PERR_LexLayoutList list);
ATbool PERR_isValidLexLayoutList(PERR_LexLayoutList arg);
inline ATbool PERR_isLexLayoutListEmpty(PERR_LexLayoutList arg);
inline ATbool PERR_isLexLayoutListSingle(PERR_LexLayoutList arg);
inline ATbool PERR_isLexLayoutListMany(PERR_LexLayoutList arg);
ATbool PERR_hasLexLayoutListHead(PERR_LexLayoutList arg);
ATbool PERR_hasLexLayoutListTail(PERR_LexLayoutList arg);
PERR_LexLayout PERR_getLexLayoutListHead(PERR_LexLayoutList arg);
PERR_LexLayoutList PERR_getLexLayoutListTail(PERR_LexLayoutList arg);
PERR_LexLayoutList PERR_setLexLayoutListHead(PERR_LexLayoutList arg,
					     PERR_LexLayout head);
PERR_LexLayoutList PERR_setLexLayoutListTail(PERR_LexLayoutList arg,
					     PERR_LexLayoutList tail);
ATbool PERR_isValidLexStrChar(PERR_LexStrChar arg);
inline ATbool PERR_isLexStrCharNewline(PERR_LexStrChar arg);
inline ATbool PERR_isLexStrCharTab(PERR_LexStrChar arg);
inline ATbool PERR_isLexStrCharQuote(PERR_LexStrChar arg);
inline ATbool PERR_isLexStrCharBackslash(PERR_LexStrChar arg);
inline ATbool PERR_isLexStrCharDecimal(PERR_LexStrChar arg);
inline ATbool PERR_isLexStrCharNormal(PERR_LexStrChar arg);
ATbool PERR_hasLexStrCharA(PERR_LexStrChar arg);
ATbool PERR_hasLexStrCharB(PERR_LexStrChar arg);
ATbool PERR_hasLexStrCharC(PERR_LexStrChar arg);
ATbool PERR_hasLexStrCharCh(PERR_LexStrChar arg);
char PERR_getLexStrCharA(PERR_LexStrChar arg);
char PERR_getLexStrCharB(PERR_LexStrChar arg);
char PERR_getLexStrCharC(PERR_LexStrChar arg);
char PERR_getLexStrCharCh(PERR_LexStrChar arg);
PERR_LexStrChar PERR_setLexStrCharA(PERR_LexStrChar arg, char a);
PERR_LexStrChar PERR_setLexStrCharB(PERR_LexStrChar arg, char b);
PERR_LexStrChar PERR_setLexStrCharC(PERR_LexStrChar arg, char c);
PERR_LexStrChar PERR_setLexStrCharCh(PERR_LexStrChar arg, char ch);
ATbool PERR_isValidStrChar(PERR_StrChar arg);
inline ATbool PERR_isStrCharLexToCf(PERR_StrChar arg);
ATbool PERR_hasStrCharStrChar(PERR_StrChar arg);
PERR_LexStrChar PERR_getStrCharStrChar(PERR_StrChar arg);
PERR_StrChar PERR_setStrCharStrChar(PERR_StrChar arg,
				    PERR_LexStrChar StrChar);
ATbool PERR_isValidLexStrCon(PERR_LexStrCon arg);
inline ATbool PERR_isLexStrConDefault(PERR_LexStrCon arg);
ATbool PERR_hasLexStrConChars(PERR_LexStrCon arg);
PERR_LexStrCharChars PERR_getLexStrConChars(PERR_LexStrCon arg);
PERR_LexStrCon PERR_setLexStrConChars(PERR_LexStrCon arg,
				      PERR_LexStrCharChars chars);
ATbool PERR_isValidStrCon(PERR_StrCon arg);
inline ATbool PERR_isStrConLexToCf(PERR_StrCon arg);
ATbool PERR_hasStrConStrCon(PERR_StrCon arg);
PERR_LexStrCon PERR_getStrConStrCon(PERR_StrCon arg);
PERR_StrCon PERR_setStrConStrCon(PERR_StrCon arg, PERR_LexStrCon StrCon);
ATbool PERR_isValidLexStrCharChars(PERR_LexStrCharChars arg);
inline ATbool PERR_isLexStrCharCharsEmpty(PERR_LexStrCharChars arg);
inline ATbool PERR_isLexStrCharCharsSingle(PERR_LexStrCharChars arg);
inline ATbool PERR_isLexStrCharCharsMany(PERR_LexStrCharChars arg);
ATbool PERR_hasLexStrCharCharsHead(PERR_LexStrCharChars arg);
ATbool PERR_hasLexStrCharCharsTail(PERR_LexStrCharChars arg);
PERR_LexStrChar PERR_getLexStrCharCharsHead(PERR_LexStrCharChars arg);
PERR_LexStrCharChars PERR_getLexStrCharCharsTail(PERR_LexStrCharChars arg);
PERR_LexStrCharChars PERR_setLexStrCharCharsHead(PERR_LexStrCharChars arg,
						 PERR_LexStrChar head);
PERR_LexStrCharChars PERR_setLexStrCharCharsTail(PERR_LexStrCharChars arg,
						 PERR_LexStrCharChars tail);
ATbool PERR_isValidLexNatCon(PERR_LexNatCon arg);
inline ATbool PERR_isLexNatConDigits(PERR_LexNatCon arg);
ATbool PERR_hasLexNatConList(PERR_LexNatCon arg);
char *PERR_getLexNatConList(PERR_LexNatCon arg);
PERR_LexNatCon PERR_setLexNatConList(PERR_LexNatCon arg, const char *list);
ATbool PERR_isValidNatCon(PERR_NatCon arg);
inline ATbool PERR_isNatConLexToCf(PERR_NatCon arg);
ATbool PERR_hasNatConNatCon(PERR_NatCon arg);
PERR_LexNatCon PERR_getNatConNatCon(PERR_NatCon arg);
PERR_NatCon PERR_setNatConNatCon(PERR_NatCon arg, PERR_LexNatCon NatCon);
ATbool PERR_isValidLexLayout(PERR_LexLayout arg);
inline ATbool PERR_isLexLayoutWhitespace(PERR_LexLayout arg);
ATbool PERR_hasLexLayoutCh(PERR_LexLayout arg);
char PERR_getLexLayoutCh(PERR_LexLayout arg);
PERR_LexLayout PERR_setLexLayoutCh(PERR_LexLayout arg, char ch);
ATbool PERR_isValidStart(PERR_Start arg);
inline ATbool PERR_isStartSummary(PERR_Start arg);
inline ATbool PERR_isStartError(PERR_Start arg);
ATbool PERR_hasStartWsBefore(PERR_Start arg);
ATbool PERR_hasStartTopSummary(PERR_Start arg);
ATbool PERR_hasStartWsAfter(PERR_Start arg);
ATbool PERR_hasStartAmbCnt(PERR_Start arg);
ATbool PERR_hasStartTopError(PERR_Start arg);
PERR_OptLayout PERR_getStartWsBefore(PERR_Start arg);
PERR_Summary PERR_getStartTopSummary(PERR_Start arg);
PERR_OptLayout PERR_getStartWsAfter(PERR_Start arg);
int PERR_getStartAmbCnt(PERR_Start arg);
PERR_Error PERR_getStartTopError(PERR_Start arg);
PERR_Start PERR_setStartWsBefore(PERR_Start arg, PERR_OptLayout wsBefore);
PERR_Start PERR_setStartTopSummary(PERR_Start arg, PERR_Summary topSummary);
PERR_Start PERR_setStartWsAfter(PERR_Start arg, PERR_OptLayout wsAfter);
PERR_Start PERR_setStartAmbCnt(PERR_Start arg, int ambCnt);
PERR_Start PERR_setStartTopError(PERR_Start arg, PERR_Error topError);
ATbool PERR_isValidSubject(PERR_Subject arg);
inline ATbool PERR_isSubjectSubject(PERR_Subject arg);
inline ATbool PERR_isSubjectLocalized(PERR_Subject arg);
ATbool PERR_hasSubjectWsAfterSubject(PERR_Subject arg);
ATbool PERR_hasSubjectWsAfterParenOpen(PERR_Subject arg);
ATbool PERR_hasSubjectDescription(PERR_Subject arg);
ATbool PERR_hasSubjectWsAfterDescription(PERR_Subject arg);
ATbool PERR_hasSubjectWsAfterLocalized(PERR_Subject arg);
ATbool PERR_hasSubjectWsAfterComma(PERR_Subject arg);
ATbool PERR_hasSubjectLocation(PERR_Subject arg);
ATbool PERR_hasSubjectWsAfterLocation(PERR_Subject arg);
PERR_OptLayout PERR_getSubjectWsAfterSubject(PERR_Subject arg);
PERR_OptLayout PERR_getSubjectWsAfterParenOpen(PERR_Subject arg);
PERR_StrCon PERR_getSubjectDescription(PERR_Subject arg);
PERR_OptLayout PERR_getSubjectWsAfterDescription(PERR_Subject arg);
PERR_OptLayout PERR_getSubjectWsAfterLocalized(PERR_Subject arg);
PERR_OptLayout PERR_getSubjectWsAfterComma(PERR_Subject arg);
PERR_Location PERR_getSubjectLocation(PERR_Subject arg);
PERR_OptLayout PERR_getSubjectWsAfterLocation(PERR_Subject arg);
PERR_Subject PERR_setSubjectWsAfterSubject(PERR_Subject arg,
					   PERR_OptLayout wsAfterSubject);
PERR_Subject PERR_setSubjectWsAfterParenOpen(PERR_Subject arg,
					     PERR_OptLayout wsAfterParenOpen);
PERR_Subject PERR_setSubjectDescription(PERR_Subject arg,
					PERR_StrCon description);
PERR_Subject PERR_setSubjectWsAfterDescription(PERR_Subject arg,
					       PERR_OptLayout
					       wsAfterDescription);
PERR_Subject PERR_setSubjectWsAfterLocalized(PERR_Subject arg,
					     PERR_OptLayout wsAfterLocalized);
PERR_Subject PERR_setSubjectWsAfterComma(PERR_Subject arg,
					 PERR_OptLayout wsAfterComma);
PERR_Subject PERR_setSubjectLocation(PERR_Subject arg,
				     PERR_Location Location);
PERR_Subject PERR_setSubjectWsAfterLocation(PERR_Subject arg,
					    PERR_OptLayout wsAfterLocation);
ATbool PERR_isValidError(PERR_Error arg);
inline ATbool PERR_isErrorInfo(PERR_Error arg);
inline ATbool PERR_isErrorWarning(PERR_Error arg);
inline ATbool PERR_isErrorError(PERR_Error arg);
inline ATbool PERR_isErrorFatal(PERR_Error arg);
ATbool PERR_hasErrorWsAfterInfo(PERR_Error arg);
ATbool PERR_hasErrorWsAfterParenOpen(PERR_Error arg);
ATbool PERR_hasErrorDescription(PERR_Error arg);
ATbool PERR_hasErrorWsAfterDescription(PERR_Error arg);
ATbool PERR_hasErrorWsAfterComma(PERR_Error arg);
ATbool PERR_hasErrorWsAfterBracketOpen(PERR_Error arg);
ATbool PERR_hasErrorList(PERR_Error arg);
ATbool PERR_hasErrorWsAfterList(PERR_Error arg);
ATbool PERR_hasErrorWsAfterBracketClose(PERR_Error arg);
ATbool PERR_hasErrorWsAfterWarning(PERR_Error arg);
ATbool PERR_hasErrorWsAfterError(PERR_Error arg);
ATbool PERR_hasErrorWsAfterFatal(PERR_Error arg);
PERR_OptLayout PERR_getErrorWsAfterInfo(PERR_Error arg);
PERR_OptLayout PERR_getErrorWsAfterParenOpen(PERR_Error arg);
PERR_StrCon PERR_getErrorDescription(PERR_Error arg);
PERR_OptLayout PERR_getErrorWsAfterDescription(PERR_Error arg);
PERR_OptLayout PERR_getErrorWsAfterComma(PERR_Error arg);
PERR_OptLayout PERR_getErrorWsAfterBracketOpen(PERR_Error arg);
PERR_SubjectList PERR_getErrorList(PERR_Error arg);
PERR_OptLayout PERR_getErrorWsAfterList(PERR_Error arg);
PERR_OptLayout PERR_getErrorWsAfterBracketClose(PERR_Error arg);
PERR_OptLayout PERR_getErrorWsAfterWarning(PERR_Error arg);
PERR_OptLayout PERR_getErrorWsAfterError(PERR_Error arg);
PERR_OptLayout PERR_getErrorWsAfterFatal(PERR_Error arg);
PERR_Error PERR_setErrorWsAfterInfo(PERR_Error arg,
				    PERR_OptLayout wsAfterInfo);
PERR_Error PERR_setErrorWsAfterParenOpen(PERR_Error arg,
					 PERR_OptLayout wsAfterParenOpen);
PERR_Error PERR_setErrorDescription(PERR_Error arg, PERR_StrCon description);
PERR_Error PERR_setErrorWsAfterDescription(PERR_Error arg,
					   PERR_OptLayout wsAfterDescription);
PERR_Error PERR_setErrorWsAfterComma(PERR_Error arg,
				     PERR_OptLayout wsAfterComma);
PERR_Error PERR_setErrorWsAfterBracketOpen(PERR_Error arg,
					   PERR_OptLayout wsAfterBracketOpen);
PERR_Error PERR_setErrorList(PERR_Error arg, PERR_SubjectList list);
PERR_Error PERR_setErrorWsAfterList(PERR_Error arg,
				    PERR_OptLayout wsAfterList);
PERR_Error PERR_setErrorWsAfterBracketClose(PERR_Error arg,
					    PERR_OptLayout
					    wsAfterBracketClose);
PERR_Error PERR_setErrorWsAfterWarning(PERR_Error arg,
				       PERR_OptLayout wsAfterWarning);
PERR_Error PERR_setErrorWsAfterError(PERR_Error arg,
				     PERR_OptLayout wsAfterError);
PERR_Error PERR_setErrorWsAfterFatal(PERR_Error arg,
				     PERR_OptLayout wsAfterFatal);
ATbool PERR_isValidSummary(PERR_Summary arg);
inline ATbool PERR_isSummarySummary(PERR_Summary arg);
ATbool PERR_hasSummaryWsAfterSummary(PERR_Summary arg);
ATbool PERR_hasSummaryWsAfterParenOpen(PERR_Summary arg);
ATbool PERR_hasSummaryProducer(PERR_Summary arg);
ATbool PERR_hasSummaryWsAfterProducer(PERR_Summary arg);
ATbool PERR_hasSummaryWsAfterComma(PERR_Summary arg);
ATbool PERR_hasSummaryId(PERR_Summary arg);
ATbool PERR_hasSummaryWsAfterId(PERR_Summary arg);
ATbool PERR_hasSummaryWsAfterComma1(PERR_Summary arg);
ATbool PERR_hasSummaryWsAfterBracketOpen(PERR_Summary arg);
ATbool PERR_hasSummaryList(PERR_Summary arg);
ATbool PERR_hasSummaryWsAfterList(PERR_Summary arg);
ATbool PERR_hasSummaryWsAfterBracketClose(PERR_Summary arg);
PERR_OptLayout PERR_getSummaryWsAfterSummary(PERR_Summary arg);
PERR_OptLayout PERR_getSummaryWsAfterParenOpen(PERR_Summary arg);
PERR_StrCon PERR_getSummaryProducer(PERR_Summary arg);
PERR_OptLayout PERR_getSummaryWsAfterProducer(PERR_Summary arg);
PERR_OptLayout PERR_getSummaryWsAfterComma(PERR_Summary arg);
PERR_StrCon PERR_getSummaryId(PERR_Summary arg);
PERR_OptLayout PERR_getSummaryWsAfterId(PERR_Summary arg);
PERR_OptLayout PERR_getSummaryWsAfterComma1(PERR_Summary arg);
PERR_OptLayout PERR_getSummaryWsAfterBracketOpen(PERR_Summary arg);
PERR_ErrorList PERR_getSummaryList(PERR_Summary arg);
PERR_OptLayout PERR_getSummaryWsAfterList(PERR_Summary arg);
PERR_OptLayout PERR_getSummaryWsAfterBracketClose(PERR_Summary arg);
PERR_Summary PERR_setSummaryWsAfterSummary(PERR_Summary arg,
					   PERR_OptLayout wsAfterSummary);
PERR_Summary PERR_setSummaryWsAfterParenOpen(PERR_Summary arg,
					     PERR_OptLayout wsAfterParenOpen);
PERR_Summary PERR_setSummaryProducer(PERR_Summary arg, PERR_StrCon producer);
PERR_Summary PERR_setSummaryWsAfterProducer(PERR_Summary arg,
					    PERR_OptLayout wsAfterProducer);
PERR_Summary PERR_setSummaryWsAfterComma(PERR_Summary arg,
					 PERR_OptLayout wsAfterComma);
PERR_Summary PERR_setSummaryId(PERR_Summary arg, PERR_StrCon id);
PERR_Summary PERR_setSummaryWsAfterId(PERR_Summary arg,
				      PERR_OptLayout wsAfterId);
PERR_Summary PERR_setSummaryWsAfterComma1(PERR_Summary arg,
					  PERR_OptLayout wsAfterComma1);
PERR_Summary PERR_setSummaryWsAfterBracketOpen(PERR_Summary arg,
					       PERR_OptLayout
					       wsAfterBracketOpen);
PERR_Summary PERR_setSummaryList(PERR_Summary arg, PERR_ErrorList list);
PERR_Summary PERR_setSummaryWsAfterList(PERR_Summary arg,
					PERR_OptLayout wsAfterList);
PERR_Summary PERR_setSummaryWsAfterBracketClose(PERR_Summary arg,
						PERR_OptLayout
						wsAfterBracketClose);
ATbool PERR_isValidSubjectList(PERR_SubjectList arg);
inline ATbool PERR_isSubjectListEmpty(PERR_SubjectList arg);
inline ATbool PERR_isSubjectListSingle(PERR_SubjectList arg);
inline ATbool PERR_isSubjectListMany(PERR_SubjectList arg);
ATbool PERR_hasSubjectListHead(PERR_SubjectList arg);
ATbool PERR_hasSubjectListWsAfterHead(PERR_SubjectList arg);
ATbool PERR_hasSubjectListWsAfterSep(PERR_SubjectList arg);
ATbool PERR_hasSubjectListTail(PERR_SubjectList arg);
PERR_SubjectList PERR_getSubjectListTail(PERR_SubjectList arg);
PERR_Subject PERR_getSubjectListHead(PERR_SubjectList arg);
PERR_OptLayout PERR_getSubjectListWsAfterHead(PERR_SubjectList arg);
PERR_OptLayout PERR_getSubjectListWsAfterSep(PERR_SubjectList arg);
PERR_SubjectList PERR_setSubjectListHead(PERR_SubjectList arg,
					 PERR_Subject head);
PERR_SubjectList PERR_setSubjectListWsAfterHead(PERR_SubjectList arg,
						PERR_OptLayout wsAfterHead);
PERR_SubjectList PERR_setSubjectListWsAfterSep(PERR_SubjectList arg,
					       PERR_OptLayout wsAfterSep);
PERR_SubjectList PERR_setSubjectListTail(PERR_SubjectList arg,
					 PERR_SubjectList tail);
ATbool PERR_isValidErrorList(PERR_ErrorList arg);
inline ATbool PERR_isErrorListEmpty(PERR_ErrorList arg);
inline ATbool PERR_isErrorListSingle(PERR_ErrorList arg);
inline ATbool PERR_isErrorListMany(PERR_ErrorList arg);
ATbool PERR_hasErrorListHead(PERR_ErrorList arg);
ATbool PERR_hasErrorListWsAfterHead(PERR_ErrorList arg);
ATbool PERR_hasErrorListWsAfterSep(PERR_ErrorList arg);
ATbool PERR_hasErrorListTail(PERR_ErrorList arg);
PERR_ErrorList PERR_getErrorListTail(PERR_ErrorList arg);
PERR_Error PERR_getErrorListHead(PERR_ErrorList arg);
PERR_OptLayout PERR_getErrorListWsAfterHead(PERR_ErrorList arg);
PERR_OptLayout PERR_getErrorListWsAfterSep(PERR_ErrorList arg);
PERR_ErrorList PERR_setErrorListHead(PERR_ErrorList arg, PERR_Error head);
PERR_ErrorList PERR_setErrorListWsAfterHead(PERR_ErrorList arg,
					    PERR_OptLayout wsAfterHead);
PERR_ErrorList PERR_setErrorListWsAfterSep(PERR_ErrorList arg,
					   PERR_OptLayout wsAfterSep);
PERR_ErrorList PERR_setErrorListTail(PERR_ErrorList arg, PERR_ErrorList tail);
ATbool PERR_isValidLocation(PERR_Location arg);
inline ATbool PERR_isLocationFile(PERR_Location arg);
inline ATbool PERR_isLocationArea(PERR_Location arg);
inline ATbool PERR_isLocationAreaInFile(PERR_Location arg);
ATbool PERR_hasLocationWsAfterFile(PERR_Location arg);
ATbool PERR_hasLocationWsAfterParenOpen(PERR_Location arg);
ATbool PERR_hasLocationFilename(PERR_Location arg);
ATbool PERR_hasLocationWsAfterFilename(PERR_Location arg);
ATbool PERR_hasLocationWsAfterA(PERR_Location arg);
ATbool PERR_hasLocationArea(PERR_Location arg);
ATbool PERR_hasLocationWsAfterArea(PERR_Location arg);
ATbool PERR_hasLocationWsAfterAreaInFile(PERR_Location arg);
ATbool PERR_hasLocationWsAfterComma(PERR_Location arg);
PERR_OptLayout PERR_getLocationWsAfterFile(PERR_Location arg);
PERR_OptLayout PERR_getLocationWsAfterParenOpen(PERR_Location arg);
PERR_StrCon PERR_getLocationFilename(PERR_Location arg);
PERR_OptLayout PERR_getLocationWsAfterFilename(PERR_Location arg);
PERR_OptLayout PERR_getLocationWsAfterA(PERR_Location arg);
PERR_Area PERR_getLocationArea(PERR_Location arg);
PERR_OptLayout PERR_getLocationWsAfterArea(PERR_Location arg);
PERR_OptLayout PERR_getLocationWsAfterAreaInFile(PERR_Location arg);
PERR_OptLayout PERR_getLocationWsAfterComma(PERR_Location arg);
PERR_Location PERR_setLocationWsAfterFile(PERR_Location arg,
					  PERR_OptLayout wsAfterFile);
PERR_Location PERR_setLocationWsAfterParenOpen(PERR_Location arg,
					       PERR_OptLayout
					       wsAfterParenOpen);
PERR_Location PERR_setLocationFilename(PERR_Location arg,
				       PERR_StrCon filename);
PERR_Location PERR_setLocationWsAfterFilename(PERR_Location arg,
					      PERR_OptLayout wsAfterFilename);
PERR_Location PERR_setLocationWsAfterA(PERR_Location arg,
				       PERR_OptLayout wsAfterA);
PERR_Location PERR_setLocationArea(PERR_Location arg, PERR_Area Area);
PERR_Location PERR_setLocationWsAfterArea(PERR_Location arg,
					  PERR_OptLayout wsAfterArea);
PERR_Location PERR_setLocationWsAfterAreaInFile(PERR_Location arg,
						PERR_OptLayout
						wsAfterAreaInFile);
PERR_Location PERR_setLocationWsAfterComma(PERR_Location arg,
					   PERR_OptLayout wsAfterComma);
ATbool PERR_isValidArea(PERR_Area arg);
inline ATbool PERR_isAreaArea(PERR_Area arg);
ATbool PERR_hasAreaWsAfterArea(PERR_Area arg);
ATbool PERR_hasAreaWsAfterParenOpen(PERR_Area arg);
ATbool PERR_hasAreaBeginLine(PERR_Area arg);
ATbool PERR_hasAreaWsAfterBeginLine(PERR_Area arg);
ATbool PERR_hasAreaWsAfterComma(PERR_Area arg);
ATbool PERR_hasAreaBeginColumn(PERR_Area arg);
ATbool PERR_hasAreaWsAfterBeginColumn(PERR_Area arg);
ATbool PERR_hasAreaWsAfterComma1(PERR_Area arg);
ATbool PERR_hasAreaEndLine(PERR_Area arg);
ATbool PERR_hasAreaWsAfterEndLine(PERR_Area arg);
ATbool PERR_hasAreaWsAfterComma2(PERR_Area arg);
ATbool PERR_hasAreaEndColumn(PERR_Area arg);
ATbool PERR_hasAreaWsAfterEndColumn(PERR_Area arg);
ATbool PERR_hasAreaWsAfterComma3(PERR_Area arg);
ATbool PERR_hasAreaOffset(PERR_Area arg);
ATbool PERR_hasAreaWsAfterOffset(PERR_Area arg);
ATbool PERR_hasAreaWsAfterComma4(PERR_Area arg);
ATbool PERR_hasAreaLength(PERR_Area arg);
ATbool PERR_hasAreaWsAfterLength(PERR_Area arg);
PERR_OptLayout PERR_getAreaWsAfterArea(PERR_Area arg);
PERR_OptLayout PERR_getAreaWsAfterParenOpen(PERR_Area arg);
PERR_NatCon PERR_getAreaBeginLine(PERR_Area arg);
PERR_OptLayout PERR_getAreaWsAfterBeginLine(PERR_Area arg);
PERR_OptLayout PERR_getAreaWsAfterComma(PERR_Area arg);
PERR_NatCon PERR_getAreaBeginColumn(PERR_Area arg);
PERR_OptLayout PERR_getAreaWsAfterBeginColumn(PERR_Area arg);
PERR_OptLayout PERR_getAreaWsAfterComma1(PERR_Area arg);
PERR_NatCon PERR_getAreaEndLine(PERR_Area arg);
PERR_OptLayout PERR_getAreaWsAfterEndLine(PERR_Area arg);
PERR_OptLayout PERR_getAreaWsAfterComma2(PERR_Area arg);
PERR_NatCon PERR_getAreaEndColumn(PERR_Area arg);
PERR_OptLayout PERR_getAreaWsAfterEndColumn(PERR_Area arg);
PERR_OptLayout PERR_getAreaWsAfterComma3(PERR_Area arg);
PERR_NatCon PERR_getAreaOffset(PERR_Area arg);
PERR_OptLayout PERR_getAreaWsAfterOffset(PERR_Area arg);
PERR_OptLayout PERR_getAreaWsAfterComma4(PERR_Area arg);
PERR_NatCon PERR_getAreaLength(PERR_Area arg);
PERR_OptLayout PERR_getAreaWsAfterLength(PERR_Area arg);
PERR_Area PERR_setAreaWsAfterArea(PERR_Area arg, PERR_OptLayout wsAfterArea);
PERR_Area PERR_setAreaWsAfterParenOpen(PERR_Area arg,
				       PERR_OptLayout wsAfterParenOpen);
PERR_Area PERR_setAreaBeginLine(PERR_Area arg, PERR_NatCon beginLine);
PERR_Area PERR_setAreaWsAfterBeginLine(PERR_Area arg,
				       PERR_OptLayout wsAfterBeginLine);
PERR_Area PERR_setAreaWsAfterComma(PERR_Area arg,
				   PERR_OptLayout wsAfterComma);
PERR_Area PERR_setAreaBeginColumn(PERR_Area arg, PERR_NatCon beginColumn);
PERR_Area PERR_setAreaWsAfterBeginColumn(PERR_Area arg,
					 PERR_OptLayout wsAfterBeginColumn);
PERR_Area PERR_setAreaWsAfterComma1(PERR_Area arg,
				    PERR_OptLayout wsAfterComma1);
PERR_Area PERR_setAreaEndLine(PERR_Area arg, PERR_NatCon endLine);
PERR_Area PERR_setAreaWsAfterEndLine(PERR_Area arg,
				     PERR_OptLayout wsAfterEndLine);
PERR_Area PERR_setAreaWsAfterComma2(PERR_Area arg,
				    PERR_OptLayout wsAfterComma2);
PERR_Area PERR_setAreaEndColumn(PERR_Area arg, PERR_NatCon endColumn);
PERR_Area PERR_setAreaWsAfterEndColumn(PERR_Area arg,
				       PERR_OptLayout wsAfterEndColumn);
PERR_Area PERR_setAreaWsAfterComma3(PERR_Area arg,
				    PERR_OptLayout wsAfterComma3);
PERR_Area PERR_setAreaOffset(PERR_Area arg, PERR_NatCon offset);
PERR_Area PERR_setAreaWsAfterOffset(PERR_Area arg,
				    PERR_OptLayout wsAfterOffset);
PERR_Area PERR_setAreaWsAfterComma4(PERR_Area arg,
				    PERR_OptLayout wsAfterComma4);
PERR_Area PERR_setAreaLength(PERR_Area arg, PERR_NatCon length);
PERR_Area PERR_setAreaWsAfterLength(PERR_Area arg,
				    PERR_OptLayout wsAfterLength);
ATbool PERR_isValidSlice(PERR_Slice arg);
inline ATbool PERR_isSliceSlice(PERR_Slice arg);
ATbool PERR_hasSliceWsAfterSlice(PERR_Slice arg);
ATbool PERR_hasSliceWsAfterParenOpen(PERR_Slice arg);
ATbool PERR_hasSliceId(PERR_Slice arg);
ATbool PERR_hasSliceWsAfterId(PERR_Slice arg);
ATbool PERR_hasSliceWsAfterComma(PERR_Slice arg);
ATbool PERR_hasSliceWsAfterBracketOpen(PERR_Slice arg);
ATbool PERR_hasSliceAreas(PERR_Slice arg);
ATbool PERR_hasSliceWsAfterAreas(PERR_Slice arg);
ATbool PERR_hasSliceWsAfterBracketClose(PERR_Slice arg);
PERR_OptLayout PERR_getSliceWsAfterSlice(PERR_Slice arg);
PERR_OptLayout PERR_getSliceWsAfterParenOpen(PERR_Slice arg);
PERR_StrCon PERR_getSliceId(PERR_Slice arg);
PERR_OptLayout PERR_getSliceWsAfterId(PERR_Slice arg);
PERR_OptLayout PERR_getSliceWsAfterComma(PERR_Slice arg);
PERR_OptLayout PERR_getSliceWsAfterBracketOpen(PERR_Slice arg);
PERR_AreaAreas PERR_getSliceAreas(PERR_Slice arg);
PERR_OptLayout PERR_getSliceWsAfterAreas(PERR_Slice arg);
PERR_OptLayout PERR_getSliceWsAfterBracketClose(PERR_Slice arg);
PERR_Slice PERR_setSliceWsAfterSlice(PERR_Slice arg,
				     PERR_OptLayout wsAfterSlice);
PERR_Slice PERR_setSliceWsAfterParenOpen(PERR_Slice arg,
					 PERR_OptLayout wsAfterParenOpen);
PERR_Slice PERR_setSliceId(PERR_Slice arg, PERR_StrCon id);
PERR_Slice PERR_setSliceWsAfterId(PERR_Slice arg, PERR_OptLayout wsAfterId);
PERR_Slice PERR_setSliceWsAfterComma(PERR_Slice arg,
				     PERR_OptLayout wsAfterComma);
PERR_Slice PERR_setSliceWsAfterBracketOpen(PERR_Slice arg,
					   PERR_OptLayout wsAfterBracketOpen);
PERR_Slice PERR_setSliceAreas(PERR_Slice arg, PERR_AreaAreas areas);
PERR_Slice PERR_setSliceWsAfterAreas(PERR_Slice arg,
				     PERR_OptLayout wsAfterAreas);
PERR_Slice PERR_setSliceWsAfterBracketClose(PERR_Slice arg,
					    PERR_OptLayout
					    wsAfterBracketClose);
ATbool PERR_isValidAreaAreas(PERR_AreaAreas arg);
inline ATbool PERR_isAreaAreasEmpty(PERR_AreaAreas arg);
inline ATbool PERR_isAreaAreasSingle(PERR_AreaAreas arg);
inline ATbool PERR_isAreaAreasMany(PERR_AreaAreas arg);
ATbool PERR_hasAreaAreasHead(PERR_AreaAreas arg);
ATbool PERR_hasAreaAreasWsAfterHead(PERR_AreaAreas arg);
ATbool PERR_hasAreaAreasWsAfterSep(PERR_AreaAreas arg);
ATbool PERR_hasAreaAreasTail(PERR_AreaAreas arg);
PERR_AreaAreas PERR_getAreaAreasTail(PERR_AreaAreas arg);
PERR_Area PERR_getAreaAreasHead(PERR_AreaAreas arg);
PERR_OptLayout PERR_getAreaAreasWsAfterHead(PERR_AreaAreas arg);
PERR_OptLayout PERR_getAreaAreasWsAfterSep(PERR_AreaAreas arg);
PERR_AreaAreas PERR_setAreaAreasHead(PERR_AreaAreas arg, PERR_Area head);
PERR_AreaAreas PERR_setAreaAreasWsAfterHead(PERR_AreaAreas arg,
					    PERR_OptLayout wsAfterHead);
PERR_AreaAreas PERR_setAreaAreasWsAfterSep(PERR_AreaAreas arg,
					   PERR_OptLayout wsAfterSep);
PERR_AreaAreas PERR_setAreaAreasTail(PERR_AreaAreas arg, PERR_AreaAreas tail);
PERR_OptLayout PERR_visitOptLayout(PERR_OptLayout arg,
				   PERR_Layout(*acceptLayout) (PERR_Layout));
PERR_Layout PERR_visitLayout(PERR_Layout arg,
			     PERR_LexLayoutList(*acceptList)
			     (PERR_LexLayoutList));
PERR_LexLayoutList PERR_visitLexLayoutList(PERR_LexLayoutList arg,
					   PERR_LexLayout(*acceptHead)
					   (PERR_LexLayout));
PERR_LexStrChar PERR_visitLexStrChar(PERR_LexStrChar arg,
				     char (*acceptA) (char),
				     char (*acceptB) (char),
				     char (*acceptC) (char),
				     char (*acceptCh) (char));
PERR_StrChar PERR_visitStrChar(PERR_StrChar arg,
			       PERR_LexStrChar(*acceptStrChar)
			       (PERR_LexStrChar));
PERR_LexStrCon PERR_visitLexStrCon(PERR_LexStrCon arg,
				   PERR_LexStrCharChars(*acceptChars)
				   (PERR_LexStrCharChars));
PERR_StrCon PERR_visitStrCon(PERR_StrCon arg,
			     PERR_LexStrCon(*acceptStrCon) (PERR_LexStrCon));
PERR_LexStrCharChars PERR_visitLexStrCharChars(PERR_LexStrCharChars arg,
					       PERR_LexStrChar(*acceptHead)
					       (PERR_LexStrChar));
PERR_LexNatCon PERR_visitLexNatCon(PERR_LexNatCon arg,
				   char *(*acceptList) (char *));
PERR_NatCon PERR_visitNatCon(PERR_NatCon arg,
			     PERR_LexNatCon(*acceptNatCon) (PERR_LexNatCon));
PERR_LexLayout PERR_visitLexLayout(PERR_LexLayout arg,
				   char (*acceptCh) (char));
PERR_Start PERR_visitStart(PERR_Start arg,
			   PERR_OptLayout(*acceptWsBefore) (PERR_OptLayout),
			   PERR_Summary(*acceptTopSummary) (PERR_Summary),
			   PERR_OptLayout(*acceptWsAfter) (PERR_OptLayout),
			   int (*acceptAmbCnt) (int),
			   PERR_Error(*acceptTopError) (PERR_Error));
PERR_Subject PERR_visitSubject(PERR_Subject arg,
			       PERR_OptLayout(*acceptWsAfterSubject)
			       (PERR_OptLayout),
			       PERR_OptLayout(*acceptWsAfterParenOpen)
			       (PERR_OptLayout),
			       PERR_StrCon(*acceptDescription) (PERR_StrCon),
			       PERR_OptLayout(*acceptWsAfterDescription)
			       (PERR_OptLayout),
			       PERR_OptLayout(*acceptWsAfterLocalized)
			       (PERR_OptLayout),
			       PERR_OptLayout(*acceptWsAfterComma)
			       (PERR_OptLayout),
			       PERR_Location(*acceptLocation) (PERR_Location),
			       PERR_OptLayout(*acceptWsAfterLocation)
			       (PERR_OptLayout));
PERR_Error PERR_visitError(PERR_Error arg,
			   PERR_OptLayout(*acceptWsAfterInfo)
			   (PERR_OptLayout),
			   PERR_OptLayout(*acceptWsAfterParenOpen)
			   (PERR_OptLayout),
			   PERR_StrCon(*acceptDescription) (PERR_StrCon),
			   PERR_OptLayout(*acceptWsAfterDescription)
			   (PERR_OptLayout),
			   PERR_OptLayout(*acceptWsAfterComma)
			   (PERR_OptLayout),
			   PERR_OptLayout(*acceptWsAfterBracketOpen)
			   (PERR_OptLayout),
			   PERR_SubjectList(*acceptList) (PERR_SubjectList),
			   PERR_OptLayout(*acceptWsAfterList)
			   (PERR_OptLayout),
			   PERR_OptLayout(*acceptWsAfterBracketClose)
			   (PERR_OptLayout),
			   PERR_OptLayout(*acceptWsAfterWarning)
			   (PERR_OptLayout),
			   PERR_OptLayout(*acceptWsAfterError)
			   (PERR_OptLayout),
			   PERR_OptLayout(*acceptWsAfterFatal)
			   (PERR_OptLayout));
PERR_Summary PERR_visitSummary(PERR_Summary arg,
			       PERR_OptLayout(*acceptWsAfterSummary)
			       (PERR_OptLayout),
			       PERR_OptLayout(*acceptWsAfterParenOpen)
			       (PERR_OptLayout),
			       PERR_StrCon(*acceptProducer) (PERR_StrCon),
			       PERR_OptLayout(*acceptWsAfterProducer)
			       (PERR_OptLayout),
			       PERR_OptLayout(*acceptWsAfterComma)
			       (PERR_OptLayout),
			       PERR_StrCon(*acceptId) (PERR_StrCon),
			       PERR_OptLayout(*acceptWsAfterId)
			       (PERR_OptLayout),
			       PERR_OptLayout(*acceptWsAfterComma1)
			       (PERR_OptLayout),
			       PERR_OptLayout(*acceptWsAfterBracketOpen)
			       (PERR_OptLayout),
			       PERR_ErrorList(*acceptList) (PERR_ErrorList),
			       PERR_OptLayout(*acceptWsAfterList)
			       (PERR_OptLayout),
			       PERR_OptLayout(*acceptWsAfterBracketClose)
			       (PERR_OptLayout));
PERR_SubjectList PERR_visitSubjectList(PERR_SubjectList arg,
				       PERR_Subject(*acceptHead)
				       (PERR_Subject),
				       PERR_OptLayout(*acceptWsAfterHead)
				       (PERR_OptLayout),
				       PERR_OptLayout(*acceptWsAfterSep)
				       (PERR_OptLayout));
PERR_ErrorList PERR_visitErrorList(PERR_ErrorList arg,
				   PERR_Error(*acceptHead) (PERR_Error),
				   PERR_OptLayout(*acceptWsAfterHead)
				   (PERR_OptLayout),
				   PERR_OptLayout(*acceptWsAfterSep)
				   (PERR_OptLayout));
PERR_Location PERR_visitLocation(PERR_Location arg,
				 PERR_OptLayout(*acceptWsAfterFile)
				 (PERR_OptLayout),
				 PERR_OptLayout(*acceptWsAfterParenOpen)
				 (PERR_OptLayout),
				 PERR_StrCon(*acceptFilename) (PERR_StrCon),
				 PERR_OptLayout(*acceptWsAfterFilename)
				 (PERR_OptLayout),
				 PERR_OptLayout(*acceptWsAfterA)
				 (PERR_OptLayout),
				 PERR_Area(*acceptArea) (PERR_Area),
				 PERR_OptLayout(*acceptWsAfterArea)
				 (PERR_OptLayout),
				 PERR_OptLayout(*acceptWsAfterAreaInFile)
				 (PERR_OptLayout),
				 PERR_OptLayout(*acceptWsAfterComma)
				 (PERR_OptLayout));
PERR_Area PERR_visitArea(PERR_Area arg,
			 PERR_OptLayout(*acceptWsAfterArea) (PERR_OptLayout),
			 PERR_OptLayout(*acceptWsAfterParenOpen)
			 (PERR_OptLayout),
			 PERR_NatCon(*acceptBeginLine) (PERR_NatCon),
			 PERR_OptLayout(*acceptWsAfterBeginLine)
			 (PERR_OptLayout),
			 PERR_OptLayout(*acceptWsAfterComma) (PERR_OptLayout),
			 PERR_NatCon(*acceptBeginColumn) (PERR_NatCon),
			 PERR_OptLayout(*acceptWsAfterBeginColumn)
			 (PERR_OptLayout),
			 PERR_OptLayout(*acceptWsAfterComma1)
			 (PERR_OptLayout),
			 PERR_NatCon(*acceptEndLine) (PERR_NatCon),
			 PERR_OptLayout(*acceptWsAfterEndLine)
			 (PERR_OptLayout),
			 PERR_OptLayout(*acceptWsAfterComma2)
			 (PERR_OptLayout),
			 PERR_NatCon(*acceptEndColumn) (PERR_NatCon),
			 PERR_OptLayout(*acceptWsAfterEndColumn)
			 (PERR_OptLayout),
			 PERR_OptLayout(*acceptWsAfterComma3)
			 (PERR_OptLayout),
			 PERR_NatCon(*acceptOffset) (PERR_NatCon),
			 PERR_OptLayout(*acceptWsAfterOffset)
			 (PERR_OptLayout),
			 PERR_OptLayout(*acceptWsAfterComma4)
			 (PERR_OptLayout),
			 PERR_NatCon(*acceptLength) (PERR_NatCon),
			 PERR_OptLayout(*acceptWsAfterLength)
			 (PERR_OptLayout));
PERR_Slice PERR_visitSlice(PERR_Slice arg,
			   PERR_OptLayout(*acceptWsAfterSlice)
			   (PERR_OptLayout),
			   PERR_OptLayout(*acceptWsAfterParenOpen)
			   (PERR_OptLayout),
			   PERR_StrCon(*acceptId) (PERR_StrCon),
			   PERR_OptLayout(*acceptWsAfterId) (PERR_OptLayout),
			   PERR_OptLayout(*acceptWsAfterComma)
			   (PERR_OptLayout),
			   PERR_OptLayout(*acceptWsAfterBracketOpen)
			   (PERR_OptLayout),
			   PERR_AreaAreas(*acceptAreas) (PERR_AreaAreas),
			   PERR_OptLayout(*acceptWsAfterAreas)
			   (PERR_OptLayout),
			   PERR_OptLayout(*acceptWsAfterBracketClose)
			   (PERR_OptLayout));
PERR_AreaAreas PERR_visitAreaAreas(PERR_AreaAreas arg,
				   PERR_Area(*acceptHead) (PERR_Area),
				   PERR_OptLayout(*acceptWsAfterHead)
				   (PERR_OptLayout),
				   PERR_OptLayout(*acceptWsAfterSep)
				   (PERR_OptLayout));

#endif /* _PARSEDERROR_H */
