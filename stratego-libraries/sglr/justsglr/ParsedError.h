#ifndef _PARSEDERROR_H
#define _PARSEDERROR_H

/*{{{  includes */

#include <stdlib.h>
#include <string.h>
#include <aterm1.h>
#include "ParsedError_dict.h"

/*}}}  */

/*{{{  typedefs */

typedef struct _PERR_Normal *PERR_Normal;
typedef struct _PERR_Escaped *PERR_Escaped;
typedef struct _PERR_StrCon *PERR_StrCon;
typedef struct _PERR_NatCon *PERR_NatCon;
typedef struct _PERR_Subject *PERR_Subject;
typedef struct _PERR_Error *PERR_Error;
typedef struct _PERR_SubjectList *PERR_SubjectList;
typedef struct _PERR_Summary *PERR_Summary;
typedef struct _PERR_ErrorList *PERR_ErrorList;
typedef struct _PERR_Location *PERR_Location;
typedef struct _PERR_Area *PERR_Area;
typedef struct _PERR_Start *PERR_Start;
typedef struct _PERR_OptLayout *PERR_OptLayout;

/*}}}  */

void PERR_initParsedErrorApi(void);

/*{{{  protect functions */

void PERR_protectNormal(PERR_Normal * arg);
void PERR_protectEscaped(PERR_Escaped * arg);
void PERR_protectStrCon(PERR_StrCon * arg);
void PERR_protectNatCon(PERR_NatCon * arg);
void PERR_protectSubject(PERR_Subject * arg);
void PERR_protectError(PERR_Error * arg);
void PERR_protectSubjectList(PERR_SubjectList * arg);
void PERR_protectSummary(PERR_Summary * arg);
void PERR_protectErrorList(PERR_ErrorList * arg);
void PERR_protectLocation(PERR_Location * arg);
void PERR_protectArea(PERR_Area * arg);
void PERR_protectStart(PERR_Start * arg);
void PERR_protectOptLayout(PERR_OptLayout * arg);

/*}}}  */
/*{{{  term conversion functions */

PERR_Normal PERR_NormalFromTerm(ATerm t);
ATerm PERR_NormalToTerm(PERR_Normal arg);
PERR_Escaped PERR_EscapedFromTerm(ATerm t);
ATerm PERR_EscapedToTerm(PERR_Escaped arg);
PERR_StrCon PERR_StrConFromTerm(ATerm t);
ATerm PERR_StrConToTerm(PERR_StrCon arg);
PERR_NatCon PERR_NatConFromTerm(ATerm t);
ATerm PERR_NatConToTerm(PERR_NatCon arg);
PERR_Subject PERR_SubjectFromTerm(ATerm t);
ATerm PERR_SubjectToTerm(PERR_Subject arg);
PERR_Error PERR_ErrorFromTerm(ATerm t);
ATerm PERR_ErrorToTerm(PERR_Error arg);
PERR_SubjectList PERR_SubjectListFromTerm(ATerm t);
ATerm PERR_SubjectListToTerm(PERR_SubjectList arg);
PERR_Summary PERR_SummaryFromTerm(ATerm t);
ATerm PERR_SummaryToTerm(PERR_Summary arg);
PERR_ErrorList PERR_ErrorListFromTerm(ATerm t);
ATerm PERR_ErrorListToTerm(PERR_ErrorList arg);
PERR_Location PERR_LocationFromTerm(ATerm t);
ATerm PERR_LocationToTerm(PERR_Location arg);
PERR_Area PERR_AreaFromTerm(ATerm t);
ATerm PERR_AreaToTerm(PERR_Area arg);
PERR_Start PERR_StartFromTerm(ATerm t);
ATerm PERR_StartToTerm(PERR_Start arg);
PERR_OptLayout PERR_OptLayoutFromTerm(ATerm t);
ATerm PERR_OptLayoutToTerm(PERR_OptLayout arg);

/*}}}  */
/*{{{  list functions */

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

/*}}}  */
/*{{{  constructors */

PERR_Normal PERR_makeNormalDefault(const char *string);
PERR_Escaped PERR_makeEscapedSpecialCharacter(const char *string);
PERR_Escaped PERR_makeEscapedOctal(const char *string);
PERR_StrCon PERR_makeStrConDefault(const char *string);
PERR_NatCon PERR_makeNatConDefault(const char *string);
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
PERR_SubjectList PERR_makeSubjectListEmpty(void);
PERR_SubjectList PERR_makeSubjectListSingle(PERR_Subject head);
PERR_SubjectList PERR_makeSubjectListMany(PERR_Subject head,
					  PERR_OptLayout wsAfterHead,
					  PERR_OptLayout wsAfterSep,
					  PERR_SubjectList tail);
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
PERR_Start PERR_makeStartArea(PERR_OptLayout wsBefore, PERR_Area topArea,
			      PERR_OptLayout wsAfter, int ambCnt);
