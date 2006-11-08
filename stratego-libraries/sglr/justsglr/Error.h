#ifndef _ERROR_H
#define _ERROR_H

#include <stdlib.h>
#include <string.h>
#include <aterm1.h>
#include "Error_dict.h"

typedef struct _ERR_StrChar *ERR_StrChar;
typedef struct _ERR_StrCon *ERR_StrCon;
typedef struct _ERR_NatCon *ERR_NatCon;
typedef struct _ERR_Subject *ERR_Subject;
typedef struct _ERR_Error *ERR_Error;
typedef struct _ERR_Summary *ERR_Summary;
typedef struct _ERR_SubjectList *ERR_SubjectList;
typedef struct _ERR_ErrorList *ERR_ErrorList;
typedef struct _ERR_Location *ERR_Location;
typedef struct _ERR_Area *ERR_Area;
typedef struct _ERR_Slice *ERR_Slice;
typedef struct _ERR_AreaAreas *ERR_AreaAreas;

void ERR_initErrorApi(void);

void ERR_protectStrChar(ERR_StrChar * arg);
void ERR_unprotectStrChar(ERR_StrChar * arg);
void ERR_protectStrCon(ERR_StrCon * arg);
void ERR_unprotectStrCon(ERR_StrCon * arg);
void ERR_protectNatCon(ERR_NatCon * arg);
void ERR_unprotectNatCon(ERR_NatCon * arg);
void ERR_protectSubject(ERR_Subject * arg);
void ERR_unprotectSubject(ERR_Subject * arg);
void ERR_protectError(ERR_Error * arg);
void ERR_unprotectError(ERR_Error * arg);
void ERR_protectSummary(ERR_Summary * arg);
void ERR_unprotectSummary(ERR_Summary * arg);
void ERR_protectSubjectList(ERR_SubjectList * arg);
void ERR_unprotectSubjectList(ERR_SubjectList * arg);
void ERR_protectErrorList(ERR_ErrorList * arg);
void ERR_unprotectErrorList(ERR_ErrorList * arg);
void ERR_protectLocation(ERR_Location * arg);
void ERR_unprotectLocation(ERR_Location * arg);
void ERR_protectArea(ERR_Area * arg);
void ERR_unprotectArea(ERR_Area * arg);
void ERR_protectSlice(ERR_Slice * arg);
void ERR_unprotectSlice(ERR_Slice * arg);
void ERR_protectAreaAreas(ERR_AreaAreas * arg);
void ERR_unprotectAreaAreas(ERR_AreaAreas * arg);
ERR_StrChar ERR_StrCharFromTerm(ATerm t);
ATerm ERR_StrCharToTerm(ERR_StrChar arg);
ERR_StrCon ERR_StrConFromTerm(ATerm t);
ATerm ERR_StrConToTerm(ERR_StrCon arg);
ERR_NatCon ERR_NatConFromTerm(ATerm t);
ATerm ERR_NatConToTerm(ERR_NatCon arg);
ERR_Subject ERR_SubjectFromTerm(ATerm t);
ATerm ERR_SubjectToTerm(ERR_Subject arg);
ERR_Error ERR_ErrorFromTerm(ATerm t);
ATerm ERR_ErrorToTerm(ERR_Error arg);
ERR_Summary ERR_SummaryFromTerm(ATerm t);
ATerm ERR_SummaryToTerm(ERR_Summary arg);
ERR_SubjectList ERR_SubjectListFromTerm(ATerm t);
ATerm ERR_SubjectListToTerm(ERR_SubjectList arg);
ERR_ErrorList ERR_ErrorListFromTerm(ATerm t);
ATerm ERR_ErrorListToTerm(ERR_ErrorList arg);
ERR_Location ERR_LocationFromTerm(ATerm t);
ATerm ERR_LocationToTerm(ERR_Location arg);
ERR_Area ERR_AreaFromTerm(ATerm t);
ATerm ERR_AreaToTerm(ERR_Area arg);
ERR_Slice ERR_SliceFromTerm(ATerm t);
ATerm ERR_SliceToTerm(ERR_Slice arg);
ERR_AreaAreas ERR_AreaAreasFromTerm(ATerm t);
ATerm ERR_AreaAreasToTerm(ERR_AreaAreas arg);
int ERR_getSubjectListLength(ERR_SubjectList arg);
ERR_SubjectList ERR_reverseSubjectList(ERR_SubjectList arg);
ERR_SubjectList ERR_appendSubjectList(ERR_SubjectList arg, ERR_Subject elem);
ERR_SubjectList ERR_concatSubjectList(ERR_SubjectList arg0,
				      ERR_SubjectList arg1);