PERR_Start PERR_makeStartLocation(PERR_OptLayout wsBefore,
				  PERR_Location topLocation,
				  PERR_OptLayout wsAfter, int ambCnt);
PERR_Start PERR_makeStartSubject(PERR_OptLayout wsBefore,
				 PERR_Subject topSubject,
				 PERR_OptLayout wsAfter, int ambCnt);
PERR_Start PERR_makeStartError(PERR_OptLayout wsBefore, PERR_Error topError,
			       PERR_OptLayout wsAfter, int ambCnt);
PERR_Start PERR_makeStartSummary(PERR_OptLayout wsBefore,
				 PERR_Summary topSummary,
				 PERR_OptLayout wsAfter, int ambCnt);
PERR_Start PERR_makeStartNatCon(PERR_OptLayout wsBefore,
				PERR_NatCon topNatCon, PERR_OptLayout wsAfter,
				int ambCnt);
PERR_Start PERR_makeStartEscaped(PERR_OptLayout wsBefore,
				 PERR_Escaped topEscaped,
				 PERR_OptLayout wsAfter, int ambCnt);
PERR_Start PERR_makeStartNormal(PERR_OptLayout wsBefore,
				PERR_Normal topNormal, PERR_OptLayout wsAfter,
				int ambCnt);
PERR_Start PERR_makeStartStrCon(PERR_OptLayout wsBefore,
				PERR_StrCon topStrCon, PERR_OptLayout wsAfter,
				int ambCnt);
PERR_OptLayout PERR_makeOptLayoutAbsent(void);
PERR_OptLayout PERR_makeOptLayoutPresent(const char *string);

/*}}}  */
/*{{{  equality functions */

ATbool PERR_isEqualNormal(PERR_Normal arg0, PERR_Normal arg1);
ATbool PERR_isEqualEscaped(PERR_Escaped arg0, PERR_Escaped arg1);
ATbool PERR_isEqualStrCon(PERR_StrCon arg0, PERR_StrCon arg1);
ATbool PERR_isEqualNatCon(PERR_NatCon arg0, PERR_NatCon arg1);
ATbool PERR_isEqualSubject(PERR_Subject arg0, PERR_Subject arg1);
ATbool PERR_isEqualError(PERR_Error arg0, PERR_Error arg1);
ATbool PERR_isEqualSubjectList(PERR_SubjectList arg0, PERR_SubjectList arg1);
ATbool PERR_isEqualSummary(PERR_Summary arg0, PERR_Summary arg1);
ATbool PERR_isEqualErrorList(PERR_ErrorList arg0, PERR_ErrorList arg1);
ATbool PERR_isEqualLocation(PERR_Location arg0, PERR_Location arg1);
ATbool PERR_isEqualArea(PERR_Area arg0, PERR_Area arg1);
ATbool PERR_isEqualStart(PERR_Start arg0, PERR_Start arg1);
ATbool PERR_isEqualOptLayout(PERR_OptLayout arg0, PERR_OptLayout arg1);

/*}}}  */
/*{{{  PERR_Normal accessors */

ATbool PERR_isValidNormal(PERR_Normal arg);
inline ATbool PERR_isNormalDefault(PERR_Normal arg);
ATbool PERR_hasNormalString(PERR_Normal arg);
char *PERR_getNormalString(PERR_Normal arg);
PERR_Normal PERR_setNormalString(PERR_Normal arg, const char *string);

/*}}}  */
/*{{{  PERR_Escaped accessors */

ATbool PERR_isValidEscaped(PERR_Escaped arg);
inline ATbool PERR_isEscapedSpecialCharacter(PERR_Escaped arg);
inline ATbool PERR_isEscapedOctal(PERR_Escaped arg);
ATbool PERR_hasEscapedString(PERR_Escaped arg);
char *PERR_getEscapedString(PERR_Escaped arg);
PERR_Escaped PERR_setEscapedString(PERR_Escaped arg, const char *string);

/*}}}  */
/*{{{  PERR_StrCon accessors */

ATbool PERR_isValidStrCon(PERR_StrCon arg);
inline ATbool PERR_isStrConDefault(PERR_StrCon arg);
ATbool PERR_hasStrConString(PERR_StrCon arg);
char *PERR_getStrConString(PERR_StrCon arg);
PERR_StrCon PERR_setStrConString(PERR_StrCon arg, const char *string);

/*}}}  */
/*{{{  PERR_NatCon accessors */

ATbool PERR_isValidNatCon(PERR_NatCon arg);
inline ATbool PERR_isNatConDefault(PERR_NatCon arg);
ATbool PERR_hasNatConString(PERR_NatCon arg);
char *PERR_getNatConString(PERR_NatCon arg);
PERR_NatCon PERR_setNatConString(PERR_NatCon arg, const char *string);