ERR_SubjectList ERR_sliceSubjectList(ERR_SubjectList arg, int start, int end);
ERR_Subject ERR_getSubjectListSubjectAt(ERR_SubjectList arg, int index);
ERR_SubjectList ERR_replaceSubjectListSubjectAt(ERR_SubjectList arg,
						ERR_Subject elem, int index);
ERR_SubjectList ERR_makeSubjectList2(ERR_Subject elem1, ERR_Subject elem2);
ERR_SubjectList ERR_makeSubjectList3(ERR_Subject elem1, ERR_Subject elem2,
				     ERR_Subject elem3);
ERR_SubjectList ERR_makeSubjectList4(ERR_Subject elem1, ERR_Subject elem2,
				     ERR_Subject elem3, ERR_Subject elem4);
ERR_SubjectList ERR_makeSubjectList5(ERR_Subject elem1, ERR_Subject elem2,
				     ERR_Subject elem3, ERR_Subject elem4,
				     ERR_Subject elem5);
ERR_SubjectList ERR_makeSubjectList6(ERR_Subject elem1, ERR_Subject elem2,
				     ERR_Subject elem3, ERR_Subject elem4,
				     ERR_Subject elem5, ERR_Subject elem6);
int ERR_getErrorListLength(ERR_ErrorList arg);
ERR_ErrorList ERR_reverseErrorList(ERR_ErrorList arg);
ERR_ErrorList ERR_appendErrorList(ERR_ErrorList arg, ERR_Error elem);
ERR_ErrorList ERR_concatErrorList(ERR_ErrorList arg0, ERR_ErrorList arg1);
ERR_ErrorList ERR_sliceErrorList(ERR_ErrorList arg, int start, int end);
ERR_Error ERR_getErrorListErrorAt(ERR_ErrorList arg, int index);
ERR_ErrorList ERR_replaceErrorListErrorAt(ERR_ErrorList arg, ERR_Error elem,
					  int index);
ERR_ErrorList ERR_makeErrorList2(ERR_Error elem1, ERR_Error elem2);
ERR_ErrorList ERR_makeErrorList3(ERR_Error elem1, ERR_Error elem2,
				 ERR_Error elem3);
ERR_ErrorList ERR_makeErrorList4(ERR_Error elem1, ERR_Error elem2,
				 ERR_Error elem3, ERR_Error elem4);
ERR_ErrorList ERR_makeErrorList5(ERR_Error elem1, ERR_Error elem2,
				 ERR_Error elem3, ERR_Error elem4,
				 ERR_Error elem5);
ERR_ErrorList ERR_makeErrorList6(ERR_Error elem1, ERR_Error elem2,
				 ERR_Error elem3, ERR_Error elem4,
				 ERR_Error elem5, ERR_Error elem6);
int ERR_getAreaAreasLength(ERR_AreaAreas arg);
ERR_AreaAreas ERR_reverseAreaAreas(ERR_AreaAreas arg);
ERR_AreaAreas ERR_appendAreaAreas(ERR_AreaAreas arg, ERR_Area elem);
ERR_AreaAreas ERR_concatAreaAreas(ERR_AreaAreas arg0, ERR_AreaAreas arg1);
ERR_AreaAreas ERR_sliceAreaAreas(ERR_AreaAreas arg, int start, int end);
ERR_Area ERR_getAreaAreasAreaAt(ERR_AreaAreas arg, int index);
ERR_AreaAreas ERR_replaceAreaAreasAreaAt(ERR_AreaAreas arg, ERR_Area elem,
					 int index);
ERR_AreaAreas ERR_makeAreaAreas2(ERR_Area elem1, ERR_Area elem2);
ERR_AreaAreas ERR_makeAreaAreas3(ERR_Area elem1, ERR_Area elem2,
				 ERR_Area elem3);
ERR_AreaAreas ERR_makeAreaAreas4(ERR_Area elem1, ERR_Area elem2,
				 ERR_Area elem3, ERR_Area elem4);
ERR_AreaAreas ERR_makeAreaAreas5(ERR_Area elem1, ERR_Area elem2,
				 ERR_Area elem3, ERR_Area elem4,
				 ERR_Area elem5);
ERR_AreaAreas ERR_makeAreaAreas6(ERR_Area elem1, ERR_Area elem2,
				 ERR_Area elem3, ERR_Area elem4,
				 ERR_Area elem5, ERR_Area elem6);
ERR_StrChar ERR_makeStrCharStrChar(const char *string);
ERR_StrCon ERR_makeStrConStrCon(const char *string);
ERR_NatCon ERR_makeNatConNatCon(const char *string);
ERR_Subject ERR_makeSubjectSubject(const char *description);
ERR_Subject ERR_makeSubjectLocalized(const char *description,
				     ERR_Location Location);
ERR_Error ERR_makeErrorInfo(const char *description, ERR_SubjectList list);
ERR_Error ERR_makeErrorWarning(const char *description, ERR_SubjectList list);
ERR_Error ERR_makeErrorError(const char *description, ERR_SubjectList list);
ERR_Error ERR_makeErrorFatal(const char *description, ERR_SubjectList list);
ERR_Summary ERR_makeSummarySummary(const char *producer, const char *id,
				   ERR_ErrorList list);
ERR_SubjectList ERR_makeSubjectListEmpty(void);
ERR_SubjectList ERR_makeSubjectListSingle(ERR_Subject head);
ERR_SubjectList ERR_makeSubjectListMany(ERR_Subject head,
					ERR_SubjectList tail);
ERR_ErrorList ERR_makeErrorListEmpty(void);
ERR_ErrorList ERR_makeErrorListSingle(ERR_Error head);
ERR_ErrorList ERR_makeErrorListMany(ERR_Error head, ERR_ErrorList tail);
ERR_Location ERR_makeLocationFile(const char *filename);
ERR_Location ERR_makeLocationArea(ERR_Area Area);
ERR_Location ERR_makeLocationAreaInFile(const char *filename, ERR_Area Area);
ERR_Area ERR_makeAreaArea(int beginLine, int beginColumn, int endLine,
			  int endColumn, int offset, int length);