/*}}}  */
/*{{{  PERR_Subject accessors */

ATbool PERR_isValidSubject(PERR_Subject arg);
inline ATbool PERR_isSubjectSubject(PERR_Subject arg);
inline ATbool PERR_isSubjectLocalized(PERR_Subject arg);
ATbool PERR_hasSubjectWsAfterSubject(PERR_Subject arg);
PERR_OptLayout PERR_getSubjectWsAfterSubject(PERR_Subject arg);
PERR_Subject PERR_setSubjectWsAfterSubject(PERR_Subject arg,
					   PERR_OptLayout wsAfterSubject);
ATbool PERR_hasSubjectWsAfterParenOpen(PERR_Subject arg);
PERR_OptLayout PERR_getSubjectWsAfterParenOpen(PERR_Subject arg);
PERR_Subject PERR_setSubjectWsAfterParenOpen(PERR_Subject arg,
					     PERR_OptLayout wsAfterParenOpen);
ATbool PERR_hasSubjectDescription(PERR_Subject arg);
PERR_StrCon PERR_getSubjectDescription(PERR_Subject arg);
PERR_Subject PERR_setSubjectDescription(PERR_Subject arg,
					PERR_StrCon description);
ATbool PERR_hasSubjectWsAfterDescription(PERR_Subject arg);
PERR_OptLayout PERR_getSubjectWsAfterDescription(PERR_Subject arg);
PERR_Subject PERR_setSubjectWsAfterDescription(PERR_Subject arg,
					       PERR_OptLayout
					       wsAfterDescription);
ATbool PERR_hasSubjectWsAfterLocalized(PERR_Subject arg);
PERR_OptLayout PERR_getSubjectWsAfterLocalized(PERR_Subject arg);
PERR_Subject PERR_setSubjectWsAfterLocalized(PERR_Subject arg,
					     PERR_OptLayout wsAfterLocalized);
ATbool PERR_hasSubjectWsAfterComma(PERR_Subject arg);
PERR_OptLayout PERR_getSubjectWsAfterComma(PERR_Subject arg);
PERR_Subject PERR_setSubjectWsAfterComma(PERR_Subject arg,
					 PERR_OptLayout wsAfterComma);
ATbool PERR_hasSubjectLocation(PERR_Subject arg);
PERR_Location PERR_getSubjectLocation(PERR_Subject arg);
PERR_Subject PERR_setSubjectLocation(PERR_Subject arg,
				     PERR_Location Location);
ATbool PERR_hasSubjectWsAfterLocation(PERR_Subject arg);
PERR_OptLayout PERR_getSubjectWsAfterLocation(PERR_Subject arg);
PERR_Subject PERR_setSubjectWsAfterLocation(PERR_Subject arg,
					    PERR_OptLayout wsAfterLocation);

/*}}}  */
/*{{{  PERR_Error accessors */

ATbool PERR_isValidError(PERR_Error arg);
inline ATbool PERR_isErrorInfo(PERR_Error arg);
inline ATbool PERR_isErrorWarning(PERR_Error arg);
inline ATbool PERR_isErrorError(PERR_Error arg);
inline ATbool PERR_isErrorFatal(PERR_Error arg);
ATbool PERR_hasErrorWsAfterInfo(PERR_Error arg);
PERR_OptLayout PERR_getErrorWsAfterInfo(PERR_Error arg);
PERR_Error PERR_setErrorWsAfterInfo(PERR_Error arg,
				    PERR_OptLayout wsAfterInfo);
ATbool PERR_hasErrorWsAfterParenOpen(PERR_Error arg);
PERR_OptLayout PERR_getErrorWsAfterParenOpen(PERR_Error arg);
PERR_Error PERR_setErrorWsAfterParenOpen(PERR_Error arg,
					 PERR_OptLayout wsAfterParenOpen);
ATbool PERR_hasErrorDescription(PERR_Error arg);
PERR_StrCon PERR_getErrorDescription(PERR_Error arg);
PERR_Error PERR_setErrorDescription(PERR_Error arg, PERR_StrCon description);
ATbool PERR_hasErrorWsAfterDescription(PERR_Error arg);
PERR_OptLayout PERR_getErrorWsAfterDescription(PERR_Error arg);
PERR_Error PERR_setErrorWsAfterDescription(PERR_Error arg,
					   PERR_OptLayout wsAfterDescription);
ATbool PERR_hasErrorWsAfterComma(PERR_Error arg);
PERR_OptLayout PERR_getErrorWsAfterComma(PERR_Error arg);
PERR_Error PERR_setErrorWsAfterComma(PERR_Error arg,
				     PERR_OptLayout wsAfterComma);
ATbool PERR_hasErrorWsAfterBracketOpen(PERR_Error arg);
PERR_OptLayout PERR_getErrorWsAfterBracketOpen(PERR_Error arg);
PERR_Error PERR_setErrorWsAfterBracketOpen(PERR_Error arg,
					   PERR_OptLayout wsAfterBracketOpen);
ATbool PERR_hasErrorList(PERR_Error arg);
PERR_SubjectList PERR_getErrorList(PERR_Error arg);
PERR_Error PERR_setErrorList(PERR_Error arg, PERR_SubjectList list);
ATbool PERR_hasErrorWsAfterList(PERR_Error arg);
PERR_OptLayout PERR_getErrorWsAfterList(PERR_Error arg);
PERR_Error PERR_setErrorWsAfterList(PERR_Error arg,
				    PERR_OptLayout wsAfterList);
ATbool PERR_hasErrorWsAfterBracketClose(PERR_Error arg);
PERR_OptLayout PERR_getErrorWsAfterBracketClose(PERR_Error arg);
PERR_Error PERR_setErrorWsAfterBracketClose(PERR_Error arg,
					    PERR_OptLayout
					    wsAfterBracketClose);
ATbool PERR_hasErrorWsAfterWarning(PERR_Error arg);
PERR_OptLayout PERR_getErrorWsAfterWarning(PERR_Error arg);
PERR_Error PERR_setErrorWsAfterWarning(PERR_Error arg,
				       PERR_OptLayout wsAfterWarning);
ATbool PERR_hasErrorWsAfterError(PERR_Error arg);
PERR_OptLayout PERR_getErrorWsAfterError(PERR_Error arg);
PERR_Error PERR_setErrorWsAfterError(PERR_Error arg,
				     PERR_OptLayout wsAfterError);
ATbool PERR_hasErrorWsAfterFatal(PERR_Error arg);
PERR_OptLayout PERR_getErrorWsAfterFatal(PERR_Error arg);
PERR_Error PERR_setErrorWsAfterFatal(PERR_Error arg,
				     PERR_OptLayout wsAfterFatal);

/*}}}  */
/*{{{  PERR_SubjectList accessors */

ATbool PERR_isValidSubjectList(PERR_SubjectList arg);
inline ATbool PERR_isSubjectListEmpty(PERR_SubjectList arg);
inline ATbool PERR_isSubjectListSingle(PERR_SubjectList arg);
inline ATbool PERR_isSubjectListMany(PERR_SubjectList arg);
ATbool PERR_hasSubjectListHead(PERR_SubjectList arg);
PERR_Subject PERR_getSubjectListHead(PERR_SubjectList arg);
PERR_SubjectList PERR_setSubjectListHead(PERR_SubjectList arg,
					 PERR_Subject head);
ATbool PERR_hasSubjectListWsAfterHead(PERR_SubjectList arg);
PERR_OptLayout PERR_getSubjectListWsAfterHead(PERR_SubjectList arg);
PERR_SubjectList PERR_setSubjectListWsAfterHead(PERR_SubjectList arg,
						PERR_OptLayout wsAfterHead);
ATbool PERR_hasSubjectListWsAfterSep(PERR_SubjectList arg);
PERR_OptLayout PERR_getSubjectListWsAfterSep(PERR_SubjectList arg);
PERR_SubjectList PERR_setSubjectListWsAfterSep(PERR_SubjectList arg,
					       PERR_OptLayout wsAfterSep);
ATbool PERR_hasSubjectListTail(PERR_SubjectList arg);
PERR_SubjectList PERR_getSubjectListTail(PERR_SubjectList arg);
PERR_SubjectList PERR_setSubjectListTail(PERR_SubjectList arg,
					 PERR_SubjectList tail);

/*}}}  */
/*{{{  PERR_Summary accessors */

ATbool PERR_isValidSummary(PERR_Summary arg);
inline ATbool PERR_isSummarySummary(PERR_Summary arg);
ATbool PERR_hasSummaryWsAfterSummary(PERR_Summary arg);
PERR_OptLayout PERR_getSummaryWsAfterSummary(PERR_Summary arg);
PERR_Summary PERR_setSummaryWsAfterSummary(PERR_Summary arg,
					   PERR_OptLayout wsAfterSummary);
ATbool PERR_hasSummaryWsAfterParenOpen(PERR_Summary arg);
PERR_OptLayout PERR_getSummaryWsAfterParenOpen(PERR_Summary arg);
PERR_Summary PERR_setSummaryWsAfterParenOpen(PERR_Summary arg,
					     PERR_OptLayout wsAfterParenOpen);
ATbool PERR_hasSummaryProducer(PERR_Summary arg);
PERR_StrCon PERR_getSummaryProducer(PERR_Summary arg);
PERR_Summary PERR_setSummaryProducer(PERR_Summary arg, PERR_StrCon producer);
ATbool PERR_hasSummaryWsAfterProducer(PERR_Summary arg);
PERR_OptLayout PERR_getSummaryWsAfterProducer(PERR_Summary arg);
PERR_Summary PERR_setSummaryWsAfterProducer(PERR_Summary arg,
					    PERR_OptLayout wsAfterProducer);