ERR_Slice ERR_makeSliceSlice(const char *id, ERR_AreaAreas areas);
ERR_AreaAreas ERR_makeAreaAreasEmpty(void);
ERR_AreaAreas ERR_makeAreaAreasSingle(ERR_Area head);
ERR_AreaAreas ERR_makeAreaAreasMany(ERR_Area head, ERR_AreaAreas tail);
ATbool ERR_isEqualStrChar(ERR_StrChar arg0, ERR_StrChar arg1);
ATbool ERR_isEqualStrCon(ERR_StrCon arg0, ERR_StrCon arg1);
ATbool ERR_isEqualNatCon(ERR_NatCon arg0, ERR_NatCon arg1);
ATbool ERR_isEqualSubject(ERR_Subject arg0, ERR_Subject arg1);
ATbool ERR_isEqualError(ERR_Error arg0, ERR_Error arg1);
ATbool ERR_isEqualSummary(ERR_Summary arg0, ERR_Summary arg1);
ATbool ERR_isEqualSubjectList(ERR_SubjectList arg0, ERR_SubjectList arg1);
ATbool ERR_isEqualErrorList(ERR_ErrorList arg0, ERR_ErrorList arg1);
ATbool ERR_isEqualLocation(ERR_Location arg0, ERR_Location arg1);
ATbool ERR_isEqualArea(ERR_Area arg0, ERR_Area arg1);
ATbool ERR_isEqualSlice(ERR_Slice arg0, ERR_Slice arg1);
ATbool ERR_isEqualAreaAreas(ERR_AreaAreas arg0, ERR_AreaAreas arg1);
ATbool ERR_isValidStrChar(ERR_StrChar arg);
inline ATbool ERR_isStrCharStrChar(ERR_StrChar arg);
ATbool ERR_hasStrCharString(ERR_StrChar arg);
char *ERR_getStrCharString(ERR_StrChar arg);
ERR_StrChar ERR_setStrCharString(ERR_StrChar arg, const char *string);
ATbool ERR_isValidStrCon(ERR_StrCon arg);
inline ATbool ERR_isStrConStrCon(ERR_StrCon arg);
ATbool ERR_hasStrConString(ERR_StrCon arg);
char *ERR_getStrConString(ERR_StrCon arg);
ERR_StrCon ERR_setStrConString(ERR_StrCon arg, const char *string);
ATbool ERR_isValidNatCon(ERR_NatCon arg);
inline ATbool ERR_isNatConNatCon(ERR_NatCon arg);
ATbool ERR_hasNatConString(ERR_NatCon arg);
char *ERR_getNatConString(ERR_NatCon arg);
ERR_NatCon ERR_setNatConString(ERR_NatCon arg, const char *string);
ATbool ERR_isValidSubject(ERR_Subject arg);
inline ATbool ERR_isSubjectSubject(ERR_Subject arg);
inline ATbool ERR_isSubjectLocalized(ERR_Subject arg);
ATbool ERR_hasSubjectDescription(ERR_Subject arg);
ATbool ERR_hasSubjectLocation(ERR_Subject arg);
char *ERR_getSubjectDescription(ERR_Subject arg);
ERR_Location ERR_getSubjectLocation(ERR_Subject arg);
ERR_Subject ERR_setSubjectDescription(ERR_Subject arg,
				      const char *description);
ERR_Subject ERR_setSubjectLocation(ERR_Subject arg, ERR_Location Location);
ATbool ERR_isValidError(ERR_Error arg);
inline ATbool ERR_isErrorInfo(ERR_Error arg);
inline ATbool ERR_isErrorWarning(ERR_Error arg);
inline ATbool ERR_isErrorError(ERR_Error arg);
inline ATbool ERR_isErrorFatal(ERR_Error arg);
ATbool ERR_hasErrorDescription(ERR_Error arg);
ATbool ERR_hasErrorList(ERR_Error arg);
char *ERR_getErrorDescription(ERR_Error arg);
ERR_SubjectList ERR_getErrorList(ERR_Error arg);
ERR_Error ERR_setErrorDescription(ERR_Error arg, const char *description);
ERR_Error ERR_setErrorList(ERR_Error arg, ERR_SubjectList list);
ATbool ERR_isValidSummary(ERR_Summary arg);
inline ATbool ERR_isSummarySummary(ERR_Summary arg);
ATbool ERR_hasSummaryProducer(ERR_Summary arg);
ATbool ERR_hasSummaryId(ERR_Summary arg);
ATbool ERR_hasSummaryList(ERR_Summary arg);
char *ERR_getSummaryProducer(ERR_Summary arg);
char *ERR_getSummaryId(ERR_Summary arg);
ERR_ErrorList ERR_getSummaryList(ERR_Summary arg);
ERR_Summary ERR_setSummaryProducer(ERR_Summary arg, const char *producer);
ERR_Summary ERR_setSummaryId(ERR_Summary arg, const char *id);
ERR_Summary ERR_setSummaryList(ERR_Summary arg, ERR_ErrorList list);
ATbool ERR_isValidSubjectList(ERR_SubjectList arg);
inline ATbool ERR_isSubjectListEmpty(ERR_SubjectList arg);
inline ATbool ERR_isSubjectListSingle(ERR_SubjectList arg);
inline ATbool ERR_isSubjectListMany(ERR_SubjectList arg);
ATbool ERR_hasSubjectListHead(ERR_SubjectList arg);
ATbool ERR_hasSubjectListTail(ERR_SubjectList arg);
ERR_Subject ERR_getSubjectListHead(ERR_SubjectList arg);
ERR_SubjectList ERR_getSubjectListTail(ERR_SubjectList arg);
ERR_SubjectList ERR_setSubjectListHead(ERR_SubjectList arg, ERR_Subject head);
ERR_SubjectList ERR_setSubjectListTail(ERR_SubjectList arg,
				       ERR_SubjectList tail);