ATbool PERR_hasSummaryWsAfterComma(PERR_Summary arg);
PERR_OptLayout PERR_getSummaryWsAfterComma(PERR_Summary arg);
PERR_Summary PERR_setSummaryWsAfterComma(PERR_Summary arg,
					 PERR_OptLayout wsAfterComma);
ATbool PERR_hasSummaryId(PERR_Summary arg);
PERR_StrCon PERR_getSummaryId(PERR_Summary arg);
PERR_Summary PERR_setSummaryId(PERR_Summary arg, PERR_StrCon id);
ATbool PERR_hasSummaryWsAfterId(PERR_Summary arg);
PERR_OptLayout PERR_getSummaryWsAfterId(PERR_Summary arg);
PERR_Summary PERR_setSummaryWsAfterId(PERR_Summary arg,
				      PERR_OptLayout wsAfterId);
ATbool PERR_hasSummaryWsAfterComma1(PERR_Summary arg);
PERR_OptLayout PERR_getSummaryWsAfterComma1(PERR_Summary arg);
PERR_Summary PERR_setSummaryWsAfterComma1(PERR_Summary arg,
					  PERR_OptLayout wsAfterComma1);
ATbool PERR_hasSummaryWsAfterBracketOpen(PERR_Summary arg);
PERR_OptLayout PERR_getSummaryWsAfterBracketOpen(PERR_Summary arg);
PERR_Summary PERR_setSummaryWsAfterBracketOpen(PERR_Summary arg,
					       PERR_OptLayout
					       wsAfterBracketOpen);
ATbool PERR_hasSummaryList(PERR_Summary arg);
PERR_ErrorList PERR_getSummaryList(PERR_Summary arg);
PERR_Summary PERR_setSummaryList(PERR_Summary arg, PERR_ErrorList list);
ATbool PERR_hasSummaryWsAfterList(PERR_Summary arg);
PERR_OptLayout PERR_getSummaryWsAfterList(PERR_Summary arg);
PERR_Summary PERR_setSummaryWsAfterList(PERR_Summary arg,
					PERR_OptLayout wsAfterList);
ATbool PERR_hasSummaryWsAfterBracketClose(PERR_Summary arg);
PERR_OptLayout PERR_getSummaryWsAfterBracketClose(PERR_Summary arg);
PERR_Summary PERR_setSummaryWsAfterBracketClose(PERR_Summary arg,
						PERR_OptLayout
						wsAfterBracketClose);

/*}}}  */
/*{{{  PERR_ErrorList accessors */

ATbool PERR_isValidErrorList(PERR_ErrorList arg);
inline ATbool PERR_isErrorListEmpty(PERR_ErrorList arg);
inline ATbool PERR_isErrorListSingle(PERR_ErrorList arg);
inline ATbool PERR_isErrorListMany(PERR_ErrorList arg);
ATbool PERR_hasErrorListHead(PERR_ErrorList arg);
PERR_Error PERR_getErrorListHead(PERR_ErrorList arg);
PERR_ErrorList PERR_setErrorListHead(PERR_ErrorList arg, PERR_Error head);
ATbool PERR_hasErrorListWsAfterHead(PERR_ErrorList arg);
PERR_OptLayout PERR_getErrorListWsAfterHead(PERR_ErrorList arg);
PERR_ErrorList PERR_setErrorListWsAfterHead(PERR_ErrorList arg,
					    PERR_OptLayout wsAfterHead);
ATbool PERR_hasErrorListWsAfterSep(PERR_ErrorList arg);
PERR_OptLayout PERR_getErrorListWsAfterSep(PERR_ErrorList arg);
PERR_ErrorList PERR_setErrorListWsAfterSep(PERR_ErrorList arg,
					   PERR_OptLayout wsAfterSep);
ATbool PERR_hasErrorListTail(PERR_ErrorList arg);
PERR_ErrorList PERR_getErrorListTail(PERR_ErrorList arg);
PERR_ErrorList PERR_setErrorListTail(PERR_ErrorList arg, PERR_ErrorList tail);

/*}}}  */
/*{{{  PERR_Location accessors */

ATbool PERR_isValidLocation(PERR_Location arg);
inline ATbool PERR_isLocationFile(PERR_Location arg);
inline ATbool PERR_isLocationAreaInFile(PERR_Location arg);
ATbool PERR_hasLocationWsAfterFile(PERR_Location arg);
PERR_OptLayout PERR_getLocationWsAfterFile(PERR_Location arg);
PERR_Location PERR_setLocationWsAfterFile(PERR_Location arg,
					  PERR_OptLayout wsAfterFile);