ATbool ERR_isValidErrorList(ERR_ErrorList arg);
inline ATbool ERR_isErrorListEmpty(ERR_ErrorList arg);
inline ATbool ERR_isErrorListSingle(ERR_ErrorList arg);
inline ATbool ERR_isErrorListMany(ERR_ErrorList arg);
ATbool ERR_hasErrorListHead(ERR_ErrorList arg);
ATbool ERR_hasErrorListTail(ERR_ErrorList arg);
ERR_Error ERR_getErrorListHead(ERR_ErrorList arg);
ERR_ErrorList ERR_getErrorListTail(ERR_ErrorList arg);
ERR_ErrorList ERR_setErrorListHead(ERR_ErrorList arg, ERR_Error head);
ERR_ErrorList ERR_setErrorListTail(ERR_ErrorList arg, ERR_ErrorList tail);
ATbool ERR_isValidLocation(ERR_Location arg);
inline ATbool ERR_isLocationFile(ERR_Location arg);
inline ATbool ERR_isLocationArea(ERR_Location arg);
inline ATbool ERR_isLocationAreaInFile(ERR_Location arg);
ATbool ERR_hasLocationFilename(ERR_Location arg);
ATbool ERR_hasLocationArea(ERR_Location arg);
char *ERR_getLocationFilename(ERR_Location arg);
ERR_Area ERR_getLocationArea(ERR_Location arg);
ERR_Location ERR_setLocationFilename(ERR_Location arg, const char *filename);
ERR_Location ERR_setLocationArea(ERR_Location arg, ERR_Area Area);
ATbool ERR_isValidArea(ERR_Area arg);
inline ATbool ERR_isAreaArea(ERR_Area arg);
ATbool ERR_hasAreaBeginLine(ERR_Area arg);
ATbool ERR_hasAreaBeginColumn(ERR_Area arg);
ATbool ERR_hasAreaEndLine(ERR_Area arg);
ATbool ERR_hasAreaEndColumn(ERR_Area arg);
ATbool ERR_hasAreaOffset(ERR_Area arg);
ATbool ERR_hasAreaLength(ERR_Area arg);
int ERR_getAreaBeginLine(ERR_Area arg);
int ERR_getAreaBeginColumn(ERR_Area arg);
int ERR_getAreaEndLine(ERR_Area arg);
int ERR_getAreaEndColumn(ERR_Area arg);
int ERR_getAreaOffset(ERR_Area arg);
int ERR_getAreaLength(ERR_Area arg);
ERR_Area ERR_setAreaBeginLine(ERR_Area arg, int beginLine);
ERR_Area ERR_setAreaBeginColumn(ERR_Area arg, int beginColumn);
ERR_Area ERR_setAreaEndLine(ERR_Area arg, int endLine);
ERR_Area ERR_setAreaEndColumn(ERR_Area arg, int endColumn);
ERR_Area ERR_setAreaOffset(ERR_Area arg, int offset);
ERR_Area ERR_setAreaLength(ERR_Area arg, int length);
ATbool ERR_isValidSlice(ERR_Slice arg);
inline ATbool ERR_isSliceSlice(ERR_Slice arg);
ATbool ERR_hasSliceId(ERR_Slice arg);
ATbool ERR_hasSliceAreas(ERR_Slice arg);
char *ERR_getSliceId(ERR_Slice arg);
ERR_AreaAreas ERR_getSliceAreas(ERR_Slice arg);
ERR_Slice ERR_setSliceId(ERR_Slice arg, const char *id);
ERR_Slice ERR_setSliceAreas(ERR_Slice arg, ERR_AreaAreas areas);
ATbool ERR_isValidAreaAreas(ERR_AreaAreas arg);
inline ATbool ERR_isAreaAreasEmpty(ERR_AreaAreas arg);
inline ATbool ERR_isAreaAreasSingle(ERR_AreaAreas arg);
inline ATbool ERR_isAreaAreasMany(ERR_AreaAreas arg);
ATbool ERR_hasAreaAreasHead(ERR_AreaAreas arg);
ATbool ERR_hasAreaAreasTail(ERR_AreaAreas arg);
ERR_Area ERR_getAreaAreasHead(ERR_AreaAreas arg);
ERR_AreaAreas ERR_getAreaAreasTail(ERR_AreaAreas arg);
ERR_AreaAreas ERR_setAreaAreasHead(ERR_AreaAreas arg, ERR_Area head);
ERR_AreaAreas ERR_setAreaAreasTail(ERR_AreaAreas arg, ERR_AreaAreas tail);
ERR_StrChar ERR_visitStrChar(ERR_StrChar arg, char *(*acceptString) (char *));
ERR_StrCon ERR_visitStrCon(ERR_StrCon arg, char *(*acceptString) (char *));
ERR_NatCon ERR_visitNatCon(ERR_NatCon arg, char *(*acceptString) (char *));
ERR_Subject ERR_visitSubject(ERR_Subject arg,
			     char *(*acceptDescription) (char *),
			     ERR_Location(*acceptLocation) (ERR_Location));