ATbool PERR_hasLocationWsAfterParenOpen(PERR_Location arg);
PERR_OptLayout PERR_getLocationWsAfterParenOpen(PERR_Location arg);
PERR_Location PERR_setLocationWsAfterParenOpen(PERR_Location arg,
					       PERR_OptLayout
					       wsAfterParenOpen);
ATbool PERR_hasLocationFilename(PERR_Location arg);
PERR_StrCon PERR_getLocationFilename(PERR_Location arg);
PERR_Location PERR_setLocationFilename(PERR_Location arg,
				       PERR_StrCon filename);
ATbool PERR_hasLocationWsAfterFilename(PERR_Location arg);
PERR_OptLayout PERR_getLocationWsAfterFilename(PERR_Location arg);
PERR_Location PERR_setLocationWsAfterFilename(PERR_Location arg,
					      PERR_OptLayout wsAfterFilename);
ATbool PERR_hasLocationWsAfterAreaInFile(PERR_Location arg);
PERR_OptLayout PERR_getLocationWsAfterAreaInFile(PERR_Location arg);
PERR_Location PERR_setLocationWsAfterAreaInFile(PERR_Location arg,
						PERR_OptLayout
						wsAfterAreaInFile);
ATbool PERR_hasLocationWsAfterComma(PERR_Location arg);
PERR_OptLayout PERR_getLocationWsAfterComma(PERR_Location arg);
PERR_Location PERR_setLocationWsAfterComma(PERR_Location arg,
					   PERR_OptLayout wsAfterComma);
ATbool PERR_hasLocationArea(PERR_Location arg);
PERR_Area PERR_getLocationArea(PERR_Location arg);
PERR_Location PERR_setLocationArea(PERR_Location arg, PERR_Area Area);
ATbool PERR_hasLocationWsAfterArea(PERR_Location arg);
PERR_OptLayout PERR_getLocationWsAfterArea(PERR_Location arg);
PERR_Location PERR_setLocationWsAfterArea(PERR_Location arg,
					  PERR_OptLayout wsAfterArea);

/*}}}  */
/*{{{  PERR_Area accessors */

ATbool PERR_isValidArea(PERR_Area arg);
inline ATbool PERR_isAreaArea(PERR_Area arg);
ATbool PERR_hasAreaWsAfterArea(PERR_Area arg);
PERR_OptLayout PERR_getAreaWsAfterArea(PERR_Area arg);
PERR_Area PERR_setAreaWsAfterArea(PERR_Area arg, PERR_OptLayout wsAfterArea);
ATbool PERR_hasAreaWsAfterParenOpen(PERR_Area arg);
PERR_OptLayout PERR_getAreaWsAfterParenOpen(PERR_Area arg);
PERR_Area PERR_setAreaWsAfterParenOpen(PERR_Area arg,
				       PERR_OptLayout wsAfterParenOpen);
ATbool PERR_hasAreaBeginLine(PERR_Area arg);
PERR_NatCon PERR_getAreaBeginLine(PERR_Area arg);
PERR_Area PERR_setAreaBeginLine(PERR_Area arg, PERR_NatCon beginLine);
ATbool PERR_hasAreaWsAfterBeginLine(PERR_Area arg);
PERR_OptLayout PERR_getAreaWsAfterBeginLine(PERR_Area arg);
PERR_Area PERR_setAreaWsAfterBeginLine(PERR_Area arg,
				       PERR_OptLayout wsAfterBeginLine);
ATbool PERR_hasAreaWsAfterComma(PERR_Area arg);
PERR_OptLayout PERR_getAreaWsAfterComma(PERR_Area arg);
PERR_Area PERR_setAreaWsAfterComma(PERR_Area arg,
				   PERR_OptLayout wsAfterComma);
ATbool PERR_hasAreaBeginColumn(PERR_Area arg);
PERR_NatCon PERR_getAreaBeginColumn(PERR_Area arg);
PERR_Area PERR_setAreaBeginColumn(PERR_Area arg, PERR_NatCon beginColumn);
ATbool PERR_hasAreaWsAfterBeginColumn(PERR_Area arg);
PERR_OptLayout PERR_getAreaWsAfterBeginColumn(PERR_Area arg);
PERR_Area PERR_setAreaWsAfterBeginColumn(PERR_Area arg,
					 PERR_OptLayout wsAfterBeginColumn);
ATbool PERR_hasAreaWsAfterComma1(PERR_Area arg);
PERR_OptLayout PERR_getAreaWsAfterComma1(PERR_Area arg);
PERR_Area PERR_setAreaWsAfterComma1(PERR_Area arg,
				    PERR_OptLayout wsAfterComma1);
ATbool PERR_hasAreaEndLine(PERR_Area arg);
PERR_NatCon PERR_getAreaEndLine(PERR_Area arg);
PERR_Area PERR_setAreaEndLine(PERR_Area arg, PERR_NatCon endLine);
ATbool PERR_hasAreaWsAfterEndLine(PERR_Area arg);
PERR_OptLayout PERR_getAreaWsAfterEndLine(PERR_Area arg);
PERR_Area PERR_setAreaWsAfterEndLine(PERR_Area arg,
				     PERR_OptLayout wsAfterEndLine);
ATbool PERR_hasAreaWsAfterComma2(PERR_Area arg);
PERR_OptLayout PERR_getAreaWsAfterComma2(PERR_Area arg);
PERR_Area PERR_setAreaWsAfterComma2(PERR_Area arg,
				    PERR_OptLayout wsAfterComma2);
ATbool PERR_hasAreaEndColumn(PERR_Area arg);
PERR_NatCon PERR_getAreaEndColumn(PERR_Area arg);
PERR_Area PERR_setAreaEndColumn(PERR_Area arg, PERR_NatCon endColumn);
ATbool PERR_hasAreaWsAfterEndColumn(PERR_Area arg);
PERR_OptLayout PERR_getAreaWsAfterEndColumn(PERR_Area arg);
PERR_Area PERR_setAreaWsAfterEndColumn(PERR_Area arg,
				       PERR_OptLayout wsAfterEndColumn);
ATbool PERR_hasAreaWsAfterComma3(PERR_Area arg);
PERR_OptLayout PERR_getAreaWsAfterComma3(PERR_Area arg);
PERR_Area PERR_setAreaWsAfterComma3(PERR_Area arg,
				    PERR_OptLayout wsAfterComma3);
ATbool PERR_hasAreaOffset(PERR_Area arg);
PERR_NatCon PERR_getAreaOffset(PERR_Area arg);
PERR_Area PERR_setAreaOffset(PERR_Area arg, PERR_NatCon offset);
ATbool PERR_hasAreaWsAfterOffset(PERR_Area arg);
PERR_OptLayout PERR_getAreaWsAfterOffset(PERR_Area arg);
PERR_Area PERR_setAreaWsAfterOffset(PERR_Area arg,
				    PERR_OptLayout wsAfterOffset);
ATbool PERR_hasAreaWsAfterComma4(PERR_Area arg);
PERR_OptLayout PERR_getAreaWsAfterComma4(PERR_Area arg);
PERR_Area PERR_setAreaWsAfterComma4(PERR_Area arg,
				    PERR_OptLayout wsAfterComma4);
ATbool PERR_hasAreaLength(PERR_Area arg);
PERR_NatCon PERR_getAreaLength(PERR_Area arg);
PERR_Area PERR_setAreaLength(PERR_Area arg, PERR_NatCon length);
ATbool PERR_hasAreaWsAfterLength(PERR_Area arg);
PERR_OptLayout PERR_getAreaWsAfterLength(PERR_Area arg);
PERR_Area PERR_setAreaWsAfterLength(PERR_Area arg,
				    PERR_OptLayout wsAfterLength);

/*}}}  */
/*{{{  PERR_Start accessors */

ATbool PERR_isValidStart(PERR_Start arg);
inline ATbool PERR_isStartArea(PERR_Start arg);
inline ATbool PERR_isStartLocation(PERR_Start arg);
inline ATbool PERR_isStartSubject(PERR_Start arg);
inline ATbool PERR_isStartError(PERR_Start arg);
inline ATbool PERR_isStartSummary(PERR_Start arg);
inline ATbool PERR_isStartNatCon(PERR_Start arg);
inline ATbool PERR_isStartEscaped(PERR_Start arg);
inline ATbool PERR_isStartNormal(PERR_Start arg);
inline ATbool PERR_isStartStrCon(PERR_Start arg);
ATbool PERR_hasStartWsBefore(PERR_Start arg);
PERR_OptLayout PERR_getStartWsBefore(PERR_Start arg);
PERR_Start PERR_setStartWsBefore(PERR_Start arg, PERR_OptLayout wsBefore);
ATbool PERR_hasStartTopArea(PERR_Start arg);
PERR_Area PERR_getStartTopArea(PERR_Start arg);
PERR_Start PERR_setStartTopArea(PERR_Start arg, PERR_Area topArea);
ATbool PERR_hasStartWsAfter(PERR_Start arg);
PERR_OptLayout PERR_getStartWsAfter(PERR_Start arg);
PERR_Start PERR_setStartWsAfter(PERR_Start arg, PERR_OptLayout wsAfter);
ATbool PERR_hasStartAmbCnt(PERR_Start arg);
int PERR_getStartAmbCnt(PERR_Start arg);
PERR_Start PERR_setStartAmbCnt(PERR_Start arg, int ambCnt);
ATbool PERR_hasStartTopLocation(PERR_Start arg);
PERR_Location PERR_getStartTopLocation(PERR_Start arg);
PERR_Start PERR_setStartTopLocation(PERR_Start arg,
				    PERR_Location topLocation);