ERR_Error ERR_visitError(ERR_Error arg, char *(*acceptDescription) (char *),
			 ERR_SubjectList(*acceptList) (ERR_SubjectList));
ERR_Summary ERR_visitSummary(ERR_Summary arg,
			     char *(*acceptProducer) (char *),
			     char *(*acceptId) (char *),
			     ERR_ErrorList(*acceptList) (ERR_ErrorList));
ERR_SubjectList ERR_visitSubjectList(ERR_SubjectList arg,
				     ERR_Subject(*acceptHead) (ERR_Subject));
ERR_ErrorList ERR_visitErrorList(ERR_ErrorList arg,
				 ERR_Error(*acceptHead) (ERR_Error));
ERR_Location ERR_visitLocation(ERR_Location arg,
			       char *(*acceptFilename) (char *),
			       ERR_Area(*acceptArea) (ERR_Area));
ERR_Area ERR_visitArea(ERR_Area arg, int (*acceptBeginLine) (int),
		       int (*acceptBeginColumn) (int),
		       int (*acceptEndLine) (int),
		       int (*acceptEndColumn) (int),
		       int (*acceptOffset) (int), int (*acceptLength) (int));
ERR_Slice ERR_visitSlice(ERR_Slice arg, char *(*acceptId) (char *),
			 ERR_AreaAreas(*acceptAreas) (ERR_AreaAreas));
ERR_AreaAreas ERR_visitAreaAreas(ERR_AreaAreas arg,
				 ERR_Area(*acceptHead) (ERR_Area));

#endif /* _ERROR_H */