ATbool PERR_hasStartTopSubject(PERR_Start arg);
PERR_Subject PERR_getStartTopSubject(PERR_Start arg);
PERR_Start PERR_setStartTopSubject(PERR_Start arg, PERR_Subject topSubject);
ATbool PERR_hasStartTopError(PERR_Start arg);
PERR_Error PERR_getStartTopError(PERR_Start arg);
PERR_Start PERR_setStartTopError(PERR_Start arg, PERR_Error topError);
ATbool PERR_hasStartTopSummary(PERR_Start arg);
PERR_Summary PERR_getStartTopSummary(PERR_Start arg);
PERR_Start PERR_setStartTopSummary(PERR_Start arg, PERR_Summary topSummary);
ATbool PERR_hasStartTopNatCon(PERR_Start arg);
PERR_NatCon PERR_getStartTopNatCon(PERR_Start arg);
PERR_Start PERR_setStartTopNatCon(PERR_Start arg, PERR_NatCon topNatCon);
ATbool PERR_hasStartTopEscaped(PERR_Start arg);
PERR_Escaped PERR_getStartTopEscaped(PERR_Start arg);
PERR_Start PERR_setStartTopEscaped(PERR_Start arg, PERR_Escaped topEscaped);
ATbool PERR_hasStartTopNormal(PERR_Start arg);
PERR_Normal PERR_getStartTopNormal(PERR_Start arg);
PERR_Start PERR_setStartTopNormal(PERR_Start arg, PERR_Normal topNormal);
ATbool PERR_hasStartTopStrCon(PERR_Start arg);
PERR_StrCon PERR_getStartTopStrCon(PERR_Start arg);
PERR_Start PERR_setStartTopStrCon(PERR_Start arg, PERR_StrCon topStrCon);

/*}}}  */
/*{{{  PERR_OptLayout accessors */

ATbool PERR_isValidOptLayout(PERR_OptLayout arg);
inline ATbool PERR_isOptLayoutAbsent(PERR_OptLayout arg);
inline ATbool PERR_isOptLayoutPresent(PERR_OptLayout arg);
ATbool PERR_hasOptLayoutString(PERR_OptLayout arg);
char *PERR_getOptLayoutString(PERR_OptLayout arg);
PERR_OptLayout PERR_setOptLayoutString(PERR_OptLayout arg,
				       const char *string);

/*}}}  */
/*{{{  sort visitors */

PERR_Normal PERR_visitNormal(PERR_Normal arg, char *(*acceptString) (char *));
PERR_Escaped PERR_visitEscaped(PERR_Escaped arg,
			       char *(*acceptString) (char *));
PERR_StrCon PERR_visitStrCon(PERR_StrCon arg, char *(*acceptString) (char *));
PERR_NatCon PERR_visitNatCon(PERR_NatCon arg, char *(*acceptString) (char *));
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
PERR_SubjectList PERR_visitSubjectList(PERR_SubjectList arg,
				       PERR_Subject(*acceptHead)
				       (PERR_Subject),
				       PERR_OptLayout(*acceptWsAfterHead)
				       (PERR_OptLayout),
				       PERR_OptLayout(*acceptWsAfterSep)
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
				 PERR_OptLayout(*acceptWsAfterAreaInFile)
				 (PERR_OptLayout),
				 PERR_OptLayout(*acceptWsAfterComma)
				 (PERR_OptLayout),
				 PERR_Area(*acceptArea) (PERR_Area),
				 PERR_OptLayout(*acceptWsAfterArea)
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
PERR_Start PERR_visitStart(PERR_Start arg,
			   PERR_OptLayout(*acceptWsBefore) (PERR_OptLayout),
			   PERR_Area(*acceptTopArea) (PERR_Area),
			   PERR_OptLayout(*acceptWsAfter) (PERR_OptLayout),
			   int (*acceptAmbCnt) (int),
			   PERR_Location(*acceptTopLocation) (PERR_Location),
			   PERR_Subject(*acceptTopSubject) (PERR_Subject),
			   PERR_Error(*acceptTopError) (PERR_Error),
			   PERR_Summary(*acceptTopSummary) (PERR_Summary),
			   PERR_NatCon(*acceptTopNatCon) (PERR_NatCon),
			   PERR_Escaped(*acceptTopEscaped) (PERR_Escaped),
			   PERR_Normal(*acceptTopNormal) (PERR_Normal),
			   PERR_StrCon(*acceptTopStrCon) (PERR_StrCon));
PERR_OptLayout PERR_visitOptLayout(PERR_OptLayout arg,
				   char *(*acceptString) (char *));

/*}}}  */

#endif /* _PARSEDERROR_H */
